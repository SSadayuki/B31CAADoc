#ifndef __TIE_CATIAFunctScripts
#define __TIE_CATIAFunctScripts

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctScripts.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctScripts */
#define declare_TIE_CATIAFunctScripts(classe) \
 \
 \
class TIECATIAFunctScripts##classe : public CATIAFunctScripts \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctScripts, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctScript *& oScript); \
      virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctScript *& oScript); \
      virtual HRESULT __stdcall Delete(CATIAFunctScript * iScript); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFunctScripts(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctScript *& oScript); \
virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctScript *& oScript); \
virtual HRESULT __stdcall Delete(CATIAFunctScript * iScript); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFunctScripts(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Elem(const CATVariant & iIndex, CATIAFunctScript *& oScript) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)Elem(iIndex,oScript)); \
} \
HRESULT __stdcall  ENVTIEName::Create(const CATBSTR & iName, CATIAFunctScript *& oScript) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)Create(iName,oScript)); \
} \
HRESULT __stdcall  ENVTIEName::Delete(CATIAFunctScript * iScript) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)Delete(iScript)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFunctScripts,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctScripts(classe)    TIECATIAFunctScripts##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctScripts(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctScripts, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctScripts, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctScripts, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctScripts, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctScripts, classe) \
 \
HRESULT __stdcall  TIECATIAFunctScripts##classe::Elem(const CATVariant & iIndex, CATIAFunctScript *& oScript) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oScript); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Elem(iIndex,oScript); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oScript); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctScripts##classe::Create(const CATBSTR & iName, CATIAFunctScript *& oScript) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&oScript); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create(iName,oScript); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&oScript); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctScripts##classe::Delete(CATIAFunctScript * iScript) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iScript); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete(iScript); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iScript); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScripts##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScripts##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScripts##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScripts##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScripts##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScripts##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctScripts(classe) \
 \
 \
declare_TIE_CATIAFunctScripts(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctScripts##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctScripts,"CATIAFunctScripts",CATIAFunctScripts::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctScripts(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctScripts, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctScripts##classe(classe::MetaObject(),CATIAFunctScripts::MetaObject(),(void *)CreateTIECATIAFunctScripts##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctScripts(classe) \
 \
 \
declare_TIE_CATIAFunctScripts(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctScripts##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctScripts,"CATIAFunctScripts",CATIAFunctScripts::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctScripts(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctScripts, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctScripts##classe(classe::MetaObject(),CATIAFunctScripts::MetaObject(),(void *)CreateTIECATIAFunctScripts##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctScripts(classe) TIE_CATIAFunctScripts(classe)
#else
#define BOA_CATIAFunctScripts(classe) CATImplementBOA(CATIAFunctScripts, classe)
#endif

#endif
