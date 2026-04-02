#ifndef __TIE_CATIARenderingEnvironmentWall
#define __TIE_CATIARenderingEnvironmentWall

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARenderingEnvironmentWall.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARenderingEnvironmentWall */
#define declare_TIE_CATIARenderingEnvironmentWall(classe) \
 \
 \
class TIECATIARenderingEnvironmentWall##classe : public CATIARenderingEnvironmentWall \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARenderingEnvironmentWall, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ActiveStatus(short & oActiveStatus); \
      virtual HRESULT __stdcall put_ActiveStatus(short iActiveStatus); \
      virtual HRESULT __stdcall get_ShadowsStatus(short & oShadowsStatus); \
      virtual HRESULT __stdcall put_ShadowsStatus(short iShadowsStatus); \
      virtual HRESULT __stdcall get_Texture(CATBSTR & oTextureName); \
      virtual HRESULT __stdcall put_Texture(const CATBSTR & iTextureName); \
      virtual HRESULT __stdcall get_AutoScaleStatus(short & oAutoScaleStatus); \
      virtual HRESULT __stdcall put_AutoScaleStatus(short iAutoScaleStatus); \
      virtual HRESULT __stdcall FitAllInWall(); \
      virtual HRESULT __stdcall get_LinkedScaleStatus(short & oLinkedScaleStatus); \
      virtual HRESULT __stdcall put_LinkedScaleStatus(short iLinkedScaleStatus); \
      virtual HRESULT __stdcall get_ScaleU(double & oScaleU); \
      virtual HRESULT __stdcall put_ScaleU(double iScaleU); \
      virtual HRESULT __stdcall get_ScaleV(double & oScaleV); \
      virtual HRESULT __stdcall put_ScaleV(double iScaleV); \
      virtual HRESULT __stdcall get_TranslationU(double & oTranslationU); \
      virtual HRESULT __stdcall put_TranslationU(double iTranslationU); \
      virtual HRESULT __stdcall get_TranslationV(double & oTranslationV); \
      virtual HRESULT __stdcall put_TranslationV(double iTranslationV); \
      virtual HRESULT __stdcall get_Rotation(double & oRotation); \
      virtual HRESULT __stdcall put_Rotation(double iRotation); \
      virtual HRESULT __stdcall get_FlipUStatus(short & oFlipUStatus); \
      virtual HRESULT __stdcall put_FlipUStatus(short iFlipUStatus); \
      virtual HRESULT __stdcall get_FlipVStatus(short & oFlipVStatus); \
      virtual HRESULT __stdcall put_FlipVStatus(short iFlipVStatus); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARenderingEnvironmentWall(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ActiveStatus(short & oActiveStatus); \
virtual HRESULT __stdcall put_ActiveStatus(short iActiveStatus); \
virtual HRESULT __stdcall get_ShadowsStatus(short & oShadowsStatus); \
virtual HRESULT __stdcall put_ShadowsStatus(short iShadowsStatus); \
virtual HRESULT __stdcall get_Texture(CATBSTR & oTextureName); \
virtual HRESULT __stdcall put_Texture(const CATBSTR & iTextureName); \
virtual HRESULT __stdcall get_AutoScaleStatus(short & oAutoScaleStatus); \
virtual HRESULT __stdcall put_AutoScaleStatus(short iAutoScaleStatus); \
virtual HRESULT __stdcall FitAllInWall(); \
virtual HRESULT __stdcall get_LinkedScaleStatus(short & oLinkedScaleStatus); \
virtual HRESULT __stdcall put_LinkedScaleStatus(short iLinkedScaleStatus); \
virtual HRESULT __stdcall get_ScaleU(double & oScaleU); \
virtual HRESULT __stdcall put_ScaleU(double iScaleU); \
virtual HRESULT __stdcall get_ScaleV(double & oScaleV); \
virtual HRESULT __stdcall put_ScaleV(double iScaleV); \
virtual HRESULT __stdcall get_TranslationU(double & oTranslationU); \
virtual HRESULT __stdcall put_TranslationU(double iTranslationU); \
virtual HRESULT __stdcall get_TranslationV(double & oTranslationV); \
virtual HRESULT __stdcall put_TranslationV(double iTranslationV); \
virtual HRESULT __stdcall get_Rotation(double & oRotation); \
virtual HRESULT __stdcall put_Rotation(double iRotation); \
virtual HRESULT __stdcall get_FlipUStatus(short & oFlipUStatus); \
virtual HRESULT __stdcall put_FlipUStatus(short iFlipUStatus); \
virtual HRESULT __stdcall get_FlipVStatus(short & oFlipVStatus); \
virtual HRESULT __stdcall put_FlipVStatus(short iFlipVStatus); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARenderingEnvironmentWall(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ActiveStatus(short & oActiveStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_ActiveStatus(oActiveStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveStatus(short iActiveStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_ActiveStatus(iActiveStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShadowsStatus(short & oShadowsStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_ShadowsStatus(oShadowsStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShadowsStatus(short iShadowsStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_ShadowsStatus(iShadowsStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Texture(CATBSTR & oTextureName) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_Texture(oTextureName)); \
} \
HRESULT __stdcall  ENVTIEName::put_Texture(const CATBSTR & iTextureName) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_Texture(iTextureName)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutoScaleStatus(short & oAutoScaleStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_AutoScaleStatus(oAutoScaleStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoScaleStatus(short iAutoScaleStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_AutoScaleStatus(iAutoScaleStatus)); \
} \
HRESULT __stdcall  ENVTIEName::FitAllInWall() \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)FitAllInWall()); \
} \
HRESULT __stdcall  ENVTIEName::get_LinkedScaleStatus(short & oLinkedScaleStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_LinkedScaleStatus(oLinkedScaleStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_LinkedScaleStatus(short iLinkedScaleStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_LinkedScaleStatus(iLinkedScaleStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_ScaleU(double & oScaleU) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_ScaleU(oScaleU)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScaleU(double iScaleU) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_ScaleU(iScaleU)); \
} \
HRESULT __stdcall  ENVTIEName::get_ScaleV(double & oScaleV) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_ScaleV(oScaleV)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScaleV(double iScaleV) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_ScaleV(iScaleV)); \
} \
HRESULT __stdcall  ENVTIEName::get_TranslationU(double & oTranslationU) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_TranslationU(oTranslationU)); \
} \
HRESULT __stdcall  ENVTIEName::put_TranslationU(double iTranslationU) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_TranslationU(iTranslationU)); \
} \
HRESULT __stdcall  ENVTIEName::get_TranslationV(double & oTranslationV) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_TranslationV(oTranslationV)); \
} \
HRESULT __stdcall  ENVTIEName::put_TranslationV(double iTranslationV) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_TranslationV(iTranslationV)); \
} \
HRESULT __stdcall  ENVTIEName::get_Rotation(double & oRotation) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_Rotation(oRotation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Rotation(double iRotation) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_Rotation(iRotation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlipUStatus(short & oFlipUStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_FlipUStatus(oFlipUStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlipUStatus(short iFlipUStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_FlipUStatus(iFlipUStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlipVStatus(short & oFlipVStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_FlipVStatus(oFlipVStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlipVStatus(short iFlipVStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_FlipVStatus(iFlipVStatus)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARenderingEnvironmentWall,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARenderingEnvironmentWall(classe)    TIECATIARenderingEnvironmentWall##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARenderingEnvironmentWall(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARenderingEnvironmentWall, classe) \
 \
 \
CATImplementTIEMethods(CATIARenderingEnvironmentWall, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARenderingEnvironmentWall, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARenderingEnvironmentWall, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARenderingEnvironmentWall, classe) \
 \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_ActiveStatus(short & oActiveStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oActiveStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveStatus(oActiveStatus); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oActiveStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_ActiveStatus(short iActiveStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iActiveStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveStatus(iActiveStatus); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iActiveStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_ShadowsStatus(short & oShadowsStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oShadowsStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShadowsStatus(oShadowsStatus); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oShadowsStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_ShadowsStatus(short iShadowsStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iShadowsStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShadowsStatus(iShadowsStatus); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iShadowsStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_Texture(CATBSTR & oTextureName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oTextureName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Texture(oTextureName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oTextureName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_Texture(const CATBSTR & iTextureName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iTextureName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Texture(iTextureName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iTextureName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_AutoScaleStatus(short & oAutoScaleStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAutoScaleStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoScaleStatus(oAutoScaleStatus); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAutoScaleStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_AutoScaleStatus(short iAutoScaleStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAutoScaleStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoScaleStatus(iAutoScaleStatus); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAutoScaleStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::FitAllInWall() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FitAllInWall(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_LinkedScaleStatus(short & oLinkedScaleStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oLinkedScaleStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkedScaleStatus(oLinkedScaleStatus); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oLinkedScaleStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_LinkedScaleStatus(short iLinkedScaleStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLinkedScaleStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LinkedScaleStatus(iLinkedScaleStatus); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLinkedScaleStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_ScaleU(double & oScaleU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oScaleU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScaleU(oScaleU); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oScaleU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_ScaleU(double iScaleU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iScaleU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScaleU(iScaleU); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iScaleU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_ScaleV(double & oScaleV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oScaleV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScaleV(oScaleV); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oScaleV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_ScaleV(double iScaleV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iScaleV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScaleV(iScaleV); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iScaleV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_TranslationU(double & oTranslationU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oTranslationU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TranslationU(oTranslationU); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oTranslationU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_TranslationU(double iTranslationU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iTranslationU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TranslationU(iTranslationU); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iTranslationU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_TranslationV(double & oTranslationV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oTranslationV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TranslationV(oTranslationV); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oTranslationV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_TranslationV(double iTranslationV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iTranslationV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TranslationV(iTranslationV); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iTranslationV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_Rotation(double & oRotation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oRotation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Rotation(oRotation); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oRotation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_Rotation(double iRotation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iRotation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Rotation(iRotation); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iRotation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_FlipUStatus(short & oFlipUStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oFlipUStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlipUStatus(oFlipUStatus); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oFlipUStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_FlipUStatus(short iFlipUStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iFlipUStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlipUStatus(iFlipUStatus); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iFlipUStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::get_FlipVStatus(short & oFlipVStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oFlipVStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlipVStatus(oFlipVStatus); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oFlipVStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironmentWall##classe::put_FlipVStatus(short iFlipVStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iFlipVStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlipVStatus(iFlipVStatus); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iFlipVStatus); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironmentWall##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironmentWall##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironmentWall##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironmentWall##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironmentWall##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARenderingEnvironmentWall(classe) \
 \
 \
declare_TIE_CATIARenderingEnvironmentWall(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingEnvironmentWall##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingEnvironmentWall,"CATIARenderingEnvironmentWall",CATIARenderingEnvironmentWall::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingEnvironmentWall(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARenderingEnvironmentWall, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingEnvironmentWall##classe(classe::MetaObject(),CATIARenderingEnvironmentWall::MetaObject(),(void *)CreateTIECATIARenderingEnvironmentWall##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARenderingEnvironmentWall(classe) \
 \
 \
declare_TIE_CATIARenderingEnvironmentWall(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingEnvironmentWall##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingEnvironmentWall,"CATIARenderingEnvironmentWall",CATIARenderingEnvironmentWall::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingEnvironmentWall(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARenderingEnvironmentWall, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingEnvironmentWall##classe(classe::MetaObject(),CATIARenderingEnvironmentWall::MetaObject(),(void *)CreateTIECATIARenderingEnvironmentWall##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARenderingEnvironmentWall(classe) TIE_CATIARenderingEnvironmentWall(classe)
#else
#define BOA_CATIARenderingEnvironmentWall(classe) CATImplementBOA(CATIARenderingEnvironmentWall, classe)
#endif

#endif
