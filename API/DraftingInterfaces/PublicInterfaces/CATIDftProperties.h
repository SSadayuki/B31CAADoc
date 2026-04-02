//	COPYRIGHT DASSAULT SYSTEMES 2002
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIDftProperties_H
#define CATIDftProperties_H

// ExportedBy
#include "CATDraftingInterfaces.h"

// Inheritance
#include "IUnknown.h"
#include "CATMacForIUnknown.h"

// Enum
#include "CATDftPropertiesEnum.h"


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftProperties ;
#else
extern "C" const IID IID_CATIDftProperties;
#endif

/**
* Base interface for properties inheritance.
* <BR>Can be directly used.
* @see CATIDftTextProperties
*/
class ExportedByDraftingItfCPP CATIDftProperties : public IUnknown
{
 

  public:

   /**
   * @nodoc
   * Refreshes the object visualization according to its properties. 
   * @param 
   *   iRefreshContext
   * @return
   *   S_OK : Method correctly executed. 
   *   <br>E_FAIL : Method execution failed. Reasons of the failure are not given.
   *   <br>E_NOTIMPL : No implementation available for this method.
   * @see CATDftRefreshContext
   */
   virtual HRESULT Refresh( const CATDftRefreshContext iRefreshContext = DftRefreshAll ) = 0;

  private:
   CATDeclareInterface;
};
#endif
