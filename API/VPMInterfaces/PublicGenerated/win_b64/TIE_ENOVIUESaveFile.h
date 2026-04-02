#ifndef __TIE_ENOVIUESaveFile
#define __TIE_ENOVIUESaveFile

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUESaveFile.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUESaveFile */
#define declare_TIE_ENOVIUESaveFile(classe) \
 \
 \
class TIEENOVIUESaveFile##classe : public ENOVIUESaveFile \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUESaveFile, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetObject (CATBaseUnknown *& oDocumentRevision); \
};



#define ENVTIEdeclare_ENOVIUESaveFile(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetObject (CATBaseUnknown *& oDocumentRevision); \


#define ENVTIEdefine_ENOVIUESaveFile(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetObject (CATBaseUnknown *& oDocumentRevision) \
{ \
return (ENVTIECALL(ENOVIUESaveFile,ENVTIETypeLetter,ENVTIELetter)GetObject (oDocumentRevision)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUESaveFile(classe)    TIEENOVIUESaveFile##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUESaveFile(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUESaveFile, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUESaveFile, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUESaveFile, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUESaveFile, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUESaveFile, classe) \
 \
HRESULT  TIEENOVIUESaveFile##classe::GetObject (CATBaseUnknown *& oDocumentRevision) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject (oDocumentRevision)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUESaveFile(classe) \
 \
 \
declare_TIE_ENOVIUESaveFile(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUESaveFile##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUESaveFile,"ENOVIUESaveFile",ENOVIUESaveFile::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUESaveFile(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUESaveFile, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUESaveFile##classe(classe::MetaObject(),ENOVIUESaveFile::MetaObject(),(void *)CreateTIEENOVIUESaveFile##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUESaveFile(classe) \
 \
 \
declare_TIE_ENOVIUESaveFile(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUESaveFile##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUESaveFile,"ENOVIUESaveFile",ENOVIUESaveFile::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUESaveFile(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUESaveFile, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUESaveFile##classe(classe::MetaObject(),ENOVIUESaveFile::MetaObject(),(void *)CreateTIEENOVIUESaveFile##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUESaveFile(classe) TIE_ENOVIUESaveFile(classe)
#else
#define BOA_ENOVIUESaveFile(classe) CATImplementBOA(ENOVIUESaveFile, classe)
#endif

#endif
