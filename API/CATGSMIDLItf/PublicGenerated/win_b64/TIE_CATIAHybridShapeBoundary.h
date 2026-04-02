#ifndef __TIE_CATIAHybridShapeBoundary
#define __TIE_CATIAHybridShapeBoundary

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeBoundary.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeBoundary */
#define declare_TIE_CATIAHybridShapeBoundary(classe) \
 \
 \
class TIECATIAHybridShapeBoundary##classe : public CATIAHybridShapeBoundary \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeBoundary, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Propagation(CATLONG & oProp); \
      virtual HRESULT __stdcall put_Propagation(CATLONG iProp); \
      virtual HRESULT __stdcall get_InitialElement(CATIAReference *& oObject); \
      virtual HRESULT __stdcall put_InitialElement(CATIAReference * oObject); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oObject); \
      virtual HRESULT __stdcall put_Support(CATIAReference * oObject); \
      virtual HRESULT __stdcall get_To(CATIAReference *& opIATo); \
      virtual HRESULT __stdcall put_To(CATIAReference * ipIATo); \
      virtual HRESULT __stdcall get_From(CATIAReference *& opIAFrom); \
      virtual HRESULT __stdcall put_From(CATIAReference * ipIAFrom); \
      virtual HRESULT __stdcall get_ToOrientation(CATLONG & oToOrientation); \
      virtual HRESULT __stdcall put_ToOrientation(CATLONG iToOrientation); \
      virtual HRESULT __stdcall get_FromOrientation(CATLONG & oFromOrientation); \
      virtual HRESULT __stdcall put_FromOrientation(CATLONG iFromOrientation); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeBoundary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Propagation(CATLONG & oProp); \
virtual HRESULT __stdcall put_Propagation(CATLONG iProp); \
virtual HRESULT __stdcall get_InitialElement(CATIAReference *& oObject); \
virtual HRESULT __stdcall put_InitialElement(CATIAReference * oObject); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oObject); \
virtual HRESULT __stdcall put_Support(CATIAReference * oObject); \
virtual HRESULT __stdcall get_To(CATIAReference *& opIATo); \
virtual HRESULT __stdcall put_To(CATIAReference * ipIATo); \
virtual HRESULT __stdcall get_From(CATIAReference *& opIAFrom); \
virtual HRESULT __stdcall put_From(CATIAReference * ipIAFrom); \
virtual HRESULT __stdcall get_ToOrientation(CATLONG & oToOrientation); \
virtual HRESULT __stdcall put_ToOrientation(CATLONG iToOrientation); \
virtual HRESULT __stdcall get_FromOrientation(CATLONG & oFromOrientation); \
virtual HRESULT __stdcall put_FromOrientation(CATLONG iFromOrientation); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeBoundary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Propagation(CATLONG & oProp) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_Propagation(oProp)); \
} \
HRESULT __stdcall  ENVTIEName::put_Propagation(CATLONG iProp) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_Propagation(iProp)); \
} \
HRESULT __stdcall  ENVTIEName::get_InitialElement(CATIAReference *& oObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_InitialElement(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::put_InitialElement(CATIAReference * oObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_InitialElement(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_Support(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * oObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_Support(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_To(CATIAReference *& opIATo) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_To(opIATo)); \
} \
HRESULT __stdcall  ENVTIEName::put_To(CATIAReference * ipIATo) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_To(ipIATo)); \
} \
HRESULT __stdcall  ENVTIEName::get_From(CATIAReference *& opIAFrom) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_From(opIAFrom)); \
} \
HRESULT __stdcall  ENVTIEName::put_From(CATIAReference * ipIAFrom) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_From(ipIAFrom)); \
} \
HRESULT __stdcall  ENVTIEName::get_ToOrientation(CATLONG & oToOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_ToOrientation(oToOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_ToOrientation(CATLONG iToOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_ToOrientation(iToOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FromOrientation(CATLONG & oFromOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_FromOrientation(oFromOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FromOrientation(CATLONG iFromOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_FromOrientation(iFromOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeBoundary,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeBoundary(classe)    TIECATIAHybridShapeBoundary##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeBoundary(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeBoundary, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeBoundary, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeBoundary, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeBoundary, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeBoundary, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_Propagation(CATLONG & oProp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oProp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Propagation(oProp); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oProp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::put_Propagation(CATLONG iProp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Propagation(iProp); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_InitialElement(CATIAReference *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InitialElement(oObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::put_InitialElement(CATIAReference * oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InitialElement(oObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_Support(CATIAReference *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oObject); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::put_Support(CATIAReference * oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_To(CATIAReference *& opIATo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&opIATo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_To(opIATo); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&opIATo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::put_To(CATIAReference * ipIATo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&ipIATo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_To(ipIATo); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&ipIATo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_From(CATIAReference *& opIAFrom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&opIAFrom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_From(opIAFrom); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&opIAFrom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::put_From(CATIAReference * ipIAFrom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&ipIAFrom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_From(ipIAFrom); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&ipIAFrom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_ToOrientation(CATLONG & oToOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oToOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToOrientation(oToOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oToOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::put_ToOrientation(CATLONG iToOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iToOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ToOrientation(iToOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iToOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_FromOrientation(CATLONG & oFromOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFromOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FromOrientation(oFromOrientation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFromOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::put_FromOrientation(CATLONG iFromOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFromOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FromOrientation(iFromOrientation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFromOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBoundary##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBoundary##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBoundary##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBoundary##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBoundary##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBoundary##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeBoundary(classe) \
 \
 \
declare_TIE_CATIAHybridShapeBoundary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeBoundary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeBoundary,"CATIAHybridShapeBoundary",CATIAHybridShapeBoundary::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeBoundary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeBoundary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeBoundary##classe(classe::MetaObject(),CATIAHybridShapeBoundary::MetaObject(),(void *)CreateTIECATIAHybridShapeBoundary##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeBoundary(classe) \
 \
 \
declare_TIE_CATIAHybridShapeBoundary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeBoundary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeBoundary,"CATIAHybridShapeBoundary",CATIAHybridShapeBoundary::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeBoundary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeBoundary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeBoundary##classe(classe::MetaObject(),CATIAHybridShapeBoundary::MetaObject(),(void *)CreateTIECATIAHybridShapeBoundary##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeBoundary(classe) TIE_CATIAHybridShapeBoundary(classe)
#else
#define BOA_CATIAHybridShapeBoundary(classe) CATImplementBOA(CATIAHybridShapeBoundary, classe)
#endif

#endif
