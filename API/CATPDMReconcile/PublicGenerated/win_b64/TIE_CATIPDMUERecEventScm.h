#ifndef __TIE_CATIPDMUERecEventScm
#define __TIE_CATIPDMUERecEventScm

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUERecEventScm.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUERecEventScm */
#define declare_TIE_CATIPDMUERecEventScm(classe) \
 \
 \
class TIECATIPDMUERecEventScm##classe : public CATIPDMUERecEventScm \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUERecEventScm, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnSessionInitialization( CATScmSession * ixScmSession ) ; \
      virtual HRESULT OnAfterStructureComparison( CATScmSession  * ixScmSession , CATScmInstance * ixRootInstance ) ; \
      virtual HRESULT OnAfterReconciliationApply( CATScmSession  * ixScmSession ) ; \
};



#define ENVTIEdeclare_CATIPDMUERecEventScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnSessionInitialization( CATScmSession * ixScmSession ) ; \
virtual HRESULT OnAfterStructureComparison( CATScmSession  * ixScmSession , CATScmInstance * ixRootInstance ) ; \
virtual HRESULT OnAfterReconciliationApply( CATScmSession  * ixScmSession ) ; \


#define ENVTIEdefine_CATIPDMUERecEventScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnSessionInitialization( CATScmSession * ixScmSession )  \
{ \
return (ENVTIECALL(CATIPDMUERecEventScm,ENVTIETypeLetter,ENVTIELetter)OnSessionInitialization(ixScmSession )); \
} \
HRESULT  ENVTIEName::OnAfterStructureComparison( CATScmSession  * ixScmSession , CATScmInstance * ixRootInstance )  \
{ \
return (ENVTIECALL(CATIPDMUERecEventScm,ENVTIETypeLetter,ENVTIELetter)OnAfterStructureComparison(ixScmSession ,ixRootInstance )); \
} \
HRESULT  ENVTIEName::OnAfterReconciliationApply( CATScmSession  * ixScmSession )  \
{ \
return (ENVTIECALL(CATIPDMUERecEventScm,ENVTIETypeLetter,ENVTIELetter)OnAfterReconciliationApply(ixScmSession )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUERecEventScm(classe)    TIECATIPDMUERecEventScm##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUERecEventScm(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUERecEventScm, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUERecEventScm, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUERecEventScm, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUERecEventScm, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUERecEventScm, classe) \
 \
HRESULT  TIECATIPDMUERecEventScm##classe::OnSessionInitialization( CATScmSession * ixScmSession )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnSessionInitialization(ixScmSession )); \
} \
HRESULT  TIECATIPDMUERecEventScm##classe::OnAfterStructureComparison( CATScmSession  * ixScmSession , CATScmInstance * ixRootInstance )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnAfterStructureComparison(ixScmSession ,ixRootInstance )); \
} \
HRESULT  TIECATIPDMUERecEventScm##classe::OnAfterReconciliationApply( CATScmSession  * ixScmSession )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnAfterReconciliationApply(ixScmSession )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUERecEventScm(classe) \
 \
 \
declare_TIE_CATIPDMUERecEventScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUERecEventScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUERecEventScm,"CATIPDMUERecEventScm",CATIPDMUERecEventScm::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUERecEventScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUERecEventScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUERecEventScm##classe(classe::MetaObject(),CATIPDMUERecEventScm::MetaObject(),(void *)CreateTIECATIPDMUERecEventScm##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUERecEventScm(classe) \
 \
 \
declare_TIE_CATIPDMUERecEventScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUERecEventScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUERecEventScm,"CATIPDMUERecEventScm",CATIPDMUERecEventScm::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUERecEventScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUERecEventScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUERecEventScm##classe(classe::MetaObject(),CATIPDMUERecEventScm::MetaObject(),(void *)CreateTIECATIPDMUERecEventScm##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUERecEventScm(classe) TIE_CATIPDMUERecEventScm(classe)
#else
#define BOA_CATIPDMUERecEventScm(classe) CATImplementBOA(CATIPDMUERecEventScm, classe)
#endif

#endif
