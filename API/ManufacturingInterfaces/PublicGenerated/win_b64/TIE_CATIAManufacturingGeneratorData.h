#ifndef __TIE_CATIAManufacturingGeneratorData
#define __TIE_CATIAManufacturingGeneratorData

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingGeneratorData.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingGeneratorData */
#define declare_TIE_CATIAManufacturingGeneratorData(classe) \
 \
 \
class TIECATIAManufacturingGeneratorData##classe : public CATIAManufacturingGeneratorData \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingGeneratorData, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddObjectToGenerate(CATBaseUnknown * iObject); \
      virtual HRESULT __stdcall AddObjectToGenerateWithBuffer(CATBaseUnknown * iObject); \
      virtual HRESULT __stdcall AddObjectToGenerateWithOutBuffer(CATBaseUnknown * iObject); \
      virtual HRESULT __stdcall AddObjectToGenerateFromBuffer(CATBaseUnknown * iObject); \
      virtual HRESULT __stdcall GetOutputStream(CATIAManufacturingOutput *& oStream); \
      virtual HRESULT __stdcall GetFT06Stream(CATIAManufacturingOutput *& oStream); \
      virtual HRESULT __stdcall GetLastObjectToGenerate(CATBaseUnknown *& oObject); \
      virtual HRESULT __stdcall SetLastObjectToGenerate(CATBaseUnknown * iObject); \
      virtual HRESULT __stdcall ResetAllModalValues(); \
      virtual HRESULT __stdcall AddObjectToModalValues(CATBaseUnknown * iObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingGeneratorData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddObjectToGenerate(CATBaseUnknown * iObject); \
virtual HRESULT __stdcall AddObjectToGenerateWithBuffer(CATBaseUnknown * iObject); \
virtual HRESULT __stdcall AddObjectToGenerateWithOutBuffer(CATBaseUnknown * iObject); \
virtual HRESULT __stdcall AddObjectToGenerateFromBuffer(CATBaseUnknown * iObject); \
virtual HRESULT __stdcall GetOutputStream(CATIAManufacturingOutput *& oStream); \
virtual HRESULT __stdcall GetFT06Stream(CATIAManufacturingOutput *& oStream); \
virtual HRESULT __stdcall GetLastObjectToGenerate(CATBaseUnknown *& oObject); \
virtual HRESULT __stdcall SetLastObjectToGenerate(CATBaseUnknown * iObject); \
virtual HRESULT __stdcall ResetAllModalValues(); \
virtual HRESULT __stdcall AddObjectToModalValues(CATBaseUnknown * iObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingGeneratorData(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddObjectToGenerate(CATBaseUnknown * iObject) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)AddObjectToGenerate(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddObjectToGenerateWithBuffer(CATBaseUnknown * iObject) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)AddObjectToGenerateWithBuffer(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddObjectToGenerateWithOutBuffer(CATBaseUnknown * iObject) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)AddObjectToGenerateWithOutBuffer(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddObjectToGenerateFromBuffer(CATBaseUnknown * iObject) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)AddObjectToGenerateFromBuffer(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputStream(CATIAManufacturingOutput *& oStream) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)GetOutputStream(oStream)); \
} \
HRESULT __stdcall  ENVTIEName::GetFT06Stream(CATIAManufacturingOutput *& oStream) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)GetFT06Stream(oStream)); \
} \
HRESULT __stdcall  ENVTIEName::GetLastObjectToGenerate(CATBaseUnknown *& oObject) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)GetLastObjectToGenerate(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetLastObjectToGenerate(CATBaseUnknown * iObject) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)SetLastObjectToGenerate(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::ResetAllModalValues() \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)ResetAllModalValues()); \
} \
HRESULT __stdcall  ENVTIEName::AddObjectToModalValues(CATBaseUnknown * iObject) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)AddObjectToModalValues(iObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingGeneratorData,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingGeneratorData(classe)    TIECATIAManufacturingGeneratorData##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingGeneratorData(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingGeneratorData, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingGeneratorData, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingGeneratorData, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingGeneratorData, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingGeneratorData, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::AddObjectToGenerate(CATBaseUnknown * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObjectToGenerate(iObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::AddObjectToGenerateWithBuffer(CATBaseUnknown * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObjectToGenerateWithBuffer(iObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::AddObjectToGenerateWithOutBuffer(CATBaseUnknown * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObjectToGenerateWithOutBuffer(iObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::AddObjectToGenerateFromBuffer(CATBaseUnknown * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObjectToGenerateFromBuffer(iObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::GetOutputStream(CATIAManufacturingOutput *& oStream) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oStream); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputStream(oStream); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oStream); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::GetFT06Stream(CATIAManufacturingOutput *& oStream) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oStream); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFT06Stream(oStream); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oStream); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::GetLastObjectToGenerate(CATBaseUnknown *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLastObjectToGenerate(oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::SetLastObjectToGenerate(CATBaseUnknown * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLastObjectToGenerate(iObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::ResetAllModalValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetAllModalValues(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingGeneratorData##classe::AddObjectToModalValues(CATBaseUnknown * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObjectToModalValues(iObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingGeneratorData##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingGeneratorData##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingGeneratorData##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingGeneratorData##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingGeneratorData##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingGeneratorData(classe) \
 \
 \
declare_TIE_CATIAManufacturingGeneratorData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingGeneratorData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingGeneratorData,"CATIAManufacturingGeneratorData",CATIAManufacturingGeneratorData::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingGeneratorData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingGeneratorData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingGeneratorData##classe(classe::MetaObject(),CATIAManufacturingGeneratorData::MetaObject(),(void *)CreateTIECATIAManufacturingGeneratorData##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingGeneratorData(classe) \
 \
 \
declare_TIE_CATIAManufacturingGeneratorData(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingGeneratorData##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingGeneratorData,"CATIAManufacturingGeneratorData",CATIAManufacturingGeneratorData::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingGeneratorData(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingGeneratorData, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingGeneratorData##classe(classe::MetaObject(),CATIAManufacturingGeneratorData::MetaObject(),(void *)CreateTIECATIAManufacturingGeneratorData##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingGeneratorData(classe) TIE_CATIAManufacturingGeneratorData(classe)
#else
#define BOA_CATIAManufacturingGeneratorData(classe) CATImplementBOA(CATIAManufacturingGeneratorData, classe)
#endif

#endif
