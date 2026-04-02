#ifndef __TIE_CATIAExpertReportObjects
#define __TIE_CATIAExpertReportObjects

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertReportObjects.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertReportObjects */
#define declare_TIE_CATIAExpertReportObjects(classe) \
 \
 \
class TIECATIAExpertReportObjects##classe : public CATIAExpertReportObjects \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertReportObjects, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CountSucceed(CATLONG & oNbItems); \
      virtual HRESULT __stdcall get_CountFail(CATLONG & oNbItems); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAExpertReportObject *& oReport); \
      virtual HRESULT __stdcall SucceedItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport); \
      virtual HRESULT __stdcall FailItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAExpertReportObjects(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CountSucceed(CATLONG & oNbItems); \
virtual HRESULT __stdcall get_CountFail(CATLONG & oNbItems); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAExpertReportObject *& oReport); \
virtual HRESULT __stdcall SucceedItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport); \
virtual HRESULT __stdcall FailItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAExpertReportObjects(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CountSucceed(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)get_CountSucceed(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::get_CountFail(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)get_CountFail(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAExpertReportObject *& oReport) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oReport)); \
} \
HRESULT __stdcall  ENVTIEName::SucceedItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)SucceedItem(iIndex,oReport)); \
} \
HRESULT __stdcall  ENVTIEName::FailItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)FailItem(iIndex,oReport)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAExpertReportObjects,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertReportObjects(classe)    TIECATIAExpertReportObjects##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertReportObjects(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertReportObjects, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertReportObjects, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertReportObjects, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertReportObjects, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertReportObjects, classe) \
 \
HRESULT __stdcall  TIECATIAExpertReportObjects##classe::get_CountSucceed(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CountSucceed(oNbItems); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertReportObjects##classe::get_CountFail(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CountFail(oNbItems); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertReportObjects##classe::Item(const CATVariant & iIndex, CATIAExpertReportObject *& oReport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oReport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oReport); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oReport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertReportObjects##classe::SucceedItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oReport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SucceedItem(iIndex,oReport); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oReport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertReportObjects##classe::FailItem(const CATVariant & iIndex, CATIAExpertReportObject *& oReport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex,&oReport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FailItem(iIndex,oReport); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex,&oReport); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObjects##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObjects##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObjects##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObjects##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObjects##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObjects##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertReportObjects(classe) \
 \
 \
declare_TIE_CATIAExpertReportObjects(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertReportObjects##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertReportObjects,"CATIAExpertReportObjects",CATIAExpertReportObjects::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertReportObjects(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertReportObjects, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertReportObjects##classe(classe::MetaObject(),CATIAExpertReportObjects::MetaObject(),(void *)CreateTIECATIAExpertReportObjects##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertReportObjects(classe) \
 \
 \
declare_TIE_CATIAExpertReportObjects(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertReportObjects##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertReportObjects,"CATIAExpertReportObjects",CATIAExpertReportObjects::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertReportObjects(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertReportObjects, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertReportObjects##classe(classe::MetaObject(),CATIAExpertReportObjects::MetaObject(),(void *)CreateTIECATIAExpertReportObjects##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertReportObjects(classe) TIE_CATIAExpertReportObjects(classe)
#else
#define BOA_CATIAExpertReportObjects(classe) CATImplementBOA(CATIAExpertReportObjects, classe)
#endif

#endif
