#ifndef CATIDrwBalloon_H
#define CATIDrwBalloon_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIDrwSimpleText.h"

class CATUnicodeString;
class CATICkeParm;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwBalloon ;
#else
extern "C" const IID IID_CATIDrwBalloon ;
#endif

/**
* Interface of balloon objects.
*/
class ExportedByDraftingItfCPP CATIDrwBalloon : public CATIDrwSimpleText
{
  CATDeclareInterface;
  
public:
  
  /**
  * Set the text of the balloon.
  */
  virtual void SetText (CATUnicodeString &iText) = 0; 
  
  /**
  * @nodoc
  * Set the part specification of the balloon.
  */
  virtual HRESULT SetPartNumberSpec (const CATICkeParm *iPartNumber) = 0;

  /**
  * @nodoc
  * Get the part specification of the balloon.
  */
  virtual HRESULT GetPartNumberSpec (CATICkeParm **oPartNumber) = 0;

};

CATDeclareHandler(CATIDrwBalloon, CATIDrwSimpleText);

#endif
