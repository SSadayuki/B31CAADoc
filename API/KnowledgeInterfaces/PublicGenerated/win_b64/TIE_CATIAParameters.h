#ifndef __TIE_CATIAParameters
#define __TIE_CATIAParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAParameters */
#define declare_TIE_CATIAParameters(classe) \
 \
 \
class TIECATIAParameters##classe : public CATIAParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateString(const CATBSTR & iName, const CATBSTR & iValue, CATIAStrParam *& oParameter); \
      virtual HRESULT __stdcall CreateReal(const CATBSTR & iName, double iValue, CATIARealParam *& oParameter); \
      virtual HRESULT __stdcall CreateInteger(const CATBSTR & iName, CATLONG iValue, CATIAIntParam *& oParameter); \
      virtual HRESULT __stdcall CreateBoolean(const CATBSTR & iName, CAT_VARIANT_BOOL iValue, CATIABoolParam *& oParameter); \
      virtual HRESULT __stdcall CreateDimension(const CATBSTR & iName, const CATBSTR & iMagnitude, double iValue, CATIADimension *& oParameter); \
      virtual HRESULT __stdcall CreateList(const CATBSTR & iName, CATIAListParameter *& oParameter); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall SubList(CATIABase * iObject, CAT_VARIANT_BOOL iRecursively, CATIAParameters *& oListParameters); \
      virtual HRESULT __stdcall get_Units(CATIAUnits *& oUnits); \
      virtual HRESULT __stdcall GetNameToUseInRelation(CATIABase * iObject, CATBSTR & oName); \
      virtual HRESULT __stdcall CreateSetOfParameters(CATIABase * iFather); \
      virtual HRESULT __stdcall get_RootParameterSet(CATIAParameterSet *& oParameterSet); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateString(const CATBSTR & iName, const CATBSTR & iValue, CATIAStrParam *& oParameter); \
virtual HRESULT __stdcall CreateReal(const CATBSTR & iName, double iValue, CATIARealParam *& oParameter); \
virtual HRESULT __stdcall CreateInteger(const CATBSTR & iName, CATLONG iValue, CATIAIntParam *& oParameter); \
virtual HRESULT __stdcall CreateBoolean(const CATBSTR & iName, CAT_VARIANT_BOOL iValue, CATIABoolParam *& oParameter); \
virtual HRESULT __stdcall CreateDimension(const CATBSTR & iName, const CATBSTR & iMagnitude, double iValue, CATIADimension *& oParameter); \
virtual HRESULT __stdcall CreateList(const CATBSTR & iName, CATIAListParameter *& oParameter); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAParameter *& oParameter); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall SubList(CATIABase * iObject, CAT_VARIANT_BOOL iRecursively, CATIAParameters *& oListParameters); \
virtual HRESULT __stdcall get_Units(CATIAUnits *& oUnits); \
virtual HRESULT __stdcall GetNameToUseInRelation(CATIABase * iObject, CATBSTR & oName); \
virtual HRESULT __stdcall CreateSetOfParameters(CATIABase * iFather); \
virtual HRESULT __stdcall get_RootParameterSet(CATIAParameterSet *& oParameterSet); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateString(const CATBSTR & iName, const CATBSTR & iValue, CATIAStrParam *& oParameter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)CreateString(iName,iValue,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReal(const CATBSTR & iName, double iValue, CATIARealParam *& oParameter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)CreateReal(iName,iValue,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::CreateInteger(const CATBSTR & iName, CATLONG iValue, CATIAIntParam *& oParameter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)CreateInteger(iName,iValue,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::CreateBoolean(const CATBSTR & iName, CAT_VARIANT_BOOL iValue, CATIABoolParam *& oParameter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)CreateBoolean(iName,iValue,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::CreateDimension(const CATBSTR & iName, const CATBSTR & iMagnitude, double iValue, CATIADimension *& oParameter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)CreateDimension(iName,iMagnitude,iValue,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::CreateList(const CATBSTR & iName, CATIAListParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)CreateList(iName,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::SubList(CATIABase * iObject, CAT_VARIANT_BOOL iRecursively, CATIAParameters *& oListParameters) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)SubList(iObject,iRecursively,oListParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_Units(CATIAUnits *& oUnits) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)get_Units(oUnits)); \
} \
HRESULT __stdcall  ENVTIEName::GetNameToUseInRelation(CATIABase * iObject, CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)GetNameToUseInRelation(iObject,oName)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSetOfParameters(CATIABase * iFather) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)CreateSetOfParameters(iFather)); \
} \
HRESULT __stdcall  ENVTIEName::get_RootParameterSet(CATIAParameterSet *& oParameterSet) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)get_RootParameterSet(oParameterSet)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAParameters,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAParameters(classe)    TIECATIAParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAParameters, classe) \
 \
 \
CATImplementTIEMethods(CATIAParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAParameters, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAParameters, classe) \
 \
HRESULT __stdcall  TIECATIAParameters##classe::CreateString(const CATBSTR & iName, const CATBSTR & iValue, CATIAStrParam *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&iValue,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateString(iName,iValue,oParameter); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&iValue,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::CreateReal(const CATBSTR & iName, double iValue, CATIARealParam *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&iValue,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReal(iName,iValue,oParameter); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&iValue,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::CreateInteger(const CATBSTR & iName, CATLONG iValue, CATIAIntParam *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName,&iValue,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateInteger(iName,iValue,oParameter); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName,&iValue,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::CreateBoolean(const CATBSTR & iName, CAT_VARIANT_BOOL iValue, CATIABoolParam *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iName,&iValue,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateBoolean(iName,iValue,oParameter); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iName,&iValue,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::CreateDimension(const CATBSTR & iName, const CATBSTR & iMagnitude, double iValue, CATIADimension *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iName,&iMagnitude,&iValue,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDimension(iName,iMagnitude,iValue,oParameter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iName,&iMagnitude,&iValue,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::CreateList(const CATBSTR & iName, CATIAListParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateList(iName,oParameter); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::Item(const CATVariant & iIndex, CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oParameter); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::SubList(CATIABase * iObject, CAT_VARIANT_BOOL iRecursively, CATIAParameters *& oListParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iObject,&iRecursively,&oListParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SubList(iObject,iRecursively,oListParameters); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iObject,&iRecursively,&oListParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::get_Units(CATIAUnits *& oUnits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oUnits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Units(oUnits); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oUnits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::GetNameToUseInRelation(CATIABase * iObject, CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iObject,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNameToUseInRelation(iObject,oName); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iObject,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::CreateSetOfParameters(CATIABase * iFather) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iFather); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSetOfParameters(iFather); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iFather); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameters##classe::get_RootParameterSet(CATIAParameterSet *& oParameterSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParameterSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RootParameterSet(oParameterSet); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParameterSet); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameters##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameters##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameters##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameters##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameters##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameters##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAParameters(classe) \
 \
 \
declare_TIE_CATIAParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAParameters,"CATIAParameters",CATIAParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAParameters##classe(classe::MetaObject(),CATIAParameters::MetaObject(),(void *)CreateTIECATIAParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAParameters(classe) \
 \
 \
declare_TIE_CATIAParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAParameters,"CATIAParameters",CATIAParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAParameters##classe(classe::MetaObject(),CATIAParameters::MetaObject(),(void *)CreateTIECATIAParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAParameters(classe) TIE_CATIAParameters(classe)
#else
#define BOA_CATIAParameters(classe) CATImplementBOA(CATIAParameters, classe)
#endif

#endif
