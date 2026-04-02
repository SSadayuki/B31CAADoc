#ifndef __TIE_CATIAShot
#define __TIE_CATIAShot

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAShot.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAShot */
#define declare_TIE_CATIAShot(classe) \
 \
 \
class TIECATIAShot##classe : public CATIAShot \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAShot, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetDuration(double & oDuration); \
      virtual HRESULT __stdcall SetDuration(double iDuration); \
      virtual HRESULT __stdcall GetNbDataBlocks(short & oNb); \
      virtual HRESULT __stdcall GetDatas(short iIndex, CATSafeArrayVariant & oPosition); \
      virtual HRESULT __stdcall SetDatas(const CATSafeArrayVariant & iPosition); \
      virtual HRESULT __stdcall AppendDatas(const CATSafeArrayVariant & iPosition); \
      virtual HRESULT __stdcall GetAbsDatas(short iIndex, CATSafeArrayVariant & oPosition); \
      virtual HRESULT __stdcall SetAbsDatas(const CATSafeArrayVariant & iPosition); \
      virtual HRESULT __stdcall AppendAbsDatas(const CATSafeArrayVariant & iPosition); \
      virtual HRESULT __stdcall GetTechnologicalDatas(CATSafeArrayVariant & oDatas); \
      virtual HRESULT __stdcall SetTechnologicalDatas(const CATSafeArrayVariant & iDatas); \
      virtual HRESULT __stdcall GetPosition(CATSafeArrayVariant & oPosition); \
      virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & iPosition); \
      virtual HRESULT __stdcall GetAbsPosition(CATSafeArrayVariant & oPosition); \
      virtual HRESULT __stdcall SetAbsPosition(const CATSafeArrayVariant & iPosition); \
      virtual HRESULT __stdcall GetExtraDatas(CATSafeArrayVariant & oDatas); \
      virtual HRESULT __stdcall SetExtraDatas(const CATSafeArrayVariant & iDatas); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAShot(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetDuration(double & oDuration); \
virtual HRESULT __stdcall SetDuration(double iDuration); \
virtual HRESULT __stdcall GetNbDataBlocks(short & oNb); \
virtual HRESULT __stdcall GetDatas(short iIndex, CATSafeArrayVariant & oPosition); \
virtual HRESULT __stdcall SetDatas(const CATSafeArrayVariant & iPosition); \
virtual HRESULT __stdcall AppendDatas(const CATSafeArrayVariant & iPosition); \
virtual HRESULT __stdcall GetAbsDatas(short iIndex, CATSafeArrayVariant & oPosition); \
virtual HRESULT __stdcall SetAbsDatas(const CATSafeArrayVariant & iPosition); \
virtual HRESULT __stdcall AppendAbsDatas(const CATSafeArrayVariant & iPosition); \
virtual HRESULT __stdcall GetTechnologicalDatas(CATSafeArrayVariant & oDatas); \
virtual HRESULT __stdcall SetTechnologicalDatas(const CATSafeArrayVariant & iDatas); \
virtual HRESULT __stdcall GetPosition(CATSafeArrayVariant & oPosition); \
virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & iPosition); \
virtual HRESULT __stdcall GetAbsPosition(CATSafeArrayVariant & oPosition); \
virtual HRESULT __stdcall SetAbsPosition(const CATSafeArrayVariant & iPosition); \
virtual HRESULT __stdcall GetExtraDatas(CATSafeArrayVariant & oDatas); \
virtual HRESULT __stdcall SetExtraDatas(const CATSafeArrayVariant & iDatas); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAShot(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetDuration(double & oDuration) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetDuration(oDuration)); \
} \
HRESULT __stdcall  ENVTIEName::SetDuration(double iDuration) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)SetDuration(iDuration)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbDataBlocks(short & oNb) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetNbDataBlocks(oNb)); \
} \
HRESULT __stdcall  ENVTIEName::GetDatas(short iIndex, CATSafeArrayVariant & oPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetDatas(iIndex,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::SetDatas(const CATSafeArrayVariant & iPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)SetDatas(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::AppendDatas(const CATSafeArrayVariant & iPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)AppendDatas(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetAbsDatas(short iIndex, CATSafeArrayVariant & oPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetAbsDatas(iIndex,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::SetAbsDatas(const CATSafeArrayVariant & iPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)SetAbsDatas(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::AppendAbsDatas(const CATSafeArrayVariant & iPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)AppendAbsDatas(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalDatas(CATSafeArrayVariant & oDatas) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalDatas(oDatas)); \
} \
HRESULT __stdcall  ENVTIEName::SetTechnologicalDatas(const CATSafeArrayVariant & iDatas) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)SetTechnologicalDatas(iDatas)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(CATSafeArrayVariant & oPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetPosition(oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(const CATSafeArrayVariant & iPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)SetPosition(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetAbsPosition(CATSafeArrayVariant & oPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetAbsPosition(oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::SetAbsPosition(const CATSafeArrayVariant & iPosition) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)SetAbsPosition(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetExtraDatas(CATSafeArrayVariant & oDatas) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetExtraDatas(oDatas)); \
} \
HRESULT __stdcall  ENVTIEName::SetExtraDatas(const CATSafeArrayVariant & iDatas) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)SetExtraDatas(iDatas)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAShot,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAShot(classe)    TIECATIAShot##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAShot(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAShot, classe) \
 \
 \
CATImplementTIEMethods(CATIAShot, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAShot, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAShot, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAShot, classe) \
 \
HRESULT __stdcall  TIECATIAShot##classe::GetDuration(double & oDuration) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDuration); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDuration(oDuration); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDuration); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::SetDuration(double iDuration) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDuration); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDuration(iDuration); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDuration); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::GetNbDataBlocks(short & oNb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbDataBlocks(oNb); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::GetDatas(short iIndex, CATSafeArrayVariant & oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDatas(iIndex,oPosition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::SetDatas(const CATSafeArrayVariant & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDatas(iPosition); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::AppendDatas(const CATSafeArrayVariant & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendDatas(iPosition); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::GetAbsDatas(short iIndex, CATSafeArrayVariant & oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAbsDatas(iIndex,oPosition); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::SetAbsDatas(const CATSafeArrayVariant & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAbsDatas(iPosition); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::AppendAbsDatas(const CATSafeArrayVariant & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendAbsDatas(iPosition); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::GetTechnologicalDatas(CATSafeArrayVariant & oDatas) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oDatas); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalDatas(oDatas); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oDatas); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::SetTechnologicalDatas(const CATSafeArrayVariant & iDatas) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iDatas); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTechnologicalDatas(iDatas); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iDatas); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::GetPosition(CATSafeArrayVariant & oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oPosition); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::SetPosition(const CATSafeArrayVariant & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iPosition); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::GetAbsPosition(CATSafeArrayVariant & oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAbsPosition(oPosition); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::SetAbsPosition(const CATSafeArrayVariant & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAbsPosition(iPosition); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::GetExtraDatas(CATSafeArrayVariant & oDatas) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oDatas); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtraDatas(oDatas); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oDatas); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShot##classe::SetExtraDatas(const CATSafeArrayVariant & iDatas) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iDatas); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExtraDatas(iDatas); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iDatas); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShot##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShot##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShot##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShot##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShot##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAShot(classe) \
 \
 \
declare_TIE_CATIAShot(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShot##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShot,"CATIAShot",CATIAShot::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShot(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAShot, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShot##classe(classe::MetaObject(),CATIAShot::MetaObject(),(void *)CreateTIECATIAShot##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAShot(classe) \
 \
 \
declare_TIE_CATIAShot(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShot##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShot,"CATIAShot",CATIAShot::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShot(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAShot, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShot##classe(classe::MetaObject(),CATIAShot::MetaObject(),(void *)CreateTIECATIAShot##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAShot(classe) TIE_CATIAShot(classe)
#else
#define BOA_CATIAShot(classe) CATImplementBOA(CATIAShot, classe)
#endif

#endif
