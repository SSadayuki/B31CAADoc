#ifndef __TIE_CATIAOptimizations
#define __TIE_CATIAOptimizations

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOptimizations.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOptimizations */
#define declare_TIE_CATIAOptimizations(classe) \
 \
 \
class TIECATIAOptimizations##classe : public CATIAOptimizations \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOptimizations, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oOptimization); \
      virtual HRESULT __stdcall CreateOptimization(CATIAOptimization *& oOptimization); \
      virtual HRESULT __stdcall CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAOptimizations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oOptimization); \
virtual HRESULT __stdcall CreateOptimization(CATIAOptimization *& oOptimization); \
virtual HRESULT __stdcall CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAOptimizations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIABase *& oOptimization) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oOptimization)); \
} \
HRESULT __stdcall  ENVTIEName::CreateOptimization(CATIAOptimization *& oOptimization) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)CreateOptimization(oOptimization)); \
} \
HRESULT __stdcall  ENVTIEName::CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)CreateConstraintsSatisfaction(iName,iComment,iFormulaBody,oConstraintsSatisfaction)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAOptimizations,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOptimizations(classe)    TIECATIAOptimizations##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOptimizations(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOptimizations, classe) \
 \
 \
CATImplementTIEMethods(CATIAOptimizations, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOptimizations, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOptimizations, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOptimizations, classe) \
 \
HRESULT __stdcall  TIECATIAOptimizations##classe::Item(const CATVariant & iIndex, CATIABase *& oOptimization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oOptimization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oOptimization); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oOptimization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizations##classe::CreateOptimization(CATIAOptimization *& oOptimization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oOptimization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateOptimization(oOptimization); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oOptimization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizations##classe::CreateConstraintsSatisfaction(const CATBSTR & iName, const CATBSTR & iComment, const CATBSTR & iFormulaBody, CATIASetOfEquation *& oConstraintsSatisfaction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName,&iComment,&iFormulaBody,&oConstraintsSatisfaction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateConstraintsSatisfaction(iName,iComment,iFormulaBody,oConstraintsSatisfaction); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName,&iComment,&iFormulaBody,&oConstraintsSatisfaction); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizations##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizations##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizations##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizations##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizations##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizations##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOptimizations(classe) \
 \
 \
declare_TIE_CATIAOptimizations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizations,"CATIAOptimizations",CATIAOptimizations::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOptimizations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizations##classe(classe::MetaObject(),CATIAOptimizations::MetaObject(),(void *)CreateTIECATIAOptimizations##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOptimizations(classe) \
 \
 \
declare_TIE_CATIAOptimizations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizations,"CATIAOptimizations",CATIAOptimizations::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOptimizations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizations##classe(classe::MetaObject(),CATIAOptimizations::MetaObject(),(void *)CreateTIECATIAOptimizations##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOptimizations(classe) TIE_CATIAOptimizations(classe)
#else
#define BOA_CATIAOptimizations(classe) CATImplementBOA(CATIAOptimizations, classe)
#endif

#endif
