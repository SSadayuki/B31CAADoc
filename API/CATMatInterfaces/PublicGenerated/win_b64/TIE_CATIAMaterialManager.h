#ifndef __TIE_CATIAMaterialManager
#define __TIE_CATIAMaterialManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMaterialManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMaterialManager */
#define declare_TIE_CATIAMaterialManager(classe) \
 \
 \
class TIECATIAMaterialManager##classe : public CATIAMaterialManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMaterialManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ApplyMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial * iMaterial, short iLinkMode); \
      virtual HRESULT __stdcall ApplyMaterialOnPart(CATIAPart * iPart, CATIAMaterial * iMaterial, short iLinkMode); \
      virtual HRESULT __stdcall ApplyMaterialOnBody(CATIABody * iBody, CATIAMaterial * iMaterial, short iLinkMode); \
      virtual HRESULT __stdcall ApplyMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial * iMaterial, short iLinkMode); \
      virtual HRESULT __stdcall GetMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial *& oMaterial); \
      virtual HRESULT __stdcall GetMaterialOnPart(CATIAPart * iPart, CATIAMaterial *& oMaterial); \
      virtual HRESULT __stdcall GetMaterialOnBody(CATIABody * iBody, CATIAMaterial *& oMaterial); \
      virtual HRESULT __stdcall GetMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial *& oMaterial); \
      virtual HRESULT __stdcall ReplaceMaterialLinks(CATIAMaterial * iMaterial1, CATIAMaterial * iMaterial2); \
      virtual HRESULT __stdcall ApplyMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial * iMaterial, short iLinkMode); \
      virtual HRESULT __stdcall GetMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial *& oMaterial); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMaterialManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ApplyMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial * iMaterial, short iLinkMode); \
virtual HRESULT __stdcall ApplyMaterialOnPart(CATIAPart * iPart, CATIAMaterial * iMaterial, short iLinkMode); \
virtual HRESULT __stdcall ApplyMaterialOnBody(CATIABody * iBody, CATIAMaterial * iMaterial, short iLinkMode); \
virtual HRESULT __stdcall ApplyMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial * iMaterial, short iLinkMode); \
virtual HRESULT __stdcall GetMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial *& oMaterial); \
virtual HRESULT __stdcall GetMaterialOnPart(CATIAPart * iPart, CATIAMaterial *& oMaterial); \
virtual HRESULT __stdcall GetMaterialOnBody(CATIABody * iBody, CATIAMaterial *& oMaterial); \
virtual HRESULT __stdcall GetMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial *& oMaterial); \
virtual HRESULT __stdcall ReplaceMaterialLinks(CATIAMaterial * iMaterial1, CATIAMaterial * iMaterial2); \
virtual HRESULT __stdcall ApplyMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial * iMaterial, short iLinkMode); \
virtual HRESULT __stdcall GetMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial *& oMaterial); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMaterialManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ApplyMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)ApplyMaterialOnProduct(iProduct,iMaterial,iLinkMode)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyMaterialOnPart(CATIAPart * iPart, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)ApplyMaterialOnPart(iPart,iMaterial,iLinkMode)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyMaterialOnBody(CATIABody * iBody, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)ApplyMaterialOnBody(iBody,iMaterial,iLinkMode)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)ApplyMaterialOnHybridBody(iHybridBody,iMaterial,iLinkMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial *& oMaterial) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)GetMaterialOnProduct(iProduct,oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaterialOnPart(CATIAPart * iPart, CATIAMaterial *& oMaterial) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)GetMaterialOnPart(iPart,oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaterialOnBody(CATIABody * iBody, CATIAMaterial *& oMaterial) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)GetMaterialOnBody(iBody,oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial *& oMaterial) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)GetMaterialOnHybridBody(iHybridBody,oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceMaterialLinks(CATIAMaterial * iMaterial1, CATIAMaterial * iMaterial2) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)ReplaceMaterialLinks(iMaterial1,iMaterial2)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)ApplyMaterialOnUserMaterial(iUserMaterial,iMaterial,iLinkMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial *& oMaterial) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)GetMaterialOnUserMaterial(iUserMaterial,oMaterial)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMaterialManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMaterialManager(classe)    TIECATIAMaterialManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMaterialManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMaterialManager, classe) \
 \
 \
CATImplementTIEMethods(CATIAMaterialManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMaterialManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMaterialManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMaterialManager, classe) \
 \
HRESULT __stdcall  TIECATIAMaterialManager##classe::ApplyMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iProduct,&iMaterial,&iLinkMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyMaterialOnProduct(iProduct,iMaterial,iLinkMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iProduct,&iMaterial,&iLinkMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::ApplyMaterialOnPart(CATIAPart * iPart, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPart,&iMaterial,&iLinkMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyMaterialOnPart(iPart,iMaterial,iLinkMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPart,&iMaterial,&iLinkMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::ApplyMaterialOnBody(CATIABody * iBody, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iBody,&iMaterial,&iLinkMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyMaterialOnBody(iBody,iMaterial,iLinkMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iBody,&iMaterial,&iLinkMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::ApplyMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iHybridBody,&iMaterial,&iLinkMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyMaterialOnHybridBody(iHybridBody,iMaterial,iLinkMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iHybridBody,&iMaterial,&iLinkMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::GetMaterialOnProduct(CATIAProduct * iProduct, CATIAMaterial *& oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iProduct,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaterialOnProduct(iProduct,oMaterial); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iProduct,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::GetMaterialOnPart(CATIAPart * iPart, CATIAMaterial *& oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPart,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaterialOnPart(iPart,oMaterial); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPart,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::GetMaterialOnBody(CATIABody * iBody, CATIAMaterial *& oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iBody,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaterialOnBody(iBody,oMaterial); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iBody,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::GetMaterialOnHybridBody(CATIAHybridBody * iHybridBody, CATIAMaterial *& oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iHybridBody,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaterialOnHybridBody(iHybridBody,oMaterial); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iHybridBody,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::ReplaceMaterialLinks(CATIAMaterial * iMaterial1, CATIAMaterial * iMaterial2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iMaterial1,&iMaterial2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceMaterialLinks(iMaterial1,iMaterial2); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iMaterial1,&iMaterial2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::ApplyMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial * iMaterial, short iLinkMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iUserMaterial,&iMaterial,&iLinkMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyMaterialOnUserMaterial(iUserMaterial,iMaterial,iLinkMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iUserMaterial,&iMaterial,&iLinkMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterialManager##classe::GetMaterialOnUserMaterial(CATIABase * iUserMaterial, CATIAMaterial *& oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iUserMaterial,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaterialOnUserMaterial(iUserMaterial,oMaterial); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iUserMaterial,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterialManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMaterialManager(classe) \
 \
 \
declare_TIE_CATIAMaterialManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterialManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterialManager,"CATIAMaterialManager",CATIAMaterialManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterialManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMaterialManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterialManager##classe(classe::MetaObject(),CATIAMaterialManager::MetaObject(),(void *)CreateTIECATIAMaterialManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMaterialManager(classe) \
 \
 \
declare_TIE_CATIAMaterialManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterialManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterialManager,"CATIAMaterialManager",CATIAMaterialManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterialManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMaterialManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterialManager##classe(classe::MetaObject(),CATIAMaterialManager::MetaObject(),(void *)CreateTIECATIAMaterialManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMaterialManager(classe) TIE_CATIAMaterialManager(classe)
#else
#define BOA_CATIAMaterialManager(classe) CATImplementBOA(CATIAMaterialManager, classe)
#endif

#endif
