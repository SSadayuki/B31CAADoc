#ifndef __TIE_CATIASchAppRoute
#define __TIE_CATIASchAppRoute

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppRoute.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppRoute */
#define declare_TIE_CATIASchAppRoute(classe) \
 \
 \
class TIECATIASchAppRoute##classe : public CATIASchAppRoute \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppRoute, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppCreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchAppRoute *& oSchAppRoute); \
      virtual HRESULT __stdcall AppPostBreakProcess(CATIASchRoute * iOldAppRoute, CATIASchRoute * iNewAppRoute); \
      virtual HRESULT __stdcall AppPostConcatenateProcess(CATIASchRoute * iSchRoute2); \
      virtual HRESULT __stdcall AppOKToModifyPoints(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToBreak(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToConcatenate(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppOKToBranch(const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppBreak(CATIABase *& oNewAppRoute); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppCreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchAppRoute *& oSchAppRoute); \
virtual HRESULT __stdcall AppPostBreakProcess(CATIASchRoute * iOldAppRoute, CATIASchRoute * iNewAppRoute); \
virtual HRESULT __stdcall AppPostConcatenateProcess(CATIASchRoute * iSchRoute2); \
virtual HRESULT __stdcall AppOKToModifyPoints(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToBreak(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToConcatenate(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppOKToBranch(const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppBreak(CATIABase *& oNewAppRoute); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppRoute(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppCreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchAppRoute *& oSchAppRoute) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppCreateLocalReference(iDocumentToPutCopyIn,oSchAppRoute)); \
} \
HRESULT __stdcall  ENVTIEName::AppPostBreakProcess(CATIASchRoute * iOldAppRoute, CATIASchRoute * iNewAppRoute) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppPostBreakProcess(iOldAppRoute,iNewAppRoute)); \
} \
HRESULT __stdcall  ENVTIEName::AppPostConcatenateProcess(CATIASchRoute * iSchRoute2) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppPostConcatenateProcess(iSchRoute2)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToModifyPoints(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToModifyPoints(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToBreak(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToBreak(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToConcatenate(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToConcatenate(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppOKToBranch(const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppOKToBranch(iBranchClassType,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppBreak(CATIABase *& oNewAppRoute) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)AppBreak(oNewAppRoute)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppRoute,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppRoute(classe)    TIECATIASchAppRoute##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppRoute(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppRoute, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppRoute, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppRoute, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppRoute, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppRoute, classe) \
 \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppCreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchAppRoute *& oSchAppRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDocumentToPutCopyIn,&oSchAppRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateLocalReference(iDocumentToPutCopyIn,oSchAppRoute); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDocumentToPutCopyIn,&oSchAppRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppPostBreakProcess(CATIASchRoute * iOldAppRoute, CATIASchRoute * iNewAppRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iOldAppRoute,&iNewAppRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostBreakProcess(iOldAppRoute,iNewAppRoute); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iOldAppRoute,&iNewAppRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppPostConcatenateProcess(CATIASchRoute * iSchRoute2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iSchRoute2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostConcatenateProcess(iSchRoute2); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iSchRoute2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppOKToModifyPoints(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToModifyPoints(oBYes); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppOKToBreak(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToBreak(oBYes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppOKToConcatenate(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToConcatenate(oBYes); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppOKToBranch(const CATBSTR & iBranchClassType, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iBranchClassType,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToBranch(iBranchClassType,oBYes); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iBranchClassType,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppRoute##classe::AppBreak(CATIABase *& oNewAppRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNewAppRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppBreak(oNewAppRoute); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNewAppRoute); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppRoute##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppRoute##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppRoute##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppRoute##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppRoute##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppRoute(classe) \
 \
 \
declare_TIE_CATIASchAppRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppRoute,"CATIASchAppRoute",CATIASchAppRoute::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppRoute##classe(classe::MetaObject(),CATIASchAppRoute::MetaObject(),(void *)CreateTIECATIASchAppRoute##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppRoute(classe) \
 \
 \
declare_TIE_CATIASchAppRoute(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppRoute##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppRoute,"CATIASchAppRoute",CATIASchAppRoute::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppRoute(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppRoute, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppRoute##classe(classe::MetaObject(),CATIASchAppRoute::MetaObject(),(void *)CreateTIECATIASchAppRoute##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppRoute(classe) TIE_CATIASchAppRoute(classe)
#else
#define BOA_CATIASchAppRoute(classe) CATImplementBOA(CATIASchAppRoute, classe)
#endif

#endif
