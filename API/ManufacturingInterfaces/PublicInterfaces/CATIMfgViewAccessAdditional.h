//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2006
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
#ifndef CATIMfgViewAccessAdditional_H
#define CATIMfgViewAccessAdditional_H

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATIProduct.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgViewAccessAdditional;
#else
extern "C" const IID IID_CATIMfgViewAccessAdditional ;
#endif

//------------------------------------------------------------------

/**
* Interface dedicated to create machinable feature from User defined feature (UDF).
* <b>Role</b>: This interface offers services mainly to create Machinable feature by scanning through Finished Product and Machinable Feature product <br>
*/
class ExportedByMfgItfEnv CATIMfgViewAccessAdditional: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**  
   * Creates User Defined (UDF)Machinable feature by scanning through the given Finished Product and Machinable Feature product. 
   * @param iFinishPartProduct
   *     Is the Finished Product in Manufacturing View in which UDF features exist.
   * @param iMachFeaturesProduct
   *     Is the Machinable Feature Product to which Finished Product Belong to .  
   * @return
   *      S_OK: UDF features has been created in Manufacturing View.
   *	 <br> E_FAIL: Failed to Create UDF features in Manufacturing View.
   */

	  virtual HRESULT	CreateAllMachinableAreaFeatures(CATIProduct_var& iFinishPartProduct,CATIProduct_var& iMachFeaturesProduct)=0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};
CATDeclareHandler(CATIMfgViewAccessAdditional, CATBaseUnknown);

//------------------------------------------------------------------

#endif
