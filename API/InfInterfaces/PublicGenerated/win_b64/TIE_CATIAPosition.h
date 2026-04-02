#ifndef __TIE_CATIAPosition
#define __TIE_CATIAPosition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPosition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPosition */
#define declare_TIE_CATIAPosition(classe) \
 \
 \
class TIECATIAPosition##classe : public CATIAPosition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPosition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetComponents(const CATSafeArrayVariant & iAxisComponentsArray); \
      virtual HRESULT __stdcall GetComponents(CATSafeArrayVariant & oAxisComponentsArray); \
      virtual HRESULT __stdcall get_MovableObject(CATIAMove *& oMovable); \
      virtual HRESULT __stdcall Apply(const CATSafeArrayVariant & iTransformationArray); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPosition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetComponents(const CATSafeArrayVariant & iAxisComponentsArray); \
virtual HRESULT __stdcall GetComponents(CATSafeArrayVariant & oAxisComponentsArray); \
virtual HRESULT __stdcall get_MovableObject(CATIAMove *& oMovable); \
virtual HRESULT __stdcall Apply(const CATSafeArrayVariant & iTransformationArray); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPosition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetComponents(const CATSafeArrayVariant & iAxisComponentsArray) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)SetComponents(iAxisComponentsArray)); \
} \
HRESULT __stdcall  ENVTIEName::GetComponents(CATSafeArrayVariant & oAxisComponentsArray) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)GetComponents(oAxisComponentsArray)); \
} \
HRESULT __stdcall  ENVTIEName::get_MovableObject(CATIAMove *& oMovable) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)get_MovableObject(oMovable)); \
} \
HRESULT __stdcall  ENVTIEName::Apply(const CATSafeArrayVariant & iTransformationArray) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)Apply(iTransformationArray)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPosition,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPosition(classe)    TIECATIAPosition##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPosition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPosition, classe) \
 \
 \
CATImplementTIEMethods(CATIAPosition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPosition, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPosition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPosition, classe) \
 \
HRESULT __stdcall  TIECATIAPosition##classe::SetComponents(const CATSafeArrayVariant & iAxisComponentsArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAxisComponentsArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetComponents(iAxisComponentsArray); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAxisComponentsArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPosition##classe::GetComponents(CATSafeArrayVariant & oAxisComponentsArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAxisComponentsArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetComponents(oAxisComponentsArray); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAxisComponentsArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPosition##classe::get_MovableObject(CATIAMove *& oMovable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMovable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MovableObject(oMovable); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMovable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPosition##classe::Apply(const CATSafeArrayVariant & iTransformationArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iTransformationArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Apply(iTransformationArray); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iTransformationArray); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPosition##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPosition##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPosition##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPosition##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPosition##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPosition(classe) \
 \
 \
declare_TIE_CATIAPosition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPosition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPosition,"CATIAPosition",CATIAPosition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPosition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPosition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPosition##classe(classe::MetaObject(),CATIAPosition::MetaObject(),(void *)CreateTIECATIAPosition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPosition(classe) \
 \
 \
declare_TIE_CATIAPosition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPosition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPosition,"CATIAPosition",CATIAPosition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPosition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPosition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPosition##classe(classe::MetaObject(),CATIAPosition::MetaObject(),(void *)CreateTIECATIAPosition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPosition(classe) TIE_CATIAPosition(classe)
#else
#define BOA_CATIAPosition(classe) CATImplementBOA(CATIAPosition, classe)
#endif

#endif
