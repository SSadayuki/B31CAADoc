#ifndef __TIE_CATIAManufacturingActivitySyntax
#define __TIE_CATIAManufacturingActivitySyntax

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingActivitySyntax.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingActivitySyntax */
#define declare_TIE_CATIAManufacturingActivitySyntax(classe) \
 \
 \
class TIECATIAManufacturingActivitySyntax##classe : public CATIAManufacturingActivitySyntax \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingActivitySyntax, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ResetPPWORDSyntax(); \
      virtual HRESULT __stdcall SetPPWORDSyntax(const CATBSTR & iPPWORDs); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingActivitySyntax(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ResetPPWORDSyntax(); \
virtual HRESULT __stdcall SetPPWORDSyntax(const CATBSTR & iPPWORDs); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingActivitySyntax(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ResetPPWORDSyntax() \
{ \
return (ENVTIECALL(CATIAManufacturingActivitySyntax,ENVTIETypeLetter,ENVTIELetter)ResetPPWORDSyntax()); \
} \
HRESULT __stdcall  ENVTIEName::SetPPWORDSyntax(const CATBSTR & iPPWORDs) \
{ \
return (ENVTIECALL(CATIAManufacturingActivitySyntax,ENVTIETypeLetter,ENVTIELetter)SetPPWORDSyntax(iPPWORDs)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingActivitySyntax,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingActivitySyntax,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingActivitySyntax,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingActivitySyntax,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingActivitySyntax,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingActivitySyntax(classe)    TIECATIAManufacturingActivitySyntax##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingActivitySyntax(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingActivitySyntax, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingActivitySyntax, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingActivitySyntax, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingActivitySyntax, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingActivitySyntax, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingActivitySyntax##classe::ResetPPWORDSyntax() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetPPWORDSyntax(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingActivitySyntax##classe::SetPPWORDSyntax(const CATBSTR & iPPWORDs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPPWORDs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPPWORDSyntax(iPPWORDs); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPPWORDs); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingActivitySyntax##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingActivitySyntax##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingActivitySyntax##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingActivitySyntax##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingActivitySyntax##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingActivitySyntax(classe) \
 \
 \
declare_TIE_CATIAManufacturingActivitySyntax(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingActivitySyntax##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingActivitySyntax,"CATIAManufacturingActivitySyntax",CATIAManufacturingActivitySyntax::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingActivitySyntax(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingActivitySyntax, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingActivitySyntax##classe(classe::MetaObject(),CATIAManufacturingActivitySyntax::MetaObject(),(void *)CreateTIECATIAManufacturingActivitySyntax##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingActivitySyntax(classe) \
 \
 \
declare_TIE_CATIAManufacturingActivitySyntax(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingActivitySyntax##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingActivitySyntax,"CATIAManufacturingActivitySyntax",CATIAManufacturingActivitySyntax::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingActivitySyntax(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingActivitySyntax, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingActivitySyntax##classe(classe::MetaObject(),CATIAManufacturingActivitySyntax::MetaObject(),(void *)CreateTIECATIAManufacturingActivitySyntax##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingActivitySyntax(classe) TIE_CATIAManufacturingActivitySyntax(classe)
#else
#define BOA_CATIAManufacturingActivitySyntax(classe) CATImplementBOA(CATIAManufacturingActivitySyntax, classe)
#endif

#endif
