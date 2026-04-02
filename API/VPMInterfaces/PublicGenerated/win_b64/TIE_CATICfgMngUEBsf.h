#ifndef __TIE_CATICfgMngUEBsf
#define __TIE_CATICfgMngUEBsf

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICfgMngUEBsf.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICfgMngUEBsf */
#define declare_TIE_CATICfgMngUEBsf(classe) \
 \
 \
class TIECATICfgMngUEBsf##classe : public CATICfgMngUEBsf \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICfgMngUEBsf, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetBSFNames(CATListOfCATUnicodeString &iBSFNames); \
      virtual HRESULT GetDomainList(CATListOfCATUnicodeString & oDomainList) ; \
};



#define ENVTIEdeclare_CATICfgMngUEBsf(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetBSFNames(CATListOfCATUnicodeString &iBSFNames); \
virtual HRESULT GetDomainList(CATListOfCATUnicodeString & oDomainList) ; \


#define ENVTIEdefine_CATICfgMngUEBsf(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetBSFNames(CATListOfCATUnicodeString &iBSFNames) \
{ \
return (ENVTIECALL(CATICfgMngUEBsf,ENVTIETypeLetter,ENVTIELetter)GetBSFNames(iBSFNames)); \
} \
HRESULT  ENVTIEName::GetDomainList(CATListOfCATUnicodeString & oDomainList)  \
{ \
return (ENVTIECALL(CATICfgMngUEBsf,ENVTIETypeLetter,ENVTIELetter)GetDomainList(oDomainList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICfgMngUEBsf(classe)    TIECATICfgMngUEBsf##classe


/* Common methods inside a TIE */
#define common_TIE_CATICfgMngUEBsf(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICfgMngUEBsf, classe) \
 \
 \
CATImplementTIEMethods(CATICfgMngUEBsf, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICfgMngUEBsf, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICfgMngUEBsf, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICfgMngUEBsf, classe) \
 \
HRESULT  TIECATICfgMngUEBsf##classe::GetBSFNames(CATListOfCATUnicodeString &iBSFNames) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBSFNames(iBSFNames)); \
} \
HRESULT  TIECATICfgMngUEBsf##classe::GetDomainList(CATListOfCATUnicodeString & oDomainList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDomainList(oDomainList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICfgMngUEBsf(classe) \
 \
 \
declare_TIE_CATICfgMngUEBsf(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICfgMngUEBsf##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICfgMngUEBsf,"CATICfgMngUEBsf",CATICfgMngUEBsf::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICfgMngUEBsf(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICfgMngUEBsf, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICfgMngUEBsf##classe(classe::MetaObject(),CATICfgMngUEBsf::MetaObject(),(void *)CreateTIECATICfgMngUEBsf##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICfgMngUEBsf(classe) \
 \
 \
declare_TIE_CATICfgMngUEBsf(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICfgMngUEBsf##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICfgMngUEBsf,"CATICfgMngUEBsf",CATICfgMngUEBsf::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICfgMngUEBsf(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICfgMngUEBsf, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICfgMngUEBsf##classe(classe::MetaObject(),CATICfgMngUEBsf::MetaObject(),(void *)CreateTIECATICfgMngUEBsf##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICfgMngUEBsf(classe) TIE_CATICfgMngUEBsf(classe)
#else
#define BOA_CATICfgMngUEBsf(classe) CATImplementBOA(CATICfgMngUEBsf, classe)
#endif

#endif
