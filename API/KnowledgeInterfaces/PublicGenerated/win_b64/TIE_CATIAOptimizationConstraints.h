#ifndef __TIE_CATIAOptimizationConstraints
#define __TIE_CATIAOptimizationConstraints

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOptimizationConstraints.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOptimizationConstraints */
#define declare_TIE_CATIAOptimizationConstraints(classe) \
 \
 \
class TIECATIAOptimizationConstraints##classe : public CATIAOptimizationConstraints \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOptimizationConstraints, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAOptimizationConstraint *& oConstraint); \
      virtual HRESULT __stdcall AddConstraint(const CATBSTR & constraintExpression, CATIAOptimizationConstraint *& oConstraint); \
      virtual HRESULT __stdcall RemoveConstraint(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAOptimizationConstraints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAOptimizationConstraint *& oConstraint); \
virtual HRESULT __stdcall AddConstraint(const CATBSTR & constraintExpression, CATIAOptimizationConstraint *& oConstraint); \
virtual HRESULT __stdcall RemoveConstraint(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAOptimizationConstraints(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAOptimizationConstraint *& oConstraint) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::AddConstraint(const CATBSTR & constraintExpression, CATIAOptimizationConstraint *& oConstraint) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)AddConstraint(constraintExpression,oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveConstraint(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)RemoveConstraint(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAOptimizationConstraints,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOptimizationConstraints(classe)    TIECATIAOptimizationConstraints##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOptimizationConstraints(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOptimizationConstraints, classe) \
 \
 \
CATImplementTIEMethods(CATIAOptimizationConstraints, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOptimizationConstraints, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOptimizationConstraints, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOptimizationConstraints, classe) \
 \
HRESULT __stdcall  TIECATIAOptimizationConstraints##classe::Item(const CATVariant & iIndex, CATIAOptimizationConstraint *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oConstraint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraints##classe::AddConstraint(const CATBSTR & constraintExpression, CATIAOptimizationConstraint *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&constraintExpression,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraint(constraintExpression,oConstraint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&constraintExpression,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimizationConstraints##classe::RemoveConstraint(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveConstraint(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraints##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraints##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraints##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraints##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraints##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimizationConstraints##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOptimizationConstraints(classe) \
 \
 \
declare_TIE_CATIAOptimizationConstraints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizationConstraints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizationConstraints,"CATIAOptimizationConstraints",CATIAOptimizationConstraints::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizationConstraints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOptimizationConstraints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizationConstraints##classe(classe::MetaObject(),CATIAOptimizationConstraints::MetaObject(),(void *)CreateTIECATIAOptimizationConstraints##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOptimizationConstraints(classe) \
 \
 \
declare_TIE_CATIAOptimizationConstraints(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimizationConstraints##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimizationConstraints,"CATIAOptimizationConstraints",CATIAOptimizationConstraints::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimizationConstraints(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOptimizationConstraints, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimizationConstraints##classe(classe::MetaObject(),CATIAOptimizationConstraints::MetaObject(),(void *)CreateTIECATIAOptimizationConstraints##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOptimizationConstraints(classe) TIE_CATIAOptimizationConstraints(classe)
#else
#define BOA_CATIAOptimizationConstraints(classe) CATImplementBOA(CATIAOptimizationConstraints, classe)
#endif

#endif
