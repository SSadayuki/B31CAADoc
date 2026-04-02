#ifndef __TIE_CATISamAnalysisContextCheck
#define __TIE_CATISamAnalysisContextCheck

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamAnalysisContextCheck.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamAnalysisContextCheck */
#define declare_TIE_CATISamAnalysisContextCheck(classe) \
 \
 \
class TIECATISamAnalysisContextCheck##classe : public CATISamAnalysisContextCheck \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamAnalysisContextCheck, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Check(CATDocument * iAnalysisDocument, CATDocument * iImportedDoc = 0) ; \
      virtual HRESULT ClosingEditor(CATFrmEditor * iAnalysisEditor) ; \
};



#define ENVTIEdeclare_CATISamAnalysisContextCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Check(CATDocument * iAnalysisDocument, CATDocument * iImportedDoc = 0) ; \
virtual HRESULT ClosingEditor(CATFrmEditor * iAnalysisEditor) ; \


#define ENVTIEdefine_CATISamAnalysisContextCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Check(CATDocument * iAnalysisDocument, CATDocument * iImportedDoc )  \
{ \
return (ENVTIECALL(CATISamAnalysisContextCheck,ENVTIETypeLetter,ENVTIELetter)Check(iAnalysisDocument,iImportedDoc )); \
} \
HRESULT  ENVTIEName::ClosingEditor(CATFrmEditor * iAnalysisEditor)  \
{ \
return (ENVTIECALL(CATISamAnalysisContextCheck,ENVTIETypeLetter,ENVTIELetter)ClosingEditor(iAnalysisEditor)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamAnalysisContextCheck(classe)    TIECATISamAnalysisContextCheck##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamAnalysisContextCheck(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamAnalysisContextCheck, classe) \
 \
 \
CATImplementTIEMethods(CATISamAnalysisContextCheck, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamAnalysisContextCheck, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamAnalysisContextCheck, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamAnalysisContextCheck, classe) \
 \
HRESULT  TIECATISamAnalysisContextCheck##classe::Check(CATDocument * iAnalysisDocument, CATDocument * iImportedDoc )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Check(iAnalysisDocument,iImportedDoc )); \
} \
HRESULT  TIECATISamAnalysisContextCheck##classe::ClosingEditor(CATFrmEditor * iAnalysisEditor)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ClosingEditor(iAnalysisEditor)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamAnalysisContextCheck(classe) \
 \
 \
declare_TIE_CATISamAnalysisContextCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisContextCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisContextCheck,"CATISamAnalysisContextCheck",CATISamAnalysisContextCheck::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisContextCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamAnalysisContextCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisContextCheck##classe(classe::MetaObject(),CATISamAnalysisContextCheck::MetaObject(),(void *)CreateTIECATISamAnalysisContextCheck##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamAnalysisContextCheck(classe) \
 \
 \
declare_TIE_CATISamAnalysisContextCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisContextCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisContextCheck,"CATISamAnalysisContextCheck",CATISamAnalysisContextCheck::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisContextCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamAnalysisContextCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisContextCheck##classe(classe::MetaObject(),CATISamAnalysisContextCheck::MetaObject(),(void *)CreateTIECATISamAnalysisContextCheck##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamAnalysisContextCheck(classe) TIE_CATISamAnalysisContextCheck(classe)
#else
#define BOA_CATISamAnalysisContextCheck(classe) CATImplementBOA(CATISamAnalysisContextCheck, classe)
#endif

#endif
