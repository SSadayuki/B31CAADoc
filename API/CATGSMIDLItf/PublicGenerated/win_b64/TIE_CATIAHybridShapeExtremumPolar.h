#ifndef __TIE_CATIAHybridShapeExtremumPolar
#define __TIE_CATIAHybridShapeExtremumPolar

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeExtremumPolar.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeExtremumPolar */
#define declare_TIE_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
class TIECATIAHybridShapeExtremumPolar##classe : public CATIAHybridShapeExtremumPolar \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeExtremumPolar, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Contour(CATIAReference *& opIAContour); \
      virtual HRESULT __stdcall put_Contour(CATIAReference * ipIAContour); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& opIASupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * ipIASupport); \
      virtual HRESULT __stdcall get_Dir(CATIAHybridShapeDirection *& opIADir); \
      virtual HRESULT __stdcall put_Dir(CATIAHybridShapeDirection * ipIADir); \
      virtual HRESULT __stdcall get_Origin(CATIAReference *& opIAOrigin); \
      virtual HRESULT __stdcall put_Origin(CATIAReference * ipIAOrigin); \
      virtual HRESULT __stdcall get_ExtremumType(short & oType); \
      virtual HRESULT __stdcall put_ExtremumType(short iType); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& opIARadius); \
      virtual HRESULT __stdcall get_Angle(CATIAAngle *& opIAAngle); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeExtremumPolar(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Contour(CATIAReference *& opIAContour); \
virtual HRESULT __stdcall put_Contour(CATIAReference * ipIAContour); \
virtual HRESULT __stdcall get_Support(CATIAReference *& opIASupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * ipIASupport); \
virtual HRESULT __stdcall get_Dir(CATIAHybridShapeDirection *& opIADir); \
virtual HRESULT __stdcall put_Dir(CATIAHybridShapeDirection * ipIADir); \
virtual HRESULT __stdcall get_Origin(CATIAReference *& opIAOrigin); \
virtual HRESULT __stdcall put_Origin(CATIAReference * ipIAOrigin); \
virtual HRESULT __stdcall get_ExtremumType(short & oType); \
virtual HRESULT __stdcall put_ExtremumType(short iType); \
virtual HRESULT __stdcall get_Radius(CATIALength *& opIARadius); \
virtual HRESULT __stdcall get_Angle(CATIAAngle *& opIAAngle); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeExtremumPolar(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Contour(CATIAReference *& opIAContour) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Contour(opIAContour)); \
} \
HRESULT __stdcall  ENVTIEName::put_Contour(CATIAReference * ipIAContour) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)put_Contour(ipIAContour)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& opIASupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Support(opIASupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * ipIASupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)put_Support(ipIASupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dir(CATIAHybridShapeDirection *& opIADir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Dir(opIADir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Dir(CATIAHybridShapeDirection * ipIADir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)put_Dir(ipIADir)); \
} \
HRESULT __stdcall  ENVTIEName::get_Origin(CATIAReference *& opIAOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Origin(opIAOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::put_Origin(CATIAReference * ipIAOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)put_Origin(ipIAOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtremumType(short & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_ExtremumType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtremumType(short iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)put_ExtremumType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& opIARadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Radius(opIARadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(CATIAAngle *& opIAAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Angle(opIAAngle)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremumPolar,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeExtremumPolar(classe)    TIECATIAHybridShapeExtremumPolar##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeExtremumPolar, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeExtremumPolar, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtremumPolar, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtremumPolar, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeExtremumPolar, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Contour(CATIAReference *& opIAContour) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&opIAContour); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Contour(opIAContour); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&opIAContour); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::put_Contour(CATIAReference * ipIAContour) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ipIAContour); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Contour(ipIAContour); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ipIAContour); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Support(CATIAReference *& opIASupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&opIASupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(opIASupport); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&opIASupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::put_Support(CATIAReference * ipIASupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&ipIASupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(ipIASupport); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&ipIASupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Dir(CATIAHybridShapeDirection *& opIADir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&opIADir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dir(opIADir); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&opIADir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::put_Dir(CATIAHybridShapeDirection * ipIADir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&ipIADir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Dir(ipIADir); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&ipIADir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Origin(CATIAReference *& opIAOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&opIAOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Origin(opIAOrigin); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&opIAOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::put_Origin(CATIAReference * ipIAOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&ipIAOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Origin(ipIAOrigin); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&ipIAOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_ExtremumType(short & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtremumType(oType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::put_ExtremumType(short iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtremumType(iType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Radius(CATIALength *& opIARadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&opIARadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(opIARadius); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&opIARadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Angle(CATIAAngle *& opIAAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&opIAAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(opIAAngle); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&opIAAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremumPolar##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremumPolar##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremumPolar##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtremumPolar##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtremumPolar,"CATIAHybridShapeExtremumPolar",CATIAHybridShapeExtremumPolar::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeExtremumPolar, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtremumPolar##classe(classe::MetaObject(),CATIAHybridShapeExtremumPolar::MetaObject(),(void *)CreateTIECATIAHybridShapeExtremumPolar##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtremumPolar##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtremumPolar,"CATIAHybridShapeExtremumPolar",CATIAHybridShapeExtremumPolar::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtremumPolar(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeExtremumPolar, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtremumPolar##classe(classe::MetaObject(),CATIAHybridShapeExtremumPolar::MetaObject(),(void *)CreateTIECATIAHybridShapeExtremumPolar##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeExtremumPolar(classe) TIE_CATIAHybridShapeExtremumPolar(classe)
#else
#define BOA_CATIAHybridShapeExtremumPolar(classe) CATImplementBOA(CATIAHybridShapeExtremumPolar, classe)
#endif

#endif
