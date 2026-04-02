#ifndef __TIE_CATIALinearRepartition
#define __TIE_CATIALinearRepartition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALinearRepartition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALinearRepartition */
#define declare_TIE_CATIALinearRepartition(classe) \
 \
 \
class TIECATIALinearRepartition##classe : public CATIALinearRepartition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALinearRepartition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Spacing(CATIALength *& oSpacing); \
      virtual HRESULT __stdcall get_InstancesCount(CATIAIntParam *& oInstancesCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIALinearRepartition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Spacing(CATIALength *& oSpacing); \
virtual HRESULT __stdcall get_InstancesCount(CATIAIntParam *& oInstancesCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIALinearRepartition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Spacing(CATIALength *& oSpacing) \
{ \
return (ENVTIECALL(CATIALinearRepartition,ENVTIETypeLetter,ENVTIELetter)get_Spacing(oSpacing)); \
} \
HRESULT __stdcall  ENVTIEName::get_InstancesCount(CATIAIntParam *& oInstancesCount) \
{ \
return (ENVTIECALL(CATIALinearRepartition,ENVTIETypeLetter,ENVTIELetter)get_InstancesCount(oInstancesCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALinearRepartition,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALinearRepartition,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALinearRepartition,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALinearRepartition,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALinearRepartition,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALinearRepartition(classe)    TIECATIALinearRepartition##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALinearRepartition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALinearRepartition, classe) \
 \
 \
CATImplementTIEMethods(CATIALinearRepartition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALinearRepartition, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALinearRepartition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALinearRepartition, classe) \
 \
HRESULT __stdcall  TIECATIALinearRepartition##classe::get_Spacing(CATIALength *& oSpacing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSpacing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spacing(oSpacing); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSpacing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALinearRepartition##classe::get_InstancesCount(CATIAIntParam *& oInstancesCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oInstancesCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InstancesCount(oInstancesCount); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oInstancesCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALinearRepartition##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALinearRepartition##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALinearRepartition##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALinearRepartition##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALinearRepartition##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALinearRepartition(classe) \
 \
 \
declare_TIE_CATIALinearRepartition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALinearRepartition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALinearRepartition,"CATIALinearRepartition",CATIALinearRepartition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALinearRepartition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALinearRepartition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALinearRepartition##classe(classe::MetaObject(),CATIALinearRepartition::MetaObject(),(void *)CreateTIECATIALinearRepartition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALinearRepartition(classe) \
 \
 \
declare_TIE_CATIALinearRepartition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALinearRepartition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALinearRepartition,"CATIALinearRepartition",CATIALinearRepartition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALinearRepartition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALinearRepartition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALinearRepartition##classe(classe::MetaObject(),CATIALinearRepartition::MetaObject(),(void *)CreateTIECATIALinearRepartition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALinearRepartition(classe) TIE_CATIALinearRepartition(classe)
#else
#define BOA_CATIALinearRepartition(classe) CATImplementBOA(CATIALinearRepartition, classe)
#endif

#endif
