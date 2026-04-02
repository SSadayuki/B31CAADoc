#ifndef __TIE_CATIAAnalysisImport
#define __TIE_CATIAAnalysisImport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisImport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisImport */
#define declare_TIE_CATIAAnalysisImport(classe) \
 \
 \
class TIECATIAAnalysisImport##classe : public CATIAAnalysisImport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisImport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddSupport(CATIAAnalysisManager * iManager, CATIAProduct * iProductSupport, CATIABase * iSupport); \
      virtual HRESULT __stdcall ImportDisp(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis); \
      virtual HRESULT __stdcall ImportForce(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisImport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddSupport(CATIAAnalysisManager * iManager, CATIAProduct * iProductSupport, CATIABase * iSupport); \
virtual HRESULT __stdcall ImportDisp(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis); \
virtual HRESULT __stdcall ImportForce(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisImport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddSupport(CATIAAnalysisManager * iManager, CATIAProduct * iProductSupport, CATIABase * iSupport) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)AddSupport(iManager,iProductSupport,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::ImportDisp(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)ImportDisp(iFatherCase,iFullPath,iManager,iAxis)); \
} \
HRESULT __stdcall  ENVTIEName::ImportForce(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)ImportForce(iFatherCase,iFullPath,iManager,iAxis)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisImport,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisImport(classe)    TIECATIAAnalysisImport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisImport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisImport, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisImport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisImport, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisImport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisImport, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisImport##classe::AddSupport(CATIAAnalysisManager * iManager, CATIAProduct * iProductSupport, CATIABase * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iManager,&iProductSupport,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupport(iManager,iProductSupport,iSupport); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iManager,&iProductSupport,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImport##classe::ImportDisp(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFatherCase,&iFullPath,&iManager,&iAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportDisp(iFatherCase,iFullPath,iManager,iAxis); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFatherCase,&iFullPath,&iManager,&iAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisImport##classe::ImportForce(CATIAAnalysisCase * iFatherCase, const CATBSTR & iFullPath, CATIAAnalysisManager * iManager, CATIABase * iAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFatherCase,&iFullPath,&iManager,&iAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportForce(iFatherCase,iFullPath,iManager,iAxis); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFatherCase,&iFullPath,&iManager,&iAxis); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImport##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImport##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImport##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImport##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisImport##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisImport(classe) \
 \
 \
declare_TIE_CATIAAnalysisImport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisImport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisImport,"CATIAAnalysisImport",CATIAAnalysisImport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisImport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisImport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisImport##classe(classe::MetaObject(),CATIAAnalysisImport::MetaObject(),(void *)CreateTIECATIAAnalysisImport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisImport(classe) \
 \
 \
declare_TIE_CATIAAnalysisImport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisImport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisImport,"CATIAAnalysisImport",CATIAAnalysisImport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisImport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisImport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisImport##classe(classe::MetaObject(),CATIAAnalysisImport::MetaObject(),(void *)CreateTIECATIAAnalysisImport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisImport(classe) TIE_CATIAAnalysisImport(classe)
#else
#define BOA_CATIAAnalysisImport(classe) CATImplementBOA(CATIAAnalysisImport, classe)
#endif

#endif
