#ifndef __TIE_CATIExchangeOutputDocument
#define __TIE_CATIExchangeOutputDocument

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeOutputDocument.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeOutputDocument */
#define declare_TIE_CATIExchangeOutputDocument(classe) \
 \
 \
class TIECATIExchangeOutputDocument##classe : public CATIExchangeOutputDocument \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeOutputDocument, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Initialize() ; \
      virtual HRESULT SetConversionOptions(const CATListOfCATUnicodeString& iOptionNames, const CATListOfCATUnicodeString& iOptionValues) ; \
      virtual HRESULT GetOptionStatus(const CATUnicodeString& iOptionName, XCADOptionStatus& oOptionStatus, CATUnicodeString& oOptionMessage) ; \
      virtual HRESULT Import(CATIExchangeInputDocument_var& iDocument) ; \
      virtual HRESULT SaveAs(const FilePath* iFile) ; \
      virtual HRESULT Close() ; \
      virtual HRESULT SetLogError(const CATIExchangeLogError* iLogError) ; \
};



#define ENVTIEdeclare_CATIExchangeOutputDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Initialize() ; \
virtual HRESULT SetConversionOptions(const CATListOfCATUnicodeString& iOptionNames, const CATListOfCATUnicodeString& iOptionValues) ; \
virtual HRESULT GetOptionStatus(const CATUnicodeString& iOptionName, XCADOptionStatus& oOptionStatus, CATUnicodeString& oOptionMessage) ; \
virtual HRESULT Import(CATIExchangeInputDocument_var& iDocument) ; \
virtual HRESULT SaveAs(const FilePath* iFile) ; \
virtual HRESULT Close() ; \
virtual HRESULT SetLogError(const CATIExchangeLogError* iLogError) ; \


#define ENVTIEdefine_CATIExchangeOutputDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Initialize()  \
{ \
return (ENVTIECALL(CATIExchangeOutputDocument,ENVTIETypeLetter,ENVTIELetter)Initialize()); \
} \
HRESULT  ENVTIEName::SetConversionOptions(const CATListOfCATUnicodeString& iOptionNames, const CATListOfCATUnicodeString& iOptionValues)  \
{ \
return (ENVTIECALL(CATIExchangeOutputDocument,ENVTIETypeLetter,ENVTIELetter)SetConversionOptions(iOptionNames,iOptionValues)); \
} \
HRESULT  ENVTIEName::GetOptionStatus(const CATUnicodeString& iOptionName, XCADOptionStatus& oOptionStatus, CATUnicodeString& oOptionMessage)  \
{ \
return (ENVTIECALL(CATIExchangeOutputDocument,ENVTIETypeLetter,ENVTIELetter)GetOptionStatus(iOptionName,oOptionStatus,oOptionMessage)); \
} \
HRESULT  ENVTIEName::Import(CATIExchangeInputDocument_var& iDocument)  \
{ \
return (ENVTIECALL(CATIExchangeOutputDocument,ENVTIETypeLetter,ENVTIELetter)Import(iDocument)); \
} \
HRESULT  ENVTIEName::SaveAs(const FilePath* iFile)  \
{ \
return (ENVTIECALL(CATIExchangeOutputDocument,ENVTIETypeLetter,ENVTIELetter)SaveAs(iFile)); \
} \
HRESULT  ENVTIEName::Close()  \
{ \
return (ENVTIECALL(CATIExchangeOutputDocument,ENVTIETypeLetter,ENVTIELetter)Close()); \
} \
HRESULT  ENVTIEName::SetLogError(const CATIExchangeLogError* iLogError)  \
{ \
return (ENVTIECALL(CATIExchangeOutputDocument,ENVTIETypeLetter,ENVTIELetter)SetLogError(iLogError)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeOutputDocument(classe)    TIECATIExchangeOutputDocument##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeOutputDocument(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeOutputDocument, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeOutputDocument, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeOutputDocument, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeOutputDocument, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeOutputDocument, classe) \
 \
HRESULT  TIECATIExchangeOutputDocument##classe::Initialize()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Initialize()); \
} \
HRESULT  TIECATIExchangeOutputDocument##classe::SetConversionOptions(const CATListOfCATUnicodeString& iOptionNames, const CATListOfCATUnicodeString& iOptionValues)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConversionOptions(iOptionNames,iOptionValues)); \
} \
HRESULT  TIECATIExchangeOutputDocument##classe::GetOptionStatus(const CATUnicodeString& iOptionName, XCADOptionStatus& oOptionStatus, CATUnicodeString& oOptionMessage)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOptionStatus(iOptionName,oOptionStatus,oOptionMessage)); \
} \
HRESULT  TIECATIExchangeOutputDocument##classe::Import(CATIExchangeInputDocument_var& iDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Import(iDocument)); \
} \
HRESULT  TIECATIExchangeOutputDocument##classe::SaveAs(const FilePath* iFile)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveAs(iFile)); \
} \
HRESULT  TIECATIExchangeOutputDocument##classe::Close()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Close()); \
} \
HRESULT  TIECATIExchangeOutputDocument##classe::SetLogError(const CATIExchangeLogError* iLogError)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLogError(iLogError)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeOutputDocument(classe) \
 \
 \
declare_TIE_CATIExchangeOutputDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOutputDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOutputDocument,"CATIExchangeOutputDocument",CATIExchangeOutputDocument::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOutputDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeOutputDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOutputDocument##classe(classe::MetaObject(),CATIExchangeOutputDocument::MetaObject(),(void *)CreateTIECATIExchangeOutputDocument##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeOutputDocument(classe) \
 \
 \
declare_TIE_CATIExchangeOutputDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOutputDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOutputDocument,"CATIExchangeOutputDocument",CATIExchangeOutputDocument::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOutputDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeOutputDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOutputDocument##classe(classe::MetaObject(),CATIExchangeOutputDocument::MetaObject(),(void *)CreateTIECATIExchangeOutputDocument##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeOutputDocument(classe) TIE_CATIExchangeOutputDocument(classe)
#else
#define BOA_CATIExchangeOutputDocument(classe) CATImplementBOA(CATIExchangeOutputDocument, classe)
#endif

#endif
