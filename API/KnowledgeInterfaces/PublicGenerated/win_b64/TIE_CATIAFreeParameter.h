#ifndef __TIE_CATIAFreeParameter
#define __TIE_CATIAFreeParameter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFreeParameter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFreeParameter */
#define declare_TIE_CATIAFreeParameter(classe) \
 \
 \
class TIECATIAFreeParameter##classe : public CATIAFreeParameter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFreeParameter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Parameter(CATIARealParam *& oParameter); \
      virtual HRESULT __stdcall put_Parameter(CATIARealParam * iParameter); \
      virtual HRESULT __stdcall get_InfRange(double & oInfRange); \
      virtual HRESULT __stdcall put_InfRange(double iInfRange); \
      virtual HRESULT __stdcall get_SupRange(double & oSupRange); \
      virtual HRESULT __stdcall put_SupRange(double iSupRange); \
      virtual HRESULT __stdcall get_Step(double & oStep); \
      virtual HRESULT __stdcall put_Step(double iStep); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFreeParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Parameter(CATIARealParam *& oParameter); \
virtual HRESULT __stdcall put_Parameter(CATIARealParam * iParameter); \
virtual HRESULT __stdcall get_InfRange(double & oInfRange); \
virtual HRESULT __stdcall put_InfRange(double iInfRange); \
virtual HRESULT __stdcall get_SupRange(double & oSupRange); \
virtual HRESULT __stdcall put_SupRange(double iSupRange); \
virtual HRESULT __stdcall get_Step(double & oStep); \
virtual HRESULT __stdcall put_Step(double iStep); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFreeParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Parameter(CATIARealParam *& oParameter) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)get_Parameter(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::put_Parameter(CATIARealParam * iParameter) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)put_Parameter(iParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_InfRange(double & oInfRange) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)get_InfRange(oInfRange)); \
} \
HRESULT __stdcall  ENVTIEName::put_InfRange(double iInfRange) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)put_InfRange(iInfRange)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupRange(double & oSupRange) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)get_SupRange(oSupRange)); \
} \
HRESULT __stdcall  ENVTIEName::put_SupRange(double iSupRange) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)put_SupRange(iSupRange)); \
} \
HRESULT __stdcall  ENVTIEName::get_Step(double & oStep) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)get_Step(oStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_Step(double iStep) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)put_Step(iStep)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFreeParameter,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFreeParameter(classe)    TIECATIAFreeParameter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFreeParameter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFreeParameter, classe) \
 \
 \
CATImplementTIEMethods(CATIAFreeParameter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFreeParameter, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFreeParameter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFreeParameter, classe) \
 \
HRESULT __stdcall  TIECATIAFreeParameter##classe::get_Parameter(CATIARealParam *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameter(oParameter); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameter##classe::put_Parameter(CATIARealParam * iParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Parameter(iParameter); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameter##classe::get_InfRange(double & oInfRange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oInfRange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InfRange(oInfRange); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oInfRange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameter##classe::put_InfRange(double iInfRange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iInfRange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InfRange(iInfRange); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iInfRange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameter##classe::get_SupRange(double & oSupRange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSupRange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupRange(oSupRange); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSupRange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameter##classe::put_SupRange(double iSupRange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSupRange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SupRange(iSupRange); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSupRange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameter##classe::get_Step(double & oStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Step(oStep); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeParameter##classe::put_Step(double iStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Step(iStep); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iStep); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameter##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameter##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameter##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameter##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeParameter##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFreeParameter(classe) \
 \
 \
declare_TIE_CATIAFreeParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeParameter,"CATIAFreeParameter",CATIAFreeParameter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFreeParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeParameter##classe(classe::MetaObject(),CATIAFreeParameter::MetaObject(),(void *)CreateTIECATIAFreeParameter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFreeParameter(classe) \
 \
 \
declare_TIE_CATIAFreeParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeParameter,"CATIAFreeParameter",CATIAFreeParameter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFreeParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeParameter##classe(classe::MetaObject(),CATIAFreeParameter::MetaObject(),(void *)CreateTIECATIAFreeParameter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFreeParameter(classe) TIE_CATIAFreeParameter(classe)
#else
#define BOA_CATIAFreeParameter(classe) CATImplementBOA(CATIAFreeParameter, classe)
#endif

#endif
