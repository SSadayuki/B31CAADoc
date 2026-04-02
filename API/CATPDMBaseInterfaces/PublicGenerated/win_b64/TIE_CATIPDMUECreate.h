#ifndef __TIE_CATIPDMUECreate
#define __TIE_CATIPDMUECreate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUECreate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUECreate */
#define declare_TIE_CATIPDMUECreate(classe) \
 \
 \
class TIECATIPDMUECreate##classe : public CATIPDMUECreate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUECreate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetProductEnvironment(const CATBaseUnknown* iObj,CATUnicodeString& oEnv,CATUnicodeString& oType); \
      virtual HRESULT GetDocumentEnvironment(const CATDocument* iDoc,CATUnicodeString& oEnv,CATUnicodeString& oTable); \
      virtual HRESULT GetDocumentEnvironment(const char* Filepath,CATUnicodeString& oEnv,CATUnicodeString& oTable); \
      virtual HRESULT GetProductAttributesValue(const CATBaseUnknown* iObj,const CATUnicodeString& iType,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues, CATBoolean& oCreateOrUpdate); \
      virtual HRESULT GetDocumentAttributesValue(const CATDocument* iDoc,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues,CATBoolean& oCreateOrUpdate); \
      virtual HRESULT GetDocumentAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues); \
      virtual HRESULT GetProductAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues); \
};



#define ENVTIEdeclare_CATIPDMUECreate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetProductEnvironment(const CATBaseUnknown* iObj,CATUnicodeString& oEnv,CATUnicodeString& oType); \
virtual HRESULT GetDocumentEnvironment(const CATDocument* iDoc,CATUnicodeString& oEnv,CATUnicodeString& oTable); \
virtual HRESULT GetDocumentEnvironment(const char* Filepath,CATUnicodeString& oEnv,CATUnicodeString& oTable); \
virtual HRESULT GetProductAttributesValue(const CATBaseUnknown* iObj,const CATUnicodeString& iType,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues, CATBoolean& oCreateOrUpdate); \
virtual HRESULT GetDocumentAttributesValue(const CATDocument* iDoc,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues,CATBoolean& oCreateOrUpdate); \
virtual HRESULT GetDocumentAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues); \
virtual HRESULT GetProductAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues); \


