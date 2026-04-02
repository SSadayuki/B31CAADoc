#ifndef __TIE_CATIAPspPhysical
#define __TIE_CATIAPspPhysical

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspPhysical.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspPhysical */
#define declare_TIE_CATIAPspPhysical(classe) \
 \
 \
class TIECATIAPspPhysical##classe : public CATIAPspPhysical \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspPhysical, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetFunctional(CATIAPspFunctional *& oFunctional); \
      virtual HRESULT __stdcall GetSpatial(CATIAPspSpatial *& oSpatial); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspPhysical(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetFunctional(CATIAPspFunctional *& oFunctional); \
virtual HRESULT __stdcall GetSpatial(CATIAPspSpatial *& oSpatial); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspPhysical(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetFunctional(CATIAPspFunctional *& oFunctional) \
{ \
return (ENVTIECALL(CATIAPspPhysical,ENVTIETypeLetter,ENVTIELetter)GetFunctional(oFunctional)); \
} \
HRESULT __stdcall  ENVTIEName::GetSpatial(CATIAPspSpatial *& oSpatial) \
{ \
return (ENVTIECALL(CATIAPspPhysical,ENVTIETypeLetter,ENVTIELetter)GetSpatial(oSpatial)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspPhysical,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspPhysical,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPhysical,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspPhysical,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspPhysical,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspPhysical(classe)    TIECATIAPspPhysical##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspPhysical(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspPhysical, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspPhysical, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspPhysical, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspPhysical, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspPhysical, classe) \
 \
HRESULT __stdcall  TIECATIAPspPhysical##classe::GetFunctional(CATIAPspFunctional *& oFunctional) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFunctional); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFunctional(oFunctional); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFunctional); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspPhysical##classe::GetSpatial(CATIAPspSpatial *& oSpatial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSpatial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpatial(oSpatial); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSpatial); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysical##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysical##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysical##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysical##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspPhysical##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspPhysical(classe) \
 \
 \
declare_TIE_CATIAPspPhysical(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPhysical##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPhysical,"CATIAPspPhysical",CATIAPspPhysical::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPhysical(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspPhysical, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPhysical##classe(classe::MetaObject(),CATIAPspPhysical::MetaObject(),(void *)CreateTIECATIAPspPhysical##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspPhysical(classe) \
 \
 \
declare_TIE_CATIAPspPhysical(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspPhysical##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspPhysical,"CATIAPspPhysical",CATIAPspPhysical::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspPhysical(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspPhysical, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspPhysical##classe(classe::MetaObject(),CATIAPspPhysical::MetaObject(),(void *)CreateTIECATIAPspPhysical##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspPhysical(classe) TIE_CATIAPspPhysical(classe)
#else
#define BOA_CATIAPspPhysical(classe) CATImplementBOA(CATIAPspPhysical, classe)
#endif

#endif
