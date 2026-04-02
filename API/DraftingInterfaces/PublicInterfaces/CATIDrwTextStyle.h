#ifndef CATIDrwTextStyle_H
#define CATIDrwTextStyle_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// COPYRIGHT DASSAULT SYSTEMES 1999



#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
class CATGraphicAttributeSet;
class CATISpecObject;
class CATUnicodeString;
class CATIDrwDimFrame_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwTextStyle ;
#else
extern "C" const IID IID_CATIDrwTextStyle ;
#endif

class ExportedByDraftingItfCPP CATIDrwTextStyle : public CATBaseUnknown
{
  CATDeclareInterface;
   
   public:

   virtual CATUnicodeString GetPoliceName () =0;
   virtual void SetPoliceName (CATUnicodeString &PoliceName) =0;

   virtual void GetPoliceParameters (int &FixedFontMode,int &ChasseMode) = 0;
   virtual void SetPoliceParameters (int FixedFontMode,int ChasseMode) = 0;
   
   virtual unsigned int GetColor () = 0;
   virtual void GetColor (int &R,int &G, int &B) = 0;
   virtual void SetColor (int R,int G,int B) = 0;
   
   virtual void GetCharacterParameters (double &Height,double &Width,
					int &CharSizeLock, double &Slant,
					double &Spacing) = 0;
   virtual void SetCharacterParameters (double Height,double Width,
					int CharSizeLock, double Slant,
					double Spacing) = 0;
   
   virtual boolean GetBold () = 0;
   virtual void SetBold (boolean iBold) = 0;

   virtual boolean GetItalic () = 0;
   virtual void SetItalic (boolean iItalic) = 0;

};
CATDeclareHandler(CATIDrwTextStyle, CATBaseUnknown);
#endif
