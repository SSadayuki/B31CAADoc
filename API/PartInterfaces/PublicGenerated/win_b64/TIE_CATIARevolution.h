#ifndef __TIE_CATIARevolution
#define __TIE_CATIARevolution

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARevolution.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARevolution */
#define declare_TIE_CATIARevolution(classe) \
 \
 \
class TIECATIARevolution##classe : public CATIARevolution \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARevolution, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstAngle(CATIAAngle *& oFirstAngle); \
      virtual HRESULT __stdcall get_SecondAngle(CATIAAngle *& oSecondAngle); \
      virtual HRESULT __stdcall get_RevoluteAxis(CATIAReference *& oAxis); \
      virtual HRESULT __stdcall put_RevoluteAxis(CATIAReference * iAxis); \
      virtual HRESULT __stdcall get_IsThin(CAT_VARIANT_BOOL & oIsThin); \
      virtual HRESULT __stdcall put_IsThin(CAT_VARIANT_BOOL iIsThin); \
      virtual HRESULT __stdcall get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber); \
      virtual HRESULT __stdcall put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber); \
      virtual HRESULT __stdcall get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd); \
      virtual HRESULT __stdcall put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARevolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstAngle(CATIAAngle *& oFirstAngle); \
virtual HRESULT __stdcall get_SecondAngle(CATIAAngle *& oSecondAngle); \
virtual HRESULT __stdcall get_RevoluteAxis(CATIAReference *& oAxis); \
virtual HRESULT __stdcall put_RevoluteAxis(CATIAReference * iAxis); \
virtual HRESULT __stdcall get_IsThin(CAT_VARIANT_BOOL & oIsThin); \
virtual HRESULT __stdcall put_IsThin(CAT_VARIANT_BOOL iIsThin); \
virtual HRESULT __stdcall get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber); \
virtual HRESULT __stdcall put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber); \
virtual HRESULT __stdcall get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd); \
virtual HRESULT __stdcall put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARevolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstAngle(CATIAAngle *& oFirstAngle) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_FirstAngle(oFirstAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondAngle(CATIAAngle *& oSecondAngle) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_SecondAngle(oSecondAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_RevoluteAxis(CATIAReference *& oAxis) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_RevoluteAxis(oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_RevoluteAxis(CATIAReference * iAxis) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)put_RevoluteAxis(iAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsThin(CAT_VARIANT_BOOL & oIsThin) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_IsThin(oIsThin)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsThin(CAT_VARIANT_BOOL iIsThin) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)put_IsThin(iIsThin)); \
} \
HRESULT __stdcall  ENVTIEName::get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_NeutralFiber(oIsNeutralFiber)); \
} \
HRESULT __stdcall  ENVTIEName::put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)put_NeutralFiber(iIsNeutralFiber)); \
} \
HRESULT __stdcall  ENVTIEName::get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_MergeEnd(oIsMergeEnd)); \
} \
HRESULT __stdcall  ENVTIEName::put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)put_MergeEnd(iIsMergeEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileElement(CATIAReference * iProfileElement) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)SetProfileElement(iProfileElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARevolution,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARevolution(classe)    TIECATIARevolution##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARevolution(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARevolution, classe) \
 \
 \
CATImplementTIEMethods(CATIARevolution, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARevolution, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARevolution, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARevolution, classe) \
 \
HRESULT __stdcall  TIECATIARevolution##classe::get_FirstAngle(CATIAAngle *& oFirstAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFirstAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstAngle(oFirstAngle); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFirstAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::get_SecondAngle(CATIAAngle *& oSecondAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSecondAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondAngle(oSecondAngle); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSecondAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::get_RevoluteAxis(CATIAReference *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RevoluteAxis(oAxis); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::put_RevoluteAxis(CATIAReference * iAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RevoluteAxis(iAxis); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::get_IsThin(CAT_VARIANT_BOOL & oIsThin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsThin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsThin(oIsThin); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsThin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::put_IsThin(CAT_VARIANT_BOOL iIsThin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsThin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsThin(iIsThin); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsThin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oIsNeutralFiber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NeutralFiber(oIsNeutralFiber); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oIsNeutralFiber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIsNeutralFiber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NeutralFiber(iIsNeutralFiber); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIsNeutralFiber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsMergeEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MergeEnd(oIsMergeEnd); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsMergeEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIsMergeEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MergeEnd(iIsMergeEnd); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIsMergeEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARevolution##classe::SetProfileElement(CATIAReference * iProfileElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iProfileElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileElement(iProfileElement); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iProfileElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARevolution##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARevolution##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARevolution##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARevolution##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARevolution##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARevolution(classe) \
 \
 \
declare_TIE_CATIARevolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARevolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARevolution,"CATIARevolution",CATIARevolution::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARevolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARevolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARevolution##classe(classe::MetaObject(),CATIARevolution::MetaObject(),(void *)CreateTIECATIARevolution##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARevolution(classe) \
 \
 \
declare_TIE_CATIARevolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARevolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARevolution,"CATIARevolution",CATIARevolution::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARevolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARevolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARevolution##classe(classe::MetaObject(),CATIARevolution::MetaObject(),(void *)CreateTIECATIARevolution##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARevolution(classe) TIE_CATIARevolution(classe)
#else
#define BOA_CATIARevolution(classe) CATImplementBOA(CATIARevolution, classe)
#endif

#endif
