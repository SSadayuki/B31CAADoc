#ifndef __TIE_SWKIAIKManager
#define __TIE_SWKIAIKManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAIKManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAIKManager */
#define declare_TIE_SWKIAIKManager(classe) \
 \
 \
class TIESWKIAIKManager##classe : public SWKIAIKManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAIKManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
      virtual HRESULT __stdcall AddConstraint(const CATBSTR & piEndEffector, SWKIAIKConstraint *& poConstraint); \
      virtual HRESULT __stdcall get_NumberOfConstraints(CATLONG & poNumberOfConstraints); \
      virtual HRESULT __stdcall GetConstraint(CATLONG piIndex, SWKIAIKConstraint *& poConstraint); \
      virtual HRESULT __stdcall AddConstraintFrom(SWKIAIKConstraint * piConstraintFrom, SWKIAIKConstraint *& poCreatedConstraint); \
      virtual HRESULT __stdcall RemoveConstraint(SWKIAIKConstraint * piConstraintToRemove); \
      virtual HRESULT __stdcall RemoveAllConstraints(); \
      virtual HRESULT __stdcall Resolve(); \
      virtual HRESULT __stdcall get_Behavior(CATBSTR & pioBehavior); \
      virtual HRESULT __stdcall put_Behavior(const CATBSTR & piBehavior); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAIKManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
virtual HRESULT __stdcall AddConstraint(const CATBSTR & piEndEffector, SWKIAIKConstraint *& poConstraint); \
virtual HRESULT __stdcall get_NumberOfConstraints(CATLONG & poNumberOfConstraints); \
virtual HRESULT __stdcall GetConstraint(CATLONG piIndex, SWKIAIKConstraint *& poConstraint); \
virtual HRESULT __stdcall AddConstraintFrom(SWKIAIKConstraint * piConstraintFrom, SWKIAIKConstraint *& poCreatedConstraint); \
virtual HRESULT __stdcall RemoveConstraint(SWKIAIKConstraint * piConstraintToRemove); \
virtual HRESULT __stdcall RemoveAllConstraints(); \
virtual HRESULT __stdcall Resolve(); \
virtual HRESULT __stdcall get_Behavior(CATBSTR & pioBehavior); \
virtual HRESULT __stdcall put_Behavior(const CATBSTR & piBehavior); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAIKManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Manikin(SWKIAManikin *& poManikin) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)get_Manikin(poManikin)); \
} \
HRESULT __stdcall  ENVTIEName::AddConstraint(const CATBSTR & piEndEffector, SWKIAIKConstraint *& poConstraint) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)AddConstraint(piEndEffector,poConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfConstraints(CATLONG & poNumberOfConstraints) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)get_NumberOfConstraints(poNumberOfConstraints)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraint(CATLONG piIndex, SWKIAIKConstraint *& poConstraint) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)GetConstraint(piIndex,poConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::AddConstraintFrom(SWKIAIKConstraint * piConstraintFrom, SWKIAIKConstraint *& poCreatedConstraint) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)AddConstraintFrom(piConstraintFrom,poCreatedConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveConstraint(SWKIAIKConstraint * piConstraintToRemove) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)RemoveConstraint(piConstraintToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllConstraints() \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)RemoveAllConstraints()); \
} \
HRESULT __stdcall  ENVTIEName::Resolve() \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)Resolve()); \
} \
HRESULT __stdcall  ENVTIEName::get_Behavior(CATBSTR & pioBehavior) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)get_Behavior(pioBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::put_Behavior(const CATBSTR & piBehavior) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)put_Behavior(piBehavior)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAIKManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAIKManager(classe)    TIESWKIAIKManager##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAIKManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAIKManager, classe) \
 \
 \
CATImplementTIEMethods(SWKIAIKManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAIKManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAIKManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAIKManager, classe) \
 \
HRESULT __stdcall  TIESWKIAIKManager##classe::get_Manikin(SWKIAManikin *& poManikin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poManikin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Manikin(poManikin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poManikin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::AddConstraint(const CATBSTR & piEndEffector, SWKIAIKConstraint *& poConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piEndEffector,&poConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraint(piEndEffector,poConstraint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piEndEffector,&poConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::get_NumberOfConstraints(CATLONG & poNumberOfConstraints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poNumberOfConstraints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfConstraints(poNumberOfConstraints); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poNumberOfConstraints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::GetConstraint(CATLONG piIndex, SWKIAIKConstraint *& poConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piIndex,&poConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraint(piIndex,poConstraint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piIndex,&poConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::AddConstraintFrom(SWKIAIKConstraint * piConstraintFrom, SWKIAIKConstraint *& poCreatedConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&piConstraintFrom,&poCreatedConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraintFrom(piConstraintFrom,poCreatedConstraint); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&piConstraintFrom,&poCreatedConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::RemoveConstraint(SWKIAIKConstraint * piConstraintToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piConstraintToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveConstraint(piConstraintToRemove); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piConstraintToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::RemoveAllConstraints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllConstraints(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::Resolve() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Resolve(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::get_Behavior(CATBSTR & pioBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&pioBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Behavior(pioBehavior); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&pioBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKManager##classe::put_Behavior(const CATBSTR & piBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&piBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Behavior(piBehavior); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&piBehavior); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAIKManager(classe) \
 \
 \
declare_TIE_SWKIAIKManager(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAIKManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAIKManager,"SWKIAIKManager",SWKIAIKManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAIKManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAIKManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAIKManager##classe(classe::MetaObject(),SWKIAIKManager::MetaObject(),(void *)CreateTIESWKIAIKManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAIKManager(classe) \
 \
 \
declare_TIE_SWKIAIKManager(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAIKManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAIKManager,"SWKIAIKManager",SWKIAIKManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAIKManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAIKManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAIKManager##classe(classe::MetaObject(),SWKIAIKManager::MetaObject(),(void *)CreateTIESWKIAIKManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAIKManager(classe) TIE_SWKIAIKManager(classe)
#else
#define BOA_SWKIAIKManager(classe) CATImplementBOA(SWKIAIKManager, classe)
#endif

#endif
