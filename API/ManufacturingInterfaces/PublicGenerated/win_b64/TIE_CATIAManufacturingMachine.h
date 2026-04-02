#ifndef __TIE_CATIAManufacturingMachine
#define __TIE_CATIAManufacturingMachine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingMachine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingMachine */
#define declare_TIE_CATIAManufacturingMachine(classe) \
 \
 \
class TIECATIAManufacturingMachine##classe : public CATIAManufacturingMachine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingMachine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_MachineType(CATBSTR & oType); \
      virtual HRESULT __stdcall DefaultName(CATBSTR & oTypeNLS); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall get_RotaryAxis(CATBSTR & oRotaryAxis); \
      virtual HRESULT __stdcall put_RotaryAxis(const CATBSTR & iRotaryAxis); \
      virtual HRESULT __stdcall get_PreferedToolCatalogName(CATBSTR & oPreferedToolCatalogName); \
      virtual HRESULT __stdcall put_PreferedToolCatalogName(const CATBSTR & iToolCatalog); \
      virtual HRESULT __stdcall get_PPTableName(CATBSTR & oPPTableName); \
      virtual HRESULT __stdcall put_PPTableName(const CATBSTR & iPPTableName); \
      virtual HRESULT __stdcall set_DefaultValues(); \
      virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits); \
      virtual HRESULT __stdcall get_NumberOfNumericalControlAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfNumericalControlAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall get_NumberOfSpindleAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfSpindleAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall get_NumberOfToolChangeAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfToolChangeAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall get_NumberOfRotaryTableAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfRotaryTableAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
      virtual HRESULT __stdcall get_PostProcessorFile(CATBSTR & oPostProcessorFile); \
      virtual HRESULT __stdcall put_PostProcessorFile(const CATBSTR & iPostProcessorFile); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingMachine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_MachineType(CATBSTR & oType); \
