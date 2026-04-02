#ifndef __TIE_CATIAPspID
#define __TIE_CATIAPspID

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspID.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspID */
#define declare_TIE_CATIAPspID(classe) \
 \
 \
class TIECATIAPspID##classe : public CATIAPspID \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspID, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetID(CATBSTR & oID); \
      virtual HRESULT __stdcall SetID(const CATBSTR & iID); \
      virtual HRESULT __stdcall GenAndPutID(CATBSTR & oGeneratedID); \
      virtual HRESULT __stdcall GenAndPutIDNoGenSeqNum(CATBSTR & oGeneratedID); \
      virtual HRESULT __stdcall GenIDNoGenSeqNum(CATBSTR & oGeneratedID); \
      virtual HRESULT __stdcall IsIDGenerated(CAT_VARIANT_BOOL & oBIsGenerated); \
      virtual HRESULT __stdcall GetLocalID(CATBSTR & oLocalID); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspID(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetID(CATBSTR & oID); \
virtual HRESULT __stdcall SetID(const CATBSTR & iID); \
virtual HRESULT __stdcall GenAndPutID(CATBSTR & oGeneratedID); \
virtual HRESULT __stdcall GenAndPutIDNoGenSeqNum(CATBSTR & oGeneratedID); \
virtual HRESULT __stdcall GenIDNoGenSeqNum(CATBSTR & oGeneratedID); \
virtual HRESULT __stdcall IsIDGenerated(CAT_VARIANT_BOOL & oBIsGenerated); \
virtual HRESULT __stdcall GetLocalID(CATBSTR & oLocalID); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspID(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetID(CATBSTR & oID) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)GetID(oID)); \
} \
HRESULT __stdcall  ENVTIEName::SetID(const CATBSTR & iID) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)SetID(iID)); \
} \
HRESULT __stdcall  ENVTIEName::GenAndPutID(CATBSTR & oGeneratedID) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)GenAndPutID(oGeneratedID)); \
} \
HRESULT __stdcall  ENVTIEName::GenAndPutIDNoGenSeqNum(CATBSTR & oGeneratedID) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)GenAndPutIDNoGenSeqNum(oGeneratedID)); \
} \
HRESULT __stdcall  ENVTIEName::GenIDNoGenSeqNum(CATBSTR & oGeneratedID) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)GenIDNoGenSeqNum(oGeneratedID)); \
} \
HRESULT __stdcall  ENVTIEName::IsIDGenerated(CAT_VARIANT_BOOL & oBIsGenerated) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)IsIDGenerated(oBIsGenerated)); \
} \
HRESULT __stdcall  ENVTIEName::GetLocalID(CATBSTR & oLocalID) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)GetLocalID(oLocalID)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspID,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspID(classe)    TIECATIAPspID##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspID(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspID, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspID, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspID, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspID, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspID, classe) \
 \
HRESULT __stdcall  TIECATIAPspID##classe::GetID(CATBSTR & oID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetID(oID); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspID##classe::SetID(const CATBSTR & iID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetID(iID); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspID##classe::GenAndPutID(CATBSTR & oGeneratedID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oGeneratedID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenAndPutID(oGeneratedID); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oGeneratedID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspID##classe::GenAndPutIDNoGenSeqNum(CATBSTR & oGeneratedID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oGeneratedID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenAndPutIDNoGenSeqNum(oGeneratedID); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oGeneratedID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspID##classe::GenIDNoGenSeqNum(CATBSTR & oGeneratedID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oGeneratedID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenIDNoGenSeqNum(oGeneratedID); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oGeneratedID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspID##classe::IsIDGenerated(CAT_VARIANT_BOOL & oBIsGenerated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oBIsGenerated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsIDGenerated(oBIsGenerated); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oBIsGenerated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspID##classe::GetLocalID(CATBSTR & oLocalID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oLocalID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocalID(oLocalID); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oLocalID); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspID##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspID##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspID##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspID##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspID##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspID(classe) \
 \
 \
declare_TIE_CATIAPspID(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspID##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspID,"CATIAPspID",CATIAPspID::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspID(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspID, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspID##classe(classe::MetaObject(),CATIAPspID::MetaObject(),(void *)CreateTIECATIAPspID##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspID(classe) \
 \
 \
declare_TIE_CATIAPspID(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspID##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspID,"CATIAPspID",CATIAPspID::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspID(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspID, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspID##classe(classe::MetaObject(),CATIAPspID::MetaObject(),(void *)CreateTIECATIAPspID##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspID(classe) TIE_CATIAPspID(classe)
#else
#define BOA_CATIAPspID(classe) CATImplementBOA(CATIAPspID, classe)
#endif

#endif
