#ifndef __TIE_CATIAAnalysisSets
#define __TIE_CATIAAnalysisSets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisSets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisSets */
#define declare_TIE_CATIAAnalysisSets(classe) \
 \
 \
class TIECATIAAnalysisSets##classe : public CATIAAnalysisSets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisSets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & iType, CATAnalysisSetType iSetType, CATIAAnalysisSet *& oSet); \
      virtual HRESULT __stdcall AddExistingSet(CATIAAnalysisSet * iSet, CATAnalysisSetType iSetType); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATAnalysisSetSearchType iSerachType, CATIAAnalysisSet *& oSet); \
      virtual HRESULT __stdcall ItemByType(const CATBSTR & iType, CATIAAnalysisSet *& oSet); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAAnalysisSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & iType, CATAnalysisSetType iSetType, CATIAAnalysisSet *& oSet); \
virtual HRESULT __stdcall AddExistingSet(CATIAAnalysisSet * iSet, CATAnalysisSetType iSetType); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATAnalysisSetSearchType iSerachType, CATIAAnalysisSet *& oSet); \
virtual HRESULT __stdcall ItemByType(const CATBSTR & iType, CATIAAnalysisSet *& oSet); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAAnalysisSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iType, CATAnalysisSetType iSetType, CATIAAnalysisSet *& oSet) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)Add(iType,iSetType,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::AddExistingSet(CATIAAnalysisSet * iSet, CATAnalysisSetType iSetType) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)AddExistingSet(iSet,iSetType)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATAnalysisSetSearchType iSerachType, CATIAAnalysisSet *& oSet) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,iSerachType,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::ItemByType(const CATBSTR & iType, CATIAAnalysisSet *& oSet) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)ItemByType(iType,oSet)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAAnalysisSets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisSets(classe)    TIECATIAAnalysisSets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisSets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisSets, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisSets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisSets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisSets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisSets, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisSets##classe::Add(const CATBSTR & iType, CATAnalysisSetType iSetType, CATIAAnalysisSet *& oSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iType,&iSetType,&oSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iType,iSetType,oSet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iType,&iSetType,&oSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisSets##classe::AddExistingSet(CATIAAnalysisSet * iSet, CATAnalysisSetType iSetType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSet,&iSetType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddExistingSet(iSet,iSetType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSet,&iSetType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisSets##classe::Item(const CATVariant & iIndex, CATAnalysisSetSearchType iSerachType, CATIAAnalysisSet *& oSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&iSerachType,&oSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,iSerachType,oSet); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&iSerachType,&oSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisSets##classe::ItemByType(const CATBSTR & iType, CATIAAnalysisSet *& oSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iType,&oSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ItemByType(iType,oSet); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iType,&oSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisSets##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisSets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisSets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisSets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisSets##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisSets##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisSets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisSets(classe) \
 \
 \
declare_TIE_CATIAAnalysisSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisSets,"CATIAAnalysisSets",CATIAAnalysisSets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisSets##classe(classe::MetaObject(),CATIAAnalysisSets::MetaObject(),(void *)CreateTIECATIAAnalysisSets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisSets(classe) \
 \
 \
declare_TIE_CATIAAnalysisSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisSets,"CATIAAnalysisSets",CATIAAnalysisSets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisSets##classe(classe::MetaObject(),CATIAAnalysisSets::MetaObject(),(void *)CreateTIECATIAAnalysisSets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisSets(classe) TIE_CATIAAnalysisSets(classe)
#else
#define BOA_CATIAAnalysisSets(classe) CATImplementBOA(CATIAAnalysisSets, classe)
#endif

#endif
