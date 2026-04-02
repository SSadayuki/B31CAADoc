#ifndef __TIE_CATIAHybridShapeThickness
#define __TIE_CATIAHybridShapeThickness

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeThickness.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeThickness */
#define declare_TIE_CATIAHybridShapeThickness(classe) \
 \
 \
class TIECATIAHybridShapeThickness##classe : public CATIAHybridShapeThickness \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeThickness, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Thickness1Value(CATIALength *& oThickness1); \
      virtual HRESULT __stdcall get_Thickness2Value(CATIALength *& oThickness2); \
      virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_Thickness1(double & oThickness1); \
      virtual HRESULT __stdcall put_Thickness1(double iThickness1); \
      virtual HRESULT __stdcall get_Thickness2(double & oThickness2); \
      virtual HRESULT __stdcall put_Thickness2(double iThickness2); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeThickness(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Thickness1Value(CATIALength *& oThickness1); \
virtual HRESULT __stdcall get_Thickness2Value(CATIALength *& oThickness2); \
virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_Thickness1(double & oThickness1); \
virtual HRESULT __stdcall put_Thickness1(double iThickness1); \
virtual HRESULT __stdcall get_Thickness2(double & oThickness2); \
virtual HRESULT __stdcall put_Thickness2(double iThickness2); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeThickness(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Thickness1Value(CATIALength *& oThickness1) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Thickness1Value(oThickness1)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness2Value(CATIALength *& oThickness2) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Thickness2Value(oThickness2)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness1(double & oThickness1) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Thickness1(oThickness1)); \
} \
HRESULT __stdcall  ENVTIEName::put_Thickness1(double iThickness1) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)put_Thickness1(iThickness1)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness2(double & oThickness2) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Thickness2(oThickness2)); \
} \
HRESULT __stdcall  ENVTIEName::put_Thickness2(double iThickness2) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)put_Thickness2(iThickness2)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeThickness,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeThickness(classe)    TIECATIAHybridShapeThickness##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeThickness(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeThickness, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeThickness, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeThickness, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeThickness, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeThickness, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::get_Thickness1Value(CATIALength *& oThickness1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oThickness1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness1Value(oThickness1); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oThickness1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::get_Thickness2Value(CATIALength *& oThickness2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oThickness2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness2Value(oThickness2); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oThickness2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::get_Orientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::put_Orientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::get_Thickness1(double & oThickness1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oThickness1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness1(oThickness1); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oThickness1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::put_Thickness1(double iThickness1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iThickness1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Thickness1(iThickness1); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iThickness1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::get_Thickness2(double & oThickness2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oThickness2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness2(oThickness2); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oThickness2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::put_Thickness2(double iThickness2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iThickness2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Thickness2(iThickness2); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iThickness2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeThickness##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeThickness##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeThickness##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeThickness##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeThickness##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeThickness##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeThickness(classe) \
 \
 \
declare_TIE_CATIAHybridShapeThickness(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeThickness##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeThickness,"CATIAHybridShapeThickness",CATIAHybridShapeThickness::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeThickness(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeThickness, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeThickness##classe(classe::MetaObject(),CATIAHybridShapeThickness::MetaObject(),(void *)CreateTIECATIAHybridShapeThickness##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeThickness(classe) \
 \
 \
declare_TIE_CATIAHybridShapeThickness(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeThickness##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeThickness,"CATIAHybridShapeThickness",CATIAHybridShapeThickness::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeThickness(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeThickness, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeThickness##classe(classe::MetaObject(),CATIAHybridShapeThickness::MetaObject(),(void *)CreateTIECATIAHybridShapeThickness##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeThickness(classe) TIE_CATIAHybridShapeThickness(classe)
#else
#define BOA_CATIAHybridShapeThickness(classe) CATImplementBOA(CATIAHybridShapeThickness, classe)
#endif

#endif
