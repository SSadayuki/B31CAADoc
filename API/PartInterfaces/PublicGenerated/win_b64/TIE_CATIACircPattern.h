#ifndef __TIE_CATIACircPattern
#define __TIE_CATIACircPattern

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIACircPattern.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACircPattern */
#define declare_TIE_CATIACircPattern(classe) \
 \
 \
class TIECATIACircPattern##classe : public CATIACircPattern \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACircPattern, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_RadialDirectionRow(CATIAIntParam *& oRadialRow); \
      virtual HRESULT __stdcall get_AngularDirectionRow(CATIAIntParam *& oAngularRow); \
      virtual HRESULT __stdcall get_RadialAlignment(CAT_VARIANT_BOOL & oIsAligned); \
      virtual HRESULT __stdcall put_RadialAlignment(CAT_VARIANT_BOOL iIsAligned); \
      virtual HRESULT __stdcall get_RotationOrientation(CAT_VARIANT_BOOL & oIsAligned); \
      virtual HRESULT __stdcall put_RotationOrientation(CAT_VARIANT_BOOL iIsAligned); \
      virtual HRESULT __stdcall get_RadialRepartition(CATIALinearRepartition *& oOnRadialRepartition); \
      virtual HRESULT __stdcall get_AngularRepartition(CATIAAngularRepartition *& oAngularRepartition); \
      virtual HRESULT __stdcall get_CircularPatternParameters(CatCircularPatternParameters & oParameters); \
      virtual HRESULT __stdcall put_CircularPatternParameters(CatCircularPatternParameters iParameters); \
      virtual HRESULT __stdcall GetRotationCenter(CATSafeArrayVariant & ioRotationCenter); \
      virtual HRESULT __stdcall SetRotationCenter(CATIAReference * iRotationCenter); \
      virtual HRESULT __stdcall GetRotationAxis(CATSafeArrayVariant & ioRotationAxis); \
      virtual HRESULT __stdcall SetRotationAxis(CATIAReference * iRotationAxis); \
      virtual HRESULT __stdcall SetUnequalStep(CATLONG iInstanceNumber); \
      virtual HRESULT __stdcall SetInstanceAngularSpacing(CATLONG iInstanceNumber, double iAngularSpacing); \
      virtual HRESULT __stdcall SetUnequalInstanceNumber(CATLONG iInstanceNumber); \
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



#define ENVTIEdeclare_CATIACircPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_RadialDirectionRow(CATIAIntParam *& oRadialRow); \
virtual HRESULT __stdcall get_AngularDirectionRow(CATIAIntParam *& oAngularRow); \
virtual HRESULT __stdcall get_RadialAlignment(CAT_VARIANT_BOOL & oIsAligned); \
virtual HRESULT __stdcall put_RadialAlignment(CAT_VARIANT_BOOL iIsAligned); \
virtual HRESULT __stdcall get_RotationOrientation(CAT_VARIANT_BOOL & oIsAligned); \
virtual HRESULT __stdcall put_RotationOrientation(CAT_VARIANT_BOOL iIsAligned); \
virtual HRESULT __stdcall get_RadialRepartition(CATIALinearRepartition *& oOnRadialRepartition); \
virtual HRESULT __stdcall get_AngularRepartition(CATIAAngularRepartition *& oAngularRepartition); \
virtual HRESULT __stdcall get_CircularPatternParameters(CatCircularPatternParameters & oParameters); \
virtual HRESULT __stdcall put_CircularPatternParameters(CatCircularPatternParameters iParameters); \
virtual HRESULT __stdcall GetRotationCenter(CATSafeArrayVariant & ioRotationCenter); \
virtual HRESULT __stdcall SetRotationCenter(CATIAReference * iRotationCenter); \
virtual HRESULT __stdcall GetRotationAxis(CATSafeArrayVariant & ioRotationAxis); \
virtual HRESULT __stdcall SetRotationAxis(CATIAReference * iRotationAxis); \
virtual HRESULT __stdcall SetUnequalStep(CATLONG iInstanceNumber); \
virtual HRESULT __stdcall SetInstanceAngularSpacing(CATLONG iInstanceNumber, double iAngularSpacing); \
virtual HRESULT __stdcall SetUnequalInstanceNumber(CATLONG iInstanceNumber); \
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


