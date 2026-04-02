#ifndef __TIE_CATIAPspLightPart
#define __TIE_CATIAPspLightPart

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspLightPart.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspLightPart */
#define declare_TIE_CATIAPspLightPart(classe) \
 \
 \
class TIECATIAPspLightPart##classe : public CATIAPspLightPart \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspLightPart, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetDefinition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints); \
      virtual HRESULT __stdcall SetDefinition(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iListPoints); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspLightPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetDefinition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints); \
virtual HRESULT __stdcall SetDefinition(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iListPoints); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspLightPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetDefinition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints) \
{ \
return (ENVTIECALL(CATIAPspLightPart,ENVTIETypeLetter,ENVTIELetter)GetDefinition(iRelAxis,oListPoints)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefinition(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iListPoints) \
{ \
return (ENVTIECALL(CATIAPspLightPart,ENVTIETypeLetter,ENVTIELetter)SetDefinition(iRelAxis,iListPoints)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspLightPart,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspLightPart,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspLightPart,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspLightPart,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspLightPart,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspLightPart(classe)    TIECATIAPspLightPart##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspLightPart(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspLightPart, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspLightPart, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspLightPart, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspLightPart, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspLightPart, classe) \
 \
HRESULT __stdcall  TIECATIAPspLightPart##classe::GetDefinition(CATIAProduct * iRelAxis, CATIAPspListOfDoubles *& oListPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRelAxis,&oListPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefinition(iRelAxis,oListPoints); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRelAxis,&oListPoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspLightPart##classe::SetDefinition(CATIAProduct * iRelAxis, const CATSafeArrayVariant & iListPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRelAxis,&iListPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefinition(iRelAxis,iListPoints); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRelAxis,&iListPoints); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightPart##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightPart##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightPart##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightPart##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspLightPart##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspLightPart(classe) \
 \
 \
declare_TIE_CATIAPspLightPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspLightPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspLightPart,"CATIAPspLightPart",CATIAPspLightPart::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspLightPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspLightPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspLightPart##classe(classe::MetaObject(),CATIAPspLightPart::MetaObject(),(void *)CreateTIECATIAPspLightPart##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspLightPart(classe) \
 \
 \
declare_TIE_CATIAPspLightPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspLightPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspLightPart,"CATIAPspLightPart",CATIAPspLightPart::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspLightPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspLightPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspLightPart##classe(classe::MetaObject(),CATIAPspLightPart::MetaObject(),(void *)CreateTIECATIAPspLightPart##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspLightPart(classe) TIE_CATIAPspLightPart(classe)
#else
#define BOA_CATIAPspLightPart(classe) CATImplementBOA(CATIAPspLightPart, classe)
#endif

#endif
