#ifndef __TIE_CATIATlgWebAccess
#define __TIE_CATIATlgWebAccess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATlgWebAccess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATlgWebAccess */
#define declare_TIE_CATIATlgWebAccess(classe) \
 \
 \
class TIECATIATlgWebAccess##classe : public CATIATlgWebAccess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATlgWebAccess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreatePart(); \
      virtual HRESULT __stdcall InputText(const CATBSTR & opiInText); \
      virtual HRESULT __stdcall SetFullPath(const CATBSTR & opiFullPAth); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATlgWebAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreatePart(); \
virtual HRESULT __stdcall InputText(const CATBSTR & opiInText); \
virtual HRESULT __stdcall SetFullPath(const CATBSTR & opiFullPAth); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATlgWebAccess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreatePart() \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)CreatePart()); \
} \
HRESULT __stdcall  ENVTIEName::InputText(const CATBSTR & opiInText) \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)InputText(opiInText)); \
} \
HRESULT __stdcall  ENVTIEName::SetFullPath(const CATBSTR & opiFullPAth) \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)SetFullPath(opiFullPAth)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATlgWebAccess,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATlgWebAccess(classe)    TIECATIATlgWebAccess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATlgWebAccess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATlgWebAccess, classe) \
 \
 \
CATImplementTIEMethods(CATIATlgWebAccess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATlgWebAccess, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATlgWebAccess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATlgWebAccess, classe) \
 \
HRESULT __stdcall  TIECATIATlgWebAccess##classe::CreatePart() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreatePart(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATlgWebAccess##classe::InputText(const CATBSTR & opiInText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&opiInText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InputText(opiInText); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&opiInText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATlgWebAccess##classe::SetFullPath(const CATBSTR & opiFullPAth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&opiFullPAth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFullPath(opiFullPAth); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&opiFullPAth); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATlgWebAccess##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATlgWebAccess##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATlgWebAccess##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATlgWebAccess##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATlgWebAccess##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATlgWebAccess(classe) \
 \
 \
declare_TIE_CATIATlgWebAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATlgWebAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATlgWebAccess,"CATIATlgWebAccess",CATIATlgWebAccess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATlgWebAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATlgWebAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATlgWebAccess##classe(classe::MetaObject(),CATIATlgWebAccess::MetaObject(),(void *)CreateTIECATIATlgWebAccess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATlgWebAccess(classe) \
 \
 \
declare_TIE_CATIATlgWebAccess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATlgWebAccess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATlgWebAccess,"CATIATlgWebAccess",CATIATlgWebAccess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATlgWebAccess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATlgWebAccess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATlgWebAccess##classe(classe::MetaObject(),CATIATlgWebAccess::MetaObject(),(void *)CreateTIECATIATlgWebAccess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATlgWebAccess(classe) TIE_CATIATlgWebAccess(classe)
#else
#define BOA_CATIATlgWebAccess(classe) CATImplementBOA(CATIATlgWebAccess, classe)
#endif

#endif
