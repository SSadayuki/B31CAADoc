#ifndef __TIE_CATIPrinterManager
#define __TIE_CATIPrinterManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrinterManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrinterManager */
#define declare_TIE_CATIPrinterManager(classe) \
 \
 \
class TIECATIPrinterManager##classe : public CATIPrinterManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrinterManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPrinterList(CATListPtrCATPrinter& ioPrinterList) ; \
      virtual HRESULT GetConfigurationDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) ; \
      virtual HRESULT GetPrinterStatus(CATPrinter& iPrinter, CATUnicodeString& oStatus) ; \
      virtual HRESULT GetStatusDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) ; \
      virtual HRESULT IsExtendedOptionsSupport(void) ; \
      virtual HRESULT GetExtendedOptionsDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) ; \
      virtual HRESULT GetExtendedOptionsInfos(CATPrinter& iPrinter, CATUnicodeString& oStatus) ; \
      virtual HRESULT GetPrinterManagerDialog(CATDialog* iParent, CATDlgWindow*& oDialog) ; \
      virtual HRESULT Print(CATPrinterDevice& iDevice, const CATPrintParameters& iParameters, CATPrintImage* iImage) ; \
      virtual HRESULT GetLastError(CATUnicodeString &oError) ; \
};



#define ENVTIEdeclare_CATIPrinterManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPrinterList(CATListPtrCATPrinter& ioPrinterList) ; \
virtual HRESULT GetConfigurationDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) ; \
virtual HRESULT GetPrinterStatus(CATPrinter& iPrinter, CATUnicodeString& oStatus) ; \
virtual HRESULT GetStatusDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) ; \
virtual HRESULT IsExtendedOptionsSupport(void) ; \
virtual HRESULT GetExtendedOptionsDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) ; \
virtual HRESULT GetExtendedOptionsInfos(CATPrinter& iPrinter, CATUnicodeString& oStatus) ; \
virtual HRESULT GetPrinterManagerDialog(CATDialog* iParent, CATDlgWindow*& oDialog) ; \
virtual HRESULT Print(CATPrinterDevice& iDevice, const CATPrintParameters& iParameters, CATPrintImage* iImage) ; \
virtual HRESULT GetLastError(CATUnicodeString &oError) ; \


#define ENVTIEdefine_CATIPrinterManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPrinterList(CATListPtrCATPrinter& ioPrinterList)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetPrinterList(ioPrinterList)); \
} \
HRESULT  ENVTIEName::GetConfigurationDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetConfigurationDialog(iParent,iPrinter,oDialog)); \
} \
HRESULT  ENVTIEName::GetPrinterStatus(CATPrinter& iPrinter, CATUnicodeString& oStatus)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetPrinterStatus(iPrinter,oStatus)); \
} \
HRESULT  ENVTIEName::GetStatusDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetStatusDialog(iParent,iPrinter,oDialog)); \
} \
HRESULT  ENVTIEName::IsExtendedOptionsSupport(void)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)IsExtendedOptionsSupport()); \
} \
HRESULT  ENVTIEName::GetExtendedOptionsDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetExtendedOptionsDialog(iParent,iPrinter,oDialog)); \
} \
HRESULT  ENVTIEName::GetExtendedOptionsInfos(CATPrinter& iPrinter, CATUnicodeString& oStatus)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetExtendedOptionsInfos(iPrinter,oStatus)); \
} \
HRESULT  ENVTIEName::GetPrinterManagerDialog(CATDialog* iParent, CATDlgWindow*& oDialog)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetPrinterManagerDialog(iParent,oDialog)); \
} \
HRESULT  ENVTIEName::Print(CATPrinterDevice& iDevice, const CATPrintParameters& iParameters, CATPrintImage* iImage)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)Print(iDevice,iParameters,iImage)); \
} \
HRESULT  ENVTIEName::GetLastError(CATUnicodeString &oError)  \
{ \
return (ENVTIECALL(CATIPrinterManager,ENVTIETypeLetter,ENVTIELetter)GetLastError(oError)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrinterManager(classe)    TIECATIPrinterManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrinterManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrinterManager, classe) \
 \
 \
CATImplementTIEMethods(CATIPrinterManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrinterManager, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrinterManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrinterManager, classe) \
 \
HRESULT  TIECATIPrinterManager##classe::GetPrinterList(CATListPtrCATPrinter& ioPrinterList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterList(ioPrinterList)); \
} \
HRESULT  TIECATIPrinterManager##classe::GetConfigurationDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConfigurationDialog(iParent,iPrinter,oDialog)); \
} \
HRESULT  TIECATIPrinterManager##classe::GetPrinterStatus(CATPrinter& iPrinter, CATUnicodeString& oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterStatus(iPrinter,oStatus)); \
} \
HRESULT  TIECATIPrinterManager##classe::GetStatusDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStatusDialog(iParent,iPrinter,oDialog)); \
} \
HRESULT  TIECATIPrinterManager##classe::IsExtendedOptionsSupport(void)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsExtendedOptionsSupport()); \
} \
HRESULT  TIECATIPrinterManager##classe::GetExtendedOptionsDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtendedOptionsDialog(iParent,iPrinter,oDialog)); \
} \
HRESULT  TIECATIPrinterManager##classe::GetExtendedOptionsInfos(CATPrinter& iPrinter, CATUnicodeString& oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtendedOptionsInfos(iPrinter,oStatus)); \
} \
HRESULT  TIECATIPrinterManager##classe::GetPrinterManagerDialog(CATDialog* iParent, CATDlgWindow*& oDialog)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterManagerDialog(iParent,oDialog)); \
} \
HRESULT  TIECATIPrinterManager##classe::Print(CATPrinterDevice& iDevice, const CATPrintParameters& iParameters, CATPrintImage* iImage)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Print(iDevice,iParameters,iImage)); \
} \
HRESULT  TIECATIPrinterManager##classe::GetLastError(CATUnicodeString &oError)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLastError(oError)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrinterManager(classe) \
 \
 \
declare_TIE_CATIPrinterManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrinterManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrinterManager,"CATIPrinterManager",CATIPrinterManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrinterManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrinterManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrinterManager##classe(classe::MetaObject(),CATIPrinterManager::MetaObject(),(void *)CreateTIECATIPrinterManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrinterManager(classe) \
 \
 \
declare_TIE_CATIPrinterManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrinterManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrinterManager,"CATIPrinterManager",CATIPrinterManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrinterManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrinterManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrinterManager##classe(classe::MetaObject(),CATIPrinterManager::MetaObject(),(void *)CreateTIECATIPrinterManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrinterManager(classe) TIE_CATIPrinterManager(classe)
#else
#define BOA_CATIPrinterManager(classe) CATImplementBOA(CATIPrinterManager, classe)
#endif

#endif
