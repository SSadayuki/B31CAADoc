#ifndef __TIE_CATIAHybridShapeOffset
#define __TIE_CATIAHybridShapeOffset

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeOffset.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeOffset */
#define declare_TIE_CATIAHybridShapeOffset(classe) \
 \
 \
class TIECATIAHybridShapeOffset##classe : public CATIAHybridShapeOffset \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeOffset, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_OffsetedObject(CATIAReference *& oFaceToOffset); \
      virtual HRESULT __stdcall put_OffsetedObject(CATIAReference * iFaceToOffset); \
      virtual HRESULT __stdcall get_OffsetValue(CATIALength *& oOffset); \
      virtual HRESULT __stdcall put_OffsetValue(CATIALength * ioffset); \
      virtual HRESULT __stdcall get_OffsetDirection(CAT_VARIANT_BOOL & oOffsetDirection); \
      virtual HRESULT __stdcall put_OffsetDirection(CAT_VARIANT_BOOL iOffsetDirection); \
      virtual HRESULT __stdcall get_SuppressMode(CAT_VARIANT_BOOL & oSuppressMode); \
      virtual HRESULT __stdcall put_SuppressMode(CAT_VARIANT_BOOL iSuppressMode); \
      virtual HRESULT __stdcall GetTrickyFace(CATLONG iRank, CATIAReference *& oTrickyFace); \
      virtual HRESULT __stdcall AddTrickyFace(CATIAReference * iTrickyFace); \
      virtual HRESULT __stdcall RemoveTrickyFace(CATLONG iRank); \
      virtual HRESULT __stdcall SetOffsetValue(double iOffset); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_OffsetedObject(CATIAReference *& oFaceToOffset); \
virtual HRESULT __stdcall put_OffsetedObject(CATIAReference * iFaceToOffset); \
virtual HRESULT __stdcall get_OffsetValue(CATIALength *& oOffset); \
virtual HRESULT __stdcall put_OffsetValue(CATIALength * ioffset); \
virtual HRESULT __stdcall get_OffsetDirection(CAT_VARIANT_BOOL & oOffsetDirection); \
virtual HRESULT __stdcall put_OffsetDirection(CAT_VARIANT_BOOL iOffsetDirection); \
virtual HRESULT __stdcall get_SuppressMode(CAT_VARIANT_BOOL & oSuppressMode); \
virtual HRESULT __stdcall put_SuppressMode(CAT_VARIANT_BOOL iSuppressMode); \
virtual HRESULT __stdcall GetTrickyFace(CATLONG iRank, CATIAReference *& oTrickyFace); \
virtual HRESULT __stdcall AddTrickyFace(CATIAReference * iTrickyFace); \
virtual HRESULT __stdcall RemoveTrickyFace(CATLONG iRank); \
virtual HRESULT __stdcall SetOffsetValue(double iOffset); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_OffsetedObject(CATIAReference *& oFaceToOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_OffsetedObject(oFaceToOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_OffsetedObject(CATIAReference * iFaceToOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)put_OffsetedObject(iFaceToOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_OffsetValue(CATIALength *& oOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_OffsetValue(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_OffsetValue(CATIALength * ioffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)put_OffsetValue(ioffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_OffsetDirection(CAT_VARIANT_BOOL & oOffsetDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_OffsetDirection(oOffsetDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_OffsetDirection(CAT_VARIANT_BOOL iOffsetDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)put_OffsetDirection(iOffsetDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_SuppressMode(CAT_VARIANT_BOOL & oSuppressMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_SuppressMode(oSuppressMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_SuppressMode(CAT_VARIANT_BOOL iSuppressMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)put_SuppressMode(iSuppressMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrickyFace(CATLONG iRank, CATIAReference *& oTrickyFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)GetTrickyFace(iRank,oTrickyFace)); \
} \
HRESULT __stdcall  ENVTIEName::AddTrickyFace(CATIAReference * iTrickyFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)AddTrickyFace(iTrickyFace)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveTrickyFace(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)RemoveTrickyFace(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::SetOffsetValue(double iOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)SetOffsetValue(iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeOffset,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeOffset(classe)    TIECATIAHybridShapeOffset##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeOffset(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeOffset, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeOffset, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeOffset, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeOffset, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeOffset, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::get_OffsetedObject(CATIAReference *& oFaceToOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFaceToOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OffsetedObject(oFaceToOffset); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFaceToOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::put_OffsetedObject(CATIAReference * iFaceToOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFaceToOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OffsetedObject(iFaceToOffset); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFaceToOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::get_OffsetValue(CATIALength *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OffsetValue(oOffset); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::put_OffsetValue(CATIALength * ioffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&ioffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OffsetValue(ioffset); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&ioffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::get_OffsetDirection(CAT_VARIANT_BOOL & oOffsetDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOffsetDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OffsetDirection(oOffsetDirection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOffsetDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::put_OffsetDirection(CAT_VARIANT_BOOL iOffsetDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOffsetDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OffsetDirection(iOffsetDirection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOffsetDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::get_SuppressMode(CAT_VARIANT_BOOL & oSuppressMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSuppressMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SuppressMode(oSuppressMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSuppressMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::put_SuppressMode(CAT_VARIANT_BOOL iSuppressMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSuppressMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SuppressMode(iSuppressMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSuppressMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::GetTrickyFace(CATLONG iRank, CATIAReference *& oTrickyFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iRank,&oTrickyFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrickyFace(iRank,oTrickyFace); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iRank,&oTrickyFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::AddTrickyFace(CATIAReference * iTrickyFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iTrickyFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddTrickyFace(iTrickyFace); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iTrickyFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::RemoveTrickyFace(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveTrickyFace(iRank); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::SetOffsetValue(double iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOffsetValue(iOffset); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeOffset##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeOffset##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeOffset##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeOffset##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeOffset##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeOffset##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeOffset(classe) \
 \
 \
declare_TIE_CATIAHybridShapeOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeOffset,"CATIAHybridShapeOffset",CATIAHybridShapeOffset::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeOffset##classe(classe::MetaObject(),CATIAHybridShapeOffset::MetaObject(),(void *)CreateTIECATIAHybridShapeOffset##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeOffset(classe) \
 \
 \
declare_TIE_CATIAHybridShapeOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeOffset,"CATIAHybridShapeOffset",CATIAHybridShapeOffset::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeOffset##classe(classe::MetaObject(),CATIAHybridShapeOffset::MetaObject(),(void *)CreateTIECATIAHybridShapeOffset##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeOffset(classe) TIE_CATIAHybridShapeOffset(classe)
#else
#define BOA_CATIAHybridShapeOffset(classe) CATImplementBOA(CATIAHybridShapeOffset, classe)
#endif

#endif
