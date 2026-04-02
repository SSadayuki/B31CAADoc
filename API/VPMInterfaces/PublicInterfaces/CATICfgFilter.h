#ifndef CATICfgFilter_h
#define CATICfgFilter_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "CATBaseUnknown.h"
#include "CORBAAnyDef.h"
#include "sequence_CORBAAny.h"

// Interface ID
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgModification.h"
#include "CATListOfCATICfgNormalValue.h"
#include "CATListOfCATIConfigurableObject.h"
#include "CATListOfCATILinkableObject.h"
#include "CATICfgModRestriction.h"
#include "CATHashTabCATVpmFilterStruct.h"

// Class forward declaration
class CATUnicodeString;
class CATICfgFilter_var;
class CATICfgNormalValue_var;
class CATICfgModContainer_var;
class CATListValCATICfgModContainer_var;


// Class Identifier
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgFilter ;
#else
extern "C" const IID IID_CATICfgFilter ;
#endif

/**
 * Interface to manage a Configuration Filter.
 * <br><b>Role</b>:
 * The Configuration Filter evaluates the Effectivity validity of a given list
 * of objects, for a specified <b>Domain</b> and <b>Filtering Mode</b>.
 * <br>
 * A Configuration Filter is composed of a list of criteria which can be:
 * <dl>
 *     <dt>Date Intervals
 *     <dt>Range Intervals
 *     <dt>Specifications
 *     <dt>Modifications
 *     <dd>can not be mixed with other kinds of criteria
 * </dl>
 * Those criteria must be set as @href CATICfgNormalValue objects.
 * <br>
 * Since V5R8, only <b>Multi-Level</b> Filters can be created using the
 * @href CATICfgManager#CreateMultiLevelFilter method.
 * <br>
 * @see @href CATICfgNormalValue
 */
class ExportedByGUIDVPMInterfaces CATICfgFilter : public CATBaseUnknown
{
CATDeclareInterface;

public:
    /**
     * Enumeration of the possible Filtering Modes.
     * <br>
     * Filtering Modes affect the way the Specification "AND" expressions are interpreted
     * by the Configuration Filter, but do not affect the Interval part.
     * <br>
     * For a Configuration Filter to consider a Specification "AND" expression valid, the
     * Specification criteria list in the Filter must:
     * <dl>
     *     <dt>Default
     *     <dd>contain <b>at least all</b> the Specifications present in the expression.
     *     <dt>ExactMatch
     *     <dd>contain <b>exactly</b> the Specification list present in the expression, no more, no less.
     *     <dt>PartialMatch
     *     <dd>contain <b>at least one</b> of the Specifications present in the expression.
     *     <dt>ReverseMatch
     *     <dd>Returns the instances which do not satisfy the filter criteria. This mode is opposite of Default mode.
     * </dl>
     */
    enum FilteringMode { Default = 1 << 1 , ExactMatch = 1 << 2 , PartialMatch = 1 << 3 ,ReverseMatch = 1 << 4  };

    /**
     * Sets the Filtering Mode.
     * @param iValue
     *     The Filtering Mode to set.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The Filtering Mode is successfully set.
     *         <dt>E_FAIL
     *         <dd>An error occured during the Filtering Mode setting.
     *     </dl>
     */
    virtual HRESULT setFilteringMode( const CATICfgFilter::FilteringMode& iValue ) = 0;

    /**
     * Returns the Filtering Mode.
     * @param oValue
     *     The Filtering Mode.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The Filtering Mode is successfully extracted.
     *         <dt>E_FAIL
     *         <dd>An error occured during the Filtering Mode extraction.
     *     </dl>
     */
    virtual HRESULT getFilteringMode( CATICfgFilter::FilteringMode& oValue ) const = 0;
    
    /**
     * Activates/desactivates the 150% filtering mode.
     * <br>
     * If activated, the Configuration Filter ignores the Specifications
     * belonging to Categories not present in the Filter criteria list.
     * @param iValue
     *     The 150% flag value.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The 150% flag is successfully changed.
     *         <dt>E_FAIL
     *         <dd>An error occured during the 150% flag change.
     *     </dl>
     */
    virtual HRESULT setMode150( const CATBoolean& iValue ) = 0;

    /**
     * Returns the 150% flag value.
     * @param oValue
     *     The 150% flag value.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The 150% flag is successfully extracted.
     *         <dt>E_FAIL
     *         <dd>An error occured during the 150% flag extraction.
     *     </dl>
     */
    virtual HRESULT getMode150( CATBoolean& oValue ) const = 0;

    /**
     * Sets the Domain of the Filter.
     * @param iValue
     *     The Domain name.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The Domain is successfully changed.
     *         <dt>E_FAIL
     *         <dd>An error occured during the Domain change.
     *     </dl>
     */
    virtual HRESULT setDomain( const CATUnicodeString& iValue ) = 0;

