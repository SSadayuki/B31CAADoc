#ifndef __TIE_CATIAManufacturingToolAssembly
#define __TIE_CATIAManufacturingToolAssembly

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingToolAssembly.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingToolAssembly */
#define declare_TIE_CATIAManufacturingToolAssembly(classe) \
 \
 \
class TIECATIAManufacturingToolAssembly##classe : public CATIAManufacturingToolAssembly \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingToolAssembly, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AssemblyType(CATBSTR & oAssemblyType); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall get_ToolNumber(CATLONG & oNumber); \
      virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribute, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & ioListOfAttributes); \
      virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & ioListOfAttributeUnits); \
      virtual HRESULT __stdcall get_Tool(CATIAManufacturingTool *& oMfgTool); \
      virtual HRESULT __stdcall get_Insert(CATIAManufacturingInsert *& oMfgInsert); \
      virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributeName, CATBSTR & ioNLSName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingToolAssembly(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AssemblyType(CATBSTR & oAssemblyType); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall get_ToolNumber(CATLONG & oNumber); \
virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribute, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & ioListOfAttributes); \
virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & ioListOfAttributeUnits); \
virtual HRESULT __stdcall get_Tool(CATIAManufacturingTool *& oMfgTool); \
virtual HRESULT __stdcall get_Insert(CATIAManufacturingInsert *& oMfgInsert); \
virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributeName, CATBSTR & ioNLSName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingToolAssembly(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AssemblyType(CATBSTR & oAssemblyType) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_AssemblyType(oAssemblyType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::get_ToolNumber(CATLONG & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_ToolNumber(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribute, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribute,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_NumberOfAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributes(CATSafeArrayVariant & ioListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributes(ioListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributeUnits(CATSafeArrayVariant & ioListOfAttributeUnits) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributeUnits(ioListOfAttributeUnits)); \
} \
HRESULT __stdcall  ENVTIEName::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_Tool(oMfgTool)); \
} \
HRESULT __stdcall  ENVTIEName::get_Insert(CATIAManufacturingInsert *& oMfgInsert) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_Insert(oMfgInsert)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributeNLSName(const CATBSTR & iAttributeName, CATBSTR & ioNLSName) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)GetAttributeNLSName(iAttributeName,ioNLSName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingToolAssembly,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingToolAssembly(classe)    TIECATIAManufacturingToolAssembly##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingToolAssembly(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingToolAssembly, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingToolAssembly, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingToolAssembly, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingToolAssembly, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingToolAssembly, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::get_AssemblyType(CATBSTR & oAssemblyType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAssemblyType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AssemblyType(oAssemblyType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAssemblyType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::get_ToolNumber(CATLONG & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToolNumber(oNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::GetAttribute(const CATBSTR & iAttribute, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAttribute,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribute,oAttributCke); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAttribute,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::get_NumberOfAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfAttributes(oNumber); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::GetListOfAttributes(CATSafeArrayVariant & ioListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&ioListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributes(ioListOfAttributes); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&ioListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::GetListOfAttributeUnits(CATSafeArrayVariant & ioListOfAttributeUnits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioListOfAttributeUnits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributeUnits(ioListOfAttributeUnits); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioListOfAttributeUnits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oMfgTool); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Tool(oMfgTool); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oMfgTool); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::get_Insert(CATIAManufacturingInsert *& oMfgInsert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMfgInsert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Insert(oMfgInsert); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMfgInsert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolAssembly##classe::GetAttributeNLSName(const CATBSTR & iAttributeName, CATBSTR & ioNLSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iAttributeName,&ioNLSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNLSName(iAttributeName,ioNLSName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iAttributeName,&ioNLSName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolAssembly##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingToolAssembly(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolAssembly(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolAssembly##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolAssembly,"CATIAManufacturingToolAssembly",CATIAManufacturingToolAssembly::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolAssembly(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingToolAssembly, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolAssembly##classe(classe::MetaObject(),CATIAManufacturingToolAssembly::MetaObject(),(void *)CreateTIECATIAManufacturingToolAssembly##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingToolAssembly(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolAssembly(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolAssembly##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolAssembly,"CATIAManufacturingToolAssembly",CATIAManufacturingToolAssembly::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolAssembly(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingToolAssembly, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolAssembly##classe(classe::MetaObject(),CATIAManufacturingToolAssembly::MetaObject(),(void *)CreateTIECATIAManufacturingToolAssembly##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingToolAssembly(classe) TIE_CATIAManufacturingToolAssembly(classe)
#else
#define BOA_CATIAManufacturingToolAssembly(classe) CATImplementBOA(CATIAManufacturingToolAssembly, classe)
#endif

#endif
