#ifndef __TIE_CATIASchNetworkAnalysis
#define __TIE_CATIASchNetworkAnalysis

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchNetworkAnalysis.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchNetworkAnalysis */
#define declare_TIE_CATIASchNetworkAnalysis(classe) \
 \
 \
class TIECATIASchNetworkAnalysis##classe : public CATIASchNetworkAnalysis \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchNetworkAnalysis, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ListNetworkObjects(CATIASchListOfObjects *& oLNetworkObjs); \
      virtual HRESULT __stdcall FindPaths(CATIASchAppConnectable * iFromObject, CATIASchAppConnectable * iToObject, CATIASchListOfObjects *& oLNetworks); \
      virtual HRESULT __stdcall ListExtremityObjects(CATIASchListOfObjects *& oLExtremityObjs); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchNetworkAnalysis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ListNetworkObjects(CATIASchListOfObjects *& oLNetworkObjs); \
virtual HRESULT __stdcall FindPaths(CATIASchAppConnectable * iFromObject, CATIASchAppConnectable * iToObject, CATIASchListOfObjects *& oLNetworks); \
virtual HRESULT __stdcall ListExtremityObjects(CATIASchListOfObjects *& oLExtremityObjs); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchNetworkAnalysis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ListNetworkObjects(CATIASchListOfObjects *& oLNetworkObjs) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)ListNetworkObjects(oLNetworkObjs)); \
} \
HRESULT __stdcall  ENVTIEName::FindPaths(CATIASchAppConnectable * iFromObject, CATIASchAppConnectable * iToObject, CATIASchListOfObjects *& oLNetworks) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)FindPaths(iFromObject,iToObject,oLNetworks)); \
} \
HRESULT __stdcall  ENVTIEName::ListExtremityObjects(CATIASchListOfObjects *& oLExtremityObjs) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)ListExtremityObjects(oLExtremityObjs)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchNetworkAnalysis,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchNetworkAnalysis(classe)    TIECATIASchNetworkAnalysis##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchNetworkAnalysis(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchNetworkAnalysis, classe) \
 \
 \
CATImplementTIEMethods(CATIASchNetworkAnalysis, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchNetworkAnalysis, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchNetworkAnalysis, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchNetworkAnalysis, classe) \
 \
HRESULT __stdcall  TIECATIASchNetworkAnalysis##classe::ListNetworkObjects(CATIASchListOfObjects *& oLNetworkObjs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLNetworkObjs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListNetworkObjects(oLNetworkObjs); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLNetworkObjs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchNetworkAnalysis##classe::FindPaths(CATIASchAppConnectable * iFromObject, CATIASchAppConnectable * iToObject, CATIASchListOfObjects *& oLNetworks) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFromObject,&iToObject,&oLNetworks); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindPaths(iFromObject,iToObject,oLNetworks); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFromObject,&iToObject,&oLNetworks); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchNetworkAnalysis##classe::ListExtremityObjects(CATIASchListOfObjects *& oLExtremityObjs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLExtremityObjs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListExtremityObjects(oLExtremityObjs); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLExtremityObjs); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchNetworkAnalysis##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchNetworkAnalysis##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchNetworkAnalysis##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchNetworkAnalysis##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchNetworkAnalysis##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchNetworkAnalysis(classe) \
 \
 \
declare_TIE_CATIASchNetworkAnalysis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchNetworkAnalysis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchNetworkAnalysis,"CATIASchNetworkAnalysis",CATIASchNetworkAnalysis::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchNetworkAnalysis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchNetworkAnalysis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchNetworkAnalysis##classe(classe::MetaObject(),CATIASchNetworkAnalysis::MetaObject(),(void *)CreateTIECATIASchNetworkAnalysis##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchNetworkAnalysis(classe) \
 \
 \
declare_TIE_CATIASchNetworkAnalysis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchNetworkAnalysis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchNetworkAnalysis,"CATIASchNetworkAnalysis",CATIASchNetworkAnalysis::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchNetworkAnalysis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchNetworkAnalysis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchNetworkAnalysis##classe(classe::MetaObject(),CATIASchNetworkAnalysis::MetaObject(),(void *)CreateTIECATIASchNetworkAnalysis##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchNetworkAnalysis(classe) TIE_CATIASchNetworkAnalysis(classe)
#else
#define BOA_CATIASchNetworkAnalysis(classe) CATImplementBOA(CATIASchNetworkAnalysis, classe)
#endif

#endif
