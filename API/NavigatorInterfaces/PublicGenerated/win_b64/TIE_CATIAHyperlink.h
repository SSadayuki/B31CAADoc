#ifndef __TIE_CATIAHyperlink
#define __TIE_CATIAHyperlink

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHyperlink.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHyperlink */
#define declare_TIE_CATIAHyperlink(classe) \
 \
 \
class TIECATIAHyperlink##classe : public CATIAHyperlink \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHyperlink, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddUrl(const CATBSTR & iUrl); \
      virtual HRESULT __stdcall CountObject(CATLONG & oNbItems); \
      virtual HRESULT __stdcall ItemObject(const CATVariant & iIndex, CATBSTR & oURL); \
      virtual HRESULT __stdcall RemoveObject(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHyperlink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddUrl(const CATBSTR & iUrl); \
virtual HRESULT __stdcall CountObject(CATLONG & oNbItems); \
virtual HRESULT __stdcall ItemObject(const CATVariant & iIndex, CATBSTR & oURL); \
virtual HRESULT __stdcall RemoveObject(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHyperlink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddUrl(const CATBSTR & iUrl) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)AddUrl(iUrl)); \
} \
HRESULT __stdcall  ENVTIEName::CountObject(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)CountObject(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::ItemObject(const CATVariant & iIndex, CATBSTR & oURL) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)ItemObject(iIndex,oURL)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveObject(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)RemoveObject(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHyperlink,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHyperlink(classe)    TIECATIAHyperlink##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHyperlink(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHyperlink, classe) \
 \
 \
CATImplementTIEMethods(CATIAHyperlink, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHyperlink, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHyperlink, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHyperlink, classe) \
 \
HRESULT __stdcall  TIECATIAHyperlink##classe::AddUrl(const CATBSTR & iUrl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iUrl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddUrl(iUrl); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iUrl); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHyperlink##classe::CountObject(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CountObject(oNbItems); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHyperlink##classe::ItemObject(const CATVariant & iIndex, CATBSTR & oURL) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oURL); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ItemObject(iIndex,oURL); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oURL); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHyperlink##classe::RemoveObject(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveObject(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlink##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlink##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlink##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlink##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHyperlink##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHyperlink(classe) \
 \
 \
declare_TIE_CATIAHyperlink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHyperlink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHyperlink,"CATIAHyperlink",CATIAHyperlink::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHyperlink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHyperlink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHyperlink##classe(classe::MetaObject(),CATIAHyperlink::MetaObject(),(void *)CreateTIECATIAHyperlink##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHyperlink(classe) \
 \
 \
declare_TIE_CATIAHyperlink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHyperlink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHyperlink,"CATIAHyperlink",CATIAHyperlink::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHyperlink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHyperlink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHyperlink##classe(classe::MetaObject(),CATIAHyperlink::MetaObject(),(void *)CreateTIECATIAHyperlink##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHyperlink(classe) TIE_CATIAHyperlink(classe)
#else
#define BOA_CATIAHyperlink(classe) CATImplementBOA(CATIAHyperlink, classe)
#endif

#endif
