#ifndef __TIE_CATIMfgToolPathEditorUserHeader
#define __TIE_CATIMfgToolPathEditorUserHeader

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgToolPathEditorUserHeader.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgToolPathEditorUserHeader */
#define declare_TIE_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
class TIECATIMfgToolPathEditorUserHeader##classe : public CATIMfgToolPathEditorUserHeader \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgToolPathEditorUserHeader, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetHeaders( CATListValCATString &ioHeadersList ); \
      virtual HRESULT IsHeadersAvailable( CATListValCATString& ioHeadersList , CATCSO* iCSO ); \
};



#define ENVTIEdeclare_CATIMfgToolPathEditorUserHeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetHeaders( CATListValCATString &ioHeadersList ); \
virtual HRESULT IsHeadersAvailable( CATListValCATString& ioHeadersList , CATCSO* iCSO ); \


#define ENVTIEdefine_CATIMfgToolPathEditorUserHeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetHeaders( CATListValCATString &ioHeadersList ) \
{ \
return (ENVTIECALL(CATIMfgToolPathEditorUserHeader,ENVTIETypeLetter,ENVTIELetter)GetHeaders(ioHeadersList )); \
} \
HRESULT  ENVTIEName::IsHeadersAvailable( CATListValCATString& ioHeadersList , CATCSO* iCSO ) \
{ \
return (ENVTIECALL(CATIMfgToolPathEditorUserHeader,ENVTIETypeLetter,ENVTIELetter)IsHeadersAvailable(ioHeadersList ,iCSO )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgToolPathEditorUserHeader(classe)    TIECATIMfgToolPathEditorUserHeader##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgToolPathEditorUserHeader, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgToolPathEditorUserHeader, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgToolPathEditorUserHeader, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgToolPathEditorUserHeader, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgToolPathEditorUserHeader, classe) \
 \
HRESULT  TIECATIMfgToolPathEditorUserHeader##classe::GetHeaders( CATListValCATString &ioHeadersList ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHeaders(ioHeadersList )); \
} \
HRESULT  TIECATIMfgToolPathEditorUserHeader##classe::IsHeadersAvailable( CATListValCATString& ioHeadersList , CATCSO* iCSO ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsHeadersAvailable(ioHeadersList ,iCSO )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
declare_TIE_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolPathEditorUserHeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolPathEditorUserHeader,"CATIMfgToolPathEditorUserHeader",CATIMfgToolPathEditorUserHeader::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgToolPathEditorUserHeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolPathEditorUserHeader##classe(classe::MetaObject(),CATIMfgToolPathEditorUserHeader::MetaObject(),(void *)CreateTIECATIMfgToolPathEditorUserHeader##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
declare_TIE_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolPathEditorUserHeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolPathEditorUserHeader,"CATIMfgToolPathEditorUserHeader",CATIMfgToolPathEditorUserHeader::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolPathEditorUserHeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgToolPathEditorUserHeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolPathEditorUserHeader##classe(classe::MetaObject(),CATIMfgToolPathEditorUserHeader::MetaObject(),(void *)CreateTIECATIMfgToolPathEditorUserHeader##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgToolPathEditorUserHeader(classe) TIE_CATIMfgToolPathEditorUserHeader(classe)
#else
#define BOA_CATIMfgToolPathEditorUserHeader(classe) CATImplementBOA(CATIMfgToolPathEditorUserHeader, classe)
#endif

#endif