    /**
     * Returns the Domain of the Filter.
     * @param oValue
     *     The Domain name.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The Domain is successfully extracted.
     *         <dt>E_FAIL
     *         <dd>An error occured during the Domain extraction.
     *     </dl>
     */
    virtual HRESULT getDomain( CATUnicodeString& oValue ) const = 0;

    /**
     * Adds a criterion to the Filter.
     * The criteria can be an Interval (date or range), a Specification or
     * a Modification, but must be passed as a @href CATICfgNormalValue.
     * <br>
     * To create such a CATICfgNormalValue, use the @href CATICfgManager#CreateNormalValue
     * methods
     * @param iCondition
     *     The criterion to add.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The criterion is successfully added.
     *         <dt>E_FAIL
     *         <dd>An error occured during the criterion insertion.
     *     </dl>
     */
    virtual HRESULT AddCondition( const CATICfgNormalValue_var& iCondition ) = 0; 

    /** @nodoc
     * Adds the Modifications controlled by the specified Action as criteria to the Filter.
     * @param iAction
     *     The Action controlling the Modifications to add. 
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The criterion is successfully added.
     *         <dt>E_FAIL
     *         <dd>An error occured during the criterion insertion.
     *     </dl>
     */
    virtual HRESULT AddCondition( const CATIVpmAFLAction_var &iAction ) = 0;

    /** @nodoc
     * Adds specified Modification Container as criterion to the Filter.
     * <br>
     * All the Modifications contained in the Container are added to the Filter criteria
     * list. Moreover, any change to the Container is propagated to the Filter. 
     * @param iContainer
     *     The Modification Container to add.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The criterion is successfully added.
     *         <dt>E_FAIL
     *         <dd>An error occured during the criterion insertion.
     *     </dl>
     */
    virtual HRESULT AddCondition( const CATICfgModContainer_var& iContainer ) = 0;

    /**
     * Removes all the criteria from the Filter.
     * <br>
     * This method does not change the Domain nor the Filtering Mode.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The criteria list is successfully cleared.
     *         <dt>E_FAIL
     *         <dd>An error occured during the criteria list reset.
     *     </dl>
     */
    virtual HRESULT resetCriteria() = 0;

    /** @nodoc
     * A ModRestriction ??
     */
    virtual HRESULT SetModRestriction(const CATICfgModRestriction_var & iModRestriction)=0;

    /** @nodoc
     * A ModRestriction ??
     */
    virtual HRESULT GetModRestriction(CATICfgModRestriction_var & oModRestriction)=0;

    /**
     * Postpones the building of a filter.
     * The filter will be built after the DMU filter pass with the result of the DMU filter.
     * @param iFilterName
     *     The name of the BSF filter.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The BSF name is successfully set.
     *         <dt>E_FAIL
     *         <dd>An error occured during the BSF name setting.
     *     </dl>
     */    
    virtual HRESULT SetBSFFilter( const CATUnicodeString& iFilterName ) = 0;

    /** @nodoc
     * Clones the Configuration Filter.
     * <br>
     * The criteria list and the Filtering Mode are duplicated, but not the
     * Identifier.
     * @param oFilter
     *     The duplication result.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The duplication is successful.
     *         <dt>E_FAIL
     *         <dd>An error occured during the duplication.
     *     </dl>
     */
    virtual HRESULT clone( CATICfgFilter_var& oFilter ) const = 0;

    /** @nodoc
     * The Filter identifier is almost useless because of the use of the
     * Config Handlers.
     */
    virtual HRESULT GetIdentifier( CATUnicodeString& oIdentifier ) const = 0; 

    /**
     * Returns the Filter criteria list.
     * @param oContext
     *     The Configurable Object to which the Filter is associated. Since V5R8, this parameter
     *     is <b>not relevant anymore</b>. The returned value should be ignored.
     * @param oDomain
     *     The Domain name. Same as @href CATICfgFilter#getDomain.
     * @param oConditionList
     *     The criteria list.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The data extraction is successful.
     *         <dt>E_FAIL
     *         <dd>An error occured during the data extraction.
     *     </dl>
     */
    virtual HRESULT GetListOfFilters( CATIConfigurableObject_var& oContext , CATUnicodeString& oDomain , CATListValCATICfgNormalValue_var&  oConditionList ) const = 0;  

    /** @nodoc */
    virtual HRESULT GetListOfFilters( CATListValCATIConfigurableObject_var& oContextList , CATUnicodeString& oDomain , CATListValCATICfgNormalValue_var&  oConditionList ) const = 0;

    /** @nodoc */
    virtual HRESULT GetListOfFilters( CATIConfigurableObject_var& oContext , CATUnicodeString& oDomain , CATListValCATICfgNormalValue_var&  oConditionList , CATListValCATICfgModContainer_var& oContainerList ) const = 0;

