#ifndef __TIE_CATIAShots
#define __TIE_CATIAShots

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAShots.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAShots */
#define declare_TIE_CATIAShots(classe) \
 \
 \
class TIECATIAShots##classe : public CATIAShots \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAShots, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateShot(CATBaseDispatch *& oNewShot); \
      virtual HRESULT __stdcall CreateSpecificShot(const CATBSTR & iType, CATBaseDispatch *& oNewShot); \
      virtual HRESULT __stdcall Append(CATBaseDispatch * iShot); \
      virtual HRESULT __stdcall InsertAfter(short iIndex, CATBaseDispatch * iShot); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATBaseDispatch *& oShot); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAShots(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateShot(CATBaseDispatch *& oNewShot); \
virtual HRESULT __stdcall CreateSpecificShot(const CATBSTR & iType, CATBaseDispatch *& oNewShot); \
virtual HRESULT __stdcall Append(CATBaseDispatch * iShot); \
virtual HRESULT __stdcall InsertAfter(short iIndex, CATBaseDispatch * iShot); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATBaseDispatch *& oShot); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAShots(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateShot(CATBaseDispatch *& oNewShot) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)CreateShot(oNewShot)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSpecificShot(const CATBSTR & iType, CATBaseDispatch *& oNewShot) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)CreateSpecificShot(iType,oNewShot)); \
} \
HRESULT __stdcall  ENVTIEName::Append(CATBaseDispatch * iShot) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)Append(iShot)); \
} \
HRESULT __stdcall  ENVTIEName::InsertAfter(short iIndex, CATBaseDispatch * iShot) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)InsertAfter(iIndex,iShot)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATBaseDispatch *& oShot) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oShot)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAShots,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAShots(classe)    TIECATIAShots##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAShots(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAShots, classe) \
 \
 \
CATImplementTIEMethods(CATIAShots, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAShots, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAShots, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAShots, classe) \
 \
HRESULT __stdcall  TIECATIAShots##classe::CreateShot(CATBaseDispatch *& oNewShot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNewShot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateShot(oNewShot); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNewShot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShots##classe::CreateSpecificShot(const CATBSTR & iType, CATBaseDispatch *& oNewShot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType,&oNewShot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSpecificShot(iType,oNewShot); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType,&oNewShot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShots##classe::Append(CATBaseDispatch * iShot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iShot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append(iShot); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iShot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShots##classe::InsertAfter(short iIndex, CATBaseDispatch * iShot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&iShot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertAfter(iIndex,iShot); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&iShot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShots##classe::Item(const CATVariant & iIndex, CATBaseDispatch *& oShot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex,&oShot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oShot); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex,&oShot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShots##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShots##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShots##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShots##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShots##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShots##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShots##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAShots(classe) \
 \
 \
declare_TIE_CATIAShots(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShots##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShots,"CATIAShots",CATIAShots::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShots(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAShots, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShots##classe(classe::MetaObject(),CATIAShots::MetaObject(),(void *)CreateTIECATIAShots##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAShots(classe) \
 \
 \
declare_TIE_CATIAShots(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShots##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShots,"CATIAShots",CATIAShots::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShots(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAShots, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShots##classe(classe::MetaObject(),CATIAShots::MetaObject(),(void *)CreateTIECATIAShots##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAShots(classe) TIE_CATIAShots(classe)
#else
#define BOA_CATIAShots(classe) CATImplementBOA(CATIAShots, classe)
#endif

#endif
