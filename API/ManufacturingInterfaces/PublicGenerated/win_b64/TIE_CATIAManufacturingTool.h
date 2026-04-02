#ifndef __TIE_CATIAManufacturingTool
#define __TIE_CATIAManufacturingTool

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingTool.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingTool */
#define declare_TIE_CATIAManufacturingTool(classe) \
 \
 \
class TIECATIAManufacturingTool##classe : public CATIAManufacturingTool \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingTool, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ToolType(CATBSTR & oToolType); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall get_ToolNumber(CATLONG & oNumber); \
      virtual HRESULT __stdcall get_Picture(CATBSTR & oPicture); \
      virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits); \
      virtual HRESULT __stdcall get_CorrectorCount(short & oCorrectorCount); \
      virtual HRESULT __stdcall GetCorrector(short index, CATIAManufacturingToolCorrector *& oMfgToolCorrector); \
      virtual HRESULT __stdcall AddCorrector(CATIAManufacturingToolCorrector *& oMfgToolCorrector); \
      virtual HRESULT __stdcall GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
      virtual HRESULT __stdcall GetListOfAptParameters(CATSafeArrayVariant & oListOfAptParameters); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingTool(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ToolType(CATBSTR & oToolType); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall get_ToolNumber(CATLONG & oNumber); \
virtual HRESULT __stdcall get_Picture(CATBSTR & oPicture); \
virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits); \
virtual HRESULT __stdcall get_CorrectorCount(short & oCorrectorCount); \
virtual HRESULT __stdcall GetCorrector(short index, CATIAManufacturingToolCorrector *& oMfgToolCorrector); \
virtual HRESULT __stdcall AddCorrector(CATIAManufacturingToolCorrector *& oMfgToolCorrector); \
virtual HRESULT __stdcall GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
virtual HRESULT __stdcall GetListOfAptParameters(CATSafeArrayVariant & oListOfAptParameters); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingTool(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ToolType(CATBSTR & oToolType) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_ToolType(oToolType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::get_ToolNumber(CATLONG & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_ToolNumber(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_Picture(CATBSTR & oPicture) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_Picture(oPicture)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_NumberOfAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributeUnits(oListOfAttributeUnits)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectorCount(short & oCorrectorCount) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_CorrectorCount(oCorrectorCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetCorrector(short index, CATIAManufacturingToolCorrector *& oMfgToolCorrector) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetCorrector(index,oMfgToolCorrector)); \
} \
HRESULT __stdcall  ENVTIEName::AddCorrector(CATIAManufacturingToolCorrector *& oMfgToolCorrector) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)AddCorrector(oMfgToolCorrector)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetListOfGeomAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetAttributeNLSName(iAttributName,oNLSName)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAptParameters(CATSafeArrayVariant & oListOfAptParameters) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetListOfAptParameters(oListOfAptParameters)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingTool,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingTool(classe)    TIECATIAManufacturingTool##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingTool(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingTool, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingTool, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingTool, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingTool, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingTool, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::get_ToolType(CATBSTR & oToolType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oToolType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToolType(oToolType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oToolType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::get_ToolNumber(CATLONG & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToolNumber(oNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::get_Picture(CATBSTR & oPicture) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oPicture); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Picture(oPicture); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oPicture); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::get_NumberOfAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfAttributes(oNumber); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributes(oListOfAttributes); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oListOfAttributeUnits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributeUnits(oListOfAttributeUnits); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oListOfAttributeUnits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::get_CorrectorCount(short & oCorrectorCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCorrectorCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectorCount(oCorrectorCount); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCorrectorCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::GetCorrector(short index, CATIAManufacturingToolCorrector *& oMfgToolCorrector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&index,&oMfgToolCorrector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCorrector(index,oMfgToolCorrector); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&index,&oMfgToolCorrector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::AddCorrector(CATIAManufacturingToolCorrector *& oMfgToolCorrector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oMfgToolCorrector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCorrector(oMfgToolCorrector); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oMfgToolCorrector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfGeomAttributes(oListOfAttributes); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iAttributName,&oNLSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNLSName(iAttributName,oNLSName); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iAttributName,&oNLSName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingTool##classe::GetListOfAptParameters(CATSafeArrayVariant & oListOfAptParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oListOfAptParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAptParameters(oListOfAptParameters); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oListOfAptParameters); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingTool##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingTool##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingTool##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingTool##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingTool##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingTool(classe) \
 \
 \
declare_TIE_CATIAManufacturingTool(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingTool##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingTool,"CATIAManufacturingTool",CATIAManufacturingTool::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingTool(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingTool, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingTool##classe(classe::MetaObject(),CATIAManufacturingTool::MetaObject(),(void *)CreateTIECATIAManufacturingTool##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingTool(classe) \
 \
 \
declare_TIE_CATIAManufacturingTool(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingTool##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingTool,"CATIAManufacturingTool",CATIAManufacturingTool::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingTool(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingTool, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingTool##classe(classe::MetaObject(),CATIAManufacturingTool::MetaObject(),(void *)CreateTIECATIAManufacturingTool##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingTool(classe) TIE_CATIAManufacturingTool(classe)
#else
#define BOA_CATIAManufacturingTool(classe) CATImplementBOA(CATIAManufacturingTool, classe)
#endif

#endif
