#ifndef __TIE_CATIAPspResource
#define __TIE_CATIAPspResource

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspResource.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspResource */
#define declare_TIE_CATIAPspResource(classe) \
 \
 \
class TIECATIAPspResource##classe : public CATIAPspResource \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspResource, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetResourceValue(const CATBSTR & iResourceName, CATBSTR & oResourceValue); \
      virtual HRESULT __stdcall GetResourcePath(const CATBSTR & iResourceName, CATBSTR & oResourcePath); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspResource(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetResourceValue(const CATBSTR & iResourceName, CATBSTR & oResourceValue); \
virtual HRESULT __stdcall GetResourcePath(const CATBSTR & iResourceName, CATBSTR & oResourcePath); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspResource(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetResourceValue(const CATBSTR & iResourceName, CATBSTR & oResourceValue) \
{ \
return (ENVTIECALL(CATIAPspResource,ENVTIETypeLetter,ENVTIELetter)GetResourceValue(iResourceName,oResourceValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetResourcePath(const CATBSTR & iResourceName, CATBSTR & oResourcePath) \
{ \
return (ENVTIECALL(CATIAPspResource,ENVTIETypeLetter,ENVTIELetter)GetResourcePath(iResourceName,oResourcePath)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspResource,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspResource,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspResource,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspResource,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspResource,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspResource(classe)    TIECATIAPspResource##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspResource(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspResource, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspResource, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspResource, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspResource, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspResource, classe) \
 \
HRESULT __stdcall  TIECATIAPspResource##classe::GetResourceValue(const CATBSTR & iResourceName, CATBSTR & oResourceValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iResourceName,&oResourceValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResourceValue(iResourceName,oResourceValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iResourceName,&oResourceValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspResource##classe::GetResourcePath(const CATBSTR & iResourceName, CATBSTR & oResourcePath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iResourceName,&oResourcePath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResourcePath(iResourceName,oResourcePath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iResourceName,&oResourcePath); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspResource##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspResource##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspResource##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspResource##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspResource##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspResource(classe) \
 \
 \
declare_TIE_CATIAPspResource(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspResource##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspResource,"CATIAPspResource",CATIAPspResource::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspResource(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspResource, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspResource##classe(classe::MetaObject(),CATIAPspResource::MetaObject(),(void *)CreateTIECATIAPspResource##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspResource(classe) \
 \
 \
declare_TIE_CATIAPspResource(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspResource##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspResource,"CATIAPspResource",CATIAPspResource::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspResource(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspResource, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspResource##classe(classe::MetaObject(),CATIAPspResource::MetaObject(),(void *)CreateTIECATIAPspResource##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspResource(classe) TIE_CATIAPspResource(classe)
#else
#define BOA_CATIAPspResource(classe) CATImplementBOA(CATIAPspResource, classe)
#endif

#endif
