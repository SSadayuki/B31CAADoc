/* -*-C++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
// Class CATAnalysisExplicitRulesData
//=============================================================================
// Usage Notes: Services linked to the database of rules.
//=============================================================================

#ifndef CATAnalysisExplicitRulesData_H_
#define CATAnalysisExplicitRulesData_H_

#include "CATListOfInt.h"
#include "CATSAM0Explicit.h"
#include "CATAnalysisExplicitTypes.h"

class CATAnalysisExplicitChild;
class CATAnalysisExplicitListUsr;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * This object is used to encapsulate the database of rules.
 */

class ExportedByCATSAM0Explicit CATAnalysisExplicitRulesData
{
  public :

/**
 * @deprecated V5R17
 *    No one is expected to create new Rules Data. 
 * Constructor.
 * @param iFileName
 *    The file name of the database of rules.<br>
 *    If no path is specified, this file is searched in directories set by the <tt>CATReffilesPath</tt> environment variable.
 */
    CATAnalysisExplicitRulesData(const CATUnicodeString  &iFileName, int iVersion = 51700) ;

/**
 * Destructor.
 */
    virtual ~CATAnalysisExplicitRulesData() ;
      
/**
 * Returns the number of physical types available with the current database of rules.
 */
    const int GetNumberOfPhysicalTypes() const ;

/**
 * Converts a physical type number into a NLS name.
 * @param iPhysicalType
 *    The physical type to convert.
 * @param oName
 *    The name corresponding to the physical type.
 *    if no NLS name has been found, then a pointer to the string "???" is returned.
 * @see CATSamPhysicalType
 */
    HRESULT GetPhysicalTypeName(CATSamPhysicalType  iPhysicalType,
                                const char          *(&oName)) const ;

/**
 * Converts a physical type number into a NLS name.
 * @param iPhysicalType
 *    The physical type to convert.
 * @param oName
 *    The name corresponding to the physical type.<br>
 *    This name is intended to be presented to the user.
 * @see CATSamPhysicalType
 */
    HRESULT GetPhysicalTypeName(CATSamPhysicalType  iPhysicalType,
                                CATUnicodeString    &oName) const ;

/**
 * Retrieves a physical type, that is, a number ID corresponding to its identifier.
 * @param iIdentity
 *    The identifier.
 * @param oPhysicalType
 *    The corresponding physical type.
 * @see CATSamPhysicalType
 */
    HRESULT GetPhysicalTypeNumber(const char          *iIdentity,
                                  CATSamPhysicalType  &oPhysicalType) const ;

/**
 * Retrieves the identifier of a physical type.
 * @param iPhysicalType
 *    The physical type to convert.
 * @param oIdentity
 *    The identifier.<br>
 *    This identifier is intended to be used during programming.
 * @see CATSamPhysicalType
 */
    HRESULT GetPhysicalTypeIdentity(CATSamPhysicalType  iPhysicalType,
                                    const char          *(&oIdentity)) const ;

/**
 * Retrieves the data type of a physical type.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oDataType
 *    The data type of the objects with this physical type.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeDataType(CATSamPhysicalType  iPhysicalType,
                                    CATSamDataType      &oDataType) const ;

/**
 * Retrieves the mathematical information of a physical type.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oMathematicalType
 *    The mathematical type.
 * @param oValue
 *    The type of value.
 * @param oDimension
 *    The mathematical dimension (between 1 and 6).
 * @param oNumberOfOccurrences
 *    The requested number of occurrences that the characteristic data is composed of.<br>
 *    If 0, then any number of occurrences is authorized.
 * @see CATSamPhysicalType, CATSamMathType, CATSamValue, CATSamDataType
 */
    HRESULT GetPhysicalTypeMathematicalInfo(CATSamPhysicalType  iPhysicalType,
                                            CATSamMathType      &oMathematicalType,
                                            CATSamValue         &oValue,
                                            int                 &oDimension,
                                            int                 &oNumberOfOccurrences) const ;

/**
 * Retrieves the unit of a physical type.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oUnit
 *    The string corresponding to the unit.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeUnit(CATSamPhysicalType  iPhysicalType,
                                const char          *(&oUnit)) const ;

/**
 * @deprecated V5R17
 *    Use @href #GetPhysicalTypeAuthorizedValues instead.
 * Retrieves the list of authorized physical types that can be pointed.<br>
 * This specific and restrictive information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfValues
 *    The size of the restrictive list of values.
 * @param oValuesList
 *    A pointer to the list.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeValuesList(CATSamPhysicalType        iPhysicalType,
                                      int                       &oNumberOfValues,
                                      const CATSamPhysicalType  *(&oValuesList)) const ;


/**
 * Retrieves the list of authorized physical types that can be pointed.<br>
 * This specific and restrictive information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfValues
 *    The size of the restrictive list of values.
 * @param oAuthorizedValues
 *    A pointer to the list of authorized values.
 *    <br><b>Lifecycle rules</b>
 *       Must be set to NULL before calling the method, and deleted after use.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeAuthorizedValues(CATSamPhysicalType   iPhysicalType,
                                            int                 &oNumberOfValues,
                                            CATSamPhysicalType* &oAuthorizedValues) const ;

/**
 * @deprecated V5R17
 * Retrieves the list of authorized subtypes associated to a physical type.<br>
 * This specific and restrictive information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfSubTypes
 *    The size of the list of authorized subtypes.
 * @param oSubTypesPtr
 *    A pointer to the list.
 * @see CATSamPhysicalType, CATSamSubType, CATSamDataType
 */
    HRESULT GetPhysicalTypeSubTypes(CATSamPhysicalType  iPhysicalType,
                                    int                 &oNumberOfSubTypes,
                                    CATSamSubType       *(&oSubTypesPtr)) const ;


/**
 * @deprecated V5R17
 *    Use @href #GetPhysicalTypeReferencesValues instead.
 * Retrieves the references for a physical type in a well defined context.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param iParentType
 *    The physical type specifying the context.
 * @param oReferencedType
 *    The referenced type.
 * @see CATSamPhysicalType, CATSamDataType
 */
   HRESULT GetPhysicalTypeReferences(CATSamPhysicalType  iPhysicalType,
                                     CATSamPhysicalType  iParentType,
                                     int                 &oNumberOfReferencedTypes,
                                     CATSamPhysicalType  *(&oReferencedTypesPtr)) const ;

/**
 * Retrieves the references for a physical type in a well defined context.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param iParentType
 *    The physical type specifying the context.
 * @param oReferencesValues
 *    A pointer to the list of references values.
 *    <br><b>Lifecycle rules</b>
 *       Must be set to NULL before calling the method, and deleted after use.
 * @see CATSamPhysicalType, CATSamDataType
 */
   HRESULT GetPhysicalTypeReferencesValues(CATSamPhysicalType  iPhysicalType,
                                           CATSamPhysicalType  iParentType,
                                           int                 &oNumberOfReferencedTypes,
                                           CATSamPhysicalType* &oReferencesValues) const ;

/**
 * Retrieves the category of a physical type.<br>
 * This specific information is only for physical types which are defined either as a <tt>CATSamDataTypeEntity</tt> or as a <tt>CATSamDataTypeSet</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oCategory
 *    The <tt>CATSamValue</tt> category of the objects with this physical type.
 * @see CATSamPhysicalType, CATSamValue, CATSamDataType
 */
    HRESULT GetPhysicalTypeCategory(CATSamPhysicalType  iPhysicalType,
                                    CATSamValue         &oCategory) const ;

/**
 * Retrieves the connectivity information of a physical type.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeEntity</tt> with category <tt>CATSamValueElement</tt> or <tt>CATSamValueVirtualElement</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oConnectivity
 *    The connectivity of the objects with this physical type.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeConnectivity(CATSamPhysicalType  iPhysicalType,
                                        const char          *(&oConnectivity)) const ;

/**
 * Retrieves the degrees of freedom information of a physical type.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeEntity</tt> with category <tt>CATSamValueElement</tt> or <tt>CATSamValueVirtualElement</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oDofs
 *    The degrees of freedom which are a combination of <tt>CATSamDof</tt> flags.
 * @param iIndice
 *    The indice corresponding to a zone of element where the degrees of freedom is requested.
 * @see CATSamPhysicalType, CATSamDof, CATSamDataType
 */
    HRESULT GetPhysicalTypeDofs(CATSamPhysicalType  iPhysicalType,
                                int                 &oDofs,
                                int                 iIndice = 0) const ;

/**
 * @deprecated V5R17
 *    Use @href #GetPhysicalTypeAuthorizedChildren instead.
 * Retrieves the list of authorized children of a physical type.<br>
 * This specific information is only for physical types which are defined either as a <tt>CATSamDataTypeEntity</tt> or as a <tt>CATSamDataTypeSet</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfChildren
 *    The size of the list of authorized children.
 * @param oChildrenTypesPtr
 *    A pointer to the list.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeChildrenInfo(CATSamPhysicalType        iPhysicalType,
                                        int                       &oNumberOfChildren,
                                        const CATSamPhysicalType  *(&oChildrenTypesPtr)) const ;

/**
 * Retrieves the list of authorized children of a physical type.<br>
 * This specific information is only for physical types which are defined either as a <tt>CATSamDataTypeEntity</tt> or as a <tt>CATSamDataTypeSet</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfChildren
 *    The size of the list of authorized children.
 * @param oAuthorizedChildren
 *    A pointer to the list of Authorized Children.
 *    <br><b>Lifecycle rules</b>
 *       Must be set to NULL before calling the method, and deleted after use.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeAuthorizedChildren(CATSamPhysicalType   iPhysicalType,
                                              int                 &oNumberOfChildren,
                                              CATSamPhysicalType* &oAuthorizedChildren) const ;

/**
 * @deprecated V5R17
 *    Use @href #GetPhysicalTypeAuthorizedParents instead.
 * Retrieves the list of authorized parents of a physical type.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfParents
 *    The size of the list of authorized parents.
 * @param oParentsPhysicalTypes
 *    A pointer to the list.
 * @see CATSamPhysicalType
 */
    HRESULT GetPhysicalTypeParentInfo(CATSamPhysicalType        iPhysicalType,
                                      int                       &oNumberOfParents,
                                      const CATSamPhysicalType  *(&oParentsPhysicalTypes)) const ;

/**
 * Retrieves the list of authorized parents of a physical type.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfParents
 *    The size of the list of authorized parents.
 * @param oAuthorizedParents
 *    A pointer to the list of Authorized parents.
 *    <br><b>Lifecycle rules</b>
 *       Must be set to NULL before calling the method, and deleted after use.
 * @see CATSamPhysicalType
 */
    HRESULT GetPhysicalTypeAuthorizedParents(CATSamPhysicalType   iPhysicalType,
                                             int                 &oNumberOfParents,
                                             CATSamPhysicalType* &oAuthorizedParents) const ;

/**
 * @deprecated V5R17
 *    Use @href #GetPhysicalTypeAuthorizedApplyTo instead.
 * Retrieves the list of authorized apply of a physical type.<br>
 * This specific information is only for physical types which are defined either as a <tt>CATSamDataTypeEntity</tt> or as a <tt>CATSamDataTypeSet</tt>.<br>
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfApplyTo
 *    The size of the list of authorized applies.
 * @param oApplyToTypesPtr
 *    A pointer to the list of authorized applies.
 * @param oApplyByPositionsPtr
 *    A pointer to the list of authorized positions of applies.
 * @see CATSamPhysicalType, CATSamPosition, CATSamDataType
 */
    HRESULT GetPhysicalTypeApplyToInfo(CATSamPhysicalType        iPhysicalType,
                                       int                       &oNumberOfApplyTo,
                                       const CATSamPhysicalType  *(&oApplyToTypesPtr),
                                       const CATSamPosition      *(&oApplyToPositionsPtr)) const ;

/**
 * Retrieves the list of authorized apply of a physical type.<br>
 * This specific information is only for physical types which are defined either as a <tt>CATSamDataTypeEntity</tt> or as a <tt>CATSamDataTypeSet</tt>.<br>
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfApplyTo
 *    The size of the list of authorized applies.
 * @param oAuthorizedApplyTo
 *    A pointer to the list of authorized applies.
 *    <br><b>Lifecycle rules</b>
 *       Must be set to NULL before calling the method, and deleted after use.
 * @param oAuthorizedApplyToPositions
 *    A pointer to the list of authorized positions of applies.
 *    <br><b>Lifecycle rules</b>
 *       Must be set to NULL before calling the method, and deleted after use.
 * @see CATSamPhysicalType, CATSamPosition, CATSamDataType
 */
    HRESULT GetPhysicalTypeAuthorizedApplyTo(CATSamPhysicalType   iPhysicalType,
                                             int                 &oNumberOfApplyTo,
                                             CATSamPhysicalType* &oAuthorizedApplyTo,
                                             CATSamPosition*     &oAuthorizedApplyToPositions) const ;

/**
 * @deprecated V5R17
 *    Use @href #GetPhysicalTypeAuthorizedApplyBy instead.
 * Retrieves the list of authorized applied of a physical type.<br>
 * This specific information is only for physical types which are defined either as a <tt>CATSamDataTypeEntity</tt> or as a <tt>CATSamDataTypeSet</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfApplyBy
 *    The size of the list of authorized applied.
 * @param oApplyByTypesPtr
 *    A pointer to the list of authorized applied.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeApplyByInfo(CATSamPhysicalType        iPhysicalType,
                                       int                       &oNumberOfApplyBy,
                                       const CATSamPhysicalType  *(&oApplyByTypesPtr)) const ;

/**
 * Retrieves the list of authorized applied of a physical type.<br>
 * This specific information is only for physical types which are defined either as a <tt>CATSamDataTypeEntity</tt> or as a <tt>CATSamDataTypeSet</tt>.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param oNumberOfApplyBy
 *    The size of the list of authorized applied.
 * @param oAuthorizedApplyBy
 *    A pointer to the list of authorized applied.
 *    <br><b>Lifecycle rules</b>
 *       Must be set to NULL before calling the method, and deleted after use.
 * @see CATSamPhysicalType, CATSamDataType
 */
    HRESULT GetPhysicalTypeAuthorizedApplyBy(CATSamPhysicalType  iPhysicalType,
                                             int                 &oNumberOfApplyBy,
                                             CATSamPhysicalType* &oAuthorizedApplyBy) const ;

/**
 * Checks the validity of the current field model object relatively to the database of rules.
 * @param iChild
 *    The child that you want to check.
 * @param oList
 *    A user list containing the offending object followed by the objects recursively traversed and ending by the current object.<br>
 *    This parameter must be equal to NULL_exp when this method is called.
 * @param Check
 *    It specifies the <tt>CATSamCheckType</tt> mode.
 * @see CATAnalysisExplicitChild, CATAnalysisExplicitListUsr, CATSamCheckType
 */
    HRESULT CheckValidity(const CATAnalysisExplicitChild  &iChild,
                          CATAnalysisExplicitListUsr      &oList,
                          const int                       Check = CATSamCheckTypeAll) const ;

/**
 * Returns if a physical type is reachable from another one.
 * @param iPhysicalType
 *    The physical type to reach
 * @param iContext
 *    The physical type from which request starts
 * @see CATSamPhysicalType
 */
    CATBoolean IsPhysicalTypeReachable(CATSamPhysicalType  iPhysicalType,
                                       CATSamPhysicalType  iContext) const ;

/**
 * Returns if a physical type is collectable.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.<br>
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param iParentType
 *    The physical type specifying the context.
 * @see CATSamPhysicalType, CATSamDataType
 */
   CATBoolean IsPhysicalTypeCollectable(CATSamPhysicalType  iPhysicalType,
                                        CATSamPhysicalType  iParentType) const ;

/**
 * Returns if a physical type is mandatory.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param iParentType
 *    The physical type specifying the context.
 * @see CATSamPhysicalType
 */
   CATBoolean IsPhysicalTypeMandatory(CATSamPhysicalType  iPhysicalType,
                                      CATSamPhysicalType  iParentType) const ;

/**
 * @deprecated V5R17
 * Returns if the cardinality (i.e. the number of authorized instances) is rangeable at runtime.<br>
 * If not, it means that the cardinality is definitely fixed in rules database.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param iParentType
 *    The physical type specifying the context.
 * @see CATSamPhysicalType
 */
    CATBoolean IsPhysicalTypeCardinalityRangeable(CATSamPhysicalType  iPhysicalType,
                                                  CATSamPhysicalType  iParentType) const ;

/**
 * @nodoc
 * Direct Acces;
 */
    void* PrivateDirectAccess() const;

