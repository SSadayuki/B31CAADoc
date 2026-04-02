#ifndef __TIE_CATIMfgCustomParameters
#define __TIE_CATIMfgCustomParameters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgCustomParameters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgCustomParameters */
#define declare_TIE_CATIMfgCustomParameters(classe) \
 \
 \
class TIECATIMfgCustomParameters##classe : public CATIMfgCustomParameters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgCustomParameters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetExtendedValue(const CATUnicodeString &iParmName, int                    &oTypeValue, int                    &oIntegerValue, double                 &oDoubleValue, CATUnicodeString       &oStringValue); \
};



#define ENVTIEdeclare_CATIMfgCustomParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetExtendedValue(const CATUnicodeString &iParmName, int                    &oTypeValue, int                    &oIntegerValue, double                 &oDoubleValue, CATUnicodeString       &oStringValue); \


#define ENVTIEdefine_CATIMfgCustomParameters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetExtendedValue(const CATUnicodeString &iParmName, int                    &oTypeValue, int                    &oIntegerValue, double                 &oDoubleValue, CATUnicodeString       &oStringValue) \
{ \
return (ENVTIECALL(CATIMfgCustomParameters,ENVTIETypeLetter,ENVTIELetter)GetExtendedValue(iParmName,oTypeValue,oIntegerValue,oDoubleValue,oStringValue)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgCustomParameters(classe)    TIECATIMfgCustomParameters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgCustomParameters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgCustomParameters, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgCustomParameters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgCustomParameters, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgCustomParameters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgCustomParameters, classe) \
 \
HRESULT  TIECATIMfgCustomParameters##classe::GetExtendedValue(const CATUnicodeString &iParmName, int                    &oTypeValue, int                    &oIntegerValue, double                 &oDoubleValue, CATUnicodeString       &oStringValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtendedValue(iParmName,oTypeValue,oIntegerValue,oDoubleValue,oStringValue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgCustomParameters(classe) \
 \
 \
declare_TIE_CATIMfgCustomParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomParameters,"CATIMfgCustomParameters",CATIMfgCustomParameters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgCustomParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomParameters##classe(classe::MetaObject(),CATIMfgCustomParameters::MetaObject(),(void *)CreateTIECATIMfgCustomParameters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgCustomParameters(classe) \
 \
 \
declare_TIE_CATIMfgCustomParameters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomParameters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomParameters,"CATIMfgCustomParameters",CATIMfgCustomParameters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomParameters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgCustomParameters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomParameters##classe(classe::MetaObject(),CATIMfgCustomParameters::MetaObject(),(void *)CreateTIECATIMfgCustomParameters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgCustomParameters(classe) TIE_CATIMfgCustomParameters(classe)
#else
#define BOA_CATIMfgCustomParameters(classe) CATImplementBOA(CATIMfgCustomParameters, classe)
#endif

#endif
