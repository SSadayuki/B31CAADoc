#ifndef CATIDrwSubText_H
#define CATIDrwSubText_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#include "CATBaseUnknown.h"

#include "CATIDrwTextStyle.h"
#include "CATIDrwAnnFrame.h"
class CATICkeParm_var;
class CATICkeRelation_var;

  /**
  * @nodoc
  */
#define GetTextResult  0
  /**
  * @nodoc
  */
#define GetTextFormula 1
  /**
  * @nodoc
  */
#define GetLittFormula 2

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwSubText ;
#else
extern "C" const IID IID_CATIDrwSubText ;
#endif

/**
* Interface on subtexts of CATIDrwSimpleText objects.
* @see CATIDrwSimpleText
*/
class ExportedByDraftingItfCPP CATIDrwSubText : public CATBaseUnknown
{
  CATDeclareInterface;
  
  
public:
  
  /**
  * Returns the text of the subtext.
  * @param ReadMode
  * <br> 
  *   Value can be  :
  *   <br><tt>GetTextResult - </tt>The text is the resulting text (symbol are unichar, 
  *      variables are calculated. example : 'angle is 47o'
  *   <br><tt>GetTextFormula - </tt>The text is like the one which appears in the dialog box.
  *      example : 'Angle is <\LitteralPath\...\Value><\SYMBOLNAME\>'
  *   <br><tt>GetLittFormula - </tt>The text is like a litteral formula.
  *      example : '"Angle is"+\LitteralPath\...\Value+"<\SYMBOLNAME\>"'
  */
  virtual CATUnicodeString GetText (int ReadMode=GetTextResult ) = 0;
  /**
  * Modifies the text.
  * <br>The text must be in the TextFormula mode, like this : 'Angle is <\LitteralPath\...\Value><\SYMBOLNAME\>'.
  */
  virtual void SetText (const CATUnicodeString &Text) = 0;
  
  /**
  * @nodoc
  */
  virtual CATICkeParm_var GetLitteralText () = 0;
  /**
  * @nodoc
  */
  virtual void SetLitteralText (CATICkeParm_var LittSubText) = 0;
  
  /**
  * @nodoc
  */
  virtual CATICkeRelation_var GetLitteralFormula () = 0;
  /**
  * @nodoc
  */
  virtual void SetLitteralFormula (CATICkeRelation_var LittFormul) = 0;
  
  /**
  * @nodoc
  */
  virtual CATIDrwTextStyle_var GetTextStyle () = 0;
  /**
  * @nodoc
  */
  virtual void SetTextStyle (CATIDrwTextStyle_var TextStyle) = 0;
  
  /**
  * @nodoc
  */
  virtual CATIDrwAnnFrame_var GetFrame () = 0; 
  /**
  * @nodoc
  */
  virtual void SetFrame (CATIDrwAnnFrame_var TextFrame) = 0; 
  
  /**
  * @nodoc
  */
  virtual int GetScoring () = 0; 
  /**
  * @nodoc
  */
  virtual void SetScoring (int TextScoring) = 0; 
  
};
CATDeclareHandler(CATIDrwSubText, CATBaseUnknown);
#endif
