#ifndef __TIE_CATIASfmEndcutManager
#define __TIE_CATIASfmEndcutManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmEndcutManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmEndcutManager */
#define declare_TIE_CATIASfmEndcutManager(classe) \
 \
 \
class TIECATIASfmEndcutManager##classe : public CATIASfmEndcutManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmEndcutManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetAvailableEndcuts(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, CATSafeArrayVariant *& oListEndcutNames); \
      virtual HRESULT __stdcall GetEndcutSpecifications(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATSafeArrayVariant *& oListOfContextNames, CATIASfmConnectionParameters *& oListEndCutParameters, CATSafeArrayVariant *& oListOfEndCutParamNames); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmEndcutManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetAvailableEndcuts(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, CATSafeArrayVariant *& oListEndcutNames); \
virtual HRESULT __stdcall GetEndcutSpecifications(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATSafeArrayVariant *& oListOfContextNames, CATIASfmConnectionParameters *& oListEndCutParameters, CATSafeArrayVariant *& oListOfEndCutParamNames); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmEndcutManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetAvailableEndcuts(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, CATSafeArrayVariant *& oListEndcutNames) \
{ \
return (ENVTIECALL(CATIASfmEndcutManager,ENVTIETypeLetter,ENVTIELetter)GetAvailableEndcuts(iSectionFamily,iEndcutType,oListEndcutNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndcutSpecifications(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATSafeArrayVariant *& oListOfContextNames, CATIASfmConnectionParameters *& oListEndCutParameters, CATSafeArrayVariant *& oListOfEndCutParamNames) \
{ \
return (ENVTIECALL(CATIASfmEndcutManager,ENVTIETypeLetter,ENVTIELetter)GetEndcutSpecifications(iSectionFamily,iEndcutType,iEndcutName,oListOfContextNames,oListEndCutParameters,oListOfEndCutParamNames)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmEndcutManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmEndcutManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmEndcutManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmEndcutManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmEndcutManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmEndcutManager(classe)    TIECATIASfmEndcutManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmEndcutManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmEndcutManager, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmEndcutManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmEndcutManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmEndcutManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmEndcutManager, classe) \
 \
HRESULT __stdcall  TIECATIASfmEndcutManager##classe::GetAvailableEndcuts(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, CATSafeArrayVariant *& oListEndcutNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSectionFamily,&iEndcutType,&oListEndcutNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableEndcuts(iSectionFamily,iEndcutType,oListEndcutNames); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSectionFamily,&iEndcutType,&oListEndcutNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmEndcutManager##classe::GetEndcutSpecifications(const CATBSTR & iSectionFamily, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATSafeArrayVariant *& oListOfContextNames, CATIASfmConnectionParameters *& oListEndCutParameters, CATSafeArrayVariant *& oListOfEndCutParamNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSectionFamily,&iEndcutType,&iEndcutName,&oListOfContextNames,&oListEndCutParameters,&oListOfEndCutParamNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndcutSpecifications(iSectionFamily,iEndcutType,iEndcutName,oListOfContextNames,oListEndCutParameters,oListOfEndCutParamNames); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSectionFamily,&iEndcutType,&iEndcutName,&oListOfContextNames,&oListEndCutParameters,&oListOfEndCutParamNames); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcutManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcutManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcutManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcutManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmEndcutManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmEndcutManager(classe) \
 \
 \
declare_TIE_CATIASfmEndcutManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmEndcutManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmEndcutManager,"CATIASfmEndcutManager",CATIASfmEndcutManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmEndcutManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmEndcutManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmEndcutManager##classe(classe::MetaObject(),CATIASfmEndcutManager::MetaObject(),(void *)CreateTIECATIASfmEndcutManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmEndcutManager(classe) \
 \
 \
declare_TIE_CATIASfmEndcutManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmEndcutManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmEndcutManager,"CATIASfmEndcutManager",CATIASfmEndcutManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmEndcutManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmEndcutManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmEndcutManager##classe(classe::MetaObject(),CATIASfmEndcutManager::MetaObject(),(void *)CreateTIECATIASfmEndcutManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmEndcutManager(classe) TIE_CATIASfmEndcutManager(classe)
#else
#define BOA_CATIASfmEndcutManager(classe) CATImplementBOA(CATIASfmEndcutManager, classe)
#endif

#endif
