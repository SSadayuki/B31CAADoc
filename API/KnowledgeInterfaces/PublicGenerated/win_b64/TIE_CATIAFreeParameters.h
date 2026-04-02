#ifndef __TIE_CATIAFreeParameters
#define __TIE_CATIAFreeParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFreeParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFreeParameters */
#define declare_TIE_CATIAFreeParameters(classe) \
 \
 \
class TIECATIAFreeParameters##classe : public CATIAFreeParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFreeParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAFreeParameter *& oFree); \
      virtual HRESULT __stdcall AddFreeParameter(CATIARealParam * parameter, CATIAFreeParameter *& oFree); \
      virtual HRESULT __stdcall RemoveFreeParameter(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFreeParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAFreeParameter *& oFree); \
virtual HRESULT __stdcall AddFreeParameter(CATIARealParam * parameter, CATIAFreeParameter *& oFree); \
virtual HRESULT __stdcall RemoveFreeParameter(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFreeParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAFreeParameter *& oFree) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oFree)); \
} \
HRESULT __stdcall  ENVTIEName::AddFreeParameter(CATIARealParam * parameter, CATIAFreeParameter *& oFree) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)AddFreeParameter(parameter,oFree)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFreeParameter(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)RemoveFreeParameter(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFreeParameters,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFreeParameters(classe)    TIECATIAFreeParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFreeParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFreeParameters, classe) \
 \
 \
CATImplementTIEMethods(CATIAFreeParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFreeParameters, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFreeParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFreeParameters, classe) \
 \
HRESULT __stdcall  TIECATIAFreeParameters##classe::Item(const CATVariant & iIndex, CATIAFreeParameter *& oFree) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oFree); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oFree); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oFree); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameters##classe::AddFreeParameter(CATIARealParam * parameter, CATIAFreeParameter *& oFree) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&parameter,&oFree); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFreeParameter(parameter,oFree); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&parameter,&oFree); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameters##classe::RemoveFreeParameter(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFreeParameter(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameters##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameters##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameters##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameters##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameters##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameters##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFreeParameters(classe) \
 \
 \
declare_TIE_CATIAFreeParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeParameters,"CATIAFreeParameters",CATIAFreeParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFreeParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeParameters##classe(classe::MetaObject(),CATIAFreeParameters::MetaObject(),(void *)CreateTIECATIAFreeParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFreeParameters(classe) \
 \
 \
declare_TIE_CATIAFreeParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeParameters,"CATIAFreeParameters",CATIAFreeParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFreeParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeParameters##classe(classe::MetaObject(),CATIAFreeParameters::MetaObject(),(void *)CreateTIECATIAFreeParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFreeParameters(classe) TIE_CATIAFreeParameters(classe)
#else
#define BOA_CATIAFreeParameters(classe) CATImplementBOA(CATIAFreeParameters, classe)
#endif

#endif
