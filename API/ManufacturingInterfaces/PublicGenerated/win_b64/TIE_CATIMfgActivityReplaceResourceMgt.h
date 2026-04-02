#ifndef __TIE_CATIMfgActivityReplaceResourceMgt
#define __TIE_CATIMfgActivityReplaceResourceMgt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgActivityReplaceResourceMgt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgActivityReplaceResourceMgt */
#define declare_TIE_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
class TIECATIMfgActivityReplaceResourceMgt##classe : public CATIMfgActivityReplaceResourceMgt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgActivityReplaceResourceMgt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetResourceReplacementToDo (const CATBaseUnknown_var &ispBUResourceSelected, CATBaseUnknown_var       &ospBUResourceToPutOnActivity); \
};



#define ENVTIEdeclare_CATIMfgActivityReplaceResourceMgt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetResourceReplacementToDo (const CATBaseUnknown_var &ispBUResourceSelected, CATBaseUnknown_var       &ospBUResourceToPutOnActivity); \


#define ENVTIEdefine_CATIMfgActivityReplaceResourceMgt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetResourceReplacementToDo (const CATBaseUnknown_var &ispBUResourceSelected, CATBaseUnknown_var       &ospBUResourceToPutOnActivity) \
{ \
return (ENVTIECALL(CATIMfgActivityReplaceResourceMgt,ENVTIETypeLetter,ENVTIELetter)GetResourceReplacementToDo (ispBUResourceSelected,ospBUResourceToPutOnActivity)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgActivityReplaceResourceMgt(classe)    TIECATIMfgActivityReplaceResourceMgt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgActivityReplaceResourceMgt, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgActivityReplaceResourceMgt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgActivityReplaceResourceMgt, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgActivityReplaceResourceMgt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgActivityReplaceResourceMgt, classe) \
 \
HRESULT  TIECATIMfgActivityReplaceResourceMgt##classe::GetResourceReplacementToDo (const CATBaseUnknown_var &ispBUResourceSelected, CATBaseUnknown_var       &ospBUResourceToPutOnActivity) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResourceReplacementToDo (ispBUResourceSelected,ospBUResourceToPutOnActivity)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
declare_TIE_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityReplaceResourceMgt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityReplaceResourceMgt,"CATIMfgActivityReplaceResourceMgt",CATIMfgActivityReplaceResourceMgt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgActivityReplaceResourceMgt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityReplaceResourceMgt##classe(classe::MetaObject(),CATIMfgActivityReplaceResourceMgt::MetaObject(),(void *)CreateTIECATIMfgActivityReplaceResourceMgt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
declare_TIE_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityReplaceResourceMgt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityReplaceResourceMgt,"CATIMfgActivityReplaceResourceMgt",CATIMfgActivityReplaceResourceMgt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityReplaceResourceMgt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgActivityReplaceResourceMgt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityReplaceResourceMgt##classe(classe::MetaObject(),CATIMfgActivityReplaceResourceMgt::MetaObject(),(void *)CreateTIECATIMfgActivityReplaceResourceMgt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgActivityReplaceResourceMgt(classe) TIE_CATIMfgActivityReplaceResourceMgt(classe)
#else
#define BOA_CATIMfgActivityReplaceResourceMgt(classe) CATImplementBOA(CATIMfgActivityReplaceResourceMgt, classe)
#endif

#endif
