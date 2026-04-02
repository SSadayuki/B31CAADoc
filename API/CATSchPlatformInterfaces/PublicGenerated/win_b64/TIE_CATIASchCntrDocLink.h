#ifndef __TIE_CATIASchCntrDocLink
#define __TIE_CATIASchCntrDocLink

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCntrDocLink.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCntrDocLink */
#define declare_TIE_CATIASchCntrDocLink(classe) \
 \
 \
class TIECATIASchCntrDocLink##classe : public CATIASchCntrDocLink \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCntrDocLink, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Link(CATIASchAppConnector * iSchConnector); \
      virtual HRESULT __stdcall UnLink(); \
      virtual HRESULT __stdcall GetLink(CATIASchAppConnector *& oSchConnector, CATBSTR & oDocumentName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCntrDocLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Link(CATIASchAppConnector * iSchConnector); \
virtual HRESULT __stdcall UnLink(); \
virtual HRESULT __stdcall GetLink(CATIASchAppConnector *& oSchConnector, CATBSTR & oDocumentName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCntrDocLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Link(CATIASchAppConnector * iSchConnector) \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)Link(iSchConnector)); \
} \
HRESULT __stdcall  ENVTIEName::UnLink() \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)UnLink()); \
} \
HRESULT __stdcall  ENVTIEName::GetLink(CATIASchAppConnector *& oSchConnector, CATBSTR & oDocumentName) \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)GetLink(oSchConnector,oDocumentName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCntrDocLink,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCntrDocLink(classe)    TIECATIASchCntrDocLink##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCntrDocLink(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCntrDocLink, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCntrDocLink, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCntrDocLink, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCntrDocLink, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCntrDocLink, classe) \
 \
HRESULT __stdcall  TIECATIASchCntrDocLink##classe::Link(CATIASchAppConnector * iSchConnector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSchConnector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Link(iSchConnector); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSchConnector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrDocLink##classe::UnLink() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnLink(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrDocLink##classe::GetLink(CATIASchAppConnector *& oSchConnector, CATBSTR & oDocumentName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSchConnector,&oDocumentName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLink(oSchConnector,oDocumentName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSchConnector,&oDocumentName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrDocLink##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrDocLink##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrDocLink##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrDocLink##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrDocLink##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCntrDocLink(classe) \
 \
 \
declare_TIE_CATIASchCntrDocLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrDocLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrDocLink,"CATIASchCntrDocLink",CATIASchCntrDocLink::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrDocLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCntrDocLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrDocLink##classe(classe::MetaObject(),CATIASchCntrDocLink::MetaObject(),(void *)CreateTIECATIASchCntrDocLink##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCntrDocLink(classe) \
 \
 \
declare_TIE_CATIASchCntrDocLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrDocLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrDocLink,"CATIASchCntrDocLink",CATIASchCntrDocLink::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrDocLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCntrDocLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrDocLink##classe(classe::MetaObject(),CATIASchCntrDocLink::MetaObject(),(void *)CreateTIECATIASchCntrDocLink##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCntrDocLink(classe) TIE_CATIASchCntrDocLink(classe)
#else
#define BOA_CATIASchCntrDocLink(classe) CATImplementBOA(CATIASchCntrDocLink, classe)
#endif

#endif
