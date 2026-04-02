#ifndef CATIDrwDatumFeature_H
#define CATIDrwDatumFeature_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDrwSimpleText.h"
class CATUnicodeString;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDatumFeature ;
#else
extern "C" const IID IID_CATIDrwDatumFeature ;
#endif

/**
* Interface on Datum feature objects.
*/
class ExportedByDraftingItfCPP CATIDrwDatumFeature : public CATIDrwSimpleText
{
  CATDeclareInterface;

  public:

  /**
  * Sets the text of the datume feature.
  */
  virtual void SetText (CATUnicodeString &iText) = 0;

};

CATDeclareHandler(CATIDrwDatumFeature, CATIDrwSimpleText);

#endif