virtual HRESULT __stdcall DefaultName(CATBSTR & oTypeNLS); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall get_RotaryAxis(CATBSTR & oRotaryAxis); \
virtual HRESULT __stdcall put_RotaryAxis(const CATBSTR & iRotaryAxis); \
virtual HRESULT __stdcall get_PreferedToolCatalogName(CATBSTR & oPreferedToolCatalogName); \
virtual HRESULT __stdcall put_PreferedToolCatalogName(const CATBSTR & iToolCatalog); \
virtual HRESULT __stdcall get_PPTableName(CATBSTR & oPPTableName); \
virtual HRESULT __stdcall put_PPTableName(const CATBSTR & iPPTableName); \
virtual HRESULT __stdcall set_DefaultValues(); \
virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall get_NumberOfAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits); \
virtual HRESULT __stdcall get_NumberOfNumericalControlAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfNumericalControlAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall get_NumberOfSpindleAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfSpindleAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall get_NumberOfToolChangeAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfToolChangeAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall get_NumberOfRotaryTableAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfRotaryTableAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
virtual HRESULT __stdcall get_PostProcessorFile(CATBSTR & oPostProcessorFile); \
virtual HRESULT __stdcall put_PostProcessorFile(const CATBSTR & iPostProcessorFile); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingMachine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_MachineType(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_MachineType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::DefaultName(CATBSTR & oTypeNLS) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)DefaultName(oTypeNLS)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotaryAxis(CATBSTR & oRotaryAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_RotaryAxis(oRotaryAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_RotaryAxis(const CATBSTR & iRotaryAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)put_RotaryAxis(iRotaryAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreferedToolCatalogName(CATBSTR & oPreferedToolCatalogName) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_PreferedToolCatalogName(oPreferedToolCatalogName)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreferedToolCatalogName(const CATBSTR & iToolCatalog) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)put_PreferedToolCatalogName(iToolCatalog)); \
} \
HRESULT __stdcall  ENVTIEName::get_PPTableName(CATBSTR & oPPTableName) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_PPTableName(oPPTableName)); \
} \
HRESULT __stdcall  ENVTIEName::put_PPTableName(const CATBSTR & iPPTableName) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)put_PPTableName(iPPTableName)); \
} \
HRESULT __stdcall  ENVTIEName::set_DefaultValues() \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)set_DefaultValues()); \
} \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_NumberOfAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetListOfAttributeUnits(oListOfAttributeUnits)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfNumericalControlAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_NumberOfNumericalControlAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfNumericalControlAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetListOfNumericalControlAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfSpindleAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_NumberOfSpindleAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfSpindleAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetListOfSpindleAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfToolChangeAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_NumberOfToolChangeAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfToolChangeAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetListOfToolChangeAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfRotaryTableAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_NumberOfRotaryTableAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfRotaryTableAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetListOfRotaryTableAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetAttributeNLSName(iAttributName,oNLSName)); \
} \
HRESULT __stdcall  ENVTIEName::get_PostProcessorFile(CATBSTR & oPostProcessorFile) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_PostProcessorFile(oPostProcessorFile)); \
} \
HRESULT __stdcall  ENVTIEName::put_PostProcessorFile(const CATBSTR & iPostProcessorFile) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)put_PostProcessorFile(iPostProcessorFile)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingMachine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingMachine(classe)    TIECATIAManufacturingMachine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingMachine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingMachine, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingMachine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingMachine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingMachine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingMachine, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_MachineType(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachineType(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::DefaultName(CATBSTR & oTypeNLS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oTypeNLS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefaultName(oTypeNLS); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oTypeNLS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_RotaryAxis(CATBSTR & oRotaryAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oRotaryAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotaryAxis(oRotaryAxis); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oRotaryAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::put_RotaryAxis(const CATBSTR & iRotaryAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iRotaryAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RotaryAxis(iRotaryAxis); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iRotaryAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_PreferedToolCatalogName(CATBSTR & oPreferedToolCatalogName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPreferedToolCatalogName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreferedToolCatalogName(oPreferedToolCatalogName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPreferedToolCatalogName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::put_PreferedToolCatalogName(const CATBSTR & iToolCatalog) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iToolCatalog); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreferedToolCatalogName(iToolCatalog); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iToolCatalog); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_PPTableName(CATBSTR & oPPTableName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oPPTableName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PPTableName(oPPTableName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oPPTableName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::put_PPTableName(const CATBSTR & iPPTableName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPPTableName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PPTableName(iPPTableName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPPTableName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::set_DefaultValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->set_DefaultValues(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_NumberOfAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfAttributes(oNumber); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetListOfAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributes(oListOfAttributes); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetListOfAttributeUnits(CATSafeArrayVariant & oListOfAttributeUnits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oListOfAttributeUnits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAttributeUnits(oListOfAttributeUnits); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oListOfAttributeUnits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_NumberOfNumericalControlAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfNumericalControlAttributes(oNumber); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetListOfNumericalControlAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfNumericalControlAttributes(oListOfAttributes); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_NumberOfSpindleAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfSpindleAttributes(oNumber); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetListOfSpindleAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfSpindleAttributes(oListOfAttributes); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_NumberOfToolChangeAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfToolChangeAttributes(oNumber); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetListOfToolChangeAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfToolChangeAttributes(oListOfAttributes); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_NumberOfRotaryTableAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfRotaryTableAttributes(oNumber); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetListOfRotaryTableAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfRotaryTableAttributes(oListOfAttributes); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iAttributName,&oNLSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNLSName(iAttributName,oNLSName); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iAttributName,&oNLSName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::get_PostProcessorFile(CATBSTR & oPostProcessorFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oPostProcessorFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PostProcessorFile(oPostProcessorFile); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oPostProcessorFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachine##classe::put_PostProcessorFile(const CATBSTR & iPostProcessorFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPostProcessorFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PostProcessorFile(iPostProcessorFile); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPostProcessorFile); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingMachine(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachine,"CATIAManufacturingMachine",CATIAManufacturingMachine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingMachine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachine##classe(classe::MetaObject(),CATIAManufacturingMachine::MetaObject(),(void *)CreateTIECATIAManufacturingMachine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingMachine(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachine,"CATIAManufacturingMachine",CATIAManufacturingMachine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingMachine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachine##classe(classe::MetaObject(),CATIAManufacturingMachine::MetaObject(),(void *)CreateTIECATIAManufacturingMachine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingMachine(classe) TIE_CATIAManufacturingMachine(classe)
#else
#define BOA_CATIAManufacturingMachine(classe) CATImplementBOA(CATIAManufacturingMachine, classe)
#endif

#endif
