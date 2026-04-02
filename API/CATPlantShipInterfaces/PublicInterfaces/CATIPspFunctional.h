#ifndef CATIPspFunctional_H
#define CATIPspFunctional_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


// System
#include "IUnknown.h"
#include "CATString.h"
#include "CATBooleanDef.h"
#include "CATPspFunctionStatus.h"
#include "CATListOfInt.h"

class CATIUnknownList;
class CATListValCATUnicodeString;

extern "C" const IID IID_CATIPspFunctional ;

/**
 * Interface to access Plant Ship functional object information. 
 * <b>Role</b>: To access Plant Ship object information. 
 */

class CATIPspFunctional : public IUnknown
{
  public:  
  
  /**
  * Is functional object specification driven.
  * @param oStatus
  *   TRUE if this object is specification driven.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT IsSpecDriven ( CATBoolean& oStatus )=0;
  
  /**
  * Get all physical part types that are compatible for this function.
  * @param iuStandard
  *   Standard name.
  * @param oListOfPartTypes
  *   A list of compatible part types.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListCompatiblePartTypes ( const CATUnicodeString& iuStandard, CATListValCATUnicodeString *& oListOfPartTypes)=0;
  
  /**
  * Get all the physical part numbers compatible to the given PartType, Standard and Catalog.
  * @param iuPartType
  *   Part type.
  * @param iuStandard
  *   Standard name.
  * @param iuCatalogName
  *   Catalog name.
  * @param oListOfCatalogPartNames
  *   A list of compatible part names.
  * @param oListOfPartNumbers
  *   A list of compatible part numbers.
  * @param ipiListOverrideParameters
  *   Optional input list of parameters to override.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListCompatiblePartNumbers ( const CATUnicodeString& iuPartType, const CATUnicodeString& iuStandard,
    const CATUnicodeString& iuCatalogName,
    CATListValCATUnicodeString *& oListOfCatalogPartNames,
    CATListValCATUnicodeString *& oListOfPartNumbers,
    const CATIUnknownList* ipiListOverrideParameters = NULL )=0;

  /**
  * Is this function realized by a placed part.
  * @param oStatus
  *   TRUE if this object has placed part.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT IsRealized ( CATBoolean& oStatus )=0;

  /**
  * Get all associated physical objects.
  * @param oListOfPhysicals [out, IUnknown#Release]
  *   A list of physical objects
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListPhysicals ( CATIUnknownList*& oListOfPhysicals )=0;
  
  /**
  * Check if this function can be realized by the input list of physical objects.
  * @param iListOfPhysicals
  *   A list of physical objects.
  * @param oListOfStatus
  *   A list of status
  *      1: can be realized. 0: can not be realized.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT CanBeRealizedBy (const CATIUnknownList* iListOfPhysicals,
                                   CATListOfInt*& oListOfStatus )=0;
  
  /**
  * Set part type.
  * @param iuPartType
  *   Part type.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */ 
  virtual HRESULT SetPartType ( const CATUnicodeString& iuPartType )=0;
  
  /**
  * Get the part type of physical object that realizes this function.
  * @param ouPartType
  *   Part type.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetPartType ( CATUnicodeString& ouPartType )=0;

  /**
  * Set part number.
  * @param iuPartNumber
  *   Part number.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */ 
  virtual HRESULT SetPartNumber ( const CATUnicodeString& iuPartNumber )=0;
  
  /**
  * Get part number of physical object that realizes this function.
  * @param ouPartNumber
  *   Part number.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetPartNumber ( CATUnicodeString& ouPartNumber )=0;

  /**
  * Set catalog part name.
  * @param iuCatalogPartName
  *   Catalog part name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */ 
  virtual HRESULT SetCatalogPartName( const CATUnicodeString& iuCatalogPartName)=0;
  
  /**
  * Get catalog part name of physical object that realizes this function.
  * @param ouCatalogPartName
  *   Catalog part name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetCatalogPartName ( CATUnicodeString& ouCatalogPartName )=0;

  /**
  * Set standard.
  * @param iuStandard
  *   Standard.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */ 
  virtual HRESULT SetStandard ( const CATUnicodeString& iuStandard )=0;
  
  /**
  * Get Standard name.
  * @param ouStandard
  *   Standard name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetStandard ( CATUnicodeString& ouStandard )=0;

  /**
  * Is it OK to integrate (realize) this function with a physical part.
  * @param oStatus
  *   True or False.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */ 
  virtual HRESULT IsOKToIntegrate(CATBoolean &oStatus)=0;
  
  /**
  * Set the integration status.
  * @param iStatus
  *   True or False.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetIntegrationStatus (CATBoolean iStatus)=0;

  /**
  * Set part catalog name.
  * @param iuCatalogName
  *   Part Catalog Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */ 
  virtual HRESULT SetPartCatalogName( const CATUnicodeString& iuCatalogName )=0;
  
  /**
  * Get physical part catalog name.
  * @param ouCatalogName
  *   Part Catalog Name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetPartCatalogName ( CATUnicodeString& ouCatalogName )=0;

  /**
  * Get function object status.
  * @param oStatus
  *   Function object status.
  *   @see CATPspFunctionStatus
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetFunctionStatus ( CATPspFunctionStatus& oStatus )=0;
  
  /**
  * Set filter attributes.
  * @param iListOfFilterAttrNames, iListOfFilterAttrValues
  *   Filter Attributes.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT SetFilterAttributes ( const CATListValCATUnicodeString * iListOfFilterAttrNames,
                                        const CATListValCATUnicodeString * iListOfFilterAttrValues )=0;
  
  /**
  * Get filter attributes.
  * @param oListOfFilterAttrNames
  *   List of Filter Attribute names.
  * @param oListOfFilterAttrValues
  *   List of Filter Attribute values.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetFilterAttributes ( CATListValCATUnicodeString *& oListOfFilterAttrNames,
                                      CATListValCATUnicodeString *& oListOfFilterAttrValues )=0;
  
  /**
  * List physical attributes.
  * @param oListOfPhysAttrNames
  *   Physical part's attribute names.
  * @param oListOfPhysAttrValues
  *   Physical part's attribute values.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE/dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListPhysicalAttributes ( CATListValCATUnicodeString *& oListOfPhysAttrNames,
                                           CATListValCATUnicodeString *& oListOfPhysAttrValues )=0;


};
#endif
