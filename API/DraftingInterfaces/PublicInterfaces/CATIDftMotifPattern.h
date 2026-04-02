/**
* @quickReview YPR 02:12:20
*/
/**
* @quickReview YPR 02:11:25
*/
#ifndef CATIDftMotifPattern_H
#define CATIDftMotifPattern_H
// COPYRIGHT DASSAULT SYSTEMES 2002

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
class CATIDftMotifPattern;
class CATPixelImage;
class CATVectorImage;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftMotifPattern ;
#else
extern "C"  const IID IID_CATIDftMotifPattern ;
#endif


/**
*
* Manage a Motif pattern.
*
**/

class ExportedByDraftingItfCPP CATIDftMotifPattern : public IUnknown
{

public:


   /**
   * Set the motif of the element.
   * @param iMotif: bitmap image filename
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
   virtual HRESULT SetMotif (const wchar_t *iMotif) = 0;


   
   /**
   * Get the Motif of a defined element.
   * @param oMotif: bitmap image filename
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
   virtual HRESULT GetMotif ( wchar_t **oMotif ) = 0;	


	   
   /**
   * Set the angle of the used motif.
   * @param iAngle: angle (degre) based on axis x
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
   * Get the angle of the used motif based on axis x (degre).
   * @param oAngle: angle (degre) based on axis x
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
   virtual HRESULT GetAngle (double * oAngle) = 0;
 



   /**
   * Set the scale of the used motif.
   * @param iScale: scale of the motif
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
   virtual HRESULT SetScale (const double iScale) = 0;



   /**
   * Get the scale of the used motif.
   * @param oScale: scale of the motif
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
   virtual HRESULT GetScale (double * oScale) = 0;
 


   
   /**
   * Set the offset of the used motif.
   * @param iOffsetH: horizontal offset of the motif
   * @param iOffsetV: Vertical offset of the motif
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
   virtual HRESULT SetOffset (const double iOffsetH, const double iOffsetV) = 0;



   /**
   * Get the offset of the used motif.
   * @param oOffsetH: horizontal offset of the motif
   * @param oOffsetV: Vertical offset of the motif
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
   virtual HRESULT GetOffset (double * oOffsetH, double * oOffsetV) = 0;
 


   /**
   * Get the image of the used motif.
   * @param oPixelImage: pixelImage
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
   virtual HRESULT GetPixelImage(CATPixelImage * oPixelImage) const = 0;

   
   
   /**
   * Set the image of the used motif.
   * @param iPixelImage: pixelImage
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
   virtual HRESULT SetPixelImage(const CATPixelImage * iPixelImage) const = 0;


   /** @nodoc */
   virtual HRESULT GetVectorImage(CATVectorImage * oVectorImage) const = 0;
   /** @nodoc */
   virtual HRESULT SetVectorImage(const CATVectorImage * iVectorImage) const = 0;

};
#endif
