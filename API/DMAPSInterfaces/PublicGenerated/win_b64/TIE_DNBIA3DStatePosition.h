#ifndef __TIE_DNBIA3DStatePosition
#define __TIE_DNBIA3DStatePosition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "DNBIA3DStatePosition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface DNBIA3DStatePosition */
#define declare_TIE_DNBIA3DStatePosition(classe) \
 \
 \
class TIEDNBIA3DStatePosition##classe : public DNBIA3DStatePosition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(DNBIA3DStatePosition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & iTransformation); \
      virtual HRESULT __stdcall SynchronizePositionWithReference(CATBaseDispatch * iReferenceObject); \
      virtual HRESULT __stdcall SetReference(CATBaseDispatch * iReferenceObject); \
      virtual HRESULT __stdcall SetParent(CATBaseDispatch * iParentObject); \
      virtual HRESULT __stdcall GetPosition(CATSafeArrayVariant & oTransformation); \
      virtual HRESULT __stdcall GetReference(CATBaseDispatch *& oReferenceObject); \
      virtual HRESULT __stdcall GetParent(CATBaseDispatch *& oParentObject); \
      virtual HRESULT __stdcall SynchronizePosition(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_DNBIA3DStatePosition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & iTransformation); \
virtual HRESULT __stdcall SynchronizePositionWithReference(CATBaseDispatch * iReferenceObject); \
virtual HRESULT __stdcall SetReference(CATBaseDispatch * iReferenceObject); \
virtual HRESULT __stdcall SetParent(CATBaseDispatch * iParentObject); \
virtual HRESULT __stdcall GetPosition(CATSafeArrayVariant & oTransformation); \
virtual HRESULT __stdcall GetReference(CATBaseDispatch *& oReferenceObject); \
virtual HRESULT __stdcall GetParent(CATBaseDispatch *& oParentObject); \
virtual HRESULT __stdcall SynchronizePosition(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_DNBIA3DStatePosition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetPosition(const CATSafeArrayVariant & iTransformation) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)SetPosition(iTransformation)); \
} \
HRESULT __stdcall  ENVTIEName::SynchronizePositionWithReference(CATBaseDispatch * iReferenceObject) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)SynchronizePositionWithReference(iReferenceObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetReference(CATBaseDispatch * iReferenceObject) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)SetReference(iReferenceObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetParent(CATBaseDispatch * iParentObject) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)SetParent(iParentObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(CATSafeArrayVariant & oTransformation) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)GetPosition(oTransformation)); \
} \
HRESULT __stdcall  ENVTIEName::GetReference(CATBaseDispatch *& oReferenceObject) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)GetReference(oReferenceObject)); \
} \
HRESULT __stdcall  ENVTIEName::GetParent(CATBaseDispatch *& oParentObject) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)GetParent(oParentObject)); \
} \
HRESULT __stdcall  ENVTIEName::SynchronizePosition() \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)SynchronizePosition()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(DNBIA3DStatePosition,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_DNBIA3DStatePosition(classe)    TIEDNBIA3DStatePosition##classe


/* Common methods inside a TIE */
#define common_TIE_DNBIA3DStatePosition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(DNBIA3DStatePosition, classe) \
 \
 \
CATImplementTIEMethods(DNBIA3DStatePosition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(DNBIA3DStatePosition, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(DNBIA3DStatePosition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(DNBIA3DStatePosition, classe) \
 \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::SetPosition(const CATSafeArrayVariant & iTransformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iTransformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iTransformation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iTransformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::SynchronizePositionWithReference(CATBaseDispatch * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SynchronizePositionWithReference(iReferenceObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::SetReference(CATBaseDispatch * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReference(iReferenceObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::SetParent(CATBaseDispatch * iParentObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iParentObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParent(iParentObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iParentObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::GetPosition(CATSafeArrayVariant & oTransformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oTransformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oTransformation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oTransformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::GetReference(CATBaseDispatch *& oReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReference(oReferenceObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oReferenceObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::GetParent(CATBaseDispatch *& oParentObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParentObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParent(oParentObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParentObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePosition##classe::SynchronizePosition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SynchronizePosition(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePosition##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePosition##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePosition##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePosition##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePosition##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_DNBIA3DStatePosition(classe) \
 \
 \
declare_TIE_DNBIA3DStatePosition(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DStatePosition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DStatePosition,"DNBIA3DStatePosition",DNBIA3DStatePosition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DStatePosition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(DNBIA3DStatePosition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DStatePosition##classe(classe::MetaObject(),DNBIA3DStatePosition::MetaObject(),(void *)CreateTIEDNBIA3DStatePosition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_DNBIA3DStatePosition(classe) \
 \
 \
declare_TIE_DNBIA3DStatePosition(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DStatePosition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DStatePosition,"DNBIA3DStatePosition",DNBIA3DStatePosition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DStatePosition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(DNBIA3DStatePosition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DStatePosition##classe(classe::MetaObject(),DNBIA3DStatePosition::MetaObject(),(void *)CreateTIEDNBIA3DStatePosition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_DNBIA3DStatePosition(classe) TIE_DNBIA3DStatePosition(classe)
#else
#define BOA_DNBIA3DStatePosition(classe) CATImplementBOA(DNBIA3DStatePosition, classe)
#endif

#endif
