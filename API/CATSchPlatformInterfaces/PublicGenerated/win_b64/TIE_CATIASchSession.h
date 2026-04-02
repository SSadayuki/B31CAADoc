#ifndef __TIE_CATIASchSession
#define __TIE_CATIASchSession

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchSession.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchSession */
#define declare_TIE_CATIASchSession(classe) \
 \
 \
class TIECATIASchSession##classe : public CATIASchSession \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchSession, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateDocument(const CATBSTR & iDocType, CAT_VARIANT_BOOL iBInteractive, CATIADocument *& oNewDoc); \
      virtual HRESULT __stdcall GetSchExtContainer(CATIADocument * iDoc, CATIABase *& oContainer); \
      virtual HRESULT __stdcall GetCurrentApplicationID(CATBSTR & oApplicationID); \
      virtual HRESULT __stdcall SetCurrentApplicationID(const CATBSTR & iApplicationID); \
      virtual HRESULT __stdcall GetCurrentDocument(CATIADocument *& oCurDoc); \
      virtual HRESULT __stdcall SetCurrentDocument(CATIADocument * iCurDoc); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchSession(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateDocument(const CATBSTR & iDocType, CAT_VARIANT_BOOL iBInteractive, CATIADocument *& oNewDoc); \
virtual HRESULT __stdcall GetSchExtContainer(CATIADocument * iDoc, CATIABase *& oContainer); \
virtual HRESULT __stdcall GetCurrentApplicationID(CATBSTR & oApplicationID); \
virtual HRESULT __stdcall SetCurrentApplicationID(const CATBSTR & iApplicationID); \
virtual HRESULT __stdcall GetCurrentDocument(CATIADocument *& oCurDoc); \
virtual HRESULT __stdcall SetCurrentDocument(CATIADocument * iCurDoc); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchSession(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateDocument(const CATBSTR & iDocType, CAT_VARIANT_BOOL iBInteractive, CATIADocument *& oNewDoc) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)CreateDocument(iDocType,iBInteractive,oNewDoc)); \
} \
HRESULT __stdcall  ENVTIEName::GetSchExtContainer(CATIADocument * iDoc, CATIABase *& oContainer) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)GetSchExtContainer(iDoc,oContainer)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurrentApplicationID(CATBSTR & oApplicationID) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)GetCurrentApplicationID(oApplicationID)); \
} \
HRESULT __stdcall  ENVTIEName::SetCurrentApplicationID(const CATBSTR & iApplicationID) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)SetCurrentApplicationID(iApplicationID)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurrentDocument(CATIADocument *& oCurDoc) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)GetCurrentDocument(oCurDoc)); \
} \
HRESULT __stdcall  ENVTIEName::SetCurrentDocument(CATIADocument * iCurDoc) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)SetCurrentDocument(iCurDoc)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchSession,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchSession(classe)    TIECATIASchSession##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchSession(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchSession, classe) \
 \
 \
CATImplementTIEMethods(CATIASchSession, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchSession, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchSession, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchSession, classe) \
 \
HRESULT __stdcall  TIECATIASchSession##classe::CreateDocument(const CATBSTR & iDocType, CAT_VARIANT_BOOL iBInteractive, CATIADocument *& oNewDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDocType,&iBInteractive,&oNewDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDocument(iDocType,iBInteractive,oNewDoc); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDocType,&iBInteractive,&oNewDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchSession##classe::GetSchExtContainer(CATIADocument * iDoc, CATIABase *& oContainer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDoc,&oContainer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSchExtContainer(iDoc,oContainer); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDoc,&oContainer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchSession##classe::GetCurrentApplicationID(CATBSTR & oApplicationID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplicationID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentApplicationID(oApplicationID); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplicationID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchSession##classe::SetCurrentApplicationID(const CATBSTR & iApplicationID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iApplicationID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentApplicationID(iApplicationID); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iApplicationID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchSession##classe::GetCurrentDocument(CATIADocument *& oCurDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCurDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentDocument(oCurDoc); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCurDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchSession##classe::SetCurrentDocument(CATIADocument * iCurDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCurDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentDocument(iCurDoc); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCurDoc); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchSession##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchSession##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchSession##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchSession##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchSession##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchSession(classe) \
 \
 \
declare_TIE_CATIASchSession(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchSession##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchSession,"CATIASchSession",CATIASchSession::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchSession(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchSession, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchSession##classe(classe::MetaObject(),CATIASchSession::MetaObject(),(void *)CreateTIECATIASchSession##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchSession(classe) \
 \
 \
declare_TIE_CATIASchSession(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchSession##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchSession,"CATIASchSession",CATIASchSession::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchSession(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchSession, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchSession##classe(classe::MetaObject(),CATIASchSession::MetaObject(),(void *)CreateTIECATIASchSession##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchSession(classe) TIE_CATIASchSession(classe)
#else
#define BOA_CATIASchSession(classe) CATImplementBOA(CATIASchSession, classe)
#endif

#endif
