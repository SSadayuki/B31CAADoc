#ifndef __TIE_CATIASfmFunctionFactory
#define __TIE_CATIASfmFunctionFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmFunctionFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmFunctionFactory */
#define declare_TIE_CATIASfmFunctionFactory(classe) \
 \
 \
class TIECATIASfmFunctionFactory##classe : public CATIASfmFunctionFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmFunctionFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateOpening(const CATBSTR & iCategory, CATLONG iMode, CATIAReference * iIntersectingElement, CATIAReference * iSfmObject, CATIASfmOpening *& oOpening); \
      virtual HRESULT __stdcall CreateStandardOpening(const CATBSTR & iCategory, const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams, const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iPositionStrategyParms, CATIAReference * ispTargetSfmObject, CATIASfmStandardOpening *& ospOpening); \
      virtual HRESULT __stdcall GetOpeningMgr(CATIAPart * iPrtPart, const CATBSTR & iMgrName, CATBaseDispatch *& oSfmOpeningMgr); \
      virtual HRESULT __stdcall get_SfmReferences(CATIASfmReferences *& oSfmReferences); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmFunctionFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateOpening(const CATBSTR & iCategory, CATLONG iMode, CATIAReference * iIntersectingElement, CATIAReference * iSfmObject, CATIASfmOpening *& oOpening); \
virtual HRESULT __stdcall CreateStandardOpening(const CATBSTR & iCategory, const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams, const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iPositionStrategyParms, CATIAReference * ispTargetSfmObject, CATIASfmStandardOpening *& ospOpening); \
virtual HRESULT __stdcall GetOpeningMgr(CATIAPart * iPrtPart, const CATBSTR & iMgrName, CATBaseDispatch *& oSfmOpeningMgr); \
virtual HRESULT __stdcall get_SfmReferences(CATIASfmReferences *& oSfmReferences); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmFunctionFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateOpening(const CATBSTR & iCategory, CATLONG iMode, CATIAReference * iIntersectingElement, CATIAReference * iSfmObject, CATIASfmOpening *& oOpening) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)CreateOpening(iCategory,iMode,iIntersectingElement,iSfmObject,oOpening)); \
} \
HRESULT __stdcall  ENVTIEName::CreateStandardOpening(const CATBSTR & iCategory, const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams, const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iPositionStrategyParms, CATIAReference * ispTargetSfmObject, CATIASfmStandardOpening *& ospOpening) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)CreateStandardOpening(iCategory,iContourName,iListContourParams,iPosStrategyName,iPositionStrategyParms,ispTargetSfmObject,ospOpening)); \
} \
HRESULT __stdcall  ENVTIEName::GetOpeningMgr(CATIAPart * iPrtPart, const CATBSTR & iMgrName, CATBaseDispatch *& oSfmOpeningMgr) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)GetOpeningMgr(iPrtPart,iMgrName,oSfmOpeningMgr)); \
} \
HRESULT __stdcall  ENVTIEName::get_SfmReferences(CATIASfmReferences *& oSfmReferences) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)get_SfmReferences(oSfmReferences)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmFunctionFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmFunctionFactory(classe)    TIECATIASfmFunctionFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmFunctionFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmFunctionFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmFunctionFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmFunctionFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmFunctionFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmFunctionFactory, classe) \
 \
HRESULT __stdcall  TIECATIASfmFunctionFactory##classe::CreateOpening(const CATBSTR & iCategory, CATLONG iMode, CATIAReference * iIntersectingElement, CATIAReference * iSfmObject, CATIASfmOpening *& oOpening) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCategory,&iMode,&iIntersectingElement,&iSfmObject,&oOpening); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateOpening(iCategory,iMode,iIntersectingElement,iSfmObject,oOpening); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCategory,&iMode,&iIntersectingElement,&iSfmObject,&oOpening); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFunctionFactory##classe::CreateStandardOpening(const CATBSTR & iCategory, const CATBSTR & iContourName, CATIASfmStandardContourParameters * iListContourParams, const CATBSTR & iPosStrategyName, CATIASfmStandardPosStrategyParameters * iPositionStrategyParms, CATIAReference * ispTargetSfmObject, CATIASfmStandardOpening *& ospOpening) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCategory,&iContourName,&iListContourParams,&iPosStrategyName,&iPositionStrategyParms,&ispTargetSfmObject,&ospOpening); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateStandardOpening(iCategory,iContourName,iListContourParams,iPosStrategyName,iPositionStrategyParms,ispTargetSfmObject,ospOpening); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCategory,&iContourName,&iListContourParams,&iPosStrategyName,&iPositionStrategyParms,&ispTargetSfmObject,&ospOpening); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFunctionFactory##classe::GetOpeningMgr(CATIAPart * iPrtPart, const CATBSTR & iMgrName, CATBaseDispatch *& oSfmOpeningMgr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPrtPart,&iMgrName,&oSfmOpeningMgr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOpeningMgr(iPrtPart,iMgrName,oSfmOpeningMgr); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPrtPart,&iMgrName,&oSfmOpeningMgr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmFunctionFactory##classe::get_SfmReferences(CATIASfmReferences *& oSfmReferences) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSfmReferences); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SfmReferences(oSfmReferences); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSfmReferences); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFunctionFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFunctionFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFunctionFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFunctionFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmFunctionFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmFunctionFactory(classe) \
 \
 \
declare_TIE_CATIASfmFunctionFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmFunctionFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmFunctionFactory,"CATIASfmFunctionFactory",CATIASfmFunctionFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmFunctionFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmFunctionFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmFunctionFactory##classe(classe::MetaObject(),CATIASfmFunctionFactory::MetaObject(),(void *)CreateTIECATIASfmFunctionFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmFunctionFactory(classe) \
 \
 \
declare_TIE_CATIASfmFunctionFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmFunctionFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmFunctionFactory,"CATIASfmFunctionFactory",CATIASfmFunctionFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmFunctionFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmFunctionFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmFunctionFactory##classe(classe::MetaObject(),CATIASfmFunctionFactory::MetaObject(),(void *)CreateTIECATIASfmFunctionFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmFunctionFactory(classe) TIE_CATIASfmFunctionFactory(classe)
#else
#define BOA_CATIASfmFunctionFactory(classe) CATImplementBOA(CATIASfmFunctionFactory, classe)
#endif

#endif
