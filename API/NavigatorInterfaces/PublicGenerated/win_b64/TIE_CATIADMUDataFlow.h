#ifndef __TIE_CATIADMUDataFlow
#define __TIE_CATIADMUDataFlow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADMUDataFlow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADMUDataFlow */
#define declare_TIE_CATIADMUDataFlow(classe) \
 \
 \
class TIECATIADMUDataFlow##classe : public CATIADMUDataFlow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADMUDataFlow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SaveAsFrozen(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData, CATLONG iCache); \
      virtual HRESULT __stdcall CacheExport(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData); \
      virtual HRESULT __stdcall CacheImport(const CATBSTR & iDirectory); \
      virtual HRESULT __stdcall ReplaceByCGR(const CATBSTR & iDirectory, const CATBSTR & iPrefix); \
      virtual HRESULT __stdcall Collapse(); \
      virtual HRESULT __stdcall Load(const CATBSTR & iName, CATBaseDispatch *& oDocument); \
      virtual HRESULT __stdcall Execute(const CATBSTR & iCommand); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADMUDataFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SaveAsFrozen(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData, CATLONG iCache); \
virtual HRESULT __stdcall CacheExport(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData); \
virtual HRESULT __stdcall CacheImport(const CATBSTR & iDirectory); \
virtual HRESULT __stdcall ReplaceByCGR(const CATBSTR & iDirectory, const CATBSTR & iPrefix); \
virtual HRESULT __stdcall Collapse(); \
virtual HRESULT __stdcall Load(const CATBSTR & iName, CATBaseDispatch *& oDocument); \
virtual HRESULT __stdcall Execute(const CATBSTR & iCommand); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADMUDataFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SaveAsFrozen(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData, CATLONG iCache) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)SaveAsFrozen(iDirectory,iPrefix,iData,iCache)); \
} \
HRESULT __stdcall  ENVTIEName::CacheExport(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)CacheExport(iDirectory,iPrefix,iData)); \
} \
HRESULT __stdcall  ENVTIEName::CacheImport(const CATBSTR & iDirectory) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)CacheImport(iDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceByCGR(const CATBSTR & iDirectory, const CATBSTR & iPrefix) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)ReplaceByCGR(iDirectory,iPrefix)); \
} \
HRESULT __stdcall  ENVTIEName::Collapse() \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)Collapse()); \
} \
HRESULT __stdcall  ENVTIEName::Load(const CATBSTR & iName, CATBaseDispatch *& oDocument) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)Load(iName,oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::Execute(const CATBSTR & iCommand) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)Execute(iCommand)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADMUDataFlow,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADMUDataFlow(classe)    TIECATIADMUDataFlow##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADMUDataFlow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADMUDataFlow, classe) \
 \
 \
CATImplementTIEMethods(CATIADMUDataFlow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADMUDataFlow, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADMUDataFlow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADMUDataFlow, classe) \
 \
HRESULT __stdcall  TIECATIADMUDataFlow##classe::SaveAsFrozen(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData, CATLONG iCache) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDirectory,&iPrefix,&iData,&iCache); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveAsFrozen(iDirectory,iPrefix,iData,iCache); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDirectory,&iPrefix,&iData,&iCache); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUDataFlow##classe::CacheExport(const CATBSTR & iDirectory, const CATBSTR & iPrefix, CATLONG iData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDirectory,&iPrefix,&iData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CacheExport(iDirectory,iPrefix,iData); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDirectory,&iPrefix,&iData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUDataFlow##classe::CacheImport(const CATBSTR & iDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CacheImport(iDirectory); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUDataFlow##classe::ReplaceByCGR(const CATBSTR & iDirectory, const CATBSTR & iPrefix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDirectory,&iPrefix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceByCGR(iDirectory,iPrefix); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDirectory,&iPrefix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUDataFlow##classe::Collapse() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Collapse(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUDataFlow##classe::Load(const CATBSTR & iName, CATBaseDispatch *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Load(iName,oDocument); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUDataFlow##classe::Execute(const CATBSTR & iCommand) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iCommand); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Execute(iCommand); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iCommand); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUDataFlow##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUDataFlow##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUDataFlow##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUDataFlow##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUDataFlow##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADMUDataFlow(classe) \
 \
 \
declare_TIE_CATIADMUDataFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUDataFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUDataFlow,"CATIADMUDataFlow",CATIADMUDataFlow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUDataFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADMUDataFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUDataFlow##classe(classe::MetaObject(),CATIADMUDataFlow::MetaObject(),(void *)CreateTIECATIADMUDataFlow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADMUDataFlow(classe) \
 \
 \
declare_TIE_CATIADMUDataFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUDataFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUDataFlow,"CATIADMUDataFlow",CATIADMUDataFlow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUDataFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADMUDataFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUDataFlow##classe(classe::MetaObject(),CATIADMUDataFlow::MetaObject(),(void *)CreateTIECATIADMUDataFlow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADMUDataFlow(classe) TIE_CATIADMUDataFlow(classe)
#else
#define BOA_CATIADMUDataFlow(classe) CATImplementBOA(CATIADMUDataFlow, classe)
#endif

#endif
