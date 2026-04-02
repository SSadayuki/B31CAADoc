#ifndef CATIDrwDatumTarget_H
#define CATIDrwDatumTarget_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDrwSimpleText.h"
class CATUnicodeString;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDatumTarget ;
#else
extern "C" const IID IID_CATIDrwDatumTarget ;
#endif

/**
* Interface on Datum target objects.
*/
class ExportedByDraftingItfCPP CATIDrwDatumTarget : public CATIDrwSimpleText
{
  CATDeclareInterface;

public:
  /**
  * Sets the text on the upper part of the datum target.
  */
  virtual void SetUpText (CATUnicodeString &iUpText) = 0;
  /**
  * Sets the text on the lower part of the datum target.
  */
  virtual void SetLowText (CATUnicodeString &iLowText) = 0;
  /**
  * Set the presence or not of the diameter symbol in the upper part of the datum target.
  * @param iHasDiameter
  *   0 : No symbol
  *   1 : The datum target has a diameter symbol
  */
  virtual void SetDiameter (int iHasDiameter) = 0;
 
  /**
  * Returns the text on the upper part of the datum target.
  */
  virtual CATUnicodeString GetUpText () = 0;
  /**
  * Returns the text on the lower part of the datum target.
  */
  virtual CATUnicodeString GetLowText () = 0;
  /**
  * Returns the presence of the diameter symbol in the upper part of the datum target.
  * @param HasDiameter
  *   0 : No symbol
  *   1 : The datum target has a diameter symbol
  */
  virtual int GetDiameter () = 0;
 
};

CATDeclareHandler(CATIDrwDatumTarget, CATIDrwSimpleText);

#endif
