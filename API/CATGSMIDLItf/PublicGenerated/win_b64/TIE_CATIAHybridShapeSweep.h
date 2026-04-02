#ifndef __TIE_CATIAHybridShapeSweep
#define __TIE_CATIAHybridShapeSweep

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSweep.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSweep */
#define declare_TIE_CATIAHybridShapeSweep(classe) \
 \
 \
class TIECATIAHybridShapeSweep##classe : public CATIAHybridShapeSweep \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSweep, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetCutPoint(CATLONG iRank, CATIAReference *& oElement); \
      virtual HRESULT __stdcall AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
      virtual HRESULT __stdcall RemoveAllCutPoints(); \
      virtual HRESULT __stdcall GetFillPoint(CATLONG iRank, CATIAReference *& oElement); \
      virtual HRESULT __stdcall AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
      virtual HRESULT __stdcall RemoveAllFillPoints(); \
      virtual HRESULT __stdcall get_SetbackValue(double & oValue); \
      virtual HRESULT __stdcall put_SetbackValue(double iValue); \
      virtual HRESULT __stdcall get_FillTwistedAreas(CATLONG & oMode); \
      virtual HRESULT __stdcall put_FillTwistedAreas(CATLONG iMode); \
      virtual HRESULT __stdcall get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode); \
      virtual HRESULT __stdcall put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeSweep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetCutPoint(CATLONG iRank, CATIAReference *& oElement); \
virtual HRESULT __stdcall AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
virtual HRESULT __stdcall RemoveAllCutPoints(); \
virtual HRESULT __stdcall GetFillPoint(CATLONG iRank, CATIAReference *& oElement); \
virtual HRESULT __stdcall AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2); \
virtual HRESULT __stdcall RemoveAllFillPoints(); \
virtual HRESULT __stdcall get_SetbackValue(double & oValue); \
virtual HRESULT __stdcall put_SetbackValue(double iValue); \
virtual HRESULT __stdcall get_FillTwistedAreas(CATLONG & oMode); \
virtual HRESULT __stdcall put_FillTwistedAreas(CATLONG iMode); \
virtual HRESULT __stdcall get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode); \
virtual HRESULT __stdcall put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeSweep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)GetCutPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)AddCutPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllCutPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)RemoveAllCutPoints()); \
} \
HRESULT __stdcall  ENVTIEName::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)GetFillPoint(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)AddFillPoints(iElement1,iElement2)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFillPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)RemoveAllFillPoints()); \
} \
HRESULT __stdcall  ENVTIEName::get_SetbackValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)get_SetbackValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SetbackValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)put_SetbackValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_FillTwistedAreas(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)get_FillTwistedAreas(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_FillTwistedAreas(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)put_FillTwistedAreas(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)get_C0VerticesMode(obC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)put_C0VerticesMode(ibC0VerticesMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSweep,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSweep(classe)    TIECATIAHybridShapeSweep##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSweep(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSweep, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSweep, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweep, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSweep, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSweep, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::GetCutPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCutPoint(iRank,oElement); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::AddCutPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCutPoints(iElement1,iElement2); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::RemoveAllCutPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllCutPoints(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::GetFillPoint(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFillPoint(iRank,oElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::AddFillPoints(CATIAReference * iElement1, CATIAReference * iElement2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iElement1,&iElement2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFillPoints(iElement1,iElement2); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iElement1,&iElement2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::RemoveAllFillPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFillPoints(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::get_SetbackValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SetbackValue(oValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::put_SetbackValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SetbackValue(iValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::get_FillTwistedAreas(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FillTwistedAreas(oMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::put_FillTwistedAreas(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FillTwistedAreas(iMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::get_C0VerticesMode(CAT_VARIANT_BOOL & obC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&obC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_C0VerticesMode(obC0VerticesMode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&obC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::put_C0VerticesMode(CAT_VARIANT_BOOL ibC0VerticesMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&ibC0VerticesMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_C0VerticesMode(ibC0VerticesMode); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&ibC0VerticesMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSweep##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweep##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweep##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweep##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweep##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSweep##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSweep(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweep,"CATIAHybridShapeSweep",CATIAHybridShapeSweep::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSweep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweep##classe(classe::MetaObject(),CATIAHybridShapeSweep::MetaObject(),(void *)CreateTIECATIAHybridShapeSweep##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSweep(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSweep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSweep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSweep,"CATIAHybridShapeSweep",CATIAHybridShapeSweep::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSweep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSweep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSweep##classe(classe::MetaObject(),CATIAHybridShapeSweep::MetaObject(),(void *)CreateTIECATIAHybridShapeSweep##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSweep(classe) TIE_CATIAHybridShapeSweep(classe)
#else
#define BOA_CATIAHybridShapeSweep(classe) CATImplementBOA(CATIAHybridShapeSweep, classe)
#endif

#endif
