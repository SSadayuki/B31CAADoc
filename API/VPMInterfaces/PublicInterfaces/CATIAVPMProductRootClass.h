// -*-C++-*-


#ifndef CATIAVPMProductRootClass_h
#define CATIAVPMProductRootClass_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObject.h"

#include "CATICfgFilter.h"
#include "CATListOfCATIAVPMObject.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMProductClass;
class CATIAVPMPartVersion;
class CATIAVPMPartVersion_var;
class CATIAVPMPartMaster;
class CATIAVPMPartMaster_var;
class CATIAVPMProductComponent;
class CATIAVPMProductComponent_var;
class CATIAVPMItemInstance;
class CATIAVPMItemInstance_var;
class CATIAVPMProductSpecification;
class CATIAVPMProductSpecification_var;
class CATIAVPMZone;
class CATIAVPMZone_var;
class CATMathTransformation;
class CATIConfigurableObject;
class CATIConfigurableObject_var;

class CATListValCATIConfigHandler_var;
class CATIVpmPSDMUFilter_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMProductRootClass;
#else
extern "C" const IID IID_CATIAVPMProductRootClass;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage CATIAVPMProductRootClass (PRC).
 */

class ExportedByGUIDVPMInterfaces CATIAVPMProductRootClass : public CATBaseUnknown //CATIAVPMObject
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

/**
 * @nodoc
 */
    virtual HRESULT   get_ParentProductClass(CATIAVPMProductClass *& ProductClass)=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateProductComponent(const CATBSTR & id,
						const CATBSTR & name,
						const CATBSTR & description,
						CATIAVPMProductComponent *& ProductComponent)=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateGenericComponent(const CATBSTR & iId,
						CATIAVPMProductComponent *& oGenericComponent,
						const short iIsPrimary=0 /*FALSE*/)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductComponentCount(long mode,
						long & NbItems)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductComponent(long index,
					   CATIAVPMProductComponent *& ProductComponent)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductComponentList(long mode, CATListOfCATIAVPMObject & ItemList)=0;


/**
 * @nodoc
 */
    // To be called whenever you are finished with the list.
    // This is used inside the server to free the memory allocated to hold the list.
    //
    virtual HRESULT   forget_ProductComponentCount()=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateZone(const CATBSTR & id,
				    const CATBSTR & name,
				    const CATBSTR & description,
				    CATIAVPMZone *& Zone)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ZoneCount(CATICfgFilter *CfgFilter,
				    long & NbItems)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_Zone(long index,
			       CATIAVPMZone *& Zone)=0;


