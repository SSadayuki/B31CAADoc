/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATIMfgResourceFactory_H
#define CATIMfgResourceFactory_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATListOfInt.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgResourceFactory;
#else
extern "C" const IID IID_CATIMfgResourceFactory;
#endif

/**
 * Interface to create manufacturing resources.
 */
class ExportedByMfgItfEnv CATIMfgResourceFactory : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
  /**
   * This method is used to create a new manufacturing resource.
   * @param iType
   *   The type of the resource to create.
   * @param iAddList
   *   Flag to add the resource into the resource List.
   * @param oResource
   *   Handler on the newly created resource of given type.
   * @see CATIMfgResource
   **/
  virtual HRESULT CreateResource (const CATUnicodeString& iType, CATBaseUnknown_var &oResource,
		                      const boolean iAddList=TRUE) const = 0;

  /**
   * @nodoc
   **/
  virtual CATBaseUnknown_var CreateResource(const CATUnicodeString& iType, const boolean iAddList=TRUE,
                                            const CATBaseUnknown_var &iProduct=NULL_var) const = 0;

  /**
   * @nodoc
   **/
  virtual CATUnicodeString GetIconName (const CATUnicodeString& iType) const = 0;

  /**
   * @nodoc
   **/
  virtual CATBaseUnknown_var CreateToolCorrector() const = 0;

  /**
   * @nodoc
   **/
  virtual CATBaseUnknown_var CreateLatheSpindle() const = 0;

  /**
   * @nodoc
   **/
  virtual CATBaseUnknown_var CreateLatheTurret() const = 0;

  /**
   * @nodoc
   **/
  virtual HRESULT GetAttributes (const CATUnicodeString     &iType,
							     CATListOfCATUnicodeString  &oAttributes,
								 CATListOfInt               &oTypeValues,
								 CATListOfCATUnicodeString  &oCurrentUnitSymbols) const = 0;
  /**
   * @nodoc
   **/
  virtual HRESULT GetAttributes (const CATUnicodeString        &iType,
							     CATListOfCATUnicodeString     &oAttributes,
								 CATListValCATBaseUnknown_var  &oParameters,
								 CATListOfInt                  &oTypeValues,
								 CATListOfCATUnicodeString     &oCurrentUnitSymbols) const = 0;

};

CATDeclareHandler(CATIMfgResourceFactory, CATBaseUnknown);

#endif







