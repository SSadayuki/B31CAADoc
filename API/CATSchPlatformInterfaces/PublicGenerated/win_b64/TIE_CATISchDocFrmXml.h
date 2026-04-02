#ifndef __TIE_CATISchDocFrmXml
#define __TIE_CATISchDocFrmXml

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchDocFrmXml.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchDocFrmXml */
#define declare_TIE_CATISchDocFrmXml(classe) \
 \
 \
class TIECATISchDocFrmXml##classe : public CATISchDocFrmXml \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchDocFrmXml, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CreateSchematicFromXml(CATUnicodeString &iXmlFileAbsPath, CATUnicodeString &iPrdDirAbsPath) ; \
};



#define ENVTIEdeclare_CATISchDocFrmXml(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CreateSchematicFromXml(CATUnicodeString &iXmlFileAbsPath, CATUnicodeString &iPrdDirAbsPath) ; \


#define ENVTIEdefine_CATISchDocFrmXml(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CreateSchematicFromXml(CATUnicodeString &iXmlFileAbsPath, CATUnicodeString &iPrdDirAbsPath)  \
{ \
return (ENVTIECALL(CATISchDocFrmXml,ENVTIETypeLetter,ENVTIELetter)CreateSchematicFromXml(iXmlFileAbsPath,iPrdDirAbsPath)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchDocFrmXml(classe)    TIECATISchDocFrmXml##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchDocFrmXml(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchDocFrmXml, classe) \
 \
 \
CATImplementTIEMethods(CATISchDocFrmXml, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISchDocFrmXml, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISchDocFrmXml, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchDocFrmXml, classe) \
 \
HRESULT  TIECATISchDocFrmXml##classe::CreateSchematicFromXml(CATUnicodeString &iXmlFileAbsPath, CATUnicodeString &iPrdDirAbsPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSchematicFromXml(iXmlFileAbsPath,iPrdDirAbsPath)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchDocFrmXml(classe) \
 \
 \
declare_TIE_CATISchDocFrmXml(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchDocFrmXml##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchDocFrmXml,"CATISchDocFrmXml",CATISchDocFrmXml::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchDocFrmXml(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchDocFrmXml, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchDocFrmXml##classe(classe::MetaObject(),CATISchDocFrmXml::MetaObject(),(void *)CreateTIECATISchDocFrmXml##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchDocFrmXml(classe) \
 \
 \
declare_TIE_CATISchDocFrmXml(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchDocFrmXml##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchDocFrmXml,"CATISchDocFrmXml",CATISchDocFrmXml::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchDocFrmXml(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchDocFrmXml, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchDocFrmXml##classe(classe::MetaObject(),CATISchDocFrmXml::MetaObject(),(void *)CreateTIECATISchDocFrmXml##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchDocFrmXml(classe) TIE_CATISchDocFrmXml(classe)
#else
#define BOA_CATISchDocFrmXml(classe) CATImplementBOA(CATISchDocFrmXml, classe)
#endif

#endif