/**
 * @nodoc
 */
    // To be called whenever you are finished with the list.
    // This is used inside the server to free the memory allocated to hold the list.
    //
    virtual HRESULT   forget_ZoneCount()=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateItemInstanceFromPV(CATIAVPMPartVersion *PartVersion,
						  const CATBSTR & InstanceID,
						  CATMathTransformation *matrix,
						  CATIAVPMItemInstance *& ItemInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateItemInstanceFromPS(CATIAVPMProductSpecification *ProductSpecification,
						  const CATBSTR & InstanceID,
						  CATMathTransformation *matrix,
						  CATIAVPMItemInstance *& ItemInstance)=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateItemInstanceFromReference(CATIAVPMObject *iFromObject,
							 const CATBSTR & InstanceID,
							 CATMathTransformation *matrix,
							 CATIAVPMItemInstance *& ItemInstance)=0;

/**
 * @nodoc
 * Do not use this method, prefer the version with handlers and CATUnicodeString.
 */
    virtual HRESULT   AggregateProductSpecification(CATIConfigurableObject *ConfigurableObject,
						    const CATBSTR & version_id,
						    CATIAVPMProductSpecification *& ProductSpecification)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductSpecification(long index,
					       CATIAVPMProductSpecification *& ProductSpecification)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ProductSpecificationCount(long & NbItems)=0;

/**
 * @nodoc
 */
    // To be called whenever you are finished with the list.
    // This is used inside the server to free the memory allocated to hold the list.
    //
    virtual HRESULT   forget_ProductSpecificationCount()=0;

/**
 * @nodoc
 */
   // RC==S_OK: YES; RC==S_FALSE: NO.
   virtual HRESULT IsInstanciated( const CATIAVPMPartMaster *pPartMaster ) = 0;

    /** @nodoc */
    // Take the ioListCBU list of ItemInstances as input.
    // Make an Expand under the PRC with the given Cfg Filter set.
    // Filter out from ioListCBU the IIs that are not valid for the given Cfg Filter.
    //
    /** @nodoc */
    virtual HRESULT FilterInstances(CATLISTV(CATBaseUnknown_var) & ioListCBU, 
				    const CATICfgFilter_var & hCfgFilter ) const = 0;
    
    //+NGS,16-May-2002: Granular import method for Import tools.
    /** @nodoc */
    virtual HRESULT AggregateSingleItemInstance(const CATBaseUnknown_var & hUnk,
						const CATUnicodeString & instanceID,
						const CATMathTransformation & Matrix,
						CATIAVPMItemInstance_var & hoII ) =0;

    /** @nodoc */
    virtual HRESULT ConfigureEntireProduct( CATIConfigurableObject_var & hCV ) = 0;

    /** @nodoc */
    //+NGS,6-Dec-2002: New 'exposed' method with no CATBSTR, no pointers.
    virtual HRESULT   AggregateProductComponent(const CATUnicodeString & id,
						const CATUnicodeString & name,
						const CATUnicodeString & description,
						CATIAVPMProductComponent_var & ohProductComponent)=0;

    /** @nodoc */
    //+NGS,6-Dec-2002: New 'exposed' method with no CATBSTR, no pointers.
    virtual HRESULT   AggregateGenericComponent(const CATUnicodeString & iId,
						CATIAVPMProductComponent_var & ohGenericComponent,
						const short iIsPrimary=0 /*FALSE*/)=0;

    /** @nodoc */
    //+NGS,6-Dec-2002: New 'exposed' method with no CATBSTR, no pointers.
    virtual HRESULT   AggregateZone(const CATUnicodeString & id,
				    const CATUnicodeString & name,
				    const CATUnicodeString & description,
				    CATIAVPMZone_var & ohZone)=0;

    /** @nodoc */
    //+NGS,6-Dec-2002: New 'exposed' method with no CATBSTR, no pointers.
    virtual HRESULT   AggregateItemInstanceFromPV(const CATIAVPMPartVersion_var & ihPartVersion,
						  const CATUnicodeString & iInstanceID,
						  const CATMathTransformation & iMatrix,
						  CATIAVPMItemInstance_var & ohItemInstance)=0;
    /** @nodoc */
    //+NGS,6-Dec-2002: New 'exposed' method with no CATBSTR, no pointers.
    virtual HRESULT   AggregateItemInstanceFromPS(const CATIAVPMProductSpecification_var & ihProductSpecification,
						  const CATUnicodeString & iInstanceID,
						  const CATMathTransformation & iMatrix,
						  CATIAVPMItemInstance_var & ohItemInstance)=0;

    /** @nodoc */
    //+NGS,6-Dec-2002: New 'exposed' method with no CATBSTR, no pointers.
    virtual HRESULT   AggregateItemInstanceFromReference(const CATIAVPMObject_var & iFromObject,
							 const CATUnicodeString & iInstanceID,
							 const CATMathTransformation & iMatrix,
							 CATIAVPMItemInstance_var & ohItemInstance)=0;

    /** @nodoc */
    //+NGS,6-Dec-2002: New 'exposed' method with no CATBSTR, no pointers.
    //+MTM,2-Feb-2004: Add iIsCarryOver (default=0) and iCfgFilter (default=NULL_var) arguments. 
    //   If iIsCarryOver=1, that means ConfigFilter goes through ProductSpecification.
    //      An II of this PS will be expanded with the CfgFilter defined at the Root level.
    //   If ihCfgFilter<>NULL_var, an associated ConfigHandler (hidden) is created.
    //      An II of this PS will be expanded with the CfgFilter of the associated ConfigHandler.
    virtual HRESULT   AggregateProductSpecification(const CATIConfigurableObject_var & ihConfigurableObject,
						    const CATUnicodeString & version_id,
						    CATIAVPMProductSpecification_var & ohProductSpecification,
						    const short iIsCarryOver=0 /*FALSE*/,
						    const CATICfgFilter_var & iCfgFilter=NULL_var)=0;


    /** @nodoc */
    //+MTM,20-May-2003: For Version Synchronization
    // returns the list of IIs of the current PRC which have not been synchronized relatively to version.
    //   if hPM <> NULL_var, the return list of IIs if limited to hPM.
    //   if ihPV = NULL_var, takes PreferredVersion. 
    virtual HRESULT   GetListOfInstancesNotVersionUptodate(CATLISTV(CATBaseUnknown_var) & oListCBU,
							   const CATIAVPMPartMaster_var & ihPM,
							   const CATIAVPMPartVersion_var & ihPV)=0;

    /** @nodoc */
    virtual HRESULT ApplyMultiCH(
        const CATListValCATIConfigHandler_var& CHListToApply,
        CATLISTV(CATBaseUnknown_var)& ResultListII,
        const CATIVpmPSDMUFilter_var& hDMUFilter)=0;


};

//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMProductRootClass, CATBaseUnknown);

#endif

