#ifndef __TIE_SWKIAErgo
#define __TIE_SWKIAErgo

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAErgo.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAErgo */
#define declare_TIE_SWKIAErgo(classe) \
 \
 \
class TIESWKIAErgo##classe : public SWKIAErgo \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAErgo, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_LiftLower(SWKIAErgoLiftLower *& poLiftLower); \
      virtual HRESULT __stdcall get_PushPull(SWKIAErgoPushPull *& poPushPull); \
      virtual HRESULT __stdcall get_Carry(SWKIAErgoCarry *& poCarry); \
      virtual HRESULT __stdcall get_RULA(SWKIAErgoRULA *& poRULA); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAErgo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_LiftLower(SWKIAErgoLiftLower *& poLiftLower); \
virtual HRESULT __stdcall get_PushPull(SWKIAErgoPushPull *& poPushPull); \
virtual HRESULT __stdcall get_Carry(SWKIAErgoCarry *& poCarry); \
virtual HRESULT __stdcall get_RULA(SWKIAErgoRULA *& poRULA); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAErgo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_LiftLower(SWKIAErgoLiftLower *& poLiftLower) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)get_LiftLower(poLiftLower)); \
} \
HRESULT __stdcall  ENVTIEName::get_PushPull(SWKIAErgoPushPull *& poPushPull) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)get_PushPull(poPushPull)); \
} \
HRESULT __stdcall  ENVTIEName::get_Carry(SWKIAErgoCarry *& poCarry) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)get_Carry(poCarry)); \
} \
HRESULT __stdcall  ENVTIEName::get_RULA(SWKIAErgoRULA *& poRULA) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)get_RULA(poRULA)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAErgo,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAErgo(classe)    TIESWKIAErgo##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAErgo(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAErgo, classe) \
 \
 \
CATImplementTIEMethods(SWKIAErgo, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAErgo, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAErgo, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAErgo, classe) \
 \
HRESULT __stdcall  TIESWKIAErgo##classe::get_LiftLower(SWKIAErgoLiftLower *& poLiftLower) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poLiftLower); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LiftLower(poLiftLower); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poLiftLower); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgo##classe::get_PushPull(SWKIAErgoPushPull *& poPushPull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&poPushPull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PushPull(poPushPull); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&poPushPull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgo##classe::get_Carry(SWKIAErgoCarry *& poCarry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poCarry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Carry(poCarry); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poCarry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgo##classe::get_RULA(SWKIAErgoRULA *& poRULA) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&poRULA); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RULA(poRULA); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&poRULA); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgo##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgo##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgo##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgo##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgo##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAErgo(classe) \
 \
 \
declare_TIE_SWKIAErgo(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgo,"SWKIAErgo",SWKIAErgo::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAErgo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgo##classe(classe::MetaObject(),SWKIAErgo::MetaObject(),(void *)CreateTIESWKIAErgo##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAErgo(classe) \
 \
 \
declare_TIE_SWKIAErgo(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgo,"SWKIAErgo",SWKIAErgo::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAErgo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgo##classe(classe::MetaObject(),SWKIAErgo::MetaObject(),(void *)CreateTIESWKIAErgo##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAErgo(classe) TIE_SWKIAErgo(classe)
#else
#define BOA_SWKIAErgo(classe) CATImplementBOA(SWKIAErgo, classe)
#endif

#endif
