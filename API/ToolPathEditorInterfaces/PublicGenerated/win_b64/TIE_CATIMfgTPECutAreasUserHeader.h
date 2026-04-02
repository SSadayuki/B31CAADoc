#ifndef __TIE_CATIMfgTPECutAreasUserHeader
#define __TIE_CATIMfgTPECutAreasUserHeader

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgTPECutAreasUserHeader.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgTPECutAreasUserHeader */
#define declare_TIE_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
class TIECATIMfgTPECutAreasUserHeader##classe : public CATIMfgTPECutAreasUserHeader \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgTPECutAreasUserHeader, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetHeaders( CATListValCATString &ioHeadersList ); \
};



#define ENVTIEdeclare_CATIMfgTPECutAreasUserHeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetHeaders( CATListValCATString &ioHeadersList ); \


#define ENVTIEdefine_CATIMfgTPECutAreasUserHeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetHeaders( CATListValCATString &ioHeadersList ) \
{ \
return (ENVTIECALL(CATIMfgTPECutAreasUserHeader,ENVTIETypeLetter,ENVTIELetter)GetHeaders(ioHeadersList )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgTPECutAreasUserHeader(classe)    TIECATIMfgTPECutAreasUserHeader##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgTPECutAreasUserHeader, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgTPECutAreasUserHeader, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgTPECutAreasUserHeader, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgTPECutAreasUserHeader, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgTPECutAreasUserHeader, classe) \
 \
HRESULT  TIECATIMfgTPECutAreasUserHeader##classe::GetHeaders( CATListValCATString &ioHeadersList ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHeaders(ioHeadersList )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
declare_TIE_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgTPECutAreasUserHeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgTPECutAreasUserHeader,"CATIMfgTPECutAreasUserHeader",CATIMfgTPECutAreasUserHeader::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgTPECutAreasUserHeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgTPECutAreasUserHeader##classe(classe::MetaObject(),CATIMfgTPECutAreasUserHeader::MetaObject(),(void *)CreateTIECATIMfgTPECutAreasUserHeader##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
declare_TIE_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgTPECutAreasUserHeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgTPECutAreasUserHeader,"CATIMfgTPECutAreasUserHeader",CATIMfgTPECutAreasUserHeader::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgTPECutAreasUserHeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgTPECutAreasUserHeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgTPECutAreasUserHeader##classe(classe::MetaObject(),CATIMfgTPECutAreasUserHeader::MetaObject(),(void *)CreateTIECATIMfgTPECutAreasUserHeader##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgTPECutAreasUserHeader(classe) TIE_CATIMfgTPECutAreasUserHeader(classe)
#else
#define BOA_CATIMfgTPECutAreasUserHeader(classe) CATImplementBOA(CATIMfgTPECutAreasUserHeader, classe)
#endif

#endif
