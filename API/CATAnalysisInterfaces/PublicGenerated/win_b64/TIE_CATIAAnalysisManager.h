#ifndef __TIE_CATIAAnalysisManager
#define __TIE_CATIAAnalysisManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisManager */
#define declare_TIE_CATIAAnalysisManager(classe) \
 \
 \
class TIECATIAAnalysisManager##classe : public CATIAAnalysisManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AnalysisModels(CATIAAnalysisModels *& oFEMModels); \
      virtual HRESULT __stdcall get_LinkedDocuments(CATIAAnalysisLinkedDocuments *& oLinkedDocuments); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
      virtual HRESULT __stdcall Import(CATIADocument * iDocumentToImport); \
      virtual HRESULT __stdcall ImportFile(const CATBSTR & iDocumentPath); \
      virtual HRESULT __stdcall ImportDefineFile(const CATBSTR & iDocumentPath, const CATBSTR & iTypeLate, const CATSafeArrayVariant & iValues); \
      virtual HRESULT __stdcall CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef); \
      virtual HRESULT __stdcall CreateReferenceFromGeometry(CATIAProduct * iProduct, CATIAReference * iGeometry, CATIAReference *& oRef); \
      virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AnalysisModels(CATIAAnalysisModels *& oFEMModels); \
virtual HRESULT __stdcall get_LinkedDocuments(CATIAAnalysisLinkedDocuments *& oLinkedDocuments); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
virtual HRESULT __stdcall Import(CATIADocument * iDocumentToImport); \
virtual HRESULT __stdcall ImportFile(const CATBSTR & iDocumentPath); \
virtual HRESULT __stdcall ImportDefineFile(const CATBSTR & iDocumentPath, const CATBSTR & iTypeLate, const CATSafeArrayVariant & iValues); \
virtual HRESULT __stdcall CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef); \
virtual HRESULT __stdcall CreateReferenceFromGeometry(CATIAProduct * iProduct, CATIAReference * iGeometry, CATIAReference *& oRef); \
virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AnalysisModels(CATIAAnalysisModels *& oFEMModels) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_AnalysisModels(oFEMModels)); \
} \
HRESULT __stdcall  ENVTIEName::get_LinkedDocuments(CATIAAnalysisLinkedDocuments *& oLinkedDocuments) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_LinkedDocuments(oLinkedDocuments)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::Import(CATIADocument * iDocumentToImport) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)Import(iDocumentToImport)); \
} \
HRESULT __stdcall  ENVTIEName::ImportFile(const CATBSTR & iDocumentPath) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)ImportFile(iDocumentPath)); \
} \
HRESULT __stdcall  ENVTIEName::ImportDefineFile(const CATBSTR & iDocumentPath, const CATBSTR & iTypeLate, const CATSafeArrayVariant & iValues) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)ImportDefineFile(iDocumentPath,iTypeLate,iValues)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromObject(iObject,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::CreateReferenceFromGeometry(CATIAProduct * iProduct, CATIAReference * iGeometry, CATIAReference *& oRef) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)CreateReferenceFromGeometry(iProduct,iGeometry,oRef)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_AnalysisSets(oAnalysisSets)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisManager(classe)    TIECATIAAnalysisManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisManager, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisManager, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::get_AnalysisModels(CATIAAnalysisModels *& oFEMModels) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFEMModels); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisModels(oFEMModels); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFEMModels); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::get_LinkedDocuments(CATIAAnalysisLinkedDocuments *& oLinkedDocuments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oLinkedDocuments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkedDocuments(oLinkedDocuments); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oLinkedDocuments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::Import(CATIADocument * iDocumentToImport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iDocumentToImport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Import(iDocumentToImport); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iDocumentToImport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::ImportFile(const CATBSTR & iDocumentPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDocumentPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportFile(iDocumentPath); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDocumentPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::ImportDefineFile(const CATBSTR & iDocumentPath, const CATBSTR & iTypeLate, const CATSafeArrayVariant & iValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iDocumentPath,&iTypeLate,&iValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportDefineFile(iDocumentPath,iTypeLate,iValues); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iDocumentPath,&iTypeLate,&iValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::CreateReferenceFromObject(CATIABase * iObject, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iObject,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromObject(iObject,oRef); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iObject,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::CreateReferenceFromGeometry(CATIAProduct * iProduct, CATIAReference * iGeometry, CATIAReference *& oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iProduct,&iGeometry,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateReferenceFromGeometry(iProduct,iGeometry,oRef); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iProduct,&iGeometry,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisManager##classe::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oAnalysisSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisSets(oAnalysisSets); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oAnalysisSets); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisManager(classe) \
 \
 \
declare_TIE_CATIAAnalysisManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisManager,"CATIAAnalysisManager",CATIAAnalysisManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisManager##classe(classe::MetaObject(),CATIAAnalysisManager::MetaObject(),(void *)CreateTIECATIAAnalysisManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisManager(classe) \
 \
 \
declare_TIE_CATIAAnalysisManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisManager,"CATIAAnalysisManager",CATIAAnalysisManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisManager##classe(classe::MetaObject(),CATIAAnalysisManager::MetaObject(),(void *)CreateTIECATIAAnalysisManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisManager(classe) TIE_CATIAAnalysisManager(classe)
#else
#define BOA_CATIAAnalysisManager(classe) CATImplementBOA(CATIAAnalysisManager, classe)
#endif

#endif