    /** @nodoc */
    virtual HRESULT GetListOfFilters( CATListValCATIConfigurableObject_var& oContextList , CATUnicodeString& oDomain , CATListValCATICfgNormalValue_var&  oConditionList , CATListValCATICfgModContainer_var& oContainerList ) const = 0;

    /** @nodoc
     * Returns the Filter criteria list.
     * <br>
     * Since V5R11, it is the preferred method to get the Filter criteria list.
     * @param oDomain
     *     The Domain name. Same as @href CATICfgFilter#getDomain.
     * @param oConditionList
     *     The criteria list.
     * @param oContainerList
     *     The Modification Container list.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The data extraction is successful.
     *         <dt>E_FAIL
     *         <dd>An error occured during the data extraction.
     *     </dl>
     */
    virtual HRESULT GetListOfFilters( CATUnicodeString& oDomain , CATListValCATICfgNormalValue_var&  oConditionList , CATListValCATICfgModContainer_var& oContainerList ) const = 0;  

    /** @nodoc
     * The Filter size is the criteria count. Not very useful, even for internal processing.
     */
    virtual HRESULT GetSize( int& oSize ) const = 0;

    /** @nodoc
     * Evaluates the validity, against this Configuration Filter, of a set of objects.
     * <br>
     * The objects are passed in an hash table. The Filter updates the input table
     * with the evaluation status computed for each object.
     * <br>
     * This is the preferred method for objects validity evaluation.
     * @param iHTab
     *     The hash table containing the objects which validity are to be evaluated. The
     *     results are set directly in this table.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The evaluation is successful.
     *         <dt>E_FAIL
     *         <dd>An error occured during the evaluation.
     *     </dl>
     */
    virtual HRESULT Filter( CATVpmFilterHashTab& iHTab ) = 0;

    /** @nodoc */
    virtual HRESULT Filter( SEQUENCE(CORBAAny)& iListObjectToFilter , SEQUENCE(CORBAAny)& oListFilteredObject ) = 0;

    /** @nodoc
     *  Evaluates the validity, against this Configuration Filter, of a set of objects.
     * <br>
     * @param iListObjectToFilter
     *     The list of objects to filter.
     * @param oListFilteredObject
     *     The list of objects filtered-in.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The evaluation is successful.
     *         <dt>E_FAIL
     *         <dd>An error occured during the evaluation.
     *     </dl>
     */
    virtual HRESULT Filter( const CATListOfCATILinkableObject& iListObjectToFilter , CATListOfCATILinkableObject& oListFilteredObject ) = 0;

    /** @nodoc */
    virtual HRESULT Filter( SEQUENCE(CORBAAny)& iListObjectToFilter , CATListOfInt& oListRetrieved ) = 0;

    /** @nodoc */
    virtual HRESULT GetNonCompliantObjects( SEQUENCE(CORBAAny)& iListOfObject , SEQUENCE(CORBAAny)& oListNonCompliantObject ) = 0;

    /** @nodoc
     * Same as clone.
     */
    virtual HRESULT Copy( CATICfgFilter_var& oFilter ) const = 0;

    /** @nodoc
     * Since V5R8, all the Configuration Filter should be Multi Level Filters.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The Filter is a Multi Level Filter.
     *         <dt>S_FALSE
     *         <dd>The Filter is not a Multi Level Filter.
     *         <dt>E_FAIL
     *         <dd>An error occured during the flag extraction.
     *     </dl>
     */
    virtual HRESULT IsMultiLevel() const = 0;

    /** @nodoc
     * As long as the Config Handler are used, this method has few relevantness.
     */
    virtual HRESULT isPersistent( CATBoolean& oFlag ) const = 0;

    /** @nodoc */
    enum TraceLevel { MoreTrace , LessTrace };

    /** @nodoc */
    virtual void Dump( CATICfgFilter::TraceLevel ilevel = CATICfgFilter::MoreTrace ) const = 0;


#if defined(CATIAV5R17)
    /**
     * Show/Hide Unsolved Operations.
     * @param iShow
     *     If activated, Unsolved Operations are shown.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The Filtering Mode is successfully set.
     *         <dt>E_FAIL
     *         <dd>An error occured during the Filtering Mode setting.
     *     </dl>
     */

     virtual HRESULT SetModeUnsolvedOp(const CATBoolean& iShow) = 0;

    /**
     * Get filtering mode for Unsolved Operations.
     * @param oShow
     *     If TRUE, Unsolved Operations are shown.
     * @return
     *     An  HRESULT.
     *     <br><b>Legal values</b>:
     *     <dl>
     *         <dt>S_OK
     *         <dd>The filtering mode is successfully read.
     *         <dt>E_FAIL
     *         <dd>An error occured while reading the filtering mode.
     *     </dl>
     */

     virtual HRESULT GetModeUnsolvedOp(CATBoolean& oShow) = 0;

#endif



};

// Handler definition 
CATDeclareHandler( CATICfgFilter , CATBaseUnknown );

#endif

