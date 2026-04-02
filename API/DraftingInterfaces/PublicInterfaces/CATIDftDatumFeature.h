//	COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDftDatumFeature_H
#define CATIDftDatumFeature_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATBaseUnknown.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftDatumFeature ;
#else
extern "C" const IID IID_CATIDftDatumFeature ;
#endif

class CATUnicodeString; 

/**
* Interface to manage DatumFeature objects.
*/
class ExportedByDraftingItfCPP CATIDftDatumFeature : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /** 
  * Get the text of Datum Feature.
  *
  * @param oText [out]
  *   The label of the datum
  *
  * @return
  *   <code>S_OK</code> Label has been correctly retrieved
  *   <code>E_UNEXPECTED</code> An unexpected error occured
  *
  */
  virtual HRESULT GetText(CATUnicodeString &oText) = 0; 

  /** 
  * Set the text of Datum Feature.
  *
  * @param iText [in]
  *   The label to set in the datum
  *
  * @return
  *   <code>S_OK</code> Label has been correctly set
  *   <code>E_UNEXPECTED</code> An unexpected error occured
  *
  */
  virtual HRESULT SetText(const CATUnicodeString &iText) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT GetText(wchar_t **oText) = 0; 

  /**
   * @nodoc
   */
  virtual HRESULT SetText(const wchar_t *iText) = 0; 
};
CATDeclareHandler(CATIDftDatumFeature, CATBaseUnknown);;
#endif
