#ifndef __TIE_CATICloPartSelection
#define __TIE_CATICloPartSelection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICloPartSelection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICloPartSelection */
#define declare_TIE_CATICloPartSelection(classe) \
 \
 \
class TIECATICloPartSelection##classe : public CATICloPartSelection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICloPartSelection, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT FilterPartSelection ( const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const CATIUnknownList *iListDescription, CATIUnknownList *&oListDescription ) ; \
      virtual HRESULT IsExternalProgramNeeded  ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, int &oiActivate ) ; \
      virtual HRESULT RefinePartSelection ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLEnvironmentParameters, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const IUnknown *ipiCatalogObjectToBeSearched, CATListValCATUnicodeString &opListPartNumbersFound ) ; \
};



#define ENVTIEdeclare_CATICloPartSelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT FilterPartSelection ( const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const CATIUnknownList *iListDescription, CATIUnknownList *&oListDescription ) ; \
virtual HRESULT IsExternalProgramNeeded  ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, int &oiActivate ) ; \
virtual HRESULT RefinePartSelection ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLEnvironmentParameters, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const IUnknown *ipiCatalogObjectToBeSearched, CATListValCATUnicodeString &opListPartNumbersFound ) ; \


#define ENVTIEdefine_CATICloPartSelection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::FilterPartSelection ( const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const CATIUnknownList *iListDescription, CATIUnknownList *&oListDescription )  \
{ \
return (ENVTIECALL(CATICloPartSelection,ENVTIETypeLetter,ENVTIELetter)FilterPartSelection (iuStandard,iuSpec,iuPartType,iLFilterParameters,iLSortParameters,iListDescription,oListDescription )); \
} \
HRESULT  ENVTIEName::IsExternalProgramNeeded  ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, int &oiActivate )  \
{ \
return (ENVTIECALL(CATICloPartSelection,ENVTIETypeLetter,ENVTIELetter)IsExternalProgramNeeded  (iuApplicationContext,iuStandard,iuSpec,iuPartType,oiActivate )); \
} \
HRESULT  ENVTIEName::RefinePartSelection ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLEnvironmentParameters, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const IUnknown *ipiCatalogObjectToBeSearched, CATListValCATUnicodeString &opListPartNumbersFound )  \
{ \
return (ENVTIECALL(CATICloPartSelection,ENVTIETypeLetter,ENVTIELetter)RefinePartSelection (iuApplicationContext,iuStandard,iuSpec,iuPartType,iLEnvironmentParameters,iLFilterParameters,iLSortParameters,ipiCatalogObjectToBeSearched,opListPartNumbersFound )); \
} \


/* Name of the TIE class */
#define class_TIE_CATICloPartSelection(classe)    TIECATICloPartSelection##classe


/* Common methods inside a TIE */
#define common_TIE_CATICloPartSelection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICloPartSelection, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATICloPartSelection, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATICloPartSelection, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATICloPartSelection, classe) \
 \
HRESULT  TIECATICloPartSelection##classe::FilterPartSelection ( const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const CATIUnknownList *iListDescription, CATIUnknownList *&oListDescription )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FilterPartSelection (iuStandard,iuSpec,iuPartType,iLFilterParameters,iLSortParameters,iListDescription,oListDescription )); \
} \
HRESULT  TIECATICloPartSelection##classe::IsExternalProgramNeeded  ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, int &oiActivate )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsExternalProgramNeeded  (iuApplicationContext,iuStandard,iuSpec,iuPartType,oiActivate )); \
} \
HRESULT  TIECATICloPartSelection##classe::RefinePartSelection ( const CATUnicodeString &iuApplicationContext, const CATUnicodeString &iuStandard, const CATUnicodeString &iuSpec, const CATUnicodeString &iuPartType, const CATIUnknownList *iLEnvironmentParameters, const CATIUnknownList *iLFilterParameters, const CATIUnknownList *iLSortParameters, const IUnknown *ipiCatalogObjectToBeSearched, CATListValCATUnicodeString &opListPartNumbersFound )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RefinePartSelection (iuApplicationContext,iuStandard,iuSpec,iuPartType,iLEnvironmentParameters,iLFilterParameters,iLSortParameters,ipiCatalogObjectToBeSearched,opListPartNumbersFound )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICloPartSelection(classe) \
 \
 \
declare_TIE_CATICloPartSelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloPartSelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloPartSelection,"CATICloPartSelection",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloPartSelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICloPartSelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloPartSelection##classe(classe::MetaObject(),TIECATICloPartSelection##classe::MetaObject(),(void *)CreateTIECATICloPartSelection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICloPartSelection(classe) \
 \
 \
declare_TIE_CATICloPartSelection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloPartSelection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloPartSelection,"CATICloPartSelection",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloPartSelection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICloPartSelection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloPartSelection##classe(classe::MetaObject(),TIECATICloPartSelection##classe::MetaObject(),(void *)CreateTIECATICloPartSelection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICloPartSelection(classe) TIE_CATICloPartSelection(classe)
#else
#define BOA_CATICloPartSelection(classe) CATImplementBOA(CATICloPartSelection, classe)
#endif

#endif
