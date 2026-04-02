#ifndef __TIE_CATIASfmEndcut
#define __TIE_CATIASfmEndcut

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmEndcut.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmEndcut */
#define declare_TIE_CATIASfmEndcut(classe) \
 \
 \
class TIECATIASfmEndcut##classe : public CATIASfmEndcut \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmEndcut, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetEndcutinfo(CATBSTR & oTypeOfEndcut, CATBSTR & oNameOfEndcut, CATIASfmReferences *& oListOfEndcutContexts, CATIASfmConnectionParameters *& oListOfEndcutParams, CATSafeArrayVariant *& oListOfEndCutParamNames); \
      virtual HRESULT __stdcall GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate); \
      virtual HRESULT __stdcall UpdateConnectionsSet(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmEndcut(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetEndcutinfo(CATBSTR & oTypeOfEndcut, CATBSTR & oNameOfEndcut, CATIASfmReferences *& oListOfEndcutContexts, CATIASfmConnectionParameters *& oListOfEndcutParams, CATSafeArrayVariant *& oListOfEndCutParamNames); \
virtual HRESULT __stdcall GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate); \
virtual HRESULT __stdcall UpdateConnectionsSet(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmEndcut(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetEndcutinfo(CATBSTR & oTypeOfEndcut, CATBSTR & oNameOfEndcut, CATIASfmReferences *& oListOfEndcutContexts, CATIASfmConnectionParameters *& oListOfEndcutParams, CATSafeArrayVariant *& oListOfEndCutParamNames) \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)GetEndcutinfo(oTypeOfEndcut,oNameOfEndcut,oListOfEndcutContexts,oListOfEndcutParams,oListOfEndCutParamNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate) \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)GetConnectionCoordinate(oCoordinate)); \
} \
HRESULT __stdcall  ENVTIEName::UpdateConnectionsSet() \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)UpdateConnectionsSet()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmEndcut,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmEndcut(classe)    TIECATIASfmEndcut##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmEndcut(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmEndcut, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmEndcut, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmEndcut, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmEndcut, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmEndcut, classe) \
 \
HRESULT __stdcall  TIECATIASfmEndcut##classe::GetEndcutinfo(CATBSTR & oTypeOfEndcut, CATBSTR & oNameOfEndcut, CATIASfmReferences *& oListOfEndcutContexts, CATIASfmConnectionParameters *& oListOfEndcutParams, CATSafeArrayVariant *& oListOfEndCutParamNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oTypeOfEndcut,&oNameOfEndcut,&oListOfEndcutContexts,&oListOfEndcutParams,&oListOfEndCutParamNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndcutinfo(oTypeOfEndcut,oNameOfEndcut,oListOfEndcutContexts,oListOfEndcutParams,oListOfEndCutParamNames); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oTypeOfEndcut,&oNameOfEndcut,&oListOfEndcutContexts,&oListOfEndcutParams,&oListOfEndCutParamNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmEndcut##classe::GetConnectionCoordinate(CATSafeArrayVariant *& oCoordinate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCoordinate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectionCoordinate(oCoordinate); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCoordinate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmEndcut##classe::UpdateConnectionsSet() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateConnectionsSet(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcut##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcut##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcut##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcut##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcut##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmEndcut(classe) \
 \
 \
declare_TIE_CATIASfmEndcut(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmEndcut##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmEndcut,"CATIASfmEndcut",CATIASfmEndcut::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmEndcut(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmEndcut, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmEndcut##classe(classe::MetaObject(),CATIASfmEndcut::MetaObject(),(void *)CreateTIECATIASfmEndcut##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmEndcut(classe) \
 \
 \
declare_TIE_CATIASfmEndcut(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmEndcut##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmEndcut,"CATIASfmEndcut",CATIASfmEndcut::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmEndcut(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmEndcut, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmEndcut##classe(classe::MetaObject(),CATIASfmEndcut::MetaObject(),(void *)CreateTIECATIASfmEndcut##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmEndcut(classe) TIE_CATIASfmEndcut(classe)
#else
#define BOA_CATIASfmEndcut(classe) CATImplementBOA(CATIASfmEndcut, classe)
#endif

#endif
