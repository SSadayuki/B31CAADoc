#ifndef __TIE_ENOVIFctDefaultValue
#define __TIE_ENOVIFctDefaultValue

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIFctDefaultValue.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIFctDefaultValue */
#define declare_TIE_ENOVIFctDefaultValue(classe) \
 \
 \
class TIEENOVIFctDefaultValue##classe : public ENOVIFctDefaultValue \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIFctDefaultValue, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT getValue(CATUnicodeString &oDefaultValue) ; \
};



#define ENVTIEdeclare_ENOVIFctDefaultValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT getValue(CATUnicodeString &oDefaultValue) ; \


#define ENVTIEdefine_ENOVIFctDefaultValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::getValue(CATUnicodeString &oDefaultValue)  \
{ \
return (ENVTIECALL(ENOVIFctDefaultValue,ENVTIETypeLetter,ENVTIELetter)getValue(oDefaultValue)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIFctDefaultValue(classe)    TIEENOVIFctDefaultValue##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIFctDefaultValue(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIFctDefaultValue, classe) \
 \
 \
CATImplementTIEMethods(ENOVIFctDefaultValue, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIFctDefaultValue, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIFctDefaultValue, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIFctDefaultValue, classe) \
 \
HRESULT  TIEENOVIFctDefaultValue##classe::getValue(CATUnicodeString &oDefaultValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getValue(oDefaultValue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIFctDefaultValue(classe) \
 \
 \
declare_TIE_ENOVIFctDefaultValue(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIFctDefaultValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIFctDefaultValue,"ENOVIFctDefaultValue",ENOVIFctDefaultValue::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIFctDefaultValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIFctDefaultValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIFctDefaultValue##classe(classe::MetaObject(),ENOVIFctDefaultValue::MetaObject(),(void *)CreateTIEENOVIFctDefaultValue##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIFctDefaultValue(classe) \
 \
 \
declare_TIE_ENOVIFctDefaultValue(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIFctDefaultValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIFctDefaultValue,"ENOVIFctDefaultValue",ENOVIFctDefaultValue::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIFctDefaultValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIFctDefaultValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIFctDefaultValue##classe(classe::MetaObject(),ENOVIFctDefaultValue::MetaObject(),(void *)CreateTIEENOVIFctDefaultValue##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIFctDefaultValue(classe) TIE_ENOVIFctDefaultValue(classe)
#else
#define BOA_ENOVIFctDefaultValue(classe) CATImplementBOA(ENOVIFctDefaultValue, classe)
#endif

#endif
