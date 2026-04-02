#ifndef __TIE_CATIARectPattern
#define __TIE_CATIARectPattern

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARectPattern.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARectPattern */
#define declare_TIE_CATIARectPattern(classe) \
 \
 \
class TIECATIARectPattern##classe : public CATIARectPattern \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARectPattern, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstDirectionRow(CATIAIntParam *& oFirstRow); \
      virtual HRESULT __stdcall get_SecondDirectionRow(CATIAIntParam *& oSecondRow); \
      virtual HRESULT __stdcall get_FirstOrientation(CAT_VARIANT_BOOL & oIsAligned); \
      virtual HRESULT __stdcall put_FirstOrientation(CAT_VARIANT_BOOL iIsAligned); \
      virtual HRESULT __stdcall get_SecondOrientation(CAT_VARIANT_BOOL & oIsAligned); \
      virtual HRESULT __stdcall put_SecondOrientation(CAT_VARIANT_BOOL iIsAligned); \
      virtual HRESULT __stdcall get_FirstDirectionRepartition(CATIALinearRepartition *& oOnFirstDirection); \
      virtual HRESULT __stdcall get_SecondDirectionRepartition(CATIALinearRepartition *& oOnSecondDirection); \
      virtual HRESULT __stdcall GetFirstDirection(CATSafeArrayVariant & ioFirstDirection); \
      virtual HRESULT __stdcall SetFirstDirection(CATIAReference * iFirstDirection); \
      virtual HRESULT __stdcall GetSecondDirection(CATSafeArrayVariant & ioSecondDirection); \
      virtual HRESULT __stdcall SetSecondDirection(CATIAReference * iSecondDirection); \
      virtual HRESULT __stdcall SetInstanceSpacing(CATLONG iInstanceNumber, double iSpacing, CATLONG iDirection); \
      virtual HRESULT __stdcall SetUnequalInstanceNumber(CATLONG iInstanceNumber, CATLONG iDirection); \
      virtual HRESULT __stdcall get_FirstRectangularPatternParameters(CatRectangularPatternParameters & oParameters); \
      virtual HRESULT __stdcall put_FirstRectangularPatternParameters(CatRectangularPatternParameters iParameters); \
      virtual HRESULT __stdcall get_SecondRectangularPatternParameters(CatRectangularPatternParameters & oParameters); \
      virtual HRESULT __stdcall put_SecondRectangularPatternParameters(CatRectangularPatternParameters iParameters); \
      virtual HRESULT __stdcall get_ItemToCopy(CATIABase *& oToCopy); \
      virtual HRESULT __stdcall put_ItemToCopy(CATIABase * iToCopy); \
      virtual HRESULT __stdcall get_RotationAngle(CATIAAngle *& oRotationAngle); \
      virtual HRESULT __stdcall ActivatePosition(CATLONG iPosU, CATLONG iPosV); \
      virtual HRESULT __stdcall DesactivatePosition(CATLONG iPosU, CATLONG iPosV); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARectPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstDirectionRow(CATIAIntParam *& oFirstRow); \
