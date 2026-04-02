#ifndef __TIE_CATISamImportDefine
#define __TIE_CATISamImportDefine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamImportDefine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamImportDefine */
#define declare_TIE_CATISamImportDefine(classe) \
 \
 \
class TIECATISamImportDefine##classe : public CATISamImportDefine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamImportDefine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetFileTypes(CATListValCATString& oTypes) ; \
      virtual HRESULT GetCommentForType(const CATString iType,CATUnicodeString& oComment) ; \
      virtual CATDlgFrame* GetUserFrame(CATDialog * iParent, CATDocument* iImportedDoc) ; \
      virtual HRESULT Accept() ; \
      virtual HRESULT GetValues(CATSafeArrayVariant* & oValues) ; \
      virtual HRESULT SetValues(CATSafeArrayVariant* iValue) ; \
      virtual HRESULT Import (CATDocument * iFileToImport , CATDocument *iAnalysisDocument) ; \
};



#define ENVTIEdeclare_CATISamImportDefine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetFileTypes(CATListValCATString& oTypes) ; \
virtual HRESULT GetCommentForType(const CATString iType,CATUnicodeString& oComment) ; \
virtual CATDlgFrame* GetUserFrame(CATDialog * iParent, CATDocument* iImportedDoc) ; \
virtual HRESULT Accept() ; \
virtual HRESULT GetValues(CATSafeArrayVariant* & oValues) ; \
virtual HRESULT SetValues(CATSafeArrayVariant* iValue) ; \
virtual HRESULT Import (CATDocument * iFileToImport , CATDocument *iAnalysisDocument) ; \


#define ENVTIEdefine_CATISamImportDefine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetFileTypes(CATListValCATString& oTypes)  \
{ \
return (ENVTIECALL(CATISamImportDefine,ENVTIETypeLetter,ENVTIELetter)GetFileTypes(oTypes)); \
} \
HRESULT  ENVTIEName::GetCommentForType(const CATString iType,CATUnicodeString& oComment)  \
{ \
return (ENVTIECALL(CATISamImportDefine,ENVTIETypeLetter,ENVTIELetter)GetCommentForType(iType,oComment)); \
} \
CATDlgFrame*  ENVTIEName::GetUserFrame(CATDialog * iParent, CATDocument* iImportedDoc)  \
{ \
return (ENVTIECALL(CATISamImportDefine,ENVTIETypeLetter,ENVTIELetter)GetUserFrame(iParent,iImportedDoc)); \
} \
HRESULT  ENVTIEName::Accept()  \
{ \
return (ENVTIECALL(CATISamImportDefine,ENVTIETypeLetter,ENVTIELetter)Accept()); \
} \
HRESULT  ENVTIEName::GetValues(CATSafeArrayVariant* & oValues)  \
{ \
return (ENVTIECALL(CATISamImportDefine,ENVTIETypeLetter,ENVTIELetter)GetValues(oValues)); \
} \
HRESULT  ENVTIEName::SetValues(CATSafeArrayVariant* iValue)  \
{ \
return (ENVTIECALL(CATISamImportDefine,ENVTIETypeLetter,ENVTIELetter)SetValues(iValue)); \
} \
HRESULT  ENVTIEName::Import (CATDocument * iFileToImport , CATDocument *iAnalysisDocument)  \
{ \
return (ENVTIECALL(CATISamImportDefine,ENVTIETypeLetter,ENVTIELetter)Import (iFileToImport ,iAnalysisDocument)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamImportDefine(classe)    TIECATISamImportDefine##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamImportDefine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamImportDefine, classe) \
 \
 \
CATImplementTIEMethods(CATISamImportDefine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamImportDefine, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamImportDefine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamImportDefine, classe) \
 \
HRESULT  TIECATISamImportDefine##classe::GetFileTypes(CATListValCATString& oTypes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFileTypes(oTypes)); \
} \
HRESULT  TIECATISamImportDefine##classe::GetCommentForType(const CATString iType,CATUnicodeString& oComment)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCommentForType(iType,oComment)); \
} \
CATDlgFrame*  TIECATISamImportDefine##classe::GetUserFrame(CATDialog * iParent, CATDocument* iImportedDoc)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUserFrame(iParent,iImportedDoc)); \
} \
HRESULT  TIECATISamImportDefine##classe::Accept()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Accept()); \
} \
HRESULT  TIECATISamImportDefine##classe::GetValues(CATSafeArrayVariant* & oValues)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValues(oValues)); \
} \
HRESULT  TIECATISamImportDefine##classe::SetValues(CATSafeArrayVariant* iValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValues(iValue)); \
} \
HRESULT  TIECATISamImportDefine##classe::Import (CATDocument * iFileToImport , CATDocument *iAnalysisDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Import (iFileToImport ,iAnalysisDocument)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamImportDefine(classe) \
 \
 \
declare_TIE_CATISamImportDefine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImportDefine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImportDefine,"CATISamImportDefine",CATISamImportDefine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImportDefine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamImportDefine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImportDefine##classe(classe::MetaObject(),CATISamImportDefine::MetaObject(),(void *)CreateTIECATISamImportDefine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamImportDefine(classe) \
 \
 \
declare_TIE_CATISamImportDefine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamImportDefine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamImportDefine,"CATISamImportDefine",CATISamImportDefine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamImportDefine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamImportDefine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamImportDefine##classe(classe::MetaObject(),CATISamImportDefine::MetaObject(),(void *)CreateTIECATISamImportDefine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamImportDefine(classe) TIE_CATISamImportDefine(classe)
#else
#define BOA_CATISamImportDefine(classe) CATImplementBOA(CATISamImportDefine, classe)
#endif

#endif
