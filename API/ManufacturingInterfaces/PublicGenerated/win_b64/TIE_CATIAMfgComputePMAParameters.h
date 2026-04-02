#ifndef __TIE_CATIAMfgComputePMAParameters
#define __TIE_CATIAMfgComputePMAParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMfgComputePMAParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMfgComputePMAParameters */
#define declare_TIE_CATIAMfgComputePMAParameters(classe) \
 \
 \
class TIECATIAMfgComputePMAParameters##classe : public CATIAMfgComputePMAParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMfgComputePMAParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeParameters(); \
      virtual HRESULT __stdcall GetParameterDoubleValue(const CATBSTR & iName, double & oValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMfgComputePMAParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeParameters(); \
virtual HRESULT __stdcall GetParameterDoubleValue(const CATBSTR & iName, double & oValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMfgComputePMAParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeParameters() \
{ \
return (ENVTIECALL(CATIAMfgComputePMAParameters,ENVTIETypeLetter,ENVTIELetter)ComputeParameters()); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterDoubleValue(const CATBSTR & iName, double & oValue) \
{ \
return (ENVTIECALL(CATIAMfgComputePMAParameters,ENVTIETypeLetter,ENVTIELetter)GetParameterDoubleValue(iName,oValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMfgComputePMAParameters,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMfgComputePMAParameters,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgComputePMAParameters,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgComputePMAParameters,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMfgComputePMAParameters,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMfgComputePMAParameters(classe)    TIECATIAMfgComputePMAParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMfgComputePMAParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMfgComputePMAParameters, classe) \
 \
 \
CATImplementTIEMethods(CATIAMfgComputePMAParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMfgComputePMAParameters, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMfgComputePMAParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMfgComputePMAParameters, classe) \
 \
HRESULT __stdcall  TIECATIAMfgComputePMAParameters##classe::ComputeParameters() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeParameters(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMfgComputePMAParameters##classe::GetParameterDoubleValue(const CATBSTR & iName, double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterDoubleValue(iName,oValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&oValue); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgComputePMAParameters##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgComputePMAParameters##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgComputePMAParameters##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgComputePMAParameters##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgComputePMAParameters##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMfgComputePMAParameters(classe) \
 \
 \
declare_TIE_CATIAMfgComputePMAParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgComputePMAParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgComputePMAParameters,"CATIAMfgComputePMAParameters",CATIAMfgComputePMAParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgComputePMAParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMfgComputePMAParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgComputePMAParameters##classe(classe::MetaObject(),CATIAMfgComputePMAParameters::MetaObject(),(void *)CreateTIECATIAMfgComputePMAParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMfgComputePMAParameters(classe) \
 \
 \
declare_TIE_CATIAMfgComputePMAParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgComputePMAParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgComputePMAParameters,"CATIAMfgComputePMAParameters",CATIAMfgComputePMAParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgComputePMAParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMfgComputePMAParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgComputePMAParameters##classe(classe::MetaObject(),CATIAMfgComputePMAParameters::MetaObject(),(void *)CreateTIECATIAMfgComputePMAParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMfgComputePMAParameters(classe) TIE_CATIAMfgComputePMAParameters(classe)
#else
#define BOA_CATIAMfgComputePMAParameters(classe) CATImplementBOA(CATIAMfgComputePMAParameters, classe)
#endif

#endif
