#ifndef __TIE_CATIAFeatureGenerator
#define __TIE_CATIAFeatureGenerator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFeatureGenerator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFeatureGenerator */
#define declare_TIE_CATIAFeatureGenerator(classe) \
 \
 \
class TIECATIAFeatureGenerator##classe : public CATIAFeatureGenerator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFeatureGenerator, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Script(CATBSTR & oValue); \
      virtual HRESULT __stdcall put_Script(const CATBSTR & iValue); \
      virtual HRESULT __stdcall LoadScriptFromFilePath(const CATBSTR & iFilePath); \
      virtual HRESULT __stdcall Generate(CATIABase * iContext); \
      virtual HRESULT __stdcall GenerateInContext(const CATSafeArrayVariant & iInputsArray); \
      virtual HRESULT __stdcall get_NbGeneratedFeatures(CATLONG & oValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFeatureGenerator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Script(CATBSTR & oValue); \
virtual HRESULT __stdcall put_Script(const CATBSTR & iValue); \
virtual HRESULT __stdcall LoadScriptFromFilePath(const CATBSTR & iFilePath); \
virtual HRESULT __stdcall Generate(CATIABase * iContext); \
virtual HRESULT __stdcall GenerateInContext(const CATSafeArrayVariant & iInputsArray); \
virtual HRESULT __stdcall get_NbGeneratedFeatures(CATLONG & oValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFeatureGenerator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Script(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)get_Script(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Script(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)put_Script(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::LoadScriptFromFilePath(const CATBSTR & iFilePath) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)LoadScriptFromFilePath(iFilePath)); \
} \
HRESULT __stdcall  ENVTIEName::Generate(CATIABase * iContext) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)Generate(iContext)); \
} \
HRESULT __stdcall  ENVTIEName::GenerateInContext(const CATSafeArrayVariant & iInputsArray) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)GenerateInContext(iInputsArray)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbGeneratedFeatures(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)get_NbGeneratedFeatures(oValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFeatureGenerator,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFeatureGenerator(classe)    TIECATIAFeatureGenerator##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFeatureGenerator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFeatureGenerator, classe) \
 \
 \
CATImplementTIEMethods(CATIAFeatureGenerator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFeatureGenerator, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFeatureGenerator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFeatureGenerator, classe) \
 \
HRESULT __stdcall  TIECATIAFeatureGenerator##classe::get_Script(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Script(oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFeatureGenerator##classe::put_Script(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Script(iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFeatureGenerator##classe::LoadScriptFromFilePath(const CATBSTR & iFilePath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFilePath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LoadScriptFromFilePath(iFilePath); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFilePath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFeatureGenerator##classe::Generate(CATIABase * iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Generate(iContext); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFeatureGenerator##classe::GenerateInContext(const CATSafeArrayVariant & iInputsArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iInputsArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateInContext(iInputsArray); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iInputsArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFeatureGenerator##classe::get_NbGeneratedFeatures(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbGeneratedFeatures(oValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFeatureGenerator##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFeatureGenerator##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFeatureGenerator##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFeatureGenerator##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFeatureGenerator##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFeatureGenerator(classe) \
 \
 \
declare_TIE_CATIAFeatureGenerator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFeatureGenerator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFeatureGenerator,"CATIAFeatureGenerator",CATIAFeatureGenerator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFeatureGenerator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFeatureGenerator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFeatureGenerator##classe(classe::MetaObject(),CATIAFeatureGenerator::MetaObject(),(void *)CreateTIECATIAFeatureGenerator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFeatureGenerator(classe) \
 \
 \
declare_TIE_CATIAFeatureGenerator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFeatureGenerator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFeatureGenerator,"CATIAFeatureGenerator",CATIAFeatureGenerator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFeatureGenerator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFeatureGenerator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFeatureGenerator##classe(classe::MetaObject(),CATIAFeatureGenerator::MetaObject(),(void *)CreateTIECATIAFeatureGenerator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFeatureGenerator(classe) TIE_CATIAFeatureGenerator(classe)
#else
#define BOA_CATIAFeatureGenerator(classe) CATImplementBOA(CATIAFeatureGenerator, classe)
#endif

#endif
