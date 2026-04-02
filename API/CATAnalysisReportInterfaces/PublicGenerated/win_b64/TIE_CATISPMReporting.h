#ifndef __TIE_CATISPMReporting
#define __TIE_CATISPMReporting

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISPMReporting.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISPMReporting */
#define declare_TIE_CATISPMReporting(classe) \
 \
 \
class TIECATISPMReporting##classe : public CATISPMReporting \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISPMReporting, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAllAvailableReportingMethods (CATUnicodeString*& oNameReport, int& oNbMethods) ; \
      virtual HRESULT GetReport (const CATUnicodeString& iReportName, CATSPMReportingBag& oBag) ; \
};



#define ENVTIEdeclare_CATISPMReporting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAllAvailableReportingMethods (CATUnicodeString*& oNameReport, int& oNbMethods) ; \
virtual HRESULT GetReport (const CATUnicodeString& iReportName, CATSPMReportingBag& oBag) ; \


#define ENVTIEdefine_CATISPMReporting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAllAvailableReportingMethods (CATUnicodeString*& oNameReport, int& oNbMethods)  \
{ \
return (ENVTIECALL(CATISPMReporting,ENVTIETypeLetter,ENVTIELetter)GetAllAvailableReportingMethods (oNameReport,oNbMethods)); \
} \
HRESULT  ENVTIEName::GetReport (const CATUnicodeString& iReportName, CATSPMReportingBag& oBag)  \
{ \
return (ENVTIECALL(CATISPMReporting,ENVTIETypeLetter,ENVTIELetter)GetReport (iReportName,oBag)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISPMReporting(classe)    TIECATISPMReporting##classe


/* Common methods inside a TIE */
#define common_TIE_CATISPMReporting(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISPMReporting, classe) \
 \
 \
CATImplementTIEMethods(CATISPMReporting, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISPMReporting, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISPMReporting, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISPMReporting, classe) \
 \
HRESULT  TIECATISPMReporting##classe::GetAllAvailableReportingMethods (CATUnicodeString*& oNameReport, int& oNbMethods)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllAvailableReportingMethods (oNameReport,oNbMethods)); \
} \
HRESULT  TIECATISPMReporting##classe::GetReport (const CATUnicodeString& iReportName, CATSPMReportingBag& oBag)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReport (iReportName,oBag)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISPMReporting(classe) \
 \
 \
declare_TIE_CATISPMReporting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPMReporting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPMReporting,"CATISPMReporting",CATISPMReporting::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPMReporting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISPMReporting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPMReporting##classe(classe::MetaObject(),CATISPMReporting::MetaObject(),(void *)CreateTIECATISPMReporting##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISPMReporting(classe) \
 \
 \
declare_TIE_CATISPMReporting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPMReporting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPMReporting,"CATISPMReporting",CATISPMReporting::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPMReporting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISPMReporting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPMReporting##classe(classe::MetaObject(),CATISPMReporting::MetaObject(),(void *)CreateTIECATISPMReporting##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISPMReporting(classe) TIE_CATISPMReporting(classe)
#else
#define BOA_CATISPMReporting(classe) CATImplementBOA(CATISPMReporting, classe)
#endif

#endif
