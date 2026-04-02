#ifndef __TIE_CATIColMergeable
#define __TIE_CATIColMergeable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIColMergeable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIColMergeable */
#define declare_TIE_CATIColMergeable(classe) \
 \
 \
class TIECATIColMergeable##classe : public CATIColMergeable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIColMergeable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputeMergeFlagFromContext(const CATIColMergeItem * iMyMergeItem, CATIColMergeItem::MergeFlag iOldMergeFlag, CATIColMergeItem::MergeFlag & oNewMergeFlag) ; \
      virtual HRESULT BeforeMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem, CATBaseUnknown *& oSubstitute, CATBoolean HaveBeenCreated=FALSE) ; \
      virtual HRESULT Merge(CATIColMergeContextTable * iMergeContextTable) ; \
      virtual HRESULT AfterMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem) ; \
};



#define ENVTIEdeclare_CATIColMergeable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputeMergeFlagFromContext(const CATIColMergeItem * iMyMergeItem, CATIColMergeItem::MergeFlag iOldMergeFlag, CATIColMergeItem::MergeFlag & oNewMergeFlag) ; \
virtual HRESULT BeforeMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem, CATBaseUnknown *& oSubstitute, CATBoolean HaveBeenCreated=FALSE) ; \
virtual HRESULT Merge(CATIColMergeContextTable * iMergeContextTable) ; \
virtual HRESULT AfterMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem) ; \


#define ENVTIEdefine_CATIColMergeable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputeMergeFlagFromContext(const CATIColMergeItem * iMyMergeItem, CATIColMergeItem::MergeFlag iOldMergeFlag, CATIColMergeItem::MergeFlag & oNewMergeFlag)  \
{ \
return (ENVTIECALL(CATIColMergeable,ENVTIETypeLetter,ENVTIELetter)ComputeMergeFlagFromContext(iMyMergeItem,iOldMergeFlag,oNewMergeFlag)); \
} \
HRESULT  ENVTIEName::BeforeMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem, CATBaseUnknown *& oSubstitute, CATBoolean HaveBeenCreated)  \
{ \
return (ENVTIECALL(CATIColMergeable,ENVTIETypeLetter,ENVTIELetter)BeforeMerge(iMergeContextTable,iMyMergeItem,oSubstitute,HaveBeenCreated)); \
} \
HRESULT  ENVTIEName::Merge(CATIColMergeContextTable * iMergeContextTable)  \
{ \
return (ENVTIECALL(CATIColMergeable,ENVTIETypeLetter,ENVTIELetter)Merge(iMergeContextTable)); \
} \
HRESULT  ENVTIEName::AfterMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem)  \
{ \
return (ENVTIECALL(CATIColMergeable,ENVTIETypeLetter,ENVTIELetter)AfterMerge(iMergeContextTable,iMyMergeItem)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIColMergeable(classe)    TIECATIColMergeable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIColMergeable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIColMergeable, classe) \
 \
 \
CATImplementTIEMethods(CATIColMergeable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIColMergeable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIColMergeable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIColMergeable, classe) \
 \
HRESULT  TIECATIColMergeable##classe::ComputeMergeFlagFromContext(const CATIColMergeItem * iMyMergeItem, CATIColMergeItem::MergeFlag iOldMergeFlag, CATIColMergeItem::MergeFlag & oNewMergeFlag)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeMergeFlagFromContext(iMyMergeItem,iOldMergeFlag,oNewMergeFlag)); \
} \
HRESULT  TIECATIColMergeable##classe::BeforeMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem, CATBaseUnknown *& oSubstitute, CATBoolean HaveBeenCreated)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeforeMerge(iMergeContextTable,iMyMergeItem,oSubstitute,HaveBeenCreated)); \
} \
HRESULT  TIECATIColMergeable##classe::Merge(CATIColMergeContextTable * iMergeContextTable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Merge(iMergeContextTable)); \
} \
HRESULT  TIECATIColMergeable##classe::AfterMerge(CATIColMergeContextTable * iMergeContextTable, CATIColMergeItem * iMyMergeItem)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AfterMerge(iMergeContextTable,iMyMergeItem)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIColMergeable(classe) \
 \
 \
declare_TIE_CATIColMergeable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIColMergeable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIColMergeable,"CATIColMergeable",CATIColMergeable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIColMergeable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIColMergeable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIColMergeable##classe(classe::MetaObject(),CATIColMergeable::MetaObject(),(void *)CreateTIECATIColMergeable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIColMergeable(classe) \
 \
 \
declare_TIE_CATIColMergeable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIColMergeable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIColMergeable,"CATIColMergeable",CATIColMergeable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIColMergeable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIColMergeable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIColMergeable##classe(classe::MetaObject(),CATIColMergeable::MetaObject(),(void *)CreateTIECATIColMergeable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIColMergeable(classe) TIE_CATIColMergeable(classe)
#else
#define BOA_CATIColMergeable(classe) CATImplementBOA(CATIColMergeable, classe)
#endif

#endif
