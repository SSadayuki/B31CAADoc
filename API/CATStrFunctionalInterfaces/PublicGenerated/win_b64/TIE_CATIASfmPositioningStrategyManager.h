#ifndef __TIE_CATIASfmPositioningStrategyManager
#define __TIE_CATIASfmPositioningStrategyManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmPositioningStrategyManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmPositioningStrategyManager */
#define declare_TIE_CATIASfmPositioningStrategyManager(classe) \
 \
 \
class TIECATIASfmPositioningStrategyManager##classe : public CATIASfmPositioningStrategyManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmPositioningStrategyManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetAvailablePositioningStrategies(CATSafeArrayVariant *& oListStrategyNames); \
      virtual HRESULT __stdcall GetPositioningStrategyParams(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmPositioningStrategyManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetAvailablePositioningStrategies(CATSafeArrayVariant *& oListStrategyNames); \
virtual HRESULT __stdcall GetPositioningStrategyParams(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmPositioningStrategyManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetAvailablePositioningStrategies(CATSafeArrayVariant *& oListStrategyNames) \
{ \
return (ENVTIECALL(CATIASfmPositioningStrategyManager,ENVTIETypeLetter,ENVTIELetter)GetAvailablePositioningStrategies(oListStrategyNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetPositioningStrategyParams(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams) \
{ \
return (ENVTIECALL(CATIASfmPositioningStrategyManager,ENVTIETypeLetter,ENVTIELetter)GetPositioningStrategyParams(iPosStrategyName,oListPosParams)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmPositioningStrategyManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmPositioningStrategyManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmPositioningStrategyManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmPositioningStrategyManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmPositioningStrategyManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmPositioningStrategyManager(classe)    TIECATIASfmPositioningStrategyManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmPositioningStrategyManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmPositioningStrategyManager, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmPositioningStrategyManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmPositioningStrategyManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmPositioningStrategyManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmPositioningStrategyManager, classe) \
 \
HRESULT __stdcall  TIECATIASfmPositioningStrategyManager##classe::GetAvailablePositioningStrategies(CATSafeArrayVariant *& oListStrategyNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListStrategyNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailablePositioningStrategies(oListStrategyNames); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListStrategyNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmPositioningStrategyManager##classe::GetPositioningStrategyParams(const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters *& oListPosParams) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPosStrategyName,&oListPosParams); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPositioningStrategyParams(iPosStrategyName,oListPosParams); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPosStrategyName,&oListPosParams); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmPositioningStrategyManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmPositioningStrategyManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmPositioningStrategyManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmPositioningStrategyManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmPositioningStrategyManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmPositioningStrategyManager(classe) \
 \
 \
declare_TIE_CATIASfmPositioningStrategyManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmPositioningStrategyManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmPositioningStrategyManager,"CATIASfmPositioningStrategyManager",CATIASfmPositioningStrategyManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmPositioningStrategyManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmPositioningStrategyManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmPositioningStrategyManager##classe(classe::MetaObject(),CATIASfmPositioningStrategyManager::MetaObject(),(void *)CreateTIECATIASfmPositioningStrategyManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmPositioningStrategyManager(classe) \
 \
 \
declare_TIE_CATIASfmPositioningStrategyManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmPositioningStrategyManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmPositioningStrategyManager,"CATIASfmPositioningStrategyManager",CATIASfmPositioningStrategyManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmPositioningStrategyManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmPositioningStrategyManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmPositioningStrategyManager##classe(classe::MetaObject(),CATIASfmPositioningStrategyManager::MetaObject(),(void *)CreateTIECATIASfmPositioningStrategyManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmPositioningStrategyManager(classe) TIE_CATIASfmPositioningStrategyManager(classe)
#else
#define BOA_CATIASfmPositioningStrategyManager(classe) CATImplementBOA(CATIASfmPositioningStrategyManager, classe)
#endif

#endif
