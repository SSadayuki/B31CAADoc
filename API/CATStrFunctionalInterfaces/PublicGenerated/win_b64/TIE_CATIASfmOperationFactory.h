#ifndef __TIE_CATIASfmOperationFactory
#define __TIE_CATIASfmOperationFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmOperationFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmOperationFactory */
#define declare_TIE_CATIASfmOperationFactory(classe) \
 \
 \
class TIECATIASfmOperationFactory##classe : public CATIASfmOperationFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmOperationFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetAvailableSlotsFromCatalog(CATIASfmProfile * iSfmProfile, CATSafeArrayVariant *& oListofSlotNames); \
      virtual HRESULT __stdcall GetSlotParameters(CATIASfmProfile * iSfmProfile, const CATBSTR & iSlotName, CATIASfmConnectionParameters *& oListSlotParameters, CATSafeArrayVariant *& oListSlotParamNames); \
      virtual HRESULT __stdcall GetEndcutManager(CATIASfmEndcutManager *& oSfmEndcutManager); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmOperationFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetAvailableSlotsFromCatalog(CATIASfmProfile * iSfmProfile, CATSafeArrayVariant *& oListofSlotNames); \
virtual HRESULT __stdcall GetSlotParameters(CATIASfmProfile * iSfmProfile, const CATBSTR & iSlotName, CATIASfmConnectionParameters *& oListSlotParameters, CATSafeArrayVariant *& oListSlotParamNames); \
virtual HRESULT __stdcall GetEndcutManager(CATIASfmEndcutManager *& oSfmEndcutManager); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmOperationFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetAvailableSlotsFromCatalog(CATIASfmProfile * iSfmProfile, CATSafeArrayVariant *& oListofSlotNames) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)GetAvailableSlotsFromCatalog(iSfmProfile,oListofSlotNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetSlotParameters(CATIASfmProfile * iSfmProfile, const CATBSTR & iSlotName, CATIASfmConnectionParameters *& oListSlotParameters, CATSafeArrayVariant *& oListSlotParamNames) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)GetSlotParameters(iSfmProfile,iSlotName,oListSlotParameters,oListSlotParamNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndcutManager(CATIASfmEndcutManager *& oSfmEndcutManager) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)GetEndcutManager(oSfmEndcutManager)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmOperationFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmOperationFactory(classe)    TIECATIASfmOperationFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmOperationFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmOperationFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmOperationFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmOperationFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmOperationFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmOperationFactory, classe) \
 \
HRESULT __stdcall  TIECATIASfmOperationFactory##classe::GetAvailableSlotsFromCatalog(CATIASfmProfile * iSfmProfile, CATSafeArrayVariant *& oListofSlotNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSfmProfile,&oListofSlotNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableSlotsFromCatalog(iSfmProfile,oListofSlotNames); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSfmProfile,&oListofSlotNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOperationFactory##classe::GetSlotParameters(CATIASfmProfile * iSfmProfile, const CATBSTR & iSlotName, CATIASfmConnectionParameters *& oListSlotParameters, CATSafeArrayVariant *& oListSlotParamNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSfmProfile,&iSlotName,&oListSlotParameters,&oListSlotParamNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSlotParameters(iSfmProfile,iSlotName,oListSlotParameters,oListSlotParamNames); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSfmProfile,&iSlotName,&oListSlotParameters,&oListSlotParamNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOperationFactory##classe::GetEndcutManager(CATIASfmEndcutManager *& oSfmEndcutManager) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSfmEndcutManager); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndcutManager(oSfmEndcutManager); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSfmEndcutManager); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOperationFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOperationFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOperationFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOperationFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOperationFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmOperationFactory(classe) \
 \
 \
declare_TIE_CATIASfmOperationFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmOperationFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmOperationFactory,"CATIASfmOperationFactory",CATIASfmOperationFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmOperationFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmOperationFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmOperationFactory##classe(classe::MetaObject(),CATIASfmOperationFactory::MetaObject(),(void *)CreateTIECATIASfmOperationFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmOperationFactory(classe) \
 \
 \
declare_TIE_CATIASfmOperationFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmOperationFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmOperationFactory,"CATIASfmOperationFactory",CATIASfmOperationFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmOperationFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmOperationFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmOperationFactory##classe(classe::MetaObject(),CATIASfmOperationFactory::MetaObject(),(void *)CreateTIECATIASfmOperationFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmOperationFactory(classe) TIE_CATIASfmOperationFactory(classe)
#else
#define BOA_CATIASfmOperationFactory(classe) CATImplementBOA(CATIASfmOperationFactory, classe)
#endif

#endif
