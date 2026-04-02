#ifndef __TIE_SWKIAErgoRULA
#define __TIE_SWKIAErgoRULA

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAErgoRULA.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAErgoRULA */
#define declare_TIE_SWKIAErgoRULA(classe) \
 \
 \
class TIESWKIAErgoRULA##classe : public SWKIAErgoRULA \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAErgoRULA, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ObjectWeight(CATBSTR & pioObjectWeight); \
      virtual HRESULT __stdcall put_ObjectWeight(const CATBSTR & piObjectWeight); \
      virtual HRESULT __stdcall get_OverallScore(CATLONG & poOverallScore); \
      virtual HRESULT __stdcall get_Verdict(CATBSTR & pioVerdict); \
      virtual HRESULT __stdcall get_ArmAbducted(CAT_VARIANT_BOOL & poArmAbducted); \
      virtual HRESULT __stdcall get_ShoulderRaised(CAT_VARIANT_BOOL & poShoulderRaised); \
      virtual HRESULT __stdcall get_ArmOutToSide(CAT_VARIANT_BOOL & poArmOutToSide); \
      virtual HRESULT __stdcall get_WristBent(CAT_VARIANT_BOOL & poWristBent); \
      virtual HRESULT __stdcall get_WristTwisted(CAT_VARIANT_BOOL & poWristTwisted); \
      virtual HRESULT __stdcall get_NeckTwisted(CAT_VARIANT_BOOL & poNeckTwisted); \
      virtual HRESULT __stdcall get_NeckSideBending(CAT_VARIANT_BOOL & poNeckSideBending); \
      virtual HRESULT __stdcall get_TrunkTwisted(CAT_VARIANT_BOOL & poTrunkTwisted); \
      virtual HRESULT __stdcall get_TrunkSideBending(CAT_VARIANT_BOOL & poTrunkSideBending); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAErgoRULA(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ObjectWeight(CATBSTR & pioObjectWeight); \
virtual HRESULT __stdcall put_ObjectWeight(const CATBSTR & piObjectWeight); \
virtual HRESULT __stdcall get_OverallScore(CATLONG & poOverallScore); \
virtual HRESULT __stdcall get_Verdict(CATBSTR & pioVerdict); \
virtual HRESULT __stdcall get_ArmAbducted(CAT_VARIANT_BOOL & poArmAbducted); \
virtual HRESULT __stdcall get_ShoulderRaised(CAT_VARIANT_BOOL & poShoulderRaised); \
virtual HRESULT __stdcall get_ArmOutToSide(CAT_VARIANT_BOOL & poArmOutToSide); \
virtual HRESULT __stdcall get_WristBent(CAT_VARIANT_BOOL & poWristBent); \
virtual HRESULT __stdcall get_WristTwisted(CAT_VARIANT_BOOL & poWristTwisted); \
virtual HRESULT __stdcall get_NeckTwisted(CAT_VARIANT_BOOL & poNeckTwisted); \
virtual HRESULT __stdcall get_NeckSideBending(CAT_VARIANT_BOOL & poNeckSideBending); \
virtual HRESULT __stdcall get_TrunkTwisted(CAT_VARIANT_BOOL & poTrunkTwisted); \
virtual HRESULT __stdcall get_TrunkSideBending(CAT_VARIANT_BOOL & poTrunkSideBending); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAErgoRULA(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ObjectWeight(CATBSTR & pioObjectWeight) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_ObjectWeight(pioObjectWeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_ObjectWeight(const CATBSTR & piObjectWeight) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)put_ObjectWeight(piObjectWeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_OverallScore(CATLONG & poOverallScore) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_OverallScore(poOverallScore)); \
} \
HRESULT __stdcall  ENVTIEName::get_Verdict(CATBSTR & pioVerdict) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_Verdict(pioVerdict)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArmAbducted(CAT_VARIANT_BOOL & poArmAbducted) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_ArmAbducted(poArmAbducted)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShoulderRaised(CAT_VARIANT_BOOL & poShoulderRaised) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_ShoulderRaised(poShoulderRaised)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArmOutToSide(CAT_VARIANT_BOOL & poArmOutToSide) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_ArmOutToSide(poArmOutToSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_WristBent(CAT_VARIANT_BOOL & poWristBent) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_WristBent(poWristBent)); \
} \
HRESULT __stdcall  ENVTIEName::get_WristTwisted(CAT_VARIANT_BOOL & poWristTwisted) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_WristTwisted(poWristTwisted)); \
} \
HRESULT __stdcall  ENVTIEName::get_NeckTwisted(CAT_VARIANT_BOOL & poNeckTwisted) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_NeckTwisted(poNeckTwisted)); \
} \
HRESULT __stdcall  ENVTIEName::get_NeckSideBending(CAT_VARIANT_BOOL & poNeckSideBending) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_NeckSideBending(poNeckSideBending)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrunkTwisted(CAT_VARIANT_BOOL & poTrunkTwisted) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_TrunkTwisted(poTrunkTwisted)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrunkSideBending(CAT_VARIANT_BOOL & poTrunkSideBending) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_TrunkSideBending(poTrunkSideBending)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAErgoRULA,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAErgoRULA(classe)    TIESWKIAErgoRULA##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAErgoRULA(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAErgoRULA, classe) \
 \
 \
