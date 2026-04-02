#ifndef CATIDftDottingPattern_H
#define CATIDftDottingPattern_H
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
class CATIDftDottingPattern;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftDottingPattern ;
#else
extern "C"  const IID IID_CATIDftDottingPattern ;
#endif


/**
*
* Manage a Dotting pattern.
*
**/

class ExportedByDraftingItfCPP CATIDftDottingPattern : public IUnknown
{

public:
 
   /**
   * Set the distance between 2 consecutive lines of the Dotting element.
   * @param iPitch
   * The Pitch value.
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
   */
   virtual HRESULT SetPitch (const double iPitch) = 0;
 
   /**
   * Set the brightness of the dots of the Dotting element.
   * @param iBright<1,6>
   * Brightness 
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 6
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
   */
   virtual HRESULT SetBrightness (const int iBright) = 0;
 


   /**
   * Set the zigzag of the dots of the Dotting element.
   * @param iZigZag
   *    <br><b>Legal values</b>:
   *    <br> <= 0, dots are aligned
   *    <br> = 1, dots are shifted all the 2
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
   */
   virtual HRESULT SetZigZag (const int iZigZag) = 0;
 

   /**
   * Set the color number of the lines of the Dotting element.
   * @param iColor
   * Color ot the dotting pattern.
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
   */ 
   virtual HRESULT SetColor (const int iColor) = 0;
 
 
 

   /**
   * Get the distance between 2 consecutive lines of a defined Dotting element.
   * @param oPitch
   * The Pitch value.
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
   */
   virtual HRESULT GetPitch (double * oPitch) = 0;

   
   /**
   * Get the brightness of the dots of a defined Dotting element.
   * @param oBright
   * The brightness of the dotting pattern.
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
   */
   virtual HRESULT GetBrightness (int * oBright) = 0;


   
   /**
   * Get the zigzag of the dots of a defined Dotting element.
   * @param 
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
   */
   virtual HRESULT GetZigZag (int * oZigZag) = 0;


   
   /**
   * Get the color number of a defined Dotting element.
   * @param 
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
   */
   virtual HRESULT GetColor (int * oColor) = 0;	

};
#endif
