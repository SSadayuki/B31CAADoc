#ifndef __TIE_CATIAManufacturingOutput
#define __TIE_CATIAManufacturingOutput

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingOutput.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingOutput */
#define declare_TIE_CATIAManufacturingOutput(classe) \
 \
 \
class TIECATIAManufacturingOutput##classe : public CATIAManufacturingOutput \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingOutput, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall write_Chars(const CATBSTR & iText); \
      virtual HRESULT __stdcall write_Double(double iVal); \
      virtual HRESULT __stdcall write_Long(CATLONG iVal); \
      virtual HRESULT __stdcall NewLine(); \
      virtual HRESULT __stdcall EndLine(); \
      virtual HRESULT __stdcall NewBlock(); \
      virtual HRESULT __stdcall EndBlock(); \
      virtual HRESULT __stdcall IncrementTabulation(CATLONG iTab); \
      virtual HRESULT __stdcall DecrementTabulation(CATLONG iTab); \
      virtual HRESULT __stdcall CloseStream(); \
      virtual HRESULT __stdcall Flush(); \
      virtual HRESULT __stdcall SetBufferLength(CATLONG iLines); \
      virtual HRESULT __stdcall get_Size(CATLONG & oBytes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingOutput(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall write_Chars(const CATBSTR & iText); \
virtual HRESULT __stdcall write_Double(double iVal); \
virtual HRESULT __stdcall write_Long(CATLONG iVal); \
virtual HRESULT __stdcall NewLine(); \
virtual HRESULT __stdcall EndLine(); \
virtual HRESULT __stdcall NewBlock(); \
virtual HRESULT __stdcall EndBlock(); \
virtual HRESULT __stdcall IncrementTabulation(CATLONG iTab); \
virtual HRESULT __stdcall DecrementTabulation(CATLONG iTab); \
virtual HRESULT __stdcall CloseStream(); \
virtual HRESULT __stdcall Flush(); \
virtual HRESULT __stdcall SetBufferLength(CATLONG iLines); \
virtual HRESULT __stdcall get_Size(CATLONG & oBytes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingOutput(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::write_Chars(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)write_Chars(iText)); \
} \
HRESULT __stdcall  ENVTIEName::write_Double(double iVal) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)write_Double(iVal)); \
} \
HRESULT __stdcall  ENVTIEName::write_Long(CATLONG iVal) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)write_Long(iVal)); \
} \
HRESULT __stdcall  ENVTIEName::NewLine() \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)NewLine()); \
} \
HRESULT __stdcall  ENVTIEName::EndLine() \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)EndLine()); \
} \
HRESULT __stdcall  ENVTIEName::NewBlock() \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)NewBlock()); \
} \
HRESULT __stdcall  ENVTIEName::EndBlock() \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)EndBlock()); \
} \
HRESULT __stdcall  ENVTIEName::IncrementTabulation(CATLONG iTab) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)IncrementTabulation(iTab)); \
} \
HRESULT __stdcall  ENVTIEName::DecrementTabulation(CATLONG iTab) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)DecrementTabulation(iTab)); \
} \
HRESULT __stdcall  ENVTIEName::CloseStream() \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)CloseStream()); \
} \
HRESULT __stdcall  ENVTIEName::Flush() \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)Flush()); \
} \
HRESULT __stdcall  ENVTIEName::SetBufferLength(CATLONG iLines) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)SetBufferLength(iLines)); \
} \
HRESULT __stdcall  ENVTIEName::get_Size(CATLONG & oBytes) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)get_Size(oBytes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingOutput,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingOutput(classe)    TIECATIAManufacturingOutput##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingOutput(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingOutput, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingOutput, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingOutput, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingOutput, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingOutput, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::write_Chars(const CATBSTR & iText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->write_Chars(iText); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::write_Double(double iVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->write_Double(iVal); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::write_Long(CATLONG iVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->write_Long(iVal); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::NewLine() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewLine(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::EndLine() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndLine(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::NewBlock() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewBlock(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::EndBlock() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndBlock(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::IncrementTabulation(CATLONG iTab) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iTab); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IncrementTabulation(iTab); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iTab); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::DecrementTabulation(CATLONG iTab) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iTab); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DecrementTabulation(iTab); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iTab); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::CloseStream() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CloseStream(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::Flush() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Flush(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::SetBufferLength(CATLONG iLines) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLines); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBufferLength(iLines); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLines); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOutput##classe::get_Size(CATLONG & oBytes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oBytes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Size(oBytes); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oBytes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutput##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutput##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutput##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutput##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOutput##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingOutput(classe) \
 \
 \
declare_TIE_CATIAManufacturingOutput(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingOutput##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingOutput,"CATIAManufacturingOutput",CATIAManufacturingOutput::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingOutput(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingOutput, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingOutput##classe(classe::MetaObject(),CATIAManufacturingOutput::MetaObject(),(void *)CreateTIECATIAManufacturingOutput##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingOutput(classe) \
 \
 \
declare_TIE_CATIAManufacturingOutput(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingOutput##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingOutput,"CATIAManufacturingOutput",CATIAManufacturingOutput::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingOutput(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingOutput, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingOutput##classe(classe::MetaObject(),CATIAManufacturingOutput::MetaObject(),(void *)CreateTIECATIAManufacturingOutput##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingOutput(classe) TIE_CATIAManufacturingOutput(classe)
#else
#define BOA_CATIAManufacturingOutput(classe) CATImplementBOA(CATIAManufacturingOutput, classe)
#endif

#endif
