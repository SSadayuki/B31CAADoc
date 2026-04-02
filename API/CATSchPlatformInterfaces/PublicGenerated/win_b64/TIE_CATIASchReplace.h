#ifndef __TIE_CATIASchReplace
#define __TIE_CATIASchReplace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchReplace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchReplace */
#define declare_TIE_CATIASchReplace(classe) \
 \
 \
class TIECATIASchReplace##classe : public CATIASchReplace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchReplace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Replace(CATIASchGRRComp * iGRRToBePlaced, CATIASchComponent * iSchCompToBeRemoved, CATIASchComponent *& oNewComponent); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Replace(CATIASchGRRComp * iGRRToBePlaced, CATIASchComponent * iSchCompToBeRemoved, CATIASchComponent *& oNewComponent); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Replace(CATIASchGRRComp * iGRRToBePlaced, CATIASchComponent * iSchCompToBeRemoved, CATIASchComponent *& oNewComponent) \
{ \
return (ENVTIECALL(CATIASchReplace,ENVTIETypeLetter,ENVTIELetter)Replace(iGRRToBePlaced,iSchCompToBeRemoved,oNewComponent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchReplace,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchReplace,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchReplace,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchReplace,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchReplace,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchReplace(classe)    TIECATIASchReplace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchReplace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchReplace, classe) \
 \
 \
CATImplementTIEMethods(CATIASchReplace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchReplace, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchReplace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchReplace, classe) \
 \
HRESULT __stdcall  TIECATIASchReplace##classe::Replace(CATIASchGRRComp * iGRRToBePlaced, CATIASchComponent * iSchCompToBeRemoved, CATIASchComponent *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRRToBePlaced,&iSchCompToBeRemoved,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Replace(iGRRToBePlaced,iSchCompToBeRemoved,oNewComponent); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRRToBePlaced,&iSchCompToBeRemoved,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchReplace##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchReplace##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchReplace##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchReplace##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchReplace##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchReplace(classe) \
 \
 \
declare_TIE_CATIASchReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchReplace,"CATIASchReplace",CATIASchReplace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchReplace##classe(classe::MetaObject(),CATIASchReplace::MetaObject(),(void *)CreateTIECATIASchReplace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchReplace(classe) \
 \
 \
declare_TIE_CATIASchReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchReplace,"CATIASchReplace",CATIASchReplace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchReplace##classe(classe::MetaObject(),CATIASchReplace::MetaObject(),(void *)CreateTIECATIASchReplace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchReplace(classe) TIE_CATIASchReplace(classe)
#else
#define BOA_CATIASchReplace(classe) CATImplementBOA(CATIASchReplace, classe)
#endif

#endif
