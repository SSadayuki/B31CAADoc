#ifndef __TIE_CATIAAnalysisCases
#define __TIE_CATIAAnalysisCases

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisCases.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisCases */
#define declare_TIE_CATIAAnalysisCases(classe) \
 \
 \
class TIECATIAAnalysisCases##classe : public CATIAAnalysisCases \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisCases, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAAnalysisCase *& oCase); \
      virtual HRESULT __stdcall AddExistingCase(CATIAAnalysisCase * iCase); \
      virtual HRESULT __stdcall NewCase(const CATBSTR & iType, CATIAAnalysisCase *& oCase); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnalysisCase *& oCase); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAnalysisCases(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAAnalysisCase *& oCase); \
virtual HRESULT __stdcall AddExistingCase(CATIAAnalysisCase * iCase); \
virtual HRESULT __stdcall NewCase(const CATBSTR & iType, CATIAAnalysisCase *& oCase); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAAnalysisCase *& oCase); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAnalysisCases(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAAnalysisCase *& oCase) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)Add(oCase)); \
} \
HRESULT __stdcall  ENVTIEName::AddExistingCase(CATIAAnalysisCase * iCase) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)AddExistingCase(iCase)); \
} \
HRESULT __stdcall  ENVTIEName::NewCase(const CATBSTR & iType, CATIAAnalysisCase *& oCase) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)NewCase(iType,oCase)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAAnalysisCase *& oCase) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oCase)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAnalysisCases,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisCases(classe)    TIECATIAAnalysisCases##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisCases(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisCases, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisCases, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisCases, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisCases, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisCases, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisCases##classe::Add(CATIAAnalysisCase *& oCase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oCase); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisCases##classe::AddExistingCase(CATIAAnalysisCase * iCase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddExistingCase(iCase); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisCases##classe::NewCase(const CATBSTR & iType, CATIAAnalysisCase *& oCase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iType,&oCase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewCase(iType,oCase); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iType,&oCase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisCases##classe::Item(const CATVariant & iIndex, CATIAAnalysisCase *& oCase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oCase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oCase); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oCase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisCases##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCases##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCases##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCases##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCases##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCases##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCases##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisCases(classe) \
 \
 \
declare_TIE_CATIAAnalysisCases(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisCases##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisCases,"CATIAAnalysisCases",CATIAAnalysisCases::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisCases(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisCases, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisCases##classe(classe::MetaObject(),CATIAAnalysisCases::MetaObject(),(void *)CreateTIECATIAAnalysisCases##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisCases(classe) \
 \
 \
declare_TIE_CATIAAnalysisCases(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisCases##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisCases,"CATIAAnalysisCases",CATIAAnalysisCases::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisCases(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisCases, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisCases##classe(classe::MetaObject(),CATIAAnalysisCases::MetaObject(),(void *)CreateTIECATIAAnalysisCases##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisCases(classe) TIE_CATIAAnalysisCases(classe)
#else
#define BOA_CATIAAnalysisCases(classe) CATImplementBOA(CATIAAnalysisCases, classe)
#endif

#endif
