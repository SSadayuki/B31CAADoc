#ifndef __TIE_CATIAAngularRepartition
#define __TIE_CATIAAngularRepartition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAngularRepartition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAngularRepartition */
#define declare_TIE_CATIAAngularRepartition(classe) \
 \
 \
class TIECATIAAngularRepartition##classe : public CATIAAngularRepartition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAngularRepartition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AngularSpacing(CATIAAngle *& oAngularSpacing); \
      virtual HRESULT __stdcall get_InstanceSpacing(CATIAAngle *& oAngularSpacing); \
      virtual HRESULT __stdcall get_InstancesCount(CATIAIntParam *& oInstancesCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAngularRepartition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AngularSpacing(CATIAAngle *& oAngularSpacing); \
virtual HRESULT __stdcall get_InstanceSpacing(CATIAAngle *& oAngularSpacing); \
virtual HRESULT __stdcall get_InstancesCount(CATIAIntParam *& oInstancesCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAngularRepartition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AngularSpacing(CATIAAngle *& oAngularSpacing) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)get_AngularSpacing(oAngularSpacing)); \
} \
HRESULT __stdcall  ENVTIEName::get_InstanceSpacing(CATIAAngle *& oAngularSpacing) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)get_InstanceSpacing(oAngularSpacing)); \
} \
HRESULT __stdcall  ENVTIEName::get_InstancesCount(CATIAIntParam *& oInstancesCount) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)get_InstancesCount(oInstancesCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAngularRepartition,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAngularRepartition(classe)    TIECATIAAngularRepartition##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAngularRepartition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAngularRepartition, classe) \
 \
 \
CATImplementTIEMethods(CATIAAngularRepartition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAngularRepartition, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAngularRepartition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAngularRepartition, classe) \
 \
HRESULT __stdcall  TIECATIAAngularRepartition##classe::get_AngularSpacing(CATIAAngle *& oAngularSpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAngularSpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngularSpacing(oAngularSpacing); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAngularSpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAngularRepartition##classe::get_InstanceSpacing(CATIAAngle *& oAngularSpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAngularSpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InstanceSpacing(oAngularSpacing); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAngularSpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAngularRepartition##classe::get_InstancesCount(CATIAIntParam *& oInstancesCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oInstancesCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InstancesCount(oInstancesCount); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oInstancesCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAngularRepartition##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAngularRepartition##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAngularRepartition##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAngularRepartition##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAngularRepartition##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAngularRepartition(classe) \
 \
 \
declare_TIE_CATIAAngularRepartition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAngularRepartition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAngularRepartition,"CATIAAngularRepartition",CATIAAngularRepartition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAngularRepartition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAngularRepartition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAngularRepartition##classe(classe::MetaObject(),CATIAAngularRepartition::MetaObject(),(void *)CreateTIECATIAAngularRepartition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAngularRepartition(classe) \
 \
 \
declare_TIE_CATIAAngularRepartition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAngularRepartition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAngularRepartition,"CATIAAngularRepartition",CATIAAngularRepartition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAngularRepartition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAngularRepartition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAngularRepartition##classe(classe::MetaObject(),CATIAAngularRepartition::MetaObject(),(void *)CreateTIECATIAAngularRepartition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAngularRepartition(classe) TIE_CATIAAngularRepartition(classe)
#else
#define BOA_CATIAAngularRepartition(classe) CATImplementBOA(CATIAAngularRepartition, classe)
#endif

#endif
