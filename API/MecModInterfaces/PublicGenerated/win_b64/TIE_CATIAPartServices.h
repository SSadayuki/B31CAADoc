#ifndef __TIE_CATIAPartServices
#define __TIE_CATIAPartServices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPartServices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPartServices */
#define declare_TIE_CATIAPartServices(classe) \
 \
 \
class TIECATIAPartServices##classe : public CATIAPartServices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPartServices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CAT_VARIANT_BOOL iDuplicates, CATIAReferences *& oSubElements); \
      virtual HRESULT __stdcall GetNearSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CATIABase * iNearObject, CATIAReferences *& oSubElements); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPartServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CAT_VARIANT_BOOL iDuplicates, CATIAReferences *& oSubElements); \
virtual HRESULT __stdcall GetNearSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CATIABase * iNearObject, CATIAReferences *& oSubElements); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPartServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CAT_VARIANT_BOOL iDuplicates, CATIAReferences *& oSubElements) \
{ \
return (ENVTIECALL(CATIAPartServices,ENVTIETypeLetter,ENVTIELetter)GetSubElements(iObject,iSubElementDimension,iDuplicates,oSubElements)); \
} \
HRESULT __stdcall  ENVTIEName::GetNearSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CATIABase * iNearObject, CATIAReferences *& oSubElements) \
{ \
return (ENVTIECALL(CATIAPartServices,ENVTIETypeLetter,ENVTIELetter)GetNearSubElements(iObject,iSubElementDimension,iNearObject,oSubElements)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPartServices,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPartServices,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPartServices,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPartServices,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPartServices,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPartServices(classe)    TIECATIAPartServices##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPartServices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPartServices, classe) \
 \
 \
CATImplementTIEMethods(CATIAPartServices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPartServices, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPartServices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPartServices, classe) \
 \
HRESULT __stdcall  TIECATIAPartServices##classe::GetSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CAT_VARIANT_BOOL iDuplicates, CATIAReferences *& oSubElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iObject,&iSubElementDimension,&iDuplicates,&oSubElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubElements(iObject,iSubElementDimension,iDuplicates,oSubElements); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iObject,&iSubElementDimension,&iDuplicates,&oSubElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartServices##classe::GetNearSubElements(CATIABase * iObject, CATLONG iSubElementDimension, CATIABase * iNearObject, CATIAReferences *& oSubElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iObject,&iSubElementDimension,&iNearObject,&oSubElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNearSubElements(iObject,iSubElementDimension,iNearObject,oSubElements); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iObject,&iSubElementDimension,&iNearObject,&oSubElements); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartServices##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartServices##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartServices##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartServices##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartServices##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPartServices(classe) \
 \
 \
declare_TIE_CATIAPartServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPartServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPartServices,"CATIAPartServices",CATIAPartServices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPartServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPartServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPartServices##classe(classe::MetaObject(),CATIAPartServices::MetaObject(),(void *)CreateTIECATIAPartServices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPartServices(classe) \
 \
 \
declare_TIE_CATIAPartServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPartServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPartServices,"CATIAPartServices",CATIAPartServices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPartServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPartServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPartServices##classe(classe::MetaObject(),CATIAPartServices::MetaObject(),(void *)CreateTIECATIAPartServices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPartServices(classe) TIE_CATIAPartServices(classe)
#else
#define BOA_CATIAPartServices(classe) CATImplementBOA(CATIAPartServices, classe)
#endif

#endif
