#ifndef __TIE_CATIAReplay
#define __TIE_CATIAReplay

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAReplay.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAReplay */
#define declare_TIE_CATIAReplay(classe) \
 \
 \
class TIECATIAReplay##classe : public CATIAReplay \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAReplay, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddProductMotion(CATIAProduct * iProduct, CATLONG & oChannel); \
      virtual HRESULT __stdcall AddSample(CATLONG iChannel, double iCurrentTime, const CATSafeArrayVariant & iPosition); \
      virtual HRESULT __stdcall GetNbProductMotion(CATLONG & oNbChannel); \
      virtual HRESULT __stdcall GetProduct(CATLONG iChannel, CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall GetNbSample(CATLONG iChannel, CATLONG & oNbSample); \
      virtual HRESULT __stdcall GetSampleTime(CATLONG iChannel, CATLONG iSample, double & oTime); \
      virtual HRESULT __stdcall GetSamplePosition(CATLONG iChannel, CATLONG iSample, CATSafeArrayVariant & oPosition); \
      virtual HRESULT __stdcall RemoveSample(CATLONG iChannel, CATLONG iSample); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAReplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddProductMotion(CATIAProduct * iProduct, CATLONG & oChannel); \
virtual HRESULT __stdcall AddSample(CATLONG iChannel, double iCurrentTime, const CATSafeArrayVariant & iPosition); \
virtual HRESULT __stdcall GetNbProductMotion(CATLONG & oNbChannel); \
virtual HRESULT __stdcall GetProduct(CATLONG iChannel, CATIAProduct *& oProduct); \
virtual HRESULT __stdcall GetNbSample(CATLONG iChannel, CATLONG & oNbSample); \
virtual HRESULT __stdcall GetSampleTime(CATLONG iChannel, CATLONG iSample, double & oTime); \
virtual HRESULT __stdcall GetSamplePosition(CATLONG iChannel, CATLONG iSample, CATSafeArrayVariant & oPosition); \
virtual HRESULT __stdcall RemoveSample(CATLONG iChannel, CATLONG iSample); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAReplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddProductMotion(CATIAProduct * iProduct, CATLONG & oChannel) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)AddProductMotion(iProduct,oChannel)); \
} \
HRESULT __stdcall  ENVTIEName::AddSample(CATLONG iChannel, double iCurrentTime, const CATSafeArrayVariant & iPosition) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)AddSample(iChannel,iCurrentTime,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbProductMotion(CATLONG & oNbChannel) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)GetNbProductMotion(oNbChannel)); \
} \
HRESULT __stdcall  ENVTIEName::GetProduct(CATLONG iChannel, CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)GetProduct(iChannel,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbSample(CATLONG iChannel, CATLONG & oNbSample) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)GetNbSample(iChannel,oNbSample)); \
} \
HRESULT __stdcall  ENVTIEName::GetSampleTime(CATLONG iChannel, CATLONG iSample, double & oTime) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)GetSampleTime(iChannel,iSample,oTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetSamplePosition(CATLONG iChannel, CATLONG iSample, CATSafeArrayVariant & oPosition) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)GetSamplePosition(iChannel,iSample,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSample(CATLONG iChannel, CATLONG iSample) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)RemoveSample(iChannel,iSample)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAReplay,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAReplay(classe)    TIECATIAReplay##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAReplay(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAReplay, classe) \
 \
 \
CATImplementTIEMethods(CATIAReplay, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAReplay, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAReplay, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAReplay, classe) \
 \
HRESULT __stdcall  TIECATIAReplay##classe::AddProductMotion(CATIAProduct * iProduct, CATLONG & oChannel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iProduct,&oChannel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddProductMotion(iProduct,oChannel); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iProduct,&oChannel); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplay##classe::AddSample(CATLONG iChannel, double iCurrentTime, const CATSafeArrayVariant & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iChannel,&iCurrentTime,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSample(iChannel,iCurrentTime,iPosition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iChannel,&iCurrentTime,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplay##classe::GetNbProductMotion(CATLONG & oNbChannel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNbChannel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbProductMotion(oNbChannel); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNbChannel); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplay##classe::GetProduct(CATLONG iChannel, CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iChannel,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProduct(iChannel,oProduct); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iChannel,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplay##classe::GetNbSample(CATLONG iChannel, CATLONG & oNbSample) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iChannel,&oNbSample); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbSample(iChannel,oNbSample); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iChannel,&oNbSample); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplay##classe::GetSampleTime(CATLONG iChannel, CATLONG iSample, double & oTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iChannel,&iSample,&oTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSampleTime(iChannel,iSample,oTime); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iChannel,&iSample,&oTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplay##classe::GetSamplePosition(CATLONG iChannel, CATLONG iSample, CATSafeArrayVariant & oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iChannel,&iSample,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSamplePosition(iChannel,iSample,oPosition); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iChannel,&iSample,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAReplay##classe::RemoveSample(CATLONG iChannel, CATLONG iSample) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iChannel,&iSample); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSample(iChannel,iSample); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iChannel,&iSample); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplay##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplay##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplay##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplay##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAReplay##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAReplay(classe) \
 \
 \
declare_TIE_CATIAReplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReplay,"CATIAReplay",CATIAReplay::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAReplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReplay##classe(classe::MetaObject(),CATIAReplay::MetaObject(),(void *)CreateTIECATIAReplay##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAReplay(classe) \
 \
 \
declare_TIE_CATIAReplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAReplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAReplay,"CATIAReplay",CATIAReplay::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAReplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAReplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAReplay##classe(classe::MetaObject(),CATIAReplay::MetaObject(),(void *)CreateTIECATIAReplay##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAReplay(classe) TIE_CATIAReplay(classe)
#else
#define BOA_CATIAReplay(classe) CATImplementBOA(CATIAReplay, classe)
#endif

#endif
