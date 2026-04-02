#ifndef __TIE_CATIMldContextualMenuUserHeader
#define __TIE_CATIMldContextualMenuUserHeader

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMldContextualMenuUserHeader.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMldContextualMenuUserHeader */
#define declare_TIE_CATIMldContextualMenuUserHeader(classe) \
 \
 \
class TIECATIMldContextualMenuUserHeader##classe : public CATIMldContextualMenuUserHeader \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMldContextualMenuUserHeader, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT  GetHeaders(  CATListValCATString  &ioHeadersList  ); \
};



#define ENVTIEdeclare_CATIMldContextualMenuUserHeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT  GetHeaders(  CATListValCATString  &ioHeadersList  ); \


#define ENVTIEdefine_CATIMldContextualMenuUserHeader(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::GetHeaders(  CATListValCATString  &ioHeadersList  ) \
{ \
return (ENVTIECALL(CATIMldContextualMenuUserHeader,ENVTIETypeLetter,ENVTIELetter)GetHeaders(ioHeadersList  )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMldContextualMenuUserHeader(classe)    TIECATIMldContextualMenuUserHeader##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMldContextualMenuUserHeader(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMldContextualMenuUserHeader, classe) \
 \
 \
CATImplementTIEMethods(CATIMldContextualMenuUserHeader, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMldContextualMenuUserHeader, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMldContextualMenuUserHeader, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMldContextualMenuUserHeader, classe) \
 \
HRESULT   TIECATIMldContextualMenuUserHeader##classe::GetHeaders(  CATListValCATString  &ioHeadersList  ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHeaders(ioHeadersList  )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMldContextualMenuUserHeader(classe) \
 \
 \
declare_TIE_CATIMldContextualMenuUserHeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMldContextualMenuUserHeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMldContextualMenuUserHeader,"CATIMldContextualMenuUserHeader",CATIMldContextualMenuUserHeader::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMldContextualMenuUserHeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMldContextualMenuUserHeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMldContextualMenuUserHeader##classe(classe::MetaObject(),CATIMldContextualMenuUserHeader::MetaObject(),(void *)CreateTIECATIMldContextualMenuUserHeader##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMldContextualMenuUserHeader(classe) \
 \
 \
declare_TIE_CATIMldContextualMenuUserHeader(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMldContextualMenuUserHeader##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMldContextualMenuUserHeader,"CATIMldContextualMenuUserHeader",CATIMldContextualMenuUserHeader::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMldContextualMenuUserHeader(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMldContextualMenuUserHeader, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMldContextualMenuUserHeader##classe(classe::MetaObject(),CATIMldContextualMenuUserHeader::MetaObject(),(void *)CreateTIECATIMldContextualMenuUserHeader##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMldContextualMenuUserHeader(classe) TIE_CATIMldContextualMenuUserHeader(classe)
#else
#define BOA_CATIMldContextualMenuUserHeader(classe) CATImplementBOA(CATIMldContextualMenuUserHeader, classe)
#endif

#endif