#define ENVTIEdefine_CATIACircPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_RadialDirectionRow(CATIAIntParam *& oRadialRow) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_RadialDirectionRow(oRadialRow)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngularDirectionRow(CATIAIntParam *& oAngularRow) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_AngularDirectionRow(oAngularRow)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadialAlignment(CAT_VARIANT_BOOL & oIsAligned) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_RadialAlignment(oIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::put_RadialAlignment(CAT_VARIANT_BOOL iIsAligned) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)put_RadialAlignment(iIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationOrientation(CAT_VARIANT_BOOL & oIsAligned) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_RotationOrientation(oIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::put_RotationOrientation(CAT_VARIANT_BOOL iIsAligned) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)put_RotationOrientation(iIsAligned)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadialRepartition(CATIALinearRepartition *& oOnRadialRepartition) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_RadialRepartition(oOnRadialRepartition)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngularRepartition(CATIAAngularRepartition *& oAngularRepartition) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_AngularRepartition(oAngularRepartition)); \
} \
HRESULT __stdcall  ENVTIEName::get_CircularPatternParameters(CatCircularPatternParameters & oParameters) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_CircularPatternParameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::put_CircularPatternParameters(CatCircularPatternParameters iParameters) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)put_CircularPatternParameters(iParameters)); \
} \
HRESULT __stdcall  ENVTIEName::GetRotationCenter(CATSafeArrayVariant & ioRotationCenter) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)GetRotationCenter(ioRotationCenter)); \
} \
HRESULT __stdcall  ENVTIEName::SetRotationCenter(CATIAReference * iRotationCenter) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)SetRotationCenter(iRotationCenter)); \
} \
HRESULT __stdcall  ENVTIEName::GetRotationAxis(CATSafeArrayVariant & ioRotationAxis) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)GetRotationAxis(ioRotationAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetRotationAxis(CATIAReference * iRotationAxis) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)SetRotationAxis(iRotationAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnequalStep(CATLONG iInstanceNumber) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)SetUnequalStep(iInstanceNumber)); \
} \
HRESULT __stdcall  ENVTIEName::SetInstanceAngularSpacing(CATLONG iInstanceNumber, double iAngularSpacing) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)SetInstanceAngularSpacing(iInstanceNumber,iAngularSpacing)); \
} \
HRESULT __stdcall  ENVTIEName::SetUnequalInstanceNumber(CATLONG iInstanceNumber) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)SetUnequalInstanceNumber(iInstanceNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_ItemToCopy(CATIABase *& oToCopy) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_ItemToCopy(oToCopy)); \
} \
HRESULT __stdcall  ENVTIEName::put_ItemToCopy(CATIABase * iToCopy) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)put_ItemToCopy(iToCopy)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationAngle(CATIAAngle *& oRotationAngle) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_RotationAngle(oRotationAngle)); \
} \
HRESULT __stdcall  ENVTIEName::ActivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)ActivatePosition(iPosU,iPosV)); \
} \
HRESULT __stdcall  ENVTIEName::DesactivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)DesactivatePosition(iPosU,iPosV)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACircPattern,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACircPattern(classe)    TIECATIACircPattern##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACircPattern(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACircPattern, classe) \
 \
 \
CATImplementTIEMethods(CATIACircPattern, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACircPattern, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACircPattern, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACircPattern, classe) \
 \
