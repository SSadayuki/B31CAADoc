#ifndef __TIE_CATIMfgExtendedParameter
#define __TIE_CATIMfgExtendedParameter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgExtendedParameter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgExtendedParameter */
#define declare_TIE_CATIMfgExtendedParameter(classe) \
 \
 \
class TIECATIMfgExtendedParameter##classe : public CATIMfgExtendedParameter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgExtendedParameter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Convert(const CATUnicodeString& iPackage, const CATUnicodeString& iType, const CATUnicodeString& iParameter, CATICkeParm_var&        oParm) ; \
};



#define ENVTIEdeclare_CATIMfgExtendedParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Convert(const CATUnicodeString& iPackage, const CATUnicodeString& iType, const CATUnicodeString& iParameter, CATICkeParm_var&        oParm) ; \


#define ENVTIEdefine_CATIMfgExtendedParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Convert(const CATUnicodeString& iPackage, const CATUnicodeString& iType, const CATUnicodeString& iParameter, CATICkeParm_var&        oParm)  \
{ \
return (ENVTIECALL(CATIMfgExtendedParameter,ENVTIETypeLetter,ENVTIELetter)Convert(iPackage,iType,iParameter,oParm)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgExtendedParameter(classe)    TIECATIMfgExtendedParameter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgExtendedParameter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgExtendedParameter, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgExtendedParameter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgExtendedParameter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgExtendedParameter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgExtendedParameter, classe) \
 \
HRESULT  TIECATIMfgExtendedParameter##classe::Convert(const CATUnicodeString& iPackage, const CATUnicodeString& iType, const CATUnicodeString& iParameter, CATICkeParm_var&        oParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Convert(iPackage,iType,iParameter,oParm)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgExtendedParameter(classe) \
 \
 \
declare_TIE_CATIMfgExtendedParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgExtendedParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgExtendedParameter,"CATIMfgExtendedParameter",CATIMfgExtendedParameter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgExtendedParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgExtendedParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgExtendedParameter##classe(classe::MetaObject(),CATIMfgExtendedParameter::MetaObject(),(void *)CreateTIECATIMfgExtendedParameter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgExtendedParameter(classe) \
 \
 \
declare_TIE_CATIMfgExtendedParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgExtendedParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgExtendedParameter,"CATIMfgExtendedParameter",CATIMfgExtendedParameter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgExtendedParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgExtendedParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgExtendedParameter##classe(classe::MetaObject(),CATIMfgExtendedParameter::MetaObject(),(void *)CreateTIECATIMfgExtendedParameter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgExtendedParameter(classe) TIE_CATIMfgExtendedParameter(classe)
#else
#define BOA_CATIMfgExtendedParameter(classe) CATImplementBOA(CATIMfgExtendedParameter, classe)
#endif

#endif
