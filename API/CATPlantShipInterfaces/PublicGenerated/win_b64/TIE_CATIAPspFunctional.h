#ifndef __TIE_CATIAPspFunctional
#define __TIE_CATIAPspFunctional

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspFunctional.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspFunctional */
#define declare_TIE_CATIAPspFunctional(classe) \
 \
 \
class TIECATIAPspFunctional##classe : public CATIAPspFunctional \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspFunctional, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall IsSpecDriven(CAT_VARIANT_BOOL & oStatus); \
      virtual HRESULT __stdcall GetCompatiblePartTypes(const CATBSTR & iuStandard, CATIAPspListOfBSTRs *& oLCompatiblePartTypes); \
      virtual HRESULT __stdcall ListCompatiblePartNumbers(const CATBSTR & iuPartType, const CATBSTR & iuStandard, const CATBSTR & iuCatalogName, CATIAPspListOfBSTRs *& oLPartTypes, CATIAPspListOfBSTRs *& oLCatalogPartNames); \
      virtual HRESULT __stdcall IsRealized(CAT_VARIANT_BOOL & oStatus); \
      virtual HRESULT __stdcall get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals); \
      virtual HRESULT __stdcall get_PartType(CATBSTR & oPartType); \
      virtual HRESULT __stdcall get_PartNumber(CATBSTR & oPartNumber); \
      virtual HRESULT __stdcall get_CatalogPartName(CATBSTR & oCatalogPartName); \
      virtual HRESULT __stdcall get_PartCatalogName(CATBSTR & oPartCatalogName); \
      virtual HRESULT __stdcall get_Standard(CATBSTR & oStandard); \
      virtual HRESULT __stdcall IsOKToIntegrate(CAT_VARIANT_BOOL & oStatus); \
      virtual HRESULT __stdcall get_FunctionStatus(CatPspIDLFunctionStatus & oeFunctionStatus); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspFunctional(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall IsSpecDriven(CAT_VARIANT_BOOL & oStatus); \
virtual HRESULT __stdcall GetCompatiblePartTypes(const CATBSTR & iuStandard, CATIAPspListOfBSTRs *& oLCompatiblePartTypes); \
virtual HRESULT __stdcall ListCompatiblePartNumbers(const CATBSTR & iuPartType, const CATBSTR & iuStandard, const CATBSTR & iuCatalogName, CATIAPspListOfBSTRs *& oLPartTypes, CATIAPspListOfBSTRs *& oLCatalogPartNames); \
virtual HRESULT __stdcall IsRealized(CAT_VARIANT_BOOL & oStatus); \
virtual HRESULT __stdcall get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals); \
virtual HRESULT __stdcall get_PartType(CATBSTR & oPartType); \
virtual HRESULT __stdcall get_PartNumber(CATBSTR & oPartNumber); \
virtual HRESULT __stdcall get_CatalogPartName(CATBSTR & oCatalogPartName); \
virtual HRESULT __stdcall get_PartCatalogName(CATBSTR & oPartCatalogName); \
virtual HRESULT __stdcall get_Standard(CATBSTR & oStandard); \
virtual HRESULT __stdcall IsOKToIntegrate(CAT_VARIANT_BOOL & oStatus); \
virtual HRESULT __stdcall get_FunctionStatus(CatPspIDLFunctionStatus & oeFunctionStatus); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspFunctional(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::IsSpecDriven(CAT_VARIANT_BOOL & oStatus) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)IsSpecDriven(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetCompatiblePartTypes(const CATBSTR & iuStandard, CATIAPspListOfBSTRs *& oLCompatiblePartTypes) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)GetCompatiblePartTypes(iuStandard,oLCompatiblePartTypes)); \
} \
HRESULT __stdcall  ENVTIEName::ListCompatiblePartNumbers(const CATBSTR & iuPartType, const CATBSTR & iuStandard, const CATBSTR & iuCatalogName, CATIAPspListOfBSTRs *& oLPartTypes, CATIAPspListOfBSTRs *& oLCatalogPartNames) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)ListCompatiblePartNumbers(iuPartType,iuStandard,iuCatalogName,oLPartTypes,oLCatalogPartNames)); \
} \
HRESULT __stdcall  ENVTIEName::IsRealized(CAT_VARIANT_BOOL & oStatus) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)IsRealized(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_Physicals(oLPspPhysicals)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartType(CATBSTR & oPartType) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_PartType(oPartType)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartNumber(CATBSTR & oPartNumber) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_PartNumber(oPartNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_CatalogPartName(CATBSTR & oCatalogPartName) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_CatalogPartName(oCatalogPartName)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartCatalogName(CATBSTR & oPartCatalogName) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_PartCatalogName(oPartCatalogName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Standard(CATBSTR & oStandard) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_Standard(oStandard)); \
} \
HRESULT __stdcall  ENVTIEName::IsOKToIntegrate(CAT_VARIANT_BOOL & oStatus) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)IsOKToIntegrate(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_FunctionStatus(CatPspIDLFunctionStatus & oeFunctionStatus) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_FunctionStatus(oeFunctionStatus)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspFunctional,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspFunctional(classe)    TIECATIAPspFunctional##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspFunctional(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspFunctional, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspFunctional, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspFunctional, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspFunctional, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspFunctional, classe) \
 \
HRESULT __stdcall  TIECATIAPspFunctional##classe::IsSpecDriven(CAT_VARIANT_BOOL & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSpecDriven(oStatus); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::GetCompatiblePartTypes(const CATBSTR & iuStandard, CATIAPspListOfBSTRs *& oLCompatiblePartTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iuStandard,&oLCompatiblePartTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompatiblePartTypes(iuStandard,oLCompatiblePartTypes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iuStandard,&oLCompatiblePartTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::ListCompatiblePartNumbers(const CATBSTR & iuPartType, const CATBSTR & iuStandard, const CATBSTR & iuCatalogName, CATIAPspListOfBSTRs *& oLPartTypes, CATIAPspListOfBSTRs *& oLCatalogPartNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iuPartType,&iuStandard,&iuCatalogName,&oLPartTypes,&oLCatalogPartNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListCompatiblePartNumbers(iuPartType,iuStandard,iuCatalogName,oLPartTypes,oLCatalogPartNames); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iuPartType,&iuStandard,&iuCatalogName,&oLPartTypes,&oLCatalogPartNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::IsRealized(CAT_VARIANT_BOOL & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRealized(oStatus); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::get_Physicals(CATIAPspListOfObjects *& oLPspPhysicals) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLPspPhysicals); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Physicals(oLPspPhysicals); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLPspPhysicals); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::get_PartType(CATBSTR & oPartType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPartType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartType(oPartType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPartType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::get_PartNumber(CATBSTR & oPartNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPartNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartNumber(oPartNumber); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPartNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::get_CatalogPartName(CATBSTR & oCatalogPartName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oCatalogPartName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CatalogPartName(oCatalogPartName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oCatalogPartName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::get_PartCatalogName(CATBSTR & oPartCatalogName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPartCatalogName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartCatalogName(oPartCatalogName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPartCatalogName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::get_Standard(CATBSTR & oStandard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oStandard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Standard(oStandard); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oStandard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::IsOKToIntegrate(CAT_VARIANT_BOOL & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsOKToIntegrate(oStatus); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspFunctional##classe::get_FunctionStatus(CatPspIDLFunctionStatus & oeFunctionStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oeFunctionStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FunctionStatus(oeFunctionStatus); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oeFunctionStatus); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspFunctional##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspFunctional##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspFunctional##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspFunctional##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspFunctional##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspFunctional(classe) \
 \
 \
declare_TIE_CATIAPspFunctional(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspFunctional##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspFunctional,"CATIAPspFunctional",CATIAPspFunctional::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspFunctional(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspFunctional, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspFunctional##classe(classe::MetaObject(),CATIAPspFunctional::MetaObject(),(void *)CreateTIECATIAPspFunctional##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspFunctional(classe) \
 \
 \
declare_TIE_CATIAPspFunctional(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspFunctional##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspFunctional,"CATIAPspFunctional",CATIAPspFunctional::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspFunctional(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspFunctional, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspFunctional##classe(classe::MetaObject(),CATIAPspFunctional::MetaObject(),(void *)CreateTIECATIAPspFunctional##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspFunctional(classe) TIE_CATIAPspFunctional(classe)
#else
#define BOA_CATIAPspFunctional(classe) CATImplementBOA(CATIAPspFunctional, classe)
#endif

#endif