HRESULT __stdcall  TIECATIACircPattern##classe::get_RadialDirectionRow(CATIAIntParam *& oRadialRow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRadialRow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadialDirectionRow(oRadialRow); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRadialRow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_AngularDirectionRow(CATIAIntParam *& oAngularRow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAngularRow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngularDirectionRow(oAngularRow); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAngularRow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_RadialAlignment(CAT_VARIANT_BOOL & oIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadialAlignment(oIsAligned); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::put_RadialAlignment(CAT_VARIANT_BOOL iIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RadialAlignment(iIsAligned); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_RotationOrientation(CAT_VARIANT_BOOL & oIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationOrientation(oIsAligned); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::put_RotationOrientation(CAT_VARIANT_BOOL iIsAligned) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsAligned); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RotationOrientation(iIsAligned); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsAligned); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_RadialRepartition(CATIALinearRepartition *& oOnRadialRepartition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOnRadialRepartition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadialRepartition(oOnRadialRepartition); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOnRadialRepartition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_AngularRepartition(CATIAAngularRepartition *& oAngularRepartition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oAngularRepartition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngularRepartition(oAngularRepartition); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oAngularRepartition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_CircularPatternParameters(CatCircularPatternParameters & oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CircularPatternParameters(oParameters); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::put_CircularPatternParameters(CatCircularPatternParameters iParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CircularPatternParameters(iParameters); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::GetRotationCenter(CATSafeArrayVariant & ioRotationCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioRotationCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRotationCenter(ioRotationCenter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioRotationCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::SetRotationCenter(CATIAReference * iRotationCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRotationCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRotationCenter(iRotationCenter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRotationCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::GetRotationAxis(CATSafeArrayVariant & ioRotationAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&ioRotationAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRotationAxis(ioRotationAxis); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&ioRotationAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::SetRotationAxis(CATIAReference * iRotationAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iRotationAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRotationAxis(iRotationAxis); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iRotationAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::SetUnequalStep(CATLONG iInstanceNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iInstanceNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnequalStep(iInstanceNumber); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iInstanceNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::SetInstanceAngularSpacing(CATLONG iInstanceNumber, double iAngularSpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iInstanceNumber,&iAngularSpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInstanceAngularSpacing(iInstanceNumber,iAngularSpacing); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iInstanceNumber,&iAngularSpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::SetUnequalInstanceNumber(CATLONG iInstanceNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iInstanceNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUnequalInstanceNumber(iInstanceNumber); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iInstanceNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_ItemToCopy(CATIABase *& oToCopy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oToCopy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ItemToCopy(oToCopy); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oToCopy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::put_ItemToCopy(CATIABase * iToCopy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iToCopy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ItemToCopy(iToCopy); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iToCopy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::get_RotationAngle(CATIAAngle *& oRotationAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oRotationAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationAngle(oRotationAngle); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oRotationAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::ActivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iPosU,&iPosV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivatePosition(iPosU,iPosV); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iPosU,&iPosV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircPattern##classe::DesactivatePosition(CATLONG iPosU, CATLONG iPosV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPosU,&iPosV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesactivatePosition(iPosU,iPosV); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPosU,&iPosV); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircPattern##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircPattern##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircPattern##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircPattern##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircPattern##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACircPattern(classe) \
 \
 \
declare_TIE_CATIACircPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACircPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACircPattern,"CATIACircPattern",CATIACircPattern::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACircPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACircPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACircPattern##classe(classe::MetaObject(),CATIACircPattern::MetaObject(),(void *)CreateTIECATIACircPattern##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACircPattern(classe) \
 \
 \
declare_TIE_CATIACircPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACircPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACircPattern,"CATIACircPattern",CATIACircPattern::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACircPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACircPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACircPattern##classe(classe::MetaObject(),CATIACircPattern::MetaObject(),(void *)CreateTIECATIACircPattern##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACircPattern(classe) TIE_CATIACircPattern(classe)
#else
#define BOA_CATIACircPattern(classe) CATImplementBOA(CATIACircPattern, classe)
#endif

#endif
