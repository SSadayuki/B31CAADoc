#ifndef __TIE_ENOVIFctAuthorizedValues
#define __TIE_ENOVIFctAuthorizedValues

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIFctAuthorizedValues.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIFctAuthorizedValues */
#define declare_TIE_ENOVIFctAuthorizedValues(classe) \
 \
 \
class TIEENOVIFctAuthorizedValues##classe : public ENOVIFctAuthorizedValues \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIFctAuthorizedValues, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT getValues(CATListOfCATUnicodeString &oAuthorizedValues) ; \
};



#define ENVTIEdeclare_ENOVIFctAuthorizedValues(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT getValues(CATListOfCATUnicodeString &oAuthorizedValues) ; \


#define ENVTIEdefine_ENOVIFctAuthorizedValues(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::getValues(CATListOfCATUnicodeString &oAuthorizedValues)  \
{ \
return (ENVTIECALL(ENOVIFctAuthorizedValues,ENVTIETypeLetter,ENVTIELetter)getValues(oAuthorizedValues)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIFctAuthorizedValues(classe)    TIEENOVIFctAuthorizedValues##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIFctAuthorizedValues(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIFctAuthorizedValues, classe) \
 \
 \
CATImplementTIEMethods(ENOVIFctAuthorizedValues, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIFctAuthorizedValues, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIFctAuthorizedValues, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIFctAuthorizedValues, classe) \
 \
HRESULT  TIEENOVIFctAuthorizedValues##classe::getValues(CATListOfCATUnicodeString &oAuthorizedValues)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getValues(oAuthorizedValues)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIFctAuthorizedValues(classe) \
 \
 \
declare_TIE_ENOVIFctAuthorizedValues(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIFctAuthorizedValues##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIFctAuthorizedValues,"ENOVIFctAuthorizedValues",ENOVIFctAuthorizedValues::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIFctAuthorizedValues(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIFctAuthorizedValues, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIFctAuthorizedValues##classe(classe::MetaObject(),ENOVIFctAuthorizedValues::MetaObject(),(void *)CreateTIEENOVIFctAuthorizedValues##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIFctAuthorizedValues(classe) \
 \
 \
declare_TIE_ENOVIFctAuthorizedValues(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIFctAuthorizedValues##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIFctAuthorizedValues,"ENOVIFctAuthorizedValues",ENOVIFctAuthorizedValues::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIFctAuthorizedValues(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIFctAuthorizedValues, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIFctAuthorizedValues##classe(classe::MetaObject(),ENOVIFctAuthorizedValues::MetaObject(),(void *)CreateTIEENOVIFctAuthorizedValues##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIFctAuthorizedValues(classe) TIE_ENOVIFctAuthorizedValues(classe)
#else
#define BOA_ENOVIFctAuthorizedValues(classe) CATImplementBOA(ENOVIFctAuthorizedValues, classe)
#endif

#endif
