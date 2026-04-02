#ifndef __TIE_CATIAAnalysisV4Services
#define __TIE_CATIAAnalysisV4Services

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisV4Services.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisV4Services */
#define declare_TIE_CATIAAnalysisV4Services(classe) \
 \
 \
class TIECATIAAnalysisV4Services##classe : public CATIAAnalysisV4Services \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisV4Services, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetStorageInfo(const CATBSTR & iModelPath, CATBSTR & oPrefix, CATBSTR & oExternal); \
      virtual HRESULT __stdcall PrintSessionInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath); \
      virtual HRESULT __stdcall PrintAssembledSetsInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh); \
      virtual HRESULT __stdcall PrintCouplingAnalysisInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisV4Services(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetStorageInfo(const CATBSTR & iModelPath, CATBSTR & oPrefix, CATBSTR & oExternal); \
virtual HRESULT __stdcall PrintSessionInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath); \
virtual HRESULT __stdcall PrintAssembledSetsInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh); \
virtual HRESULT __stdcall PrintCouplingAnalysisInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisV4Services(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetStorageInfo(const CATBSTR & iModelPath, CATBSTR & oPrefix, CATBSTR & oExternal) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)GetStorageInfo(iModelPath,oPrefix,oExternal)); \
} \
HRESULT __stdcall  ENVTIEName::PrintSessionInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)PrintSessionInfo(iSessionPath,iPrintPath)); \
} \
HRESULT __stdcall  ENVTIEName::PrintAssembledSetsInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)PrintAssembledSetsInfo(iSessionPath,iPrintPath,iSubmesh)); \
} \
HRESULT __stdcall  ENVTIEName::PrintCouplingAnalysisInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)PrintCouplingAnalysisInfo(iSessionPath,iPrintPath,iSubmesh)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisV4Services,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisV4Services(classe)    TIECATIAAnalysisV4Services##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisV4Services(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisV4Services, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisV4Services, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisV4Services, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisV4Services, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisV4Services, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisV4Services##classe::GetStorageInfo(const CATBSTR & iModelPath, CATBSTR & oPrefix, CATBSTR & oExternal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iModelPath,&oPrefix,&oExternal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStorageInfo(iModelPath,oPrefix,oExternal); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iModelPath,&oPrefix,&oExternal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisV4Services##classe::PrintSessionInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSessionPath,&iPrintPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintSessionInfo(iSessionPath,iPrintPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSessionPath,&iPrintPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisV4Services##classe::PrintAssembledSetsInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iSessionPath,&iPrintPath,&iSubmesh); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintAssembledSetsInfo(iSessionPath,iPrintPath,iSubmesh); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iSessionPath,&iPrintPath,&iSubmesh); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisV4Services##classe::PrintCouplingAnalysisInfo(const CATBSTR & iSessionPath, const CATBSTR & iPrintPath, CATLONG iSubmesh) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSessionPath,&iPrintPath,&iSubmesh); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintCouplingAnalysisInfo(iSessionPath,iPrintPath,iSubmesh); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSessionPath,&iPrintPath,&iSubmesh); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisV4Services##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisV4Services##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisV4Services##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisV4Services##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisV4Services##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisV4Services(classe) \
 \
 \
declare_TIE_CATIAAnalysisV4Services(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisV4Services##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisV4Services,"CATIAAnalysisV4Services",CATIAAnalysisV4Services::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisV4Services(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisV4Services, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisV4Services##classe(classe::MetaObject(),CATIAAnalysisV4Services::MetaObject(),(void *)CreateTIECATIAAnalysisV4Services##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisV4Services(classe) \
 \
 \
declare_TIE_CATIAAnalysisV4Services(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisV4Services##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisV4Services,"CATIAAnalysisV4Services",CATIAAnalysisV4Services::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisV4Services(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisV4Services, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisV4Services##classe(classe::MetaObject(),CATIAAnalysisV4Services::MetaObject(),(void *)CreateTIECATIAAnalysisV4Services##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisV4Services(classe) TIE_CATIAAnalysisV4Services(classe)
#else
#define BOA_CATIAAnalysisV4Services(classe) CATImplementBOA(CATIAAnalysisV4Services, classe)
#endif

#endif
