#ifndef __TIE_CATICciPartnerProdDlgCtrl
#define __TIE_CATICciPartnerProdDlgCtrl

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerProdDlgCtrl.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerProdDlgCtrl */
#define declare_TIE_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
class TIECATICciPartnerProdDlgCtrl##classe : public CATICciPartnerProdDlgCtrl \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerProdDlgCtrl, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetAnalysisDraw() ; \
      virtual HRESULT SetComputeRequired() ; \
};



#define ENVTIEdeclare_CATICciPartnerProdDlgCtrl(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetAnalysisDraw() ; \
virtual HRESULT SetComputeRequired() ; \


#define ENVTIEdefine_CATICciPartnerProdDlgCtrl(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetAnalysisDraw()  \
{ \
return (ENVTIECALL(CATICciPartnerProdDlgCtrl,ENVTIETypeLetter,ENVTIELetter)SetAnalysisDraw()); \
} \
HRESULT  ENVTIEName::SetComputeRequired()  \
{ \
return (ENVTIECALL(CATICciPartnerProdDlgCtrl,ENVTIETypeLetter,ENVTIELetter)SetComputeRequired()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerProdDlgCtrl(classe)    TIECATICciPartnerProdDlgCtrl##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerProdDlgCtrl, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerProdDlgCtrl, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerProdDlgCtrl, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerProdDlgCtrl, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerProdDlgCtrl, classe) \
 \
HRESULT  TIECATICciPartnerProdDlgCtrl##classe::SetAnalysisDraw()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnalysisDraw()); \
} \
HRESULT  TIECATICciPartnerProdDlgCtrl##classe::SetComputeRequired()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetComputeRequired()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
declare_TIE_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdDlgCtrl##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdDlgCtrl,"CATICciPartnerProdDlgCtrl",CATICciPartnerProdDlgCtrl::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerProdDlgCtrl, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdDlgCtrl##classe(classe::MetaObject(),CATICciPartnerProdDlgCtrl::MetaObject(),(void *)CreateTIECATICciPartnerProdDlgCtrl##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
declare_TIE_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdDlgCtrl##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdDlgCtrl,"CATICciPartnerProdDlgCtrl",CATICciPartnerProdDlgCtrl::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdDlgCtrl(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerProdDlgCtrl, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdDlgCtrl##classe(classe::MetaObject(),CATICciPartnerProdDlgCtrl::MetaObject(),(void *)CreateTIECATICciPartnerProdDlgCtrl##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerProdDlgCtrl(classe) TIE_CATICciPartnerProdDlgCtrl(classe)
#else
#define BOA_CATICciPartnerProdDlgCtrl(classe) CATImplementBOA(CATICciPartnerProdDlgCtrl, classe)
#endif

#endif
