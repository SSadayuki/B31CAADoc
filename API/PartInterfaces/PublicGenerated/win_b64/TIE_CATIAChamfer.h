#ifndef __TIE_CATIAChamfer
#define __TIE_CATIAChamfer

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAChamfer.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAChamfer */
#define declare_TIE_CATIAChamfer(classe) \
 \
 \
class TIECATIAChamfer##classe : public CATIAChamfer \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAChamfer, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Mode(CatChamferMode & oMode); \
      virtual HRESULT __stdcall put_Mode(CatChamferMode iMode); \
      virtual HRESULT __stdcall get_Propagation(CatChamferPropagation & oPropagation); \
      virtual HRESULT __stdcall put_Propagation(CatChamferPropagation iPropagation); \
      virtual HRESULT __stdcall get_Orientation(CatChamferOrientation & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CatChamferOrientation iOrientation); \
      virtual HRESULT __stdcall get_Length1(CATIALength *& oLength1); \
      virtual HRESULT __stdcall get_Length2(CATIALength *& oLength2); \
      virtual HRESULT __stdcall get_Angle(CATIAAngle *& oAngle); \
      virtual HRESULT __stdcall get_ElementsToChamfer(CATIAReferences *& oElementsToChamfer); \
      virtual HRESULT __stdcall AddElementToChamfer(CATIAReference * iElementToChamfer); \
      virtual HRESULT __stdcall WithdrawElementToChamfer(CATIAReference * iElementToWithdraw); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAChamfer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Mode(CatChamferMode & oMode); \
virtual HRESULT __stdcall put_Mode(CatChamferMode iMode); \
virtual HRESULT __stdcall get_Propagation(CatChamferPropagation & oPropagation); \
virtual HRESULT __stdcall put_Propagation(CatChamferPropagation iPropagation); \
virtual HRESULT __stdcall get_Orientation(CatChamferOrientation & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CatChamferOrientation iOrientation); \
virtual HRESULT __stdcall get_Length1(CATIALength *& oLength1); \
virtual HRESULT __stdcall get_Length2(CATIALength *& oLength2); \
virtual HRESULT __stdcall get_Angle(CATIAAngle *& oAngle); \
virtual HRESULT __stdcall get_ElementsToChamfer(CATIAReferences *& oElementsToChamfer); \
virtual HRESULT __stdcall AddElementToChamfer(CATIAReference * iElementToChamfer); \
virtual HRESULT __stdcall WithdrawElementToChamfer(CATIAReference * iElementToWithdraw); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAChamfer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Mode(CatChamferMode & oMode) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Mode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CatChamferMode iMode) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)put_Mode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Propagation(CatChamferPropagation & oPropagation) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Propagation(oPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Propagation(CatChamferPropagation iPropagation) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)put_Propagation(iPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CatChamferOrientation & oOrientation) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CatChamferOrientation iOrientation) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length1(CATIALength *& oLength1) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Length1(oLength1)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length2(CATIALength *& oLength2) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Length2(oLength2)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(CATIAAngle *& oAngle) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_ElementsToChamfer(CATIAReferences *& oElementsToChamfer) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_ElementsToChamfer(oElementsToChamfer)); \
} \
HRESULT __stdcall  ENVTIEName::AddElementToChamfer(CATIAReference * iElementToChamfer) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)AddElementToChamfer(iElementToChamfer)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawElementToChamfer(CATIAReference * iElementToWithdraw) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)WithdrawElementToChamfer(iElementToWithdraw)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAChamfer,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAChamfer(classe)    TIECATIAChamfer##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAChamfer(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAChamfer, classe) \
 \
 \
CATImplementTIEMethods(CATIAChamfer, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAChamfer, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAChamfer, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAChamfer, classe) \
 \
HRESULT __stdcall  TIECATIAChamfer##classe::get_Mode(CatChamferMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(oMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::put_Mode(CatChamferMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(iMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::get_Propagation(CatChamferPropagation & oPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Propagation(oPropagation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::put_Propagation(CatChamferPropagation iPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Propagation(iPropagation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::get_Orientation(CatChamferOrientation & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::put_Orientation(CatChamferOrientation iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::get_Length1(CATIALength *& oLength1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oLength1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length1(oLength1); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oLength1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::get_Length2(CATIALength *& oLength2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oLength2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length2(oLength2); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oLength2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::get_Angle(CATIAAngle *& oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::get_ElementsToChamfer(CATIAReferences *& oElementsToChamfer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oElementsToChamfer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElementsToChamfer(oElementsToChamfer); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oElementsToChamfer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::AddElementToChamfer(CATIAReference * iElementToChamfer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iElementToChamfer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElementToChamfer(iElementToChamfer); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iElementToChamfer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAChamfer##classe::WithdrawElementToChamfer(CATIAReference * iElementToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iElementToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawElementToChamfer(iElementToWithdraw); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iElementToWithdraw); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAChamfer##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAChamfer##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAChamfer##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAChamfer##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAChamfer##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAChamfer(classe) \
 \
 \
declare_TIE_CATIAChamfer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAChamfer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAChamfer,"CATIAChamfer",CATIAChamfer::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAChamfer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAChamfer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAChamfer##classe(classe::MetaObject(),CATIAChamfer::MetaObject(),(void *)CreateTIECATIAChamfer##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAChamfer(classe) \
 \
 \
declare_TIE_CATIAChamfer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAChamfer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAChamfer,"CATIAChamfer",CATIAChamfer::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAChamfer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAChamfer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAChamfer##classe(classe::MetaObject(),CATIAChamfer::MetaObject(),(void *)CreateTIECATIAChamfer##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAChamfer(classe) TIE_CATIAChamfer(classe)
#else
#define BOA_CATIAChamfer(classe) CATImplementBOA(CATIAChamfer, classe)
#endif

#endif
