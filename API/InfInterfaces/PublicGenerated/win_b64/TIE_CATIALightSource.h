#ifndef __TIE_CATIALightSource
#define __TIE_CATIALightSource

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALightSource.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALightSource */
#define declare_TIE_CATIALightSource(classe) \
 \
 \
class TIECATIALightSource##classe : public CATIALightSource \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALightSource, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
      virtual HRESULT __stdcall PutDirection(const CATSafeArrayVariant & oDirection); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIALightSource(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
virtual HRESULT __stdcall PutDirection(const CATSafeArrayVariant & oDirection); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIALightSource(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIALightSource,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::PutDirection(const CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIALightSource,ENVTIETypeLetter,ENVTIELetter)PutDirection(oDirection)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALightSource,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALightSource,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALightSource,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALightSource,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALightSource,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALightSource(classe)    TIECATIALightSource##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALightSource(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALightSource, classe) \
 \
 \
CATImplementTIEMethods(CATIALightSource, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALightSource, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALightSource, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALightSource, classe) \
 \
HRESULT __stdcall  TIECATIALightSource##classe::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALightSource##classe::PutDirection(const CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutDirection(oDirection); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALightSource##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALightSource##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALightSource##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALightSource##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALightSource##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALightSource(classe) \
 \
 \
declare_TIE_CATIALightSource(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALightSource##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALightSource,"CATIALightSource",CATIALightSource::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALightSource(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALightSource, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALightSource##classe(classe::MetaObject(),CATIALightSource::MetaObject(),(void *)CreateTIECATIALightSource##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALightSource(classe) \
 \
 \
declare_TIE_CATIALightSource(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALightSource##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALightSource,"CATIALightSource",CATIALightSource::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALightSource(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALightSource, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALightSource##classe(classe::MetaObject(),CATIALightSource::MetaObject(),(void *)CreateTIECATIALightSource##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALightSource(classe) TIE_CATIALightSource(classe)
#else
#define BOA_CATIALightSource(classe) CATImplementBOA(CATIALightSource, classe)
#endif

#endif
