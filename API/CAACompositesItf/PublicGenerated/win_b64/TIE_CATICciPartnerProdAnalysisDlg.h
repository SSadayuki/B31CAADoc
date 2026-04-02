#ifndef __TIE_CATICciPartnerProdAnalysisDlg
#define __TIE_CATICciPartnerProdAnalysisDlg

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerProdAnalysisDlg.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerProdAnalysisDlg */
#define declare_TIE_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
class TIECATICciPartnerProdAnalysisDlg##classe : public CATICciPartnerProdAnalysisDlg \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerProdAnalysisDlg, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   GetAnalysisFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame); \
};



#define ENVTIEdeclare_CATICciPartnerProdAnalysisDlg(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   GetAnalysisFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame); \


#define ENVTIEdefine_CATICciPartnerProdAnalysisDlg(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::GetAnalysisFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame) \
{ \
return (ENVTIECALL(CATICciPartnerProdAnalysisDlg,ENVTIETypeLetter,ENVTIELetter)GetAnalysisFrame (ipContPage,oPartnersFrame)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerProdAnalysisDlg(classe)    TIECATICciPartnerProdAnalysisDlg##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerProdAnalysisDlg, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerProdAnalysisDlg, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerProdAnalysisDlg, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerProdAnalysisDlg, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerProdAnalysisDlg, classe) \
 \
HRESULT    TIECATICciPartnerProdAnalysisDlg##classe::GetAnalysisFrame (const CATDlgContainer * ipContPage, CATDlgFrame * & oPartnersFrame) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnalysisFrame (ipContPage,oPartnersFrame)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
declare_TIE_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdAnalysisDlg##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdAnalysisDlg,"CATICciPartnerProdAnalysisDlg",CATICciPartnerProdAnalysisDlg::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerProdAnalysisDlg, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdAnalysisDlg##classe(classe::MetaObject(),CATICciPartnerProdAnalysisDlg::MetaObject(),(void *)CreateTIECATICciPartnerProdAnalysisDlg##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
declare_TIE_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdAnalysisDlg##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdAnalysisDlg,"CATICciPartnerProdAnalysisDlg",CATICciPartnerProdAnalysisDlg::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdAnalysisDlg(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerProdAnalysisDlg, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdAnalysisDlg##classe(classe::MetaObject(),CATICciPartnerProdAnalysisDlg::MetaObject(),(void *)CreateTIECATICciPartnerProdAnalysisDlg##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerProdAnalysisDlg(classe) TIE_CATICciPartnerProdAnalysisDlg(classe)
#else
#define BOA_CATICciPartnerProdAnalysisDlg(classe) CATImplementBOA(CATICciPartnerProdAnalysisDlg, classe)
#endif

#endif