  private :
    // FRIEND Class
    friend class CATAnalysisExplicitModel;
    friend class CATAnalysisExplicitServices;

    // DATA Members 
    int   _NumReference ;
    const void* _PhysicalDescriptionDirectory;

    //Default constructor.(Should not be used)
    CATAnalysisExplicitRulesData() ;

/**
 * Returns if a physical type is reachable from another one.
 * @param iPhysicalType
 *    The physical type to reach
 * @param iContext
 *    The physical type from which request starts
 * @param oPath
 *    The list of physical types which describes the path to reach the target.
 * @see CATSamPhysicalType
 */
    CATBoolean IsPhysicalTypeReachable(CATSamPhysicalType  iPhysicalType,
                                       CATSamPhysicalType  iContext,
                                       CATListOfInt        &oPath) const ;

/**
 * Returns if a physical type is reachable from another one.
 * @param iPhysicalType
 *    The physical type to reach
 * @param iContext
 *    The physical type from which request starts
 * @param oPath
 *    The list of physical types which describes the path to reach the target.
 * @param ioImpasseList
 *    A list of physical types which reach an impasse
 * @see CATSamPhysicalType
 */
    CATBoolean IsPhysicalTypeReachable(CATSamPhysicalType  iPhysicalType,
                                       CATSamPhysicalType  iContext,
                                       CATListOfInt        &oPath,
                                       CATListOfInt        &ioImpasseList) const ;

/**
 * Returns if a physical type is combinable.<br>
 * This specific information is only for physical types which are defined as a <tt>CATSamDataTypeCharac</tt>.<br>
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @param iParentType
 *    The physical type specifying the context.
 * @see CATSamPhysicalType, CATSamDataType
 */
   CATBoolean IsPhysicalTypeCombinable(CATSamPhysicalType  iPhysicalType,
                                       CATSamPhysicalType  iParentType) const ;


/**
 * Returns if a physical type is needing to be transformed.
 * @param iPhysicalType
 *    The physical type for which the information is requested.
 * @see CATSamPhysicalType
 */
    CATBoolean IsPhysicalTypeNeedingToBeTransformed(CATSamPhysicalType  iPhysicalType) const ;

/**
 * Returns if a physical type is scalable for a category.
 * @param iCategory
 *    The category specifying the context.
*/
    CATBoolean IsAScalableCharacPhysicalTypeForCategory(CATSamPhysicalType iPhysicalType, CATSamValue iCategory) const;

/**
 * Increment the reference count.
 * @return reference count value.
 */
    int AddRef() const ;
    
/**
 * Decrement the reference count.
 * @return reference count value.
 */
    int Release() const ;

/**
 * Resets all data members.
 */
    HRESULT Reset() ;

  private : // Only to avoid somebody call this methods
    // CONTRUCTORS & DESTRUCTOR
    CATAnalysisExplicitRulesData(const CATAnalysisExplicitRulesData &iRulesData) ;
    CATAnalysisExplicitRulesData &operator = (const CATAnalysisExplicitRulesData &iRulesData) ;
} ;



#endif
