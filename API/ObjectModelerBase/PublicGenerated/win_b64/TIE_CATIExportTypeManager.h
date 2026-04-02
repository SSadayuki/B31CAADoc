#ifndef __TIE_CATIExportTypeManager
#define __TIE_CATIExportTypeManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExportTypeManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExportTypeManager */
#define declare_TIE_CATIExportTypeManager(classe) \
 \
 \
class TIECATIExportTypeManager##classe : public CATIExportTypeManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExportTypeManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ExportData ( CATDocument *iDoc, CATUnicodeString iPath ) ; \
      virtual HRESULT ExportData (CATUnicodeString iToExportPath , CATUnicodeString iExportedPath ) ; \
};



#define ENVTIEdeclare_CATIExportTypeManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ExportData ( CATDocument *iDoc, CATUnicodeString iPath ) ; \
virtual HRESULT ExportData (CATUnicodeString iToExportPath , CATUnicodeString iExportedPath ) ; \


#define ENVTIEdefine_CATIExportTypeManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ExportData ( CATDocument *iDoc, CATUnicodeString iPath )  \
{ \
return (ENVTIECALL(CATIExportTypeManager,ENVTIETypeLetter,ENVTIELetter)ExportData (iDoc,iPath )); \
} \
HRESULT  ENVTIEName::ExportData (CATUnicodeString iToExportPath , CATUnicodeString iExportedPath )  \
{ \
return (ENVTIECALL(CATIExportTypeManager,ENVTIETypeLetter,ENVTIELetter)ExportData (iToExportPath ,iExportedPath )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExportTypeManager(classe)    TIECATIExportTypeManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExportTypeManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExportTypeManager, classe) \
 \
 \
CATImplementTIEMethods(CATIExportTypeManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExportTypeManager, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExportTypeManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExportTypeManager, classe) \
 \
HRESULT  TIECATIExportTypeManager##classe::ExportData ( CATDocument *iDoc, CATUnicodeString iPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportData (iDoc,iPath )); \
} \
HRESULT  TIECATIExportTypeManager##classe::ExportData (CATUnicodeString iToExportPath , CATUnicodeString iExportedPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportData (iToExportPath ,iExportedPath )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExportTypeManager(classe) \
 \
 \
declare_TIE_CATIExportTypeManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExportTypeManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExportTypeManager,"CATIExportTypeManager",CATIExportTypeManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExportTypeManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExportTypeManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExportTypeManager##classe(classe::MetaObject(),CATIExportTypeManager::MetaObject(),(void *)CreateTIECATIExportTypeManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExportTypeManager(classe) \
 \
 \
declare_TIE_CATIExportTypeManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExportTypeManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExportTypeManager,"CATIExportTypeManager",CATIExportTypeManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExportTypeManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExportTypeManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExportTypeManager##classe(classe::MetaObject(),CATIExportTypeManager::MetaObject(),(void *)CreateTIECATIExportTypeManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExportTypeManager(classe) TIE_CATIExportTypeManager(classe)
#else
#define BOA_CATIExportTypeManager(classe) CATImplementBOA(CATIExportTypeManager, classe)
#endif

#endif
