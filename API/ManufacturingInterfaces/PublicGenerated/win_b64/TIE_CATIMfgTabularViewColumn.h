#ifndef __TIE_CATIMfgTabularViewColumn
#define __TIE_CATIMfgTabularViewColumn

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgTabularViewColumn.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgTabularViewColumn */
#define declare_TIE_CATIMfgTabularViewColumn(classe) \
 \
 \
class TIECATIMfgTabularViewColumn##classe : public CATIMfgTabularViewColumn \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgTabularViewColumn, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetListColumnId(CATListOfCATString& oListColumnId) ; \
      virtual HRESULT GetListTitleColumn(CATListOfCATUnicodeString& oListTitle) ; \
      virtual HRESULT GetParamCke(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATBaseUnknown_var& ospBUCkeParm, int& oNoMultiModification) ; \
      virtual HRESULT GetValue(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATUnicodeString& ostrValue) ; \
      virtual HRESULT ResetCache(const int iCacheID) ; \
};



#define ENVTIEdeclare_CATIMfgTabularViewColumn(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetListColumnId(CATListOfCATString& oListColumnId) ; \
virtual HRESULT GetListTitleColumn(CATListOfCATUnicodeString& oListTitle) ; \
virtual HRESULT GetParamCke(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATBaseUnknown_var& ospBUCkeParm, int& oNoMultiModification) ; \
virtual HRESULT GetValue(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATUnicodeString& ostrValue) ; \
virtual HRESULT ResetCache(const int iCacheID) ; \


#define ENVTIEdefine_CATIMfgTabularViewColumn(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetListColumnId(CATListOfCATString& oListColumnId)  \
{ \
return (ENVTIECALL(CATIMfgTabularViewColumn,ENVTIETypeLetter,ENVTIELetter)GetListColumnId(oListColumnId)); \
} \
HRESULT  ENVTIEName::GetListTitleColumn(CATListOfCATUnicodeString& oListTitle)  \
{ \
return (ENVTIECALL(CATIMfgTabularViewColumn,ENVTIETypeLetter,ENVTIELetter)GetListTitleColumn(oListTitle)); \
} \
HRESULT  ENVTIEName::GetParamCke(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATBaseUnknown_var& ospBUCkeParm, int& oNoMultiModification)  \
{ \
return (ENVTIECALL(CATIMfgTabularViewColumn,ENVTIETypeLetter,ENVTIELetter)GetParamCke(ispBUActivity,iColumnId,ospBUCkeParm,oNoMultiModification)); \
} \
HRESULT  ENVTIEName::GetValue(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATUnicodeString& ostrValue)  \
{ \
return (ENVTIECALL(CATIMfgTabularViewColumn,ENVTIETypeLetter,ENVTIELetter)GetValue(ispBUActivity,iColumnId,ostrValue)); \
} \
HRESULT  ENVTIEName::ResetCache(const int iCacheID)  \
{ \
return (ENVTIECALL(CATIMfgTabularViewColumn,ENVTIETypeLetter,ENVTIELetter)ResetCache(iCacheID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgTabularViewColumn(classe)    TIECATIMfgTabularViewColumn##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgTabularViewColumn(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgTabularViewColumn, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgTabularViewColumn, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgTabularViewColumn, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgTabularViewColumn, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgTabularViewColumn, classe) \
 \
HRESULT  TIECATIMfgTabularViewColumn##classe::GetListColumnId(CATListOfCATString& oListColumnId)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListColumnId(oListColumnId)); \
} \
HRESULT  TIECATIMfgTabularViewColumn##classe::GetListTitleColumn(CATListOfCATUnicodeString& oListTitle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListTitleColumn(oListTitle)); \
} \
HRESULT  TIECATIMfgTabularViewColumn##classe::GetParamCke(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATBaseUnknown_var& ospBUCkeParm, int& oNoMultiModification)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParamCke(ispBUActivity,iColumnId,ospBUCkeParm,oNoMultiModification)); \
} \
HRESULT  TIECATIMfgTabularViewColumn##classe::GetValue(const CATBaseUnknown_var& ispBUActivity, const CATString& iColumnId, CATUnicodeString& ostrValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(ispBUActivity,iColumnId,ostrValue)); \
} \
HRESULT  TIECATIMfgTabularViewColumn##classe::ResetCache(const int iCacheID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetCache(iCacheID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgTabularViewColumn(classe) \
 \
 \
declare_TIE_CATIMfgTabularViewColumn(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgTabularViewColumn##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgTabularViewColumn,"CATIMfgTabularViewColumn",CATIMfgTabularViewColumn::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgTabularViewColumn(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgTabularViewColumn, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgTabularViewColumn##classe(classe::MetaObject(),CATIMfgTabularViewColumn::MetaObject(),(void *)CreateTIECATIMfgTabularViewColumn##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgTabularViewColumn(classe) \
 \
 \
declare_TIE_CATIMfgTabularViewColumn(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgTabularViewColumn##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgTabularViewColumn,"CATIMfgTabularViewColumn",CATIMfgTabularViewColumn::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgTabularViewColumn(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgTabularViewColumn, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgTabularViewColumn##classe(classe::MetaObject(),CATIMfgTabularViewColumn::MetaObject(),(void *)CreateTIECATIMfgTabularViewColumn##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgTabularViewColumn(classe) TIE_CATIMfgTabularViewColumn(classe)
#else
#define BOA_CATIMfgTabularViewColumn(classe) CATImplementBOA(CATIMfgTabularViewColumn, classe)
#endif

#endif