virtual HRESULT __stdcall get_SecondDirectionRow(CATIAIntParam *& oSecondRow); \
virtual HRESULT __stdcall get_FirstOrientation(CAT_VARIANT_BOOL & oIsAligned); \
virtual HRESULT __stdcall put_FirstOrientation(CAT_VARIANT_BOOL iIsAligned); \
virtual HRESULT __stdcall get_SecondOrientation(CAT_VARIANT_BOOL & oIsAligned); \
virtual HRESULT __stdcall put_SecondOrientation(CAT_VARIANT_BOOL iIsAligned); \
virtual HRESULT __stdcall get_FirstDirectionRepartition(CATIALinearRepartition *& oOnFirstDirection); \
virtual HRESULT __stdcall get_SecondDirectionRepartition(CATIALinearRepartition *& oOnSecondDirection); \
virtual HRESULT __stdcall GetFirstDirection(CATSafeArrayVariant & ioFirstDirection); \
virtual HRESULT __stdcall SetFirstDirection(CATIAReference * iFirstDirection); \
virtual HRESULT __stdcall GetSecondDirection(CATSafeArrayVariant & ioSecondDirection); \
virtual HRESULT __stdcall SetSecondDirection(CATIAReference * iSecondDirection); \
virtual HRESULT __stdcall SetInstanceSpacing(CATLONG iInstanceNumber, double iSpacing, CATLONG iDirection); \
virtual HRESULT __stdcall SetUnequalInstanceNumber(CATLONG iInstanceNumber, CATLONG iDirection); \
virtual HRESULT __stdcall get_FirstRectangularPatternParameters(CatRectangularPatternParameters & oParameters); \
virtual HRESULT __stdcall put_FirstRectangularPatternParameters(CatRectangularPatternParameters iParameters); \
virtual HRESULT __stdcall get_SecondRectangularPatternParameters(CatRectangularPatternParameters & oParameters); \
virtual HRESULT __stdcall put_SecondRectangularPatternParameters(CatRectangularPatternParameters iParameters); \
virtual HRESULT __stdcall get_ItemToCopy(CATIABase *& oToCopy); \
virtual HRESULT __stdcall put_ItemToCopy(CATIABase * iToCopy); \
virtual HRESULT __stdcall get_RotationAngle(CATIAAngle *& oRotationAngle); \
virtual HRESULT __stdcall ActivatePosition(CATLONG iPosU, CATLONG iPosV); \
virtual HRESULT __stdcall DesactivatePosition(CATLONG iPosU, CATLONG iPosV); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARectPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstDirectionRow(CATIAIntParam *& oFirstRow) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_FirstDirectionRow(oFirstRow)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondDirectionRow(CATIAIntParam *& oSecondRow) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_SecondDirectionRow(oSecondRow)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstOrientation(CAT_VARIANT_BOOL & oIsAligned) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_FirstOrientation(oIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstOrientation(CAT_VARIANT_BOOL iIsAligned) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)put_FirstOrientation(iIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondOrientation(CAT_VARIANT_BOOL & oIsAligned) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_SecondOrientation(oIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondOrientation(CAT_VARIANT_BOOL iIsAligned) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)put_SecondOrientation(iIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstDirectionRepartition(CATIALinearRepartition *& oOnFirstDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_FirstDirectionRepartition(oOnFirstDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondDirectionRepartition(CATIALinearRepartition *& oOnSecondDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_SecondDirectionRepartition(oOnSecondDirection)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstDirection(CATSafeArrayVariant & ioFirstDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)GetFirstDirection(ioFirstDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetFirstDirection(CATIAReference * iFirstDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)SetFirstDirection(iFirstDirection)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondDirection(CATSafeArrayVariant & ioSecondDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)GetSecondDirection(ioSecondDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetSecondDirection(CATIAReference * iSecondDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)SetSecondDirection(iSecondDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetInstanceSpacing(CATLONG iInstanceNumber, double iSpacing, CATLONG iDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)SetInstanceSpacing(iInstanceNumber,iSpacing,iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnequalInstanceNumber(CATLONG iInstanceNumber, CATLONG iDirection) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)SetUnequalInstanceNumber(iInstanceNumber,iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstRectangularPatternParameters(CatRectangularPatternParameters & oParameters) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_FirstRectangularPatternParameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstRectangularPatternParameters(CatRectangularPatternParameters iParameters) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)put_FirstRectangularPatternParameters(iParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondRectangularPatternParameters(CatRectangularPatternParameters & oParameters) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_SecondRectangularPatternParameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondRectangularPatternParameters(CatRectangularPatternParameters iParameters) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)put_SecondRectangularPatternParameters(iParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_ItemToCopy(CATIABase *& oToCopy) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_ItemToCopy(oToCopy)); \
} \
HRESULT __stdcall  ENVTIEName::put_ItemToCopy(CATIABase * iToCopy) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)put_ItemToCopy(iToCopy)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationAngle(CATIAAngle *& oRotationAngle) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_RotationAngle(oRotationAngle)); \
} \
HRESULT __stdcall  ENVTIEName::ActivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)ActivatePosition(iPosU,iPosV)); \
} \
HRESULT __stdcall  ENVTIEName::DesactivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)DesactivatePosition(iPosU,iPosV)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARectPattern,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARectPattern(classe)    TIECATIARectPattern##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARectPattern(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARectPattern, classe) \
 \
 \