#define ENVTIEdefine_CATIPDMUECreate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetProductEnvironment(const CATBaseUnknown* iObj,CATUnicodeString& oEnv,CATUnicodeString& oType) \
{ \
return (ENVTIECALL(CATIPDMUECreate,ENVTIETypeLetter,ENVTIELetter)GetProductEnvironment(iObj,oEnv,oType)); \
} \
HRESULT  ENVTIEName::GetDocumentEnvironment(const CATDocument* iDoc,CATUnicodeString& oEnv,CATUnicodeString& oTable) \
{ \
return (ENVTIECALL(CATIPDMUECreate,ENVTIETypeLetter,ENVTIELetter)GetDocumentEnvironment(iDoc,oEnv,oTable)); \
} \
HRESULT  ENVTIEName::GetDocumentEnvironment(const char* Filepath,CATUnicodeString& oEnv,CATUnicodeString& oTable) \
{ \
return (ENVTIECALL(CATIPDMUECreate,ENVTIETypeLetter,ENVTIELetter)GetDocumentEnvironment(Filepath,oEnv,oTable)); \
} \
HRESULT  ENVTIEName::GetProductAttributesValue(const CATBaseUnknown* iObj,const CATUnicodeString& iType,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues, CATBoolean& oCreateOrUpdate) \
{ \
return (ENVTIECALL(CATIPDMUECreate,ENVTIETypeLetter,ENVTIELetter)GetProductAttributesValue(iObj,iType,oNbAttr,oAttrName,oAttrType,oAttrValues,oCreateOrUpdate)); \
} \
HRESULT  ENVTIEName::GetDocumentAttributesValue(const CATDocument* iDoc,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues,CATBoolean& oCreateOrUpdate) \
{ \
return (ENVTIECALL(CATIPDMUECreate,ENVTIETypeLetter,ENVTIELetter)GetDocumentAttributesValue(iDoc,oNbAttr,oAttrName,oAttrType,oAttrValues,oCreateOrUpdate)); \
} \
HRESULT  ENVTIEName::GetDocumentAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues) \
{ \
return (ENVTIECALL(CATIPDMUECreate,ENVTIETypeLetter,ENVTIELetter)GetDocumentAttributesValue(Filepath,oNbAttr,oAttrName,oAttrType,oAttrValues)); \
} \
HRESULT  ENVTIEName::GetProductAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues) \
{ \
return (ENVTIECALL(CATIPDMUECreate,ENVTIETypeLetter,ENVTIELetter)GetProductAttributesValue(Filepath,oNbAttr,oAttrName,oAttrType,oAttrValues)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUECreate(classe)    TIECATIPDMUECreate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUECreate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUECreate, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUECreate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUECreate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUECreate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUECreate, classe) \
 \
HRESULT  TIECATIPDMUECreate##classe::GetProductEnvironment(const CATBaseUnknown* iObj,CATUnicodeString& oEnv,CATUnicodeString& oType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductEnvironment(iObj,oEnv,oType)); \
} \
HRESULT  TIECATIPDMUECreate##classe::GetDocumentEnvironment(const CATDocument* iDoc,CATUnicodeString& oEnv,CATUnicodeString& oTable) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentEnvironment(iDoc,oEnv,oTable)); \
} \
HRESULT  TIECATIPDMUECreate##classe::GetDocumentEnvironment(const char* Filepath,CATUnicodeString& oEnv,CATUnicodeString& oTable) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentEnvironment(Filepath,oEnv,oTable)); \
} \
HRESULT  TIECATIPDMUECreate##classe::GetProductAttributesValue(const CATBaseUnknown* iObj,const CATUnicodeString& iType,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues, CATBoolean& oCreateOrUpdate) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductAttributesValue(iObj,iType,oNbAttr,oAttrName,oAttrType,oAttrValues,oCreateOrUpdate)); \
} \
HRESULT  TIECATIPDMUECreate##classe::GetDocumentAttributesValue(const CATDocument* iDoc,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues,CATBoolean& oCreateOrUpdate) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentAttributesValue(iDoc,oNbAttr,oAttrName,oAttrType,oAttrValues,oCreateOrUpdate)); \
} \
HRESULT  TIECATIPDMUECreate##classe::GetDocumentAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentAttributesValue(Filepath,oNbAttr,oAttrName,oAttrType,oAttrValues)); \
} \
HRESULT  TIECATIPDMUECreate##classe::GetProductAttributesValue(const char* Filepath,int& oNbAttr,CATListOfCATUnicodeString& oAttrName,CATListOfCATUnicodeString& oAttrType,void**& oAttrValues) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductAttributesValue(Filepath,oNbAttr,oAttrName,oAttrType,oAttrValues)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUECreate(classe) \
 \
 \
declare_TIE_CATIPDMUECreate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUECreate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUECreate,"CATIPDMUECreate",CATIPDMUECreate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUECreate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUECreate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUECreate##classe(classe::MetaObject(),CATIPDMUECreate::MetaObject(),(void *)CreateTIECATIPDMUECreate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUECreate(classe) \
 \
 \
declare_TIE_CATIPDMUECreate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUECreate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUECreate,"CATIPDMUECreate",CATIPDMUECreate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUECreate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUECreate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUECreate##classe(classe::MetaObject(),CATIPDMUECreate::MetaObject(),(void *)CreateTIECATIPDMUECreate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUECreate(classe) TIE_CATIPDMUECreate(classe)
#else
#define BOA_CATIPDMUECreate(classe) CATImplementBOA(CATIPDMUECreate, classe)
#endif

#endif
