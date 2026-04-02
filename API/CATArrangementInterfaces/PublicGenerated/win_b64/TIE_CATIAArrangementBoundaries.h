#ifndef __TIE_CATIAArrangementBoundaries
#define __TIE_CATIAArrangementBoundaries

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementBoundaries.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementBoundaries */
#define declare_TIE_CATIAArrangementBoundaries(classe) \
 \
 \
class TIECATIAArrangementBoundaries##classe : public CATIAArrangementBoundaries \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementBoundaries, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddBoundary(CATIAMove * iRelAxis, const CATSafeArrayVariant & iListofMathPoints, const CATSafeArrayVariant & iMathDirection, CATIAArrangementBoundary *& oArrBoundary); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementBoundary *& oArrBoundary); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAArrangementBoundaries(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddBoundary(CATIAMove * iRelAxis, const CATSafeArrayVariant & iListofMathPoints, const CATSafeArrayVariant & iMathDirection, CATIAArrangementBoundary *& oArrBoundary); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAArrangementBoundary *& oArrBoundary); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAArrangementBoundaries(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddBoundary(CATIAMove * iRelAxis, const CATSafeArrayVariant & iListofMathPoints, const CATSafeArrayVariant & iMathDirection, CATIAArrangementBoundary *& oArrBoundary) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)AddBoundary(iRelAxis,iListofMathPoints,iMathDirection,oArrBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAArrangementBoundary *& oArrBoundary) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oArrBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAArrangementBoundaries,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementBoundaries(classe)    TIECATIAArrangementBoundaries##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementBoundaries(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementBoundaries, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementBoundaries, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementBoundaries, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementBoundaries, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementBoundaries, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementBoundaries##classe::AddBoundary(CATIAMove * iRelAxis, const CATSafeArrayVariant & iListofMathPoints, const CATSafeArrayVariant & iMathDirection, CATIAArrangementBoundary *& oArrBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRelAxis,&iListofMathPoints,&iMathDirection,&oArrBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddBoundary(iRelAxis,iListofMathPoints,iMathDirection,oArrBoundary); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRelAxis,&iListofMathPoints,&iMathDirection,&oArrBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundaries##classe::Item(const CATVariant & iIndex, CATIAArrangementBoundary *& oArrBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oArrBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oArrBoundary); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oArrBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundaries##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundaries##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundaries##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundaries##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundaries##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundaries##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundaries##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementBoundaries(classe) \
 \
 \
declare_TIE_CATIAArrangementBoundaries(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementBoundaries##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementBoundaries,"CATIAArrangementBoundaries",CATIAArrangementBoundaries::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementBoundaries(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementBoundaries, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementBoundaries##classe(classe::MetaObject(),CATIAArrangementBoundaries::MetaObject(),(void *)CreateTIECATIAArrangementBoundaries##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementBoundaries(classe) \
 \
 \
declare_TIE_CATIAArrangementBoundaries(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementBoundaries##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementBoundaries,"CATIAArrangementBoundaries",CATIAArrangementBoundaries::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementBoundaries(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementBoundaries, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementBoundaries##classe(classe::MetaObject(),CATIAArrangementBoundaries::MetaObject(),(void *)CreateTIECATIAArrangementBoundaries##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementBoundaries(classe) TIE_CATIAArrangementBoundaries(classe)
#else
#define BOA_CATIAArrangementBoundaries(classe) CATImplementBOA(CATIAArrangementBoundaries, classe)
#endif

#endif
