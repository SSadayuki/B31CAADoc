#ifndef __TIE_CATIColSharable
#define __TIE_CATIColSharable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIColSharable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIColSharable */
#define declare_TIE_CATIColSharable(classe) \
 \
 \
class TIECATIColSharable##classe : public CATIColSharable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIColSharable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMergeContextTable(CATIColMergeContextTable *& oMergeContextTable) ; \
      virtual HRESULT GetShareAccess(CATIColSharable::ShareAccess & oShareAccess) ; \
      virtual HRESULT ListAvailableShareMode(CATListOfShareAccess & oModes) ; \
      virtual CATBoolean CanBeSharedAs(const CATIColSharable::ShareMode & iMode) ; \
      virtual HRESULT ShareAs(const CATIColSharable::ShareMode & iMode, CATBaseUnknown ** oObjectToShare, CATIColMergeContextTable ** ioContextTable) ; \
};



#define ENVTIEdeclare_CATIColSharable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMergeContextTable(CATIColMergeContextTable *& oMergeContextTable) ; \
virtual HRESULT GetShareAccess(CATIColSharable::ShareAccess & oShareAccess) ; \
virtual HRESULT ListAvailableShareMode(CATListOfShareAccess & oModes) ; \
virtual CATBoolean CanBeSharedAs(const CATIColSharable::ShareMode & iMode) ; \
virtual HRESULT ShareAs(const CATIColSharable::ShareMode & iMode, CATBaseUnknown ** oObjectToShare, CATIColMergeContextTable ** ioContextTable) ; \


#define ENVTIEdefine_CATIColSharable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMergeContextTable(CATIColMergeContextTable *& oMergeContextTable)  \
{ \
return (ENVTIECALL(CATIColSharable,ENVTIETypeLetter,ENVTIELetter)GetMergeContextTable(oMergeContextTable)); \
} \
HRESULT  ENVTIEName::GetShareAccess(CATIColSharable::ShareAccess & oShareAccess)  \
{ \
return (ENVTIECALL(CATIColSharable,ENVTIETypeLetter,ENVTIELetter)GetShareAccess(oShareAccess)); \
} \
HRESULT  ENVTIEName::ListAvailableShareMode(CATListOfShareAccess & oModes)  \
{ \
return (ENVTIECALL(CATIColSharable,ENVTIETypeLetter,ENVTIELetter)ListAvailableShareMode(oModes)); \
} \
CATBoolean  ENVTIEName::CanBeSharedAs(const CATIColSharable::ShareMode & iMode)  \
{ \
return (ENVTIECALL(CATIColSharable,ENVTIETypeLetter,ENVTIELetter)CanBeSharedAs(iMode)); \
} \
HRESULT  ENVTIEName::ShareAs(const CATIColSharable::ShareMode & iMode, CATBaseUnknown ** oObjectToShare, CATIColMergeContextTable ** ioContextTable)  \
{ \
return (ENVTIECALL(CATIColSharable,ENVTIETypeLetter,ENVTIELetter)ShareAs(iMode,oObjectToShare,ioContextTable)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIColSharable(classe)    TIECATIColSharable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIColSharable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIColSharable, classe) \
 \
 \
CATImplementTIEMethods(CATIColSharable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIColSharable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIColSharable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIColSharable, classe) \
 \
HRESULT  TIECATIColSharable##classe::GetMergeContextTable(CATIColMergeContextTable *& oMergeContextTable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMergeContextTable(oMergeContextTable)); \
} \
HRESULT  TIECATIColSharable##classe::GetShareAccess(CATIColSharable::ShareAccess & oShareAccess)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShareAccess(oShareAccess)); \
} \
HRESULT  TIECATIColSharable##classe::ListAvailableShareMode(CATListOfShareAccess & oModes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAvailableShareMode(oModes)); \
} \
CATBoolean  TIECATIColSharable##classe::CanBeSharedAs(const CATIColSharable::ShareMode & iMode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanBeSharedAs(iMode)); \
} \
HRESULT  TIECATIColSharable##classe::ShareAs(const CATIColSharable::ShareMode & iMode, CATBaseUnknown ** oObjectToShare, CATIColMergeContextTable ** ioContextTable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShareAs(iMode,oObjectToShare,ioContextTable)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIColSharable(classe) \
 \
 \
declare_TIE_CATIColSharable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIColSharable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIColSharable,"CATIColSharable",CATIColSharable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIColSharable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIColSharable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIColSharable##classe(classe::MetaObject(),CATIColSharable::MetaObject(),(void *)CreateTIECATIColSharable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIColSharable(classe) \
 \
 \
declare_TIE_CATIColSharable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIColSharable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIColSharable,"CATIColSharable",CATIColSharable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIColSharable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIColSharable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIColSharable##classe(classe::MetaObject(),CATIColSharable::MetaObject(),(void *)CreateTIECATIColSharable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIColSharable(classe) TIE_CATIColSharable(classe)
#else
#define BOA_CATIColSharable(classe) CATImplementBOA(CATIColSharable, classe)
#endif

#endif