CATImplementTIEMethods(CATIARectPattern, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARectPattern, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARectPattern, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARectPattern, classe) \
 \
HRESULT __stdcall  TIECATIARectPattern##classe::get_FirstDirectionRow(CATIAIntParam *& oFirstRow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFirstRow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstDirectionRow(oFirstRow); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFirstRow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_SecondDirectionRow(CATIAIntParam *& oSecondRow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSecondRow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondDirectionRow(oSecondRow); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSecondRow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_FirstOrientation(CAT_VARIANT_BOOL & oIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstOrientation(oIsAligned); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::put_FirstOrientation(CAT_VARIANT_BOOL iIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstOrientation(iIsAligned); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_SecondOrientation(CAT_VARIANT_BOOL & oIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondOrientation(oIsAligned); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::put_SecondOrientation(CAT_VARIANT_BOOL iIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondOrientation(iIsAligned); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_FirstDirectionRepartition(CATIALinearRepartition *& oOnFirstDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOnFirstDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstDirectionRepartition(oOnFirstDirection); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOnFirstDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_SecondDirectionRepartition(CATIALinearRepartition *& oOnSecondDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oOnSecondDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondDirectionRepartition(oOnSecondDirection); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oOnSecondDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::GetFirstDirection(CATSafeArrayVariant & ioFirstDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ioFirstDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstDirection(ioFirstDirection); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ioFirstDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::SetFirstDirection(CATIAReference * iFirstDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iFirstDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFirstDirection(iFirstDirection); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iFirstDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::GetSecondDirection(CATSafeArrayVariant & ioSecondDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioSecondDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondDirection(ioSecondDirection); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioSecondDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::SetSecondDirection(CATIAReference * iSecondDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSecondDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondDirection(iSecondDirection); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSecondDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::SetInstanceSpacing(CATLONG iInstanceNumber, double iSpacing, CATLONG iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iInstanceNumber,&iSpacing,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInstanceSpacing(iInstanceNumber,iSpacing,iDirection); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iInstanceNumber,&iSpacing,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::SetUnequalInstanceNumber(CATLONG iInstanceNumber, CATLONG iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iInstanceNumber,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnequalInstanceNumber(iInstanceNumber,iDirection); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iInstanceNumber,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_FirstRectangularPatternParameters(CatRectangularPatternParameters & oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstRectangularPatternParameters(oParameters); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::put_FirstRectangularPatternParameters(CatRectangularPatternParameters iParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstRectangularPatternParameters(iParameters); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_SecondRectangularPatternParameters(CatRectangularPatternParameters & oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondRectangularPatternParameters(oParameters); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::put_SecondRectangularPatternParameters(CatRectangularPatternParameters iParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondRectangularPatternParameters(iParameters); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_ItemToCopy(CATIABase *& oToCopy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oToCopy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ItemToCopy(oToCopy); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oToCopy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::put_ItemToCopy(CATIABase * iToCopy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iToCopy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ItemToCopy(iToCopy); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iToCopy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::get_RotationAngle(CATIAAngle *& oRotationAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oRotationAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationAngle(oRotationAngle); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oRotationAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::ActivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPosU,&iPosV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivatePosition(iPosU,iPosV); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPosU,&iPosV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectPattern##classe::DesactivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iPosU,&iPosV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesactivatePosition(iPosU,iPosV); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iPosU,&iPosV); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectPattern##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectPattern##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectPattern##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectPattern##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectPattern##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARectPattern(classe) \
 \
 \
declare_TIE_CATIARectPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARectPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARectPattern,"CATIARectPattern",CATIARectPattern::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARectPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARectPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARectPattern##classe(classe::MetaObject(),CATIARectPattern::MetaObject(),(void *)CreateTIECATIARectPattern##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARectPattern(classe) \
 \
 \
declare_TIE_CATIARectPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARectPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARectPattern,"CATIARectPattern",CATIARectPattern::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARectPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARectPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARectPattern##classe(classe::MetaObject(),CATIARectPattern::MetaObject(),(void *)CreateTIECATIARectPattern##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARectPattern(classe) TIE_CATIARectPattern(classe)
#else
#define BOA_CATIARectPattern(classe) CATImplementBOA(CATIARectPattern, classe)
#endif

#endif
