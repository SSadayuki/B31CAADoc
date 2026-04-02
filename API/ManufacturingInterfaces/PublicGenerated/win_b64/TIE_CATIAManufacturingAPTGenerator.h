#ifndef __TIE_CATIAManufacturingAPTGenerator
#define __TIE_CATIAManufacturingAPTGenerator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingAPTGenerator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingAPTGenerator */
#define declare_TIE_CATIAManufacturingAPTGenerator(classe) \
 \
 \
class TIECATIAManufacturingAPTGenerator##classe : public CATIAManufacturingAPTGenerator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingAPTGenerator, classe) \
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



#define ENVTIEdeclare_CATIAManufacturingAPTGenerator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIAManufacturingAPTGenerator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GenerateOutputCode(CATIAManufacturingGeneratorData * iData) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)GenerateOutputCode(iData)); \
} \
HRESULT __stdcall  ENVTIEName::InitFileGenerator(const CATBSTR & iFormat, const CATBSTR & iFileName, CATIAManufacturingGeneratorData *& oData) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)InitFileGenerator(iFormat,iFileName,oData)); \
} \
HRESULT __stdcall  ENVTIEName::RunFileGenerator(CATIAManufacturingGeneratorData * iData) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)RunFileGenerator(iData)); \
} \
HRESULT __stdcall  ENVTIEName::IsModal(CATLONG & oIsModal) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)IsModal(oIsModal)); \
} \
HRESULT __stdcall  ENVTIEName::IsSimilarTo(CATIAManufacturingOutputGenerator * iObject, CATLONG & oIsSimilar) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)IsSimilarTo(iObject,oIsSimilar)); \
} \
HRESULT __stdcall  ENVTIEName::HasToResetModalValues(CATLONG & oIsModal) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)HasToResetModalValues(oIsModal)); \
} \
HRESULT __stdcall  ENVTIEName::AddMeToBuffer(CATLONG & oAddMe) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)AddMeToBuffer(oAddMe)); \
} \
HRESULT __stdcall  ENVTIEName::GetAPTCode(CATIAManufacturingGeneratorData * iData, CATBSTR *& oCode) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)GetAPTCode(iData,oCode)); \
} \
HRESULT __stdcall  ENVTIEName::SetCurrentObject(CATLONG iCurrentObject) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)SetCurrentObject(iCurrentObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurrentObject(CATLONG & oCurrentObject) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)GetCurrentObject(oCurrentObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingAPTGenerator,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingAPTGenerator(classe)    TIECATIAManufacturingAPTGenerator##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingAPTGenerator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingAPTGenerator, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingAPTGenerator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingAPTGenerator, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingAPTGenerator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingAPTGenerator, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::GenerateOutputCode(CATIAManufacturingGeneratorData * iData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateOutputCode(iData); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::InitFileGenerator(const CATBSTR & iFormat, const CATBSTR & iFileName, CATIAManufacturingGeneratorData *& oData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFormat,&iFileName,&oData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitFileGenerator(iFormat,iFileName,oData); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFormat,&iFileName,&oData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::RunFileGenerator(CATIAManufacturingGeneratorData * iData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunFileGenerator(iData); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::IsModal(CATLONG & oIsModal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oIsModal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsModal(oIsModal); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oIsModal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::IsSimilarTo(CATIAManufacturingOutputGenerator * iObject, CATLONG & oIsSimilar) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iObject,&oIsSimilar); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSimilarTo(iObject,oIsSimilar); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iObject,&oIsSimilar); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::HasToResetModalValues(CATLONG & oIsModal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oIsModal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasToResetModalValues(oIsModal); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oIsModal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::AddMeToBuffer(CATLONG & oAddMe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAddMe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMeToBuffer(oAddMe); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAddMe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::GetAPTCode(CATIAManufacturingGeneratorData * iData, CATBSTR *& oCode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iData,&oCode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAPTCode(iData,oCode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iData,&oCode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::SetCurrentObject(CATLONG iCurrentObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iCurrentObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentObject(iCurrentObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iCurrentObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingAPTGenerator##classe::GetCurrentObject(CATLONG & oCurrentObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oCurrentObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentObject(oCurrentObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oCurrentObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingAPTGenerator##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingAPTGenerator##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingAPTGenerator##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingAPTGenerator##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingAPTGenerator##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingAPTGenerator(classe) \
 \
 \
declare_TIE_CATIAManufacturingAPTGenerator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingAPTGenerator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingAPTGenerator,"CATIAManufacturingAPTGenerator",CATIAManufacturingAPTGenerator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingAPTGenerator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingAPTGenerator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingAPTGenerator##classe(classe::MetaObject(),CATIAManufacturingAPTGenerator::MetaObject(),(void *)CreateTIECATIAManufacturingAPTGenerator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingAPTGenerator(classe) \
 \
 \
declare_TIE_CATIAManufacturingAPTGenerator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingAPTGenerator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingAPTGenerator,"CATIAManufacturingAPTGenerator",CATIAManufacturingAPTGenerator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingAPTGenerator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingAPTGenerator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingAPTGenerator##classe(classe::MetaObject(),CATIAManufacturingAPTGenerator::MetaObject(),(void *)CreateTIECATIAManufacturingAPTGenerator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingAPTGenerator(classe) TIE_CATIAManufacturingAPTGenerator(classe)
#else
#define BOA_CATIAManufacturingAPTGenerator(classe) CATImplementBOA(CATIAManufacturingAPTGenerator, classe)
#endif

#endif
