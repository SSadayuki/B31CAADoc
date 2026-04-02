#ifndef __TIE_CATIASchAppClass
#define __TIE_CATIASchAppClass

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppClass.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppClass */
#define declare_TIE_CATIASchAppClass(classe) \
 \
 \
class TIECATIASchAppClass##classe : public CATIASchAppClass \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppClass, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppGetComponentBaseClass(CATIASchListOfBSTRs *& oLBaseCompClasses); \
      virtual HRESULT __stdcall AppGetRouteBaseClass(CATBSTR & oRouteClassName); \
      virtual HRESULT __stdcall AppGetGroupBaseClass(CATBSTR & oGroupClassName); \
      virtual HRESULT __stdcall AppGetZoneBaseClass(CATBSTR & oZoneClassName); \
      virtual HRESULT __stdcall AppListValidRouteTypes(CATIASchListOfBSTRs *& oLValidRouteTypes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppGetComponentBaseClass(CATIASchListOfBSTRs *& oLBaseCompClasses); \
virtual HRESULT __stdcall AppGetRouteBaseClass(CATBSTR & oRouteClassName); \
virtual HRESULT __stdcall AppGetGroupBaseClass(CATBSTR & oGroupClassName); \
virtual HRESULT __stdcall AppGetZoneBaseClass(CATBSTR & oZoneClassName); \
virtual HRESULT __stdcall AppListValidRouteTypes(CATIASchListOfBSTRs *& oLValidRouteTypes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppGetComponentBaseClass(CATIASchListOfBSTRs *& oLBaseCompClasses) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetComponentBaseClass(oLBaseCompClasses)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetRouteBaseClass(CATBSTR & oRouteClassName) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetRouteBaseClass(oRouteClassName)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetGroupBaseClass(CATBSTR & oGroupClassName) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetGroupBaseClass(oGroupClassName)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetZoneBaseClass(CATBSTR & oZoneClassName) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetZoneBaseClass(oZoneClassName)); \
} \
HRESULT __stdcall  ENVTIEName::AppListValidRouteTypes(CATIASchListOfBSTRs *& oLValidRouteTypes) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)AppListValidRouteTypes(oLValidRouteTypes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppClass,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppClass(classe)    TIECATIASchAppClass##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppClass(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppClass, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppClass, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppClass, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppClass, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppClass, classe) \
 \
HRESULT __stdcall  TIECATIASchAppClass##classe::AppGetComponentBaseClass(CATIASchListOfBSTRs *& oLBaseCompClasses) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLBaseCompClasses); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetComponentBaseClass(oLBaseCompClasses); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLBaseCompClasses); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppClass##classe::AppGetRouteBaseClass(CATBSTR & oRouteClassName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRouteClassName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetRouteBaseClass(oRouteClassName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRouteClassName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppClass##classe::AppGetGroupBaseClass(CATBSTR & oGroupClassName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oGroupClassName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetGroupBaseClass(oGroupClassName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oGroupClassName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppClass##classe::AppGetZoneBaseClass(CATBSTR & oZoneClassName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oZoneClassName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetZoneBaseClass(oZoneClassName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oZoneClassName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppClass##classe::AppListValidRouteTypes(CATIASchListOfBSTRs *& oLValidRouteTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLValidRouteTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListValidRouteTypes(oLValidRouteTypes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLValidRouteTypes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppClass##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppClass##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppClass##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppClass##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppClass##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppClass(classe) \
 \
 \
declare_TIE_CATIASchAppClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppClass,"CATIASchAppClass",CATIASchAppClass::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppClass##classe(classe::MetaObject(),CATIASchAppClass::MetaObject(),(void *)CreateTIECATIASchAppClass##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppClass(classe) \
 \
 \
declare_TIE_CATIASchAppClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppClass,"CATIASchAppClass",CATIASchAppClass::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppClass##classe(classe::MetaObject(),CATIASchAppClass::MetaObject(),(void *)CreateTIECATIASchAppClass##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppClass(classe) TIE_CATIASchAppClass(classe)
#else
#define BOA_CATIASchAppClass(classe) CATImplementBOA(CATIASchAppClass, classe)
#endif

#endif
