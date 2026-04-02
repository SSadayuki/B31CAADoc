#ifndef __TIE_CATIAHybridShapeSphere
#define __TIE_CATIAHybridShapeSphere

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSphere.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSphere */
#define declare_TIE_CATIAHybridShapeSphere(classe) \
 \
 \
class TIECATIAHybridShapeSphere##classe : public CATIAHybridShapeSphere \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSphere, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Center(CATIAReference *& oPt); \
      virtual HRESULT __stdcall put_Center(CATIAReference * iPt); \
      virtual HRESULT __stdcall get_BeginParallelAngle(CATIAAngle *& oAngle1); \
      virtual HRESULT __stdcall get_EndParallelAngle(CATIAAngle *& oAngle2); \
      virtual HRESULT __stdcall get_BeginMeridianAngle(CATIAAngle *& oAngle3); \
      virtual HRESULT __stdcall get_EndMeridianAngle(CATIAAngle *& oAngle4); \
      virtual HRESULT __stdcall get_Axis(CATIAReference *& oDir); \
      virtual HRESULT __stdcall put_Axis(CATIAReference * iDir); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall put_Limitation(CATLONG iLimitationType); \
      virtual HRESULT __stdcall get_Limitation(CATLONG & oLimitation); \
      virtual HRESULT __stdcall SetBeginParallelAngle(double iAngle); \
      virtual HRESULT __stdcall SetEndParallelAngle(double iAngle); \
      virtual HRESULT __stdcall SetBeginMeridianAngle(double iAngle); \
      virtual HRESULT __stdcall SetEndMeridianAngle(double iAngle); \
      virtual HRESULT __stdcall SetRadius(double iRadius); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeSphere(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Center(CATIAReference *& oPt); \
virtual HRESULT __stdcall put_Center(CATIAReference * iPt); \
virtual HRESULT __stdcall get_BeginParallelAngle(CATIAAngle *& oAngle1); \
virtual HRESULT __stdcall get_EndParallelAngle(CATIAAngle *& oAngle2); \
virtual HRESULT __stdcall get_BeginMeridianAngle(CATIAAngle *& oAngle3); \
virtual HRESULT __stdcall get_EndMeridianAngle(CATIAAngle *& oAngle4); \
virtual HRESULT __stdcall get_Axis(CATIAReference *& oDir); \
virtual HRESULT __stdcall put_Axis(CATIAReference * iDir); \
virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
virtual HRESULT __stdcall put_Limitation(CATLONG iLimitationType); \
virtual HRESULT __stdcall get_Limitation(CATLONG & oLimitation); \
virtual HRESULT __stdcall SetBeginParallelAngle(double iAngle); \
virtual HRESULT __stdcall SetEndParallelAngle(double iAngle); \
virtual HRESULT __stdcall SetBeginMeridianAngle(double iAngle); \
virtual HRESULT __stdcall SetEndMeridianAngle(double iAngle); \
virtual HRESULT __stdcall SetRadius(double iRadius); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeSphere(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Center(CATIAReference *& oPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Center(oPt)); \
} \
HRESULT __stdcall  ENVTIEName::put_Center(CATIAReference * iPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)put_Center(iPt)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginParallelAngle(CATIAAngle *& oAngle1) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_BeginParallelAngle(oAngle1)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndParallelAngle(CATIAAngle *& oAngle2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_EndParallelAngle(oAngle2)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginMeridianAngle(CATIAAngle *& oAngle3) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_BeginMeridianAngle(oAngle3)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndMeridianAngle(CATIAAngle *& oAngle4) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_EndMeridianAngle(oAngle4)); \
} \
HRESULT __stdcall  ENVTIEName::get_Axis(CATIAReference *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Axis(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Axis(CATIAReference * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)put_Axis(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_Limitation(CATLONG iLimitationType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)put_Limitation(iLimitationType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Limitation(CATLONG & oLimitation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Limitation(oLimitation)); \
} \
HRESULT __stdcall  ENVTIEName::SetBeginParallelAngle(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)SetBeginParallelAngle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetEndParallelAngle(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)SetEndParallelAngle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetBeginMeridianAngle(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)SetBeginMeridianAngle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetEndMeridianAngle(double iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)SetEndMeridianAngle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetRadius(double iRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)SetRadius(iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSphere,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSphere(classe)    TIECATIAHybridShapeSphere##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSphere(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSphere, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSphere, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSphere, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSphere, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSphere, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_Center(CATIAReference *& oPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Center(oPt); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::put_Center(CATIAReference * iPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Center(iPt); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_BeginParallelAngle(CATIAAngle *& oAngle1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAngle1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginParallelAngle(oAngle1); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAngle1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_EndParallelAngle(CATIAAngle *& oAngle2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oAngle2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndParallelAngle(oAngle2); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oAngle2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_BeginMeridianAngle(CATIAAngle *& oAngle3) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAngle3); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginMeridianAngle(oAngle3); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAngle3); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_EndMeridianAngle(CATIAAngle *& oAngle4) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oAngle4); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndMeridianAngle(oAngle4); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oAngle4); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_Axis(CATIAReference *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Axis(oDir); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::put_Axis(CATIAReference * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Axis(iDir); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_Radius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::put_Limitation(CATLONG iLimitationType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iLimitationType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Limitation(iLimitationType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iLimitationType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_Limitation(CATLONG & oLimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oLimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Limitation(oLimitation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oLimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::SetBeginParallelAngle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBeginParallelAngle(iAngle); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::SetEndParallelAngle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndParallelAngle(iAngle); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::SetBeginMeridianAngle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBeginMeridianAngle(iAngle); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::SetEndMeridianAngle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndMeridianAngle(iAngle); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::SetRadius(double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadius(iRadius); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSphere##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSphere##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSphere##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSphere##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSphere##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSphere##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSphere(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSphere(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSphere##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSphere,"CATIAHybridShapeSphere",CATIAHybridShapeSphere::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSphere(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSphere, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSphere##classe(classe::MetaObject(),CATIAHybridShapeSphere::MetaObject(),(void *)CreateTIECATIAHybridShapeSphere##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSphere(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSphere(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSphere##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSphere,"CATIAHybridShapeSphere",CATIAHybridShapeSphere::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSphere(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSphere, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSphere##classe(classe::MetaObject(),CATIAHybridShapeSphere::MetaObject(),(void *)CreateTIECATIAHybridShapeSphere##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSphere(classe) TIE_CATIAHybridShapeSphere(classe)
#else
#define BOA_CATIAHybridShapeSphere(classe) CATImplementBOA(CATIAHybridShapeSphere, classe)
#endif

#endif
