#ifndef __TIE_CATISchAppCmdInfo
#define __TIE_CATISchAppCmdInfo

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCmdInfo.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCmdInfo */
#define declare_TIE_CATISchAppCmdInfo(classe) \
 \
 \
class TIECATISchAppCmdInfo##classe : public CATISchAppCmdInfo \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCmdInfo, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetComponentCatalogPath (char **oCatalogPath) ; \
      virtual HRESULT GetComponentCatalogDoc (CATDocument *&opDocument) ; \
      virtual HRESULT GetOnOffSheetCatalogPath (char **oCatalogPath) ; \
      virtual HRESULT GetOnOffSheetCatalogDoc (CATDocument *&opDocument) ; \
      virtual HRESULT GetLineListsCatalogPath (const char *iLineType, char **oCatalogPath) ; \
      virtual HRESULT GetPartSelectionInCompPlace (int *oFlag) ; \
      virtual HRESULT GetGraphicNamesPath (char **oGraphicNamesPath) ; \
      virtual HRESULT GetAnnotationBreakCatalogPath (char **oCatalogPath) ; \
      virtual HRESULT GetAnnotationBreakCatalogDoc (CATDocument *&opDocument) ; \
      virtual HRESULT GetAnnotationSymbolsCatalogPath (char **oCatalogPath) ; \
      virtual HRESULT GetAnnotationSymbolsCatalogDoc (CATDocument *&opDocument) ; \
};



#define ENVTIEdeclare_CATISchAppCmdInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetComponentCatalogPath (char **oCatalogPath) ; \
virtual HRESULT GetComponentCatalogDoc (CATDocument *&opDocument) ; \
virtual HRESULT GetOnOffSheetCatalogPath (char **oCatalogPath) ; \
virtual HRESULT GetOnOffSheetCatalogDoc (CATDocument *&opDocument) ; \
virtual HRESULT GetLineListsCatalogPath (const char *iLineType, char **oCatalogPath) ; \
virtual HRESULT GetPartSelectionInCompPlace (int *oFlag) ; \
virtual HRESULT GetGraphicNamesPath (char **oGraphicNamesPath) ; \
virtual HRESULT GetAnnotationBreakCatalogPath (char **oCatalogPath) ; \
virtual HRESULT GetAnnotationBreakCatalogDoc (CATDocument *&opDocument) ; \
virtual HRESULT GetAnnotationSymbolsCatalogPath (char **oCatalogPath) ; \
virtual HRESULT GetAnnotationSymbolsCatalogDoc (CATDocument *&opDocument) ; \


#define ENVTIEdefine_CATISchAppCmdInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetComponentCatalogPath (char **oCatalogPath)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetComponentCatalogPath (oCatalogPath)); \
} \
HRESULT  ENVTIEName::GetComponentCatalogDoc (CATDocument *&opDocument)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetComponentCatalogDoc (opDocument)); \
} \
HRESULT  ENVTIEName::GetOnOffSheetCatalogPath (char **oCatalogPath)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetOnOffSheetCatalogPath (oCatalogPath)); \
} \
HRESULT  ENVTIEName::GetOnOffSheetCatalogDoc (CATDocument *&opDocument)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetOnOffSheetCatalogDoc (opDocument)); \
} \
HRESULT  ENVTIEName::GetLineListsCatalogPath (const char *iLineType, char **oCatalogPath)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetLineListsCatalogPath (iLineType,oCatalogPath)); \
} \
HRESULT  ENVTIEName::GetPartSelectionInCompPlace (int *oFlag)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetPartSelectionInCompPlace (oFlag)); \
} \
HRESULT  ENVTIEName::GetGraphicNamesPath (char **oGraphicNamesPath)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetGraphicNamesPath (oGraphicNamesPath)); \
} \
HRESULT  ENVTIEName::GetAnnotationBreakCatalogPath (char **oCatalogPath)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetAnnotationBreakCatalogPath (oCatalogPath)); \
} \
HRESULT  ENVTIEName::GetAnnotationBreakCatalogDoc (CATDocument *&opDocument)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetAnnotationBreakCatalogDoc (opDocument)); \
} \
HRESULT  ENVTIEName::GetAnnotationSymbolsCatalogPath (char **oCatalogPath)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetAnnotationSymbolsCatalogPath (oCatalogPath)); \
} \
HRESULT  ENVTIEName::GetAnnotationSymbolsCatalogDoc (CATDocument *&opDocument)  \
{ \
return (ENVTIECALL(CATISchAppCmdInfo,ENVTIETypeLetter,ENVTIELetter)GetAnnotationSymbolsCatalogDoc (opDocument)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCmdInfo(classe)    TIECATISchAppCmdInfo##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCmdInfo(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCmdInfo, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCmdInfo, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCmdInfo, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCmdInfo, classe) \
 \
HRESULT  TIECATISchAppCmdInfo##classe::GetComponentCatalogPath (char **oCatalogPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetComponentCatalogPath (oCatalogPath)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetComponentCatalogDoc (CATDocument *&opDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetComponentCatalogDoc (opDocument)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetOnOffSheetCatalogPath (char **oCatalogPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOnOffSheetCatalogPath (oCatalogPath)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetOnOffSheetCatalogDoc (CATDocument *&opDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOnOffSheetCatalogDoc (opDocument)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetLineListsCatalogPath (const char *iLineType, char **oCatalogPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineListsCatalogPath (iLineType,oCatalogPath)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetPartSelectionInCompPlace (int *oFlag)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPartSelectionInCompPlace (oFlag)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetGraphicNamesPath (char **oGraphicNamesPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGraphicNamesPath (oGraphicNamesPath)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetAnnotationBreakCatalogPath (char **oCatalogPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotationBreakCatalogPath (oCatalogPath)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetAnnotationBreakCatalogDoc (CATDocument *&opDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotationBreakCatalogDoc (opDocument)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetAnnotationSymbolsCatalogPath (char **oCatalogPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotationSymbolsCatalogPath (oCatalogPath)); \
} \
HRESULT  TIECATISchAppCmdInfo##classe::GetAnnotationSymbolsCatalogDoc (CATDocument *&opDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotationSymbolsCatalogDoc (opDocument)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCmdInfo(classe) \
 \
 \
declare_TIE_CATISchAppCmdInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCmdInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCmdInfo,"CATISchAppCmdInfo",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCmdInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCmdInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCmdInfo##classe(classe::MetaObject(),TIECATISchAppCmdInfo##classe::MetaObject(),(void *)CreateTIECATISchAppCmdInfo##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCmdInfo(classe) \
 \
 \
declare_TIE_CATISchAppCmdInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCmdInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCmdInfo,"CATISchAppCmdInfo",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCmdInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCmdInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCmdInfo##classe(classe::MetaObject(),TIECATISchAppCmdInfo##classe::MetaObject(),(void *)CreateTIECATISchAppCmdInfo##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCmdInfo(classe) TIE_CATISchAppCmdInfo(classe)
#else
#define BOA_CATISchAppCmdInfo(classe) CATImplementBOA(CATISchAppCmdInfo, classe)
#endif

#endif
