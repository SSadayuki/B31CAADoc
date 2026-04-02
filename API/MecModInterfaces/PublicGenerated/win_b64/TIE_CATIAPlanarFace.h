#ifndef __TIE_CATIAPlanarFace
#define __TIE_CATIAPlanarFace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPlanarFace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPlanarFace */
#define declare_TIE_CATIAPlanarFace(classe) \
 \
 \
class TIECATIAPlanarFace##classe : public CATIAPlanarFace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPlanarFace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall GetFirstAxis(CATSafeArrayVariant & oFirstAxis); \
      virtual HRESULT __stdcall GetSecondAxis(CATSafeArrayVariant & oSecondAxis); \
      virtual HRESULT __stdcall get_DisplayName(CATBSTR & oName); \
      virtual HRESULT __stdcall ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPlanarFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall GetFirstAxis(CATSafeArrayVariant & oFirstAxis); \
virtual HRESULT __stdcall GetSecondAxis(CATSafeArrayVariant & oSecondAxis); \
virtual HRESULT __stdcall get_DisplayName(CATBSTR & oName); \
virtual HRESULT __stdcall ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPlanarFace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)GetFirstAxis(oFirstAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)GetSecondAxis(oSecondAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)get_DisplayName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)ComposeWith(iReference,oComposedReference)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPlanarFace,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPlanarFace(classe)    TIECATIAPlanarFace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPlanarFace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPlanarFace, classe) \
 \
 \
CATImplementTIEMethods(CATIAPlanarFace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPlanarFace, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPlanarFace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPlanarFace, classe) \
 \
HRESULT __stdcall  TIECATIAPlanarFace##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPlanarFace##classe::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oFirstAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstAxis(oFirstAxis); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oFirstAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPlanarFace##classe::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSecondAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondAxis(oSecondAxis); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSecondAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPlanarFace##classe::get_DisplayName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayName(oName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPlanarFace##classe::ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iReference,&oComposedReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComposeWith(iReference,oComposedReference); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iReference,&oComposedReference); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlanarFace##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlanarFace##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlanarFace##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlanarFace##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPlanarFace##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPlanarFace(classe) \
 \
 \
declare_TIE_CATIAPlanarFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPlanarFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPlanarFace,"CATIAPlanarFace",CATIAPlanarFace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPlanarFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPlanarFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPlanarFace##classe(classe::MetaObject(),CATIAPlanarFace::MetaObject(),(void *)CreateTIECATIAPlanarFace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPlanarFace(classe) \
 \
 \
declare_TIE_CATIAPlanarFace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPlanarFace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPlanarFace,"CATIAPlanarFace",CATIAPlanarFace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPlanarFace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPlanarFace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPlanarFace##classe(classe::MetaObject(),CATIAPlanarFace::MetaObject(),(void *)CreateTIECATIAPlanarFace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPlanarFace(classe) TIE_CATIAPlanarFace(classe)
#else
#define BOA_CATIAPlanarFace(classe) CATImplementBOA(CATIAPlanarFace, classe)
#endif

#endif
