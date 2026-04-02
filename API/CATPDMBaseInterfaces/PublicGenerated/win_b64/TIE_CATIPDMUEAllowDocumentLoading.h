#ifndef __TIE_CATIPDMUEAllowDocumentLoading
#define __TIE_CATIPDMUEAllowDocumentLoading

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEAllowDocumentLoading.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEAllowDocumentLoading */
#define declare_TIE_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
class TIECATIPDMUEAllowDocumentLoading##classe : public CATIPDMUEAllowDocumentLoading \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEAllowDocumentLoading, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AllowDocumentLoading(int iNbDocs, CATIDocId **iListDocIds, double **ipDocSize); \
};



#define ENVTIEdeclare_CATIPDMUEAllowDocumentLoading(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AllowDocumentLoading(int iNbDocs, CATIDocId **iListDocIds, double **ipDocSize); \


#define ENVTIEdefine_CATIPDMUEAllowDocumentLoading(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AllowDocumentLoading(int iNbDocs, CATIDocId **iListDocIds, double **ipDocSize) \
{ \
return (ENVTIECALL(CATIPDMUEAllowDocumentLoading,ENVTIETypeLetter,ENVTIELetter)AllowDocumentLoading(iNbDocs,iListDocIds,ipDocSize)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEAllowDocumentLoading(classe)    TIECATIPDMUEAllowDocumentLoading##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEAllowDocumentLoading, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEAllowDocumentLoading, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEAllowDocumentLoading, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEAllowDocumentLoading, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEAllowDocumentLoading, classe) \
 \
HRESULT  TIECATIPDMUEAllowDocumentLoading##classe::AllowDocumentLoading(int iNbDocs, CATIDocId **iListDocIds, double **ipDocSize) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllowDocumentLoading(iNbDocs,iListDocIds,ipDocSize)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
declare_TIE_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEAllowDocumentLoading##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEAllowDocumentLoading,"CATIPDMUEAllowDocumentLoading",CATIPDMUEAllowDocumentLoading::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEAllowDocumentLoading, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEAllowDocumentLoading##classe(classe::MetaObject(),CATIPDMUEAllowDocumentLoading::MetaObject(),(void *)CreateTIECATIPDMUEAllowDocumentLoading##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
declare_TIE_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEAllowDocumentLoading##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEAllowDocumentLoading,"CATIPDMUEAllowDocumentLoading",CATIPDMUEAllowDocumentLoading::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEAllowDocumentLoading(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEAllowDocumentLoading, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEAllowDocumentLoading##classe(classe::MetaObject(),CATIPDMUEAllowDocumentLoading::MetaObject(),(void *)CreateTIECATIPDMUEAllowDocumentLoading##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEAllowDocumentLoading(classe) TIE_CATIPDMUEAllowDocumentLoading(classe)
#else
#define BOA_CATIPDMUEAllowDocumentLoading(classe) CATImplementBOA(CATIPDMUEAllowDocumentLoading, classe)
#endif

#endif
