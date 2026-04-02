#ifndef __TIE_CATIAManufacturingOutputGenerator
#define __TIE_CATIAManufacturingOutputGenerator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingOutputGenerator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingOutputGenerator */
#define declare_TIE_CATIAManufacturingOutputGenerator(classe) \
 \
 \
class TIECATIAManufacturingOutputGenerator##classe : public CATIAManufacturingOutputGenerator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingOutputGenerator, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GenerateOutputCode(CATIAManufacturingGeneratorData * iData); \
      virtual HRESULT __stdcall InitFileGenerator(const CATBSTR & iFormat, const CATBSTR & iFileName, CATIAManufacturingGeneratorData *& oData); \
      virtual HRESULT __stdcall RunFileGenerator(CATIAManufacturingGeneratorData * iData); \
      virtual HRESULT __stdcall IsModal(CATLONG & oIsModal); \
      virtual HRESULT __stdcall IsSimilarTo(CATIAManufacturingOutputGenerator * iObject, CATLONG & oIsSimilar); \
      virtual HRESULT __stdcall HasToResetModalValues(CATLONG & oIsModal); \
      virtual HRESULT __stdcall AddMeToBuffer(CATLONG & oAddMe); \
      virtual HRESULT __stdcall GetAPTCode(CATIAManufacturingGeneratorData * iData, CATBSTR *& oCode); \
      virtual HRESULT __stdcall SetCurrentObject(CATLONG iCurrentObject); \
      virtual HRESULT __stdcall GetCurrentObject(CATLONG & oCurrentObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingOutputGenerator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GenerateOutputCode(CATIAManufacturingGeneratorData * iData); \
virtual HRESULT __stdcall InitFileGenerator(const CATBSTR & iFormat, const CATBSTR & iFileName, CATIAManufacturingGeneratorData *& oData); \
virtual HRESULT __stdcall RunFileGenerator(CATIAManufacturingGeneratorData * iData); \
virtual HRESULT __stdcall IsModal(CATLONG & oIsModal); \
virtual HRESULT __stdcall IsSimilarTo(CATIAManufacturingOutputGenerator * iObject, CATLONG & oIsSimilar); \
virtual HRESULT __stdcall HasToResetModalValues(CATLONG & oIsModal); \
virtual HRESULT __stdcall AddMeToBuffer(CATLONG & oAddMe); \
virtual HRESULT __stdcall GetAPTCode(CATIAManufacturingGeneratorData * iData, CATBSTR *& oCode); \
virtual HRESULT __stdcall SetCurrentObject(CATLONG iCurrentObject); \
virtual HRESULT __stdcall GetCurrentObject(CATLONG & oCurrentObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingOutputGenerator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GenerateOutputCode(CATIAManufacturingGeneratorData * iData) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)GenerateOutputCode(iData)); \
} \
HRESULT __stdcall  ENVTIEName::InitFileGenerator(const CATBSTR & iFormat, const CATBSTR & iFileName, CATIAManufacturingGeneratorData *& oData) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)InitFileGenerator(iFormat,iFileName,oData)); \
} \
HRESULT __stdcall  ENVTIEName::RunFileGenerator(CATIAManufacturingGeneratorData * iData) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)RunFileGenerator(iData)); \
} \
HRESULT __stdcall  ENVTIEName::IsModal(CATLONG & oIsModal) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)IsModal(oIsModal)); \
} \
HRESULT __stdcall  ENVTIEName::IsSimilarTo(CATIAManufacturingOutputGenerator * iObject, CATLONG & oIsSimilar) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)IsSimilarTo(iObject,oIsSimilar)); \
} \
HRESULT __stdcall  ENVTIEName::HasToResetModalValues(CATLONG & oIsModal) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)HasToResetModalValues(oIsModal)); \
} \
HRESULT __stdcall  ENVTIEName::AddMeToBuffer(CATLONG & oAddMe) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)AddMeToBuffer(oAddMe)); \
} \
HRESULT __stdcall  ENVTIEName::GetAPTCode(CATIAManufacturingGeneratorData * iData, CATBSTR *& oCode) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)GetAPTCode(iData,oCode)); \
} \
HRESULT __stdcall  ENVTIEName::SetCurrentObject(CATLONG iCurrentObject) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)SetCurrentObject(iCurrentObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurrentObject(CATLONG & oCurrentObject) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)GetCurrentObject(oCurrentObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingOutputGenerator,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingOutputGenerator(classe)    TIECATIAManufacturingOutputGenerator##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingOutputGenerator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingOutputGenerator, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingOutputGenerator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingOutputGenerator, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingOutputGenerator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingOutputGenerator, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::GenerateOutputCode(CATIAManufacturingGeneratorData * iData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateOutputCode(iData); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::InitFileGenerator(const CATBSTR & iFormat, const CATBSTR & iFileName, CATIAManufacturingGeneratorData *& oData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFormat,&iFileName,&oData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitFileGenerator(iFormat,iFileName,oData); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFormat,&iFileName,&oData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::RunFileGenerator(CATIAManufacturingGeneratorData * iData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunFileGenerator(iData); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::IsModal(CATLONG & oIsModal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oIsModal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsModal(oIsModal); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oIsModal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::IsSimilarTo(CATIAManufacturingOutputGenerator * iObject, CATLONG & oIsSimilar) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iObject,&oIsSimilar); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSimilarTo(iObject,oIsSimilar); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iObject,&oIsSimilar); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::HasToResetModalValues(CATLONG & oIsModal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oIsModal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasToResetModalValues(oIsModal); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oIsModal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::AddMeToBuffer(CATLONG & oAddMe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAddMe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMeToBuffer(oAddMe); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAddMe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::GetAPTCode(CATIAManufacturingGeneratorData * iData, CATBSTR *& oCode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iData,&oCode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAPTCode(iData,oCode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iData,&oCode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::SetCurrentObject(CATLONG iCurrentObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iCurrentObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentObject(iCurrentObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iCurrentObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutputGenerator##classe::GetCurrentObject(CATLONG & oCurrentObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oCurrentObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentObject(oCurrentObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oCurrentObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutputGenerator##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutputGenerator##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutputGenerator##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutputGenerator##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutputGenerator##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingOutputGenerator(classe) \
 \
 \
declare_TIE_CATIAManufacturingOutputGenerator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingOutputGenerator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingOutputGenerator,"CATIAManufacturingOutputGenerator",CATIAManufacturingOutputGenerator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingOutputGenerator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingOutputGenerator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingOutputGenerator##classe(classe::MetaObject(),CATIAManufacturingOutputGenerator::MetaObject(),(void *)CreateTIECATIAManufacturingOutputGenerator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingOutputGenerator(classe) \
 \
 \
declare_TIE_CATIAManufacturingOutputGenerator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingOutputGenerator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingOutputGenerator,"CATIAManufacturingOutputGenerator",CATIAManufacturingOutputGenerator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingOutputGenerator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingOutputGenerator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingOutputGenerator##classe(classe::MetaObject(),CATIAManufacturingOutputGenerator::MetaObject(),(void *)CreateTIECATIAManufacturingOutputGenerator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingOutputGenerator(classe) TIE_CATIAManufacturingOutputGenerator(classe)
#else
#define BOA_CATIAManufacturingOutputGenerator(classe) CATImplementBOA(CATIAManufacturingOutputGenerator, classe)
#endif

#endif
