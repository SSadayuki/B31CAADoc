#ifndef __TIE_CATIAManufacturingFeatures
#define __TIE_CATIAManufacturingFeatures

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingFeatures.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingFeatures */
#define declare_TIE_CATIAManufacturingFeatures(classe) \
 \
 \
class TIECATIAManufacturingFeatures##classe : public CATIAManufacturingFeatures \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingFeatures, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & iType, CATIAManufacturingFeature *& oManufacturingFeature); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAManufacturingFeature *& oManufacturingFeature); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAManufacturingFeatures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & iType, CATIAManufacturingFeature *& oManufacturingFeature); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAManufacturingFeature *& oManufacturingFeature); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAManufacturingFeatures(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iType, CATIAManufacturingFeature *& oManufacturingFeature) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)Add(iType,oManufacturingFeature)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAManufacturingFeature *& oManufacturingFeature) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oManufacturingFeature)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAManufacturingFeatures,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingFeatures(classe)    TIECATIAManufacturingFeatures##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingFeatures(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingFeatures, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingFeatures, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingFeatures, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingFeatures, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingFeatures, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingFeatures##classe::Add(const CATBSTR & iType, CATIAManufacturingFeature *& oManufacturingFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iType,&oManufacturingFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iType,oManufacturingFeature); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iType,&oManufacturingFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingFeatures##classe::Item(const CATVariant & iIndex, CATIAManufacturingFeature *& oManufacturingFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oManufacturingFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oManufacturingFeature); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oManufacturingFeature); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingFeatures##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingFeatures##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingFeatures##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingFeatures##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingFeatures##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingFeatures##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingFeatures(classe) \
 \
 \
declare_TIE_CATIAManufacturingFeatures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingFeatures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingFeatures,"CATIAManufacturingFeatures",CATIAManufacturingFeatures::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingFeatures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingFeatures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingFeatures##classe(classe::MetaObject(),CATIAManufacturingFeatures::MetaObject(),(void *)CreateTIECATIAManufacturingFeatures##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingFeatures(classe) \
 \
 \
declare_TIE_CATIAManufacturingFeatures(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingFeatures##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingFeatures,"CATIAManufacturingFeatures",CATIAManufacturingFeatures::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingFeatures(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingFeatures, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingFeatures##classe(classe::MetaObject(),CATIAManufacturingFeatures::MetaObject(),(void *)CreateTIECATIAManufacturingFeatures##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingFeatures(classe) TIE_CATIAManufacturingFeatures(classe)
#else
#define BOA_CATIAManufacturingFeatures(classe) CATImplementBOA(CATIAManufacturingFeatures, classe)
#endif

#endif
