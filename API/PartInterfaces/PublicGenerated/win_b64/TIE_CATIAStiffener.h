#ifndef __TIE_CATIAStiffener
#define __TIE_CATIAStiffener

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStiffener.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStiffener */
#define declare_TIE_CATIAStiffener(classe) \
 \
 \
class TIECATIAStiffener##classe : public CATIAStiffener \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStiffener, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Thickness(CATIALength *& oThickness); \
      virtual HRESULT __stdcall get_ThicknessFromTop(CATIALength *& oThicknessFromTop); \
      virtual HRESULT __stdcall get_IsFromTop(CAT_VARIANT_BOOL & oIsFromTop); \
      virtual HRESULT __stdcall put_IsFromTop(CAT_VARIANT_BOOL iIsFromTop); \
      virtual HRESULT __stdcall get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric); \
      virtual HRESULT __stdcall put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric); \
      virtual HRESULT __stdcall ReverseDepth(); \
      virtual HRESULT __stdcall ReverseThickness(); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStiffener(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Thickness(CATIALength *& oThickness); \
virtual HRESULT __stdcall get_ThicknessFromTop(CATIALength *& oThicknessFromTop); \
virtual HRESULT __stdcall get_IsFromTop(CAT_VARIANT_BOOL & oIsFromTop); \
virtual HRESULT __stdcall put_IsFromTop(CAT_VARIANT_BOOL iIsFromTop); \
virtual HRESULT __stdcall get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric); \
virtual HRESULT __stdcall put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric); \
virtual HRESULT __stdcall ReverseDepth(); \
virtual HRESULT __stdcall ReverseThickness(); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStiffener(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIALength *& oThickness) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThicknessFromTop(CATIALength *& oThicknessFromTop) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_ThicknessFromTop(oThicknessFromTop)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsFromTop(CAT_VARIANT_BOOL & oIsFromTop) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_IsFromTop(oIsFromTop)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsFromTop(CAT_VARIANT_BOOL iIsFromTop) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)put_IsFromTop(iIsFromTop)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_IsSymmetric(oIsSymmetric)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)put_IsSymmetric(iIsSymmetric)); \
} \
HRESULT __stdcall  ENVTIEName::ReverseDepth() \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)ReverseDepth()); \
} \
HRESULT __stdcall  ENVTIEName::ReverseThickness() \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)ReverseThickness()); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileElement(CATIAReference * iProfileElement) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)SetProfileElement(iProfileElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStiffener,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStiffener(classe)    TIECATIAStiffener##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStiffener(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStiffener, classe) \
 \
 \
CATImplementTIEMethods(CATIAStiffener, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStiffener, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStiffener, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStiffener, classe) \
 \
HRESULT __stdcall  TIECATIAStiffener##classe::get_Thickness(CATIALength *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::get_ThicknessFromTop(CATIALength *& oThicknessFromTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oThicknessFromTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThicknessFromTop(oThicknessFromTop); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oThicknessFromTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::get_IsFromTop(CAT_VARIANT_BOOL & oIsFromTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oIsFromTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsFromTop(oIsFromTop); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oIsFromTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::put_IsFromTop(CAT_VARIANT_BOOL iIsFromTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIsFromTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsFromTop(iIsFromTop); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIsFromTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsSymmetric); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsSymmetric(oIsSymmetric); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsSymmetric); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsSymmetric); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsSymmetric(iIsSymmetric); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsSymmetric); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::ReverseDepth() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseDepth(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::ReverseThickness() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseThickness(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiffener##classe::SetProfileElement(CATIAReference * iProfileElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iProfileElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileElement(iProfileElement); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iProfileElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiffener##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiffener##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiffener##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiffener##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiffener##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStiffener(classe) \
 \
 \
declare_TIE_CATIAStiffener(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiffener##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiffener,"CATIAStiffener",CATIAStiffener::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiffener(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStiffener, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiffener##classe(classe::MetaObject(),CATIAStiffener::MetaObject(),(void *)CreateTIECATIAStiffener##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStiffener(classe) \
 \
 \
declare_TIE_CATIAStiffener(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiffener##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiffener,"CATIAStiffener",CATIAStiffener::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiffener(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStiffener, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiffener##classe(classe::MetaObject(),CATIAStiffener::MetaObject(),(void *)CreateTIECATIAStiffener##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStiffener(classe) TIE_CATIAStiffener(classe)
#else
#define BOA_CATIAStiffener(classe) CATImplementBOA(CATIAStiffener, classe)
#endif

#endif
