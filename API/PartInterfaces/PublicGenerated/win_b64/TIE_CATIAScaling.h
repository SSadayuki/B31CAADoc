#ifndef __TIE_CATIAScaling
#define __TIE_CATIAScaling

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAScaling.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAScaling */
#define declare_TIE_CATIAScaling(classe) \
 \
 \
class TIECATIAScaling##classe : public CATIAScaling \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAScaling, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ScalingReference(CATIAReference *& oReferenceScalingSupport); \
      virtual HRESULT __stdcall put_ScalingReference(CATIAReference * iScalingSupport); \
      virtual HRESULT __stdcall get_Factor(CATIARealParam *& oFactor); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAScaling(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ScalingReference(CATIAReference *& oReferenceScalingSupport); \
virtual HRESULT __stdcall put_ScalingReference(CATIAReference * iScalingSupport); \
virtual HRESULT __stdcall get_Factor(CATIARealParam *& oFactor); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAScaling(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ScalingReference(CATIAReference *& oReferenceScalingSupport) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)get_ScalingReference(oReferenceScalingSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScalingReference(CATIAReference * iScalingSupport) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)put_ScalingReference(iScalingSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_Factor(CATIARealParam *& oFactor) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)get_Factor(oFactor)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAScaling,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAScaling(classe)    TIECATIAScaling##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAScaling(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAScaling, classe) \
 \
 \
CATImplementTIEMethods(CATIAScaling, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAScaling, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAScaling, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAScaling, classe) \
 \
HRESULT __stdcall  TIECATIAScaling##classe::get_ScalingReference(CATIAReference *& oReferenceScalingSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oReferenceScalingSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScalingReference(oReferenceScalingSupport); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oReferenceScalingSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling##classe::put_ScalingReference(CATIAReference * iScalingSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iScalingSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScalingReference(iScalingSupport); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iScalingSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling##classe::get_Factor(CATIARealParam *& oFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Factor(oFactor); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFactor); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAScaling(classe) \
 \
 \
declare_TIE_CATIAScaling(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScaling##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScaling,"CATIAScaling",CATIAScaling::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScaling(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAScaling, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScaling##classe(classe::MetaObject(),CATIAScaling::MetaObject(),(void *)CreateTIECATIAScaling##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAScaling(classe) \
 \
 \
declare_TIE_CATIAScaling(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScaling##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScaling,"CATIAScaling",CATIAScaling::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScaling(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAScaling, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScaling##classe(classe::MetaObject(),CATIAScaling::MetaObject(),(void *)CreateTIECATIAScaling##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAScaling(classe) TIE_CATIAScaling(classe)
#else
#define BOA_CATIAScaling(classe) CATImplementBOA(CATIAScaling, classe)
#endif

#endif
