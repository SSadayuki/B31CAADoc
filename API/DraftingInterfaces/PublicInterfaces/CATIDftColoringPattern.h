#ifndef CATIDftColoringPattern_H
#define CATIDftColoringPattern_H
// COPYRIGHT DASSAULT SYSTEMES 2000


/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATDraftingInterfaces.h"

// System
#include "IUnknown.h"
#include "CATMacForIUnknown.h"
#include "CATBooleanDef.h"

// Drafting
class CATIDftColoringPattern;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftColoringPattern ;
#else
extern "C"  const IID IID_CATIDftColoringPattern ;
#endif


/**
*
* Manage a Coloring pattern.
*
**/

class ExportedByDraftingItfCPP CATIDftColoringPattern : public IUnknown
{

public:

   /**
   * Set the RGB color number of the Coloring element.
   * @param iColor
   *  The RGB value of the color
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>S_READONLY : Method correctly executed.
   * <br>Returned value cannot be modified, it's read-only.
   * <br><i>Can be usefull when the property is fixed by a standard, etc.</i>
   * <br>S_UNDEFINED : Method correctly executed.
   * <br>Returned value is undefined.
   * <br><i>Case of an object having several subparts supporting the same property with a different value.</i>
   * <br>E_FAIL : Method execution failed.
   * <br>Reasons of the failure are not given.
   * <br>E_NOTIMPL : No implementation available for this method.
   * @see CATGraphicAttributeSet
   */ 
   virtual HRESULT SetColor (const int iColor) = 0;
 


   
   /**
   * Gets the RGB color number of the Coloring element.
   * @param oColor
   * The RGB value of the color
   * @return 
   * S_OK : Method correctly executed. 
   * <br>No restriction.
   * <br>S_READONLY : Method correctly executed.
   * <br>Returned value cannot be modified, it's read-only.
   * <br><i>Can be usefull when the property is fixed by a standard, etc.</i>
   * <br>S_UNDEFINED : Method correctly executed.
   * <br>Returned value is undefined.
   * <br><i>Case of an object having several subparts supporting the same property with a different value.</i>
   * <br>E_FAIL : Method execution failed.
   * <br>Reasons of the failure are not given.
   * <br>E_NOTIMPL : No implementation available for this method.
   * @see CATGraphicAttributeSet
   */
   virtual HRESULT GetColor ( int * oColor) = 0;	

};
#endif