CATImplementTIEMethods(SWKIAErgoRULA, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAErgoRULA, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAErgoRULA, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAErgoRULA, classe) \
 \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_ObjectWeight(CATBSTR & pioObjectWeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&pioObjectWeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ObjectWeight(pioObjectWeight); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&pioObjectWeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::put_ObjectWeight(const CATBSTR & piObjectWeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piObjectWeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ObjectWeight(piObjectWeight); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piObjectWeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_OverallScore(CATLONG & poOverallScore) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poOverallScore); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OverallScore(poOverallScore); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poOverallScore); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_Verdict(CATBSTR & pioVerdict) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&pioVerdict); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Verdict(pioVerdict); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&pioVerdict); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_ArmAbducted(CAT_VARIANT_BOOL & poArmAbducted) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&poArmAbducted); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArmAbducted(poArmAbducted); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&poArmAbducted); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_ShoulderRaised(CAT_VARIANT_BOOL & poShoulderRaised) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&poShoulderRaised); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShoulderRaised(poShoulderRaised); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&poShoulderRaised); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_ArmOutToSide(CAT_VARIANT_BOOL & poArmOutToSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poArmOutToSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArmOutToSide(poArmOutToSide); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poArmOutToSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_WristBent(CAT_VARIANT_BOOL & poWristBent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poWristBent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WristBent(poWristBent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poWristBent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_WristTwisted(CAT_VARIANT_BOOL & poWristTwisted) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poWristTwisted); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WristTwisted(poWristTwisted); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poWristTwisted); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_NeckTwisted(CAT_VARIANT_BOOL & poNeckTwisted) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&poNeckTwisted); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NeckTwisted(poNeckTwisted); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&poNeckTwisted); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_NeckSideBending(CAT_VARIANT_BOOL & poNeckSideBending) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&poNeckSideBending); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NeckSideBending(poNeckSideBending); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&poNeckSideBending); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_TrunkTwisted(CAT_VARIANT_BOOL & poTrunkTwisted) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poTrunkTwisted); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrunkTwisted(poTrunkTwisted); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poTrunkTwisted); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoRULA##classe::get_TrunkSideBending(CAT_VARIANT_BOOL & poTrunkSideBending) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&poTrunkSideBending); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrunkSideBending(poTrunkSideBending); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&poTrunkSideBending); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoRULA##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoRULA##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoRULA##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoRULA##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoRULA##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAErgoRULA(classe) \
 \
 \
declare_TIE_SWKIAErgoRULA(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoRULA##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoRULA,"SWKIAErgoRULA",SWKIAErgoRULA::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoRULA(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAErgoRULA, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoRULA##classe(classe::MetaObject(),SWKIAErgoRULA::MetaObject(),(void *)CreateTIESWKIAErgoRULA##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAErgoRULA(classe) \
 \
 \
declare_TIE_SWKIAErgoRULA(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoRULA##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoRULA,"SWKIAErgoRULA",SWKIAErgoRULA::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoRULA(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAErgoRULA, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoRULA##classe(classe::MetaObject(),SWKIAErgoRULA::MetaObject(),(void *)CreateTIESWKIAErgoRULA##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAErgoRULA(classe) TIE_SWKIAErgoRULA(classe)
#else
#define BOA_SWKIAErgoRULA(classe) CATImplementBOA(SWKIAErgoRULA, classe)
#endif

#endif
