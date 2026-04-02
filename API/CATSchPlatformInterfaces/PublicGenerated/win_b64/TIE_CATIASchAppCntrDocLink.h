#ifndef __TIE_CATIASchAppCntrDocLink
#define __TIE_CATIASchAppCntrDocLink

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppCntrDocLink.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppCntrDocLink */
#define declare_TIE_CATIASchAppCntrDocLink(classe) \
 \
 \
class TIECATIASchAppCntrDocLink##classe : public CATIASchAppCntrDocLink \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppCntrDocLink, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppLink(CATIASchAppConnector * iSchConnector); \
      virtual HRESULT __stdcall AppUnLink(CATLONG iUnpublish); \
      virtual HRESULT __stdcall AppGetLink(CATIASchListOfObjects *& oLCntrs, CATIASchListOfBSTRs *& oLDocumentNames, CATBSTR & oPublicationName); \
      virtual HRESULT __stdcall AppIsLinkable(CATIASchAppConnector * iSchConnector, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppLinkInit(const CATBSTR & iPublicationName); \
      virtual HRESULT __stdcall AppGetLinkedDocs(CATBSTR & oPublicationName, CATIASchListOfBSTRs *& oLDocumentName, CATIASchListOfBSTRs *& oLDocumentUuid, CATIASchListOfLongs *& oLOpenStatus, CATIASchListOfObjects *& oLCntr); \
      virtual HRESULT __stdcall AppOpenLinkedDoc(const CATBSTR & iDocumentName, const CATBSTR & iDocumentUuid, CATIADocument *& oDocument); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppCntrDocLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppLink(CATIASchAppConnector * iSchConnector); \
virtual HRESULT __stdcall AppUnLink(CATLONG iUnpublish); \
virtual HRESULT __stdcall AppGetLink(CATIASchListOfObjects *& oLCntrs, CATIASchListOfBSTRs *& oLDocumentNames, CATBSTR & oPublicationName); \
virtual HRESULT __stdcall AppIsLinkable(CATIASchAppConnector * iSchConnector, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppLinkInit(const CATBSTR & iPublicationName); \
virtual HRESULT __stdcall AppGetLinkedDocs(CATBSTR & oPublicationName, CATIASchListOfBSTRs *& oLDocumentName, CATIASchListOfBSTRs *& oLDocumentUuid, CATIASchListOfLongs *& oLOpenStatus, CATIASchListOfObjects *& oLCntr); \
virtual HRESULT __stdcall AppOpenLinkedDoc(const CATBSTR & iDocumentName, const CATBSTR & iDocumentUuid, CATIADocument *& oDocument); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppCntrDocLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppLink(CATIASchAppConnector * iSchConnector) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppLink(iSchConnector)); \
} \
HRESULT __stdcall  ENVTIEName::AppUnLink(CATLONG iUnpublish) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppUnLink(iUnpublish)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetLink(CATIASchListOfObjects *& oLCntrs, CATIASchListOfBSTRs *& oLDocumentNames, CATBSTR & oPublicationName) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppGetLink(oLCntrs,oLDocumentNames,oPublicationName)); \
} \
HRESULT __stdcall  ENVTIEName::AppIsLinkable(CATIASchAppConnector * iSchConnector, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppIsLinkable(iSchConnector,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppLinkInit(const CATBSTR & iPublicationName) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppLinkInit(iPublicationName)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetLinkedDocs(CATBSTR & oPublicationName, CATIASchListOfBSTRs *& oLDocumentName, CATIASchListOfBSTRs *& oLDocumentUuid, CATIASchListOfLongs *& oLOpenStatus, CATIASchListOfObjects *& oLCntr) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppGetLinkedDocs(oPublicationName,oLDocumentName,oLDocumentUuid,oLOpenStatus,oLCntr)); \
} \
HRESULT __stdcall  ENVTIEName::AppOpenLinkedDoc(const CATBSTR & iDocumentName, const CATBSTR & iDocumentUuid, CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppOpenLinkedDoc(iDocumentName,iDocumentUuid,oDocument)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppCntrDocLink(classe)    TIECATIASchAppCntrDocLink##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppCntrDocLink(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppCntrDocLink, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppCntrDocLink, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppCntrDocLink, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppCntrDocLink, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppCntrDocLink, classe) \
 \
HRESULT __stdcall  TIECATIASchAppCntrDocLink##classe::AppLink(CATIASchAppConnector * iSchConnector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSchConnector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppLink(iSchConnector); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSchConnector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrDocLink##classe::AppUnLink(CATLONG iUnpublish) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iUnpublish); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppUnLink(iUnpublish); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iUnpublish); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrDocLink##classe::AppGetLink(CATIASchListOfObjects *& oLCntrs, CATIASchListOfBSTRs *& oLDocumentNames, CATBSTR & oPublicationName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLCntrs,&oLDocumentNames,&oPublicationName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetLink(oLCntrs,oLDocumentNames,oPublicationName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLCntrs,&oLDocumentNames,&oPublicationName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrDocLink##classe::AppIsLinkable(CATIASchAppConnector * iSchConnector, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSchConnector,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsLinkable(iSchConnector,oBYes); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSchConnector,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrDocLink##classe::AppLinkInit(const CATBSTR & iPublicationName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPublicationName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppLinkInit(iPublicationName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPublicationName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrDocLink##classe::AppGetLinkedDocs(CATBSTR & oPublicationName, CATIASchListOfBSTRs *& oLDocumentName, CATIASchListOfBSTRs *& oLDocumentUuid, CATIASchListOfLongs *& oLOpenStatus, CATIASchListOfObjects *& oLCntr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPublicationName,&oLDocumentName,&oLDocumentUuid,&oLOpenStatus,&oLCntr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetLinkedDocs(oPublicationName,oLDocumentName,oLDocumentUuid,oLOpenStatus,oLCntr); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPublicationName,&oLDocumentName,&oLDocumentUuid,&oLOpenStatus,&oLCntr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrDocLink##classe::AppOpenLinkedDoc(const CATBSTR & iDocumentName, const CATBSTR & iDocumentUuid, CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iDocumentName,&iDocumentUuid,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOpenLinkedDoc(iDocumentName,iDocumentUuid,oDocument); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iDocumentName,&iDocumentUuid,&oDocument); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrDocLink##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrDocLink##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrDocLink##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrDocLink##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrDocLink##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppCntrDocLink(classe) \
 \
 \
declare_TIE_CATIASchAppCntrDocLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrDocLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrDocLink,"CATIASchAppCntrDocLink",CATIASchAppCntrDocLink::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrDocLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppCntrDocLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrDocLink##classe(classe::MetaObject(),CATIASchAppCntrDocLink::MetaObject(),(void *)CreateTIECATIASchAppCntrDocLink##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppCntrDocLink(classe) \
 \
 \
declare_TIE_CATIASchAppCntrDocLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrDocLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrDocLink,"CATIASchAppCntrDocLink",CATIASchAppCntrDocLink::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrDocLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppCntrDocLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrDocLink##classe(classe::MetaObject(),CATIASchAppCntrDocLink::MetaObject(),(void *)CreateTIECATIASchAppCntrDocLink##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppCntrDocLink(classe) TIE_CATIASchAppCntrDocLink(classe)
#else
#define BOA_CATIASchAppCntrDocLink(classe) CATImplementBOA(CATIASchAppCntrDocLink, classe)
#endif

#endif
