#ifndef __TIE_CATIAlias
#define __TIE_CATIAlias

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAlias.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAlias */
#define declare_TIE_CATIAlias(classe) \
 \
 \
class TIECATIAlias##classe : public CATIAlias \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAlias, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void SetAlias(const CATUnicodeString&  iName ) ; \
      virtual CATUnicodeString GetAlias() ; \
};



#define ENVTIEdeclare_CATIAlias(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void SetAlias(const CATUnicodeString&  iName ) ; \
virtual CATUnicodeString GetAlias() ; \


#define ENVTIEdefine_CATIAlias(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::SetAlias(const CATUnicodeString&  iName )  \
{ \
 (ENVTIECALL(CATIAlias,ENVTIETypeLetter,ENVTIELetter)SetAlias(iName )); \
} \
CATUnicodeString  ENVTIEName::GetAlias()  \
{ \
return (ENVTIECALL(CATIAlias,ENVTIETypeLetter,ENVTIELetter)GetAlias()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAlias(classe)    TIECATIAlias##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAlias(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAlias, classe) \
 \
 \
CATImplementTIEMethods(CATIAlias, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAlias, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAlias, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAlias, classe) \
 \
void  TIECATIAlias##classe::SetAlias(const CATUnicodeString&  iName )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAlias(iName ); \
} \
CATUnicodeString  TIECATIAlias##classe::GetAlias()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlias()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAlias(classe) \
 \
 \
declare_TIE_CATIAlias(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAlias##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAlias,"CATIAlias",CATIAlias::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAlias(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAlias, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAlias##classe(classe::MetaObject(),CATIAlias::MetaObject(),(void *)CreateTIECATIAlias##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAlias(classe) \
 \
 \
declare_TIE_CATIAlias(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAlias##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAlias,"CATIAlias",CATIAlias::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAlias(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAlias, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAlias##classe(classe::MetaObject(),CATIAlias::MetaObject(),(void *)CreateTIECATIAlias##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAlias(classe) TIE_CATIAlias(classe)
#else
#define BOA_CATIAlias(classe) CATImplementBOA(CATIAlias, classe)
#endif

#endif
