#ifndef __TIE_SWKIAManikinPart
#define __TIE_SWKIAManikinPart

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAManikinPart.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAManikinPart */
#define declare_TIE_SWKIAManikinPart(classe) \
 \
 \
class TIESWKIAManikinPart##classe : public SWKIAManikinPart \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAManikinPart, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAManikinPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAManikinPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & pioText) \
{ \
return (ENVTIECALL(SWKIAManikinPart,ENVTIETypeLetter,ENVTIELetter)get_Memo(pioText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIAManikinPart,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAManikinPart,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAManikinPart,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAManikinPart,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAManikinPart,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAManikinPart,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAManikinPart(classe)    TIESWKIAManikinPart##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAManikinPart(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAManikinPart, classe) \
 \
 \
CATImplementTIEMethods(SWKIAManikinPart, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAManikinPart, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAManikinPart, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAManikinPart, classe) \
 \
HRESULT __stdcall  TIESWKIAManikinPart##classe::get_Memo(CATBSTR & pioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&pioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(pioText); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&pioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAManikinPart##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikinPart##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikinPart##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikinPart##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikinPart##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAManikinPart##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAManikinPart(classe) \
 \
 \
declare_TIE_SWKIAManikinPart(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAManikinPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAManikinPart,"SWKIAManikinPart",SWKIAManikinPart::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAManikinPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAManikinPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAManikinPart##classe(classe::MetaObject(),SWKIAManikinPart::MetaObject(),(void *)CreateTIESWKIAManikinPart##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAManikinPart(classe) \
 \
 \
declare_TIE_SWKIAManikinPart(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAManikinPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAManikinPart,"SWKIAManikinPart",SWKIAManikinPart::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAManikinPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAManikinPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAManikinPart##classe(classe::MetaObject(),SWKIAManikinPart::MetaObject(),(void *)CreateTIESWKIAManikinPart##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAManikinPart(classe) TIE_SWKIAManikinPart(classe)
#else
#define BOA_SWKIAManikinPart(classe) CATImplementBOA(SWKIAManikinPart, classe)
#endif

#endif
