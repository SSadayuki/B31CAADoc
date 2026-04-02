// COPYRIGHT DASSAULT SYSTEMES 2000

#ifndef CATIDftHatchingPattern_H
#define CATIDftHatchingPattern_H

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
class CATIDftHatchingPattern;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftHatchingPattern ;
#else
extern "C"  const IID IID_CATIDftHatchingPattern ;
#endif


/**
*
* Manage a hatching pattern.
*
**/

class ExportedByDraftingItfCPP CATIDftHatchingPattern : public IUnknown
{

public:

   /**
   * Get the offset between the sheet origin and the first hatching line of the defined hatching element.
   * @param iHatching (from 0 to oHatchingNb-1)
   * @param oOffset
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
   virtual HRESULT GetOffset (const int iHatching, double *oOffset)  const = 0;
  
   /**
   * Set the offset between the sheet origin and the first hatching line.
   * @param oOffset
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
   virtual HRESULT SetOffset (const double iOffset) = 0;
     
     
   /**
   * Set the angle of hatching lines based on axis x (degre).
   * @param iAngle
   * Angle of the hatching
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
   virtual HRESULT SetAngle (const double iAngle) = 0;
     
 
   /**
   * Set the distance between 2 consecutive lines of the hatching element.
   * @param iPitch
   * The pitch value
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
   * Set the texture number of the lines of the hatching element.
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
   virtual HRESULT SetTexture (const int iTexture) = 0;
 

   /**
   * Set the thickness of the lines of the hatching element.
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
   virtual HRESULT SetThikness (const int iThikness) = 0;
 

   /**
   * Set the color number of the lines of the hatching element.
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
   virtual HRESULT SetColor (const int iColor) = 0;
 

   /**
   * Set a new Hatching element to the current one.
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
   virtual HRESULT SetHatching (CATIDftHatchingPattern *iHatching) = 0;
 

   /**
   * Get the angle of lines based on axis x (degre), for a defined hatching element.
   * @param iHatching (from 0 to oHatchingNb-1)
   * @param oAngle
   * Angle of the lines.
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
   virtual HRESULT GetAngle (const int iHatching, double * oAngle) = 0;
 

   /**
   * Get the distance between 2 consecutive lines of a defined hatching element.
   * @param iHatching (from 0 to oHatchingNb-1)
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
   virtual HRESULT GetPitch (const int iHatching, double * oPitch) = 0;

   
   /**
   * Get the texture number of a defined hatching element.
   * @param iHatching (from 0 to oHatchingNb-1)
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
   virtual HRESULT GetTexture (const int iHatching, int * oTexture) = 0;


   
   /**
   * Get the thickness number of a defined hatching element.
   * @param iHatching (from 0 to oHatchingNb-1)
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
   virtual HRESULT GetThikness (const int iHatching, int * oThikness) = 0;


   
   /**
   * Get the color number of a defined hatching element.
   * @param iHatching (from 0 to oHatchingNb-1)
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
   virtual HRESULT GetColor (const int iHatching, int * oColor) = 0;	

   
   /**
   * Get the number of hatching elements.
   * @param oHatchingNb
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
   virtual HRESULT GetNbHatching (int * oHatchingNb) = 0;	

};
#endif
