#ifndef __TIE_CATIStructureAnalyse
#define __TIE_CATIStructureAnalyse

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIStructureAnalyse.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIStructureAnalyse */
#define declare_TIE_CATIStructureAnalyse(classe) \
 \
 \
class TIECATIStructureAnalyse##classe : public CATIStructureAnalyse \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIStructureAnalyse, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void AnalyseParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \
      virtual void AnalyseDirectParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \
      virtual void AnalyseChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \
      virtual void AnalyseDirectChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \
};



#define ENVTIEdeclare_CATIStructureAnalyse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void AnalyseParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \
virtual void AnalyseDirectParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \
virtual void AnalyseChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \
virtual void AnalyseDirectChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList); \


#define ENVTIEdefine_CATIStructureAnalyse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::AnalyseParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
 (ENVTIECALL(CATIStructureAnalyse,ENVTIETypeLetter,ENVTIELetter)AnalyseParents(iIntfName,oList)); \
} \
void  ENVTIEName::AnalyseDirectParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
 (ENVTIECALL(CATIStructureAnalyse,ENVTIETypeLetter,ENVTIELetter)AnalyseDirectParents(iIntfName,oList)); \
} \
void  ENVTIEName::AnalyseChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
 (ENVTIECALL(CATIStructureAnalyse,ENVTIETypeLetter,ENVTIELetter)AnalyseChildren(iIntfName,oList)); \
} \
void  ENVTIEName::AnalyseDirectChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
 (ENVTIECALL(CATIStructureAnalyse,ENVTIETypeLetter,ENVTIELetter)AnalyseDirectChildren(iIntfName,oList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIStructureAnalyse(classe)    TIECATIStructureAnalyse##classe


/* Common methods inside a TIE */
#define common_TIE_CATIStructureAnalyse(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIStructureAnalyse, classe) \
 \
 \
CATImplementTIEMethods(CATIStructureAnalyse, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIStructureAnalyse, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIStructureAnalyse, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIStructureAnalyse, classe) \
 \
void  TIECATIStructureAnalyse##classe::AnalyseParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AnalyseParents(iIntfName,oList); \
} \
void  TIECATIStructureAnalyse##classe::AnalyseDirectParents(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AnalyseDirectParents(iIntfName,oList); \
} \
void  TIECATIStructureAnalyse##classe::AnalyseChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AnalyseChildren(iIntfName,oList); \
} \
void  TIECATIStructureAnalyse##classe::AnalyseDirectChildren(CATClassId iIntfName,CATListValCATBaseUnknown_var& oList) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AnalyseDirectChildren(iIntfName,oList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIStructureAnalyse(classe) \
 \
 \
declare_TIE_CATIStructureAnalyse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStructureAnalyse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStructureAnalyse,"CATIStructureAnalyse",CATIStructureAnalyse::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStructureAnalyse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIStructureAnalyse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStructureAnalyse##classe(classe::MetaObject(),CATIStructureAnalyse::MetaObject(),(void *)CreateTIECATIStructureAnalyse##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIStructureAnalyse(classe) \
 \
 \
declare_TIE_CATIStructureAnalyse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStructureAnalyse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStructureAnalyse,"CATIStructureAnalyse",CATIStructureAnalyse::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStructureAnalyse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIStructureAnalyse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStructureAnalyse##classe(classe::MetaObject(),CATIStructureAnalyse::MetaObject(),(void *)CreateTIECATIStructureAnalyse##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIStructureAnalyse(classe) TIE_CATIStructureAnalyse(classe)
#else
#define BOA_CATIStructureAnalyse(classe) CATImplementBOA(CATIStructureAnalyse, classe)
#endif

#endif
