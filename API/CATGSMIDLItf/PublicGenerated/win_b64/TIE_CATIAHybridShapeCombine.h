#ifndef __TIE_CATIAHybridShapeCombine
#define __TIE_CATIAHybridShapeCombine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCombine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCombine */
#define declare_TIE_CATIAHybridShapeCombine(classe) \
 \
 \
class TIECATIAHybridShapeCombine##classe : public CATIAHybridShapeCombine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCombine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Elem1(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Elem1(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Direction1(CATIAHybridShapeDirection *& oElem); \
      virtual HRESULT __stdcall put_Direction1(CATIAHybridShapeDirection * iElem); \
      virtual HRESULT __stdcall get_Elem2(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Elem2(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Direction2(CATIAHybridShapeDirection *& oElem); \
      virtual HRESULT __stdcall put_Direction2(CATIAHybridShapeDirection * iElem); \
      virtual HRESULT __stdcall get_NearestSolution(CATLONG & oSolutionType); \
      virtual HRESULT __stdcall put_NearestSolution(CATLONG iSolutionType); \
      virtual HRESULT __stdcall get_SolutionTypeCombine(CATLONG & oSolutionTypeCombine); \
      virtual HRESULT __stdcall put_SolutionTypeCombine(CATLONG iSolutionTypeCombine); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeCombine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Elem1(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Elem1(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Direction1(CATIAHybridShapeDirection *& oElem); \
virtual HRESULT __stdcall put_Direction1(CATIAHybridShapeDirection * iElem); \
virtual HRESULT __stdcall get_Elem2(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Elem2(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Direction2(CATIAHybridShapeDirection *& oElem); \
virtual HRESULT __stdcall put_Direction2(CATIAHybridShapeDirection * iElem); \
virtual HRESULT __stdcall get_NearestSolution(CATLONG & oSolutionType); \
virtual HRESULT __stdcall put_NearestSolution(CATLONG iSolutionType); \
virtual HRESULT __stdcall get_SolutionTypeCombine(CATLONG & oSolutionTypeCombine); \
virtual HRESULT __stdcall put_SolutionTypeCombine(CATLONG iSolutionTypeCombine); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeCombine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Elem1(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Elem1(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Elem1(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)put_Elem1(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction1(CATIAHybridShapeDirection *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Direction1(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction1(CATIAHybridShapeDirection * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)put_Direction1(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Elem2(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Elem2(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Elem2(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)put_Elem2(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction2(CATIAHybridShapeDirection *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Direction2(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction2(CATIAHybridShapeDirection * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)put_Direction2(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_NearestSolution(CATLONG & oSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_NearestSolution(oSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_NearestSolution(CATLONG iSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)put_NearestSolution(iSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolutionTypeCombine(CATLONG & oSolutionTypeCombine) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_SolutionTypeCombine(oSolutionTypeCombine)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolutionTypeCombine(CATLONG iSolutionTypeCombine) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)put_SolutionTypeCombine(iSolutionTypeCombine)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCombine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCombine(classe)    TIECATIAHybridShapeCombine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCombine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCombine, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCombine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCombine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCombine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCombine, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::get_Elem1(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Elem1(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::put_Elem1(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Elem1(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::get_Direction1(CATIAHybridShapeDirection *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction1(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::put_Direction1(CATIAHybridShapeDirection * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction1(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::get_Elem2(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Elem2(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::put_Elem2(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Elem2(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::get_Direction2(CATIAHybridShapeDirection *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction2(oElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::put_Direction2(CATIAHybridShapeDirection * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction2(iElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::get_NearestSolution(CATLONG & oSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NearestSolution(oSolutionType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::put_NearestSolution(CATLONG iSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NearestSolution(iSolutionType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::get_SolutionTypeCombine(CATLONG & oSolutionTypeCombine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSolutionTypeCombine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolutionTypeCombine(oSolutionTypeCombine); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSolutionTypeCombine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::put_SolutionTypeCombine(CATLONG iSolutionTypeCombine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSolutionTypeCombine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolutionTypeCombine(iSolutionTypeCombine); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSolutionTypeCombine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCombine##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCombine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCombine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCombine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCombine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCombine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCombine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCombine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCombine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCombine,"CATIAHybridShapeCombine",CATIAHybridShapeCombine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCombine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCombine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCombine##classe(classe::MetaObject(),CATIAHybridShapeCombine::MetaObject(),(void *)CreateTIECATIAHybridShapeCombine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCombine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCombine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCombine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCombine,"CATIAHybridShapeCombine",CATIAHybridShapeCombine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCombine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCombine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCombine##classe(classe::MetaObject(),CATIAHybridShapeCombine::MetaObject(),(void *)CreateTIECATIAHybridShapeCombine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCombine(classe) TIE_CATIAHybridShapeCombine(classe)
#else
#define BOA_CATIAHybridShapeCombine(classe) CATImplementBOA(CATIAHybridShapeCombine, classe)
#endif

#endif
