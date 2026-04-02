#ifndef __TIE_CATIASchCatalogComponent
#define __TIE_CATIASchCatalogComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCatalogComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCatalogComponent */
#define declare_TIE_CATIASchCatalogComponent(classe) \
 \
 \
class TIECATIASchCatalogComponent##classe : public CATIASchCatalogComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCatalogComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall QueryDropAbility(CAT_VARIANT_BOOL & oBYes, CATIASchGRRComp *& oPointedToGRRComp); \
      virtual HRESULT __stdcall QueryDropCompGroupAbility(CAT_VARIANT_BOOL & oBYes, CATIASchCompGroupExt *& oPointedToGroup); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCatalogComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall QueryDropAbility(CAT_VARIANT_BOOL & oBYes, CATIASchGRRComp *& oPointedToGRRComp); \
virtual HRESULT __stdcall QueryDropCompGroupAbility(CAT_VARIANT_BOOL & oBYes, CATIASchCompGroupExt *& oPointedToGroup); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCatalogComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::QueryDropAbility(CAT_VARIANT_BOOL & oBYes, CATIASchGRRComp *& oPointedToGRRComp) \
{ \
return (ENVTIECALL(CATIASchCatalogComponent,ENVTIETypeLetter,ENVTIELetter)QueryDropAbility(oBYes,oPointedToGRRComp)); \
} \
HRESULT __stdcall  ENVTIEName::QueryDropCompGroupAbility(CAT_VARIANT_BOOL & oBYes, CATIASchCompGroupExt *& oPointedToGroup) \
{ \
return (ENVTIECALL(CATIASchCatalogComponent,ENVTIETypeLetter,ENVTIELetter)QueryDropCompGroupAbility(oBYes,oPointedToGroup)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCatalogComponent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCatalogComponent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCatalogComponent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCatalogComponent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCatalogComponent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCatalogComponent(classe)    TIECATIASchCatalogComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCatalogComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCatalogComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCatalogComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCatalogComponent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCatalogComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCatalogComponent, classe) \
 \
HRESULT __stdcall  TIECATIASchCatalogComponent##classe::QueryDropAbility(CAT_VARIANT_BOOL & oBYes, CATIASchGRRComp *& oPointedToGRRComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBYes,&oPointedToGRRComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->QueryDropAbility(oBYes,oPointedToGRRComp); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBYes,&oPointedToGRRComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCatalogComponent##classe::QueryDropCompGroupAbility(CAT_VARIANT_BOOL & oBYes, CATIASchCompGroupExt *& oPointedToGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oBYes,&oPointedToGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->QueryDropCompGroupAbility(oBYes,oPointedToGroup); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oBYes,&oPointedToGroup); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCatalogComponent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCatalogComponent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCatalogComponent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCatalogComponent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCatalogComponent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCatalogComponent(classe) \
 \
 \
declare_TIE_CATIASchCatalogComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCatalogComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCatalogComponent,"CATIASchCatalogComponent",CATIASchCatalogComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCatalogComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCatalogComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCatalogComponent##classe(classe::MetaObject(),CATIASchCatalogComponent::MetaObject(),(void *)CreateTIECATIASchCatalogComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCatalogComponent(classe) \
 \
 \
declare_TIE_CATIASchCatalogComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCatalogComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCatalogComponent,"CATIASchCatalogComponent",CATIASchCatalogComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCatalogComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCatalogComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCatalogComponent##classe(classe::MetaObject(),CATIASchCatalogComponent::MetaObject(),(void *)CreateTIECATIASchCatalogComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCatalogComponent(classe) TIE_CATIASchCatalogComponent(classe)
#else
#define BOA_CATIASchCatalogComponent(classe) CATImplementBOA(CATIASchCatalogComponent, classe)
#endif

#endif
