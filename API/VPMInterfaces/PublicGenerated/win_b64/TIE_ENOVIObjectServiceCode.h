#ifndef __TIE_ENOVIObjectServiceCode
#define __TIE_ENOVIObjectServiceCode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIObjectServiceCode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIObjectServiceCode */
#define declare_TIE_ENOVIObjectServiceCode(classe) \
 \
 \
class TIEENOVIObjectServiceCode##classe : public ENOVIObjectServiceCode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIObjectServiceCode, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RunObjectServiceCode(CATListValCATBaseUnknown_var& iObjectIds, const char* ipString, CATListValCATBaseUnknown_var& oObjectIds, char** opString) ; \
};



#define ENVTIEdeclare_ENOVIObjectServiceCode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RunObjectServiceCode(CATListValCATBaseUnknown_var& iObjectIds, const char* ipString, CATListValCATBaseUnknown_var& oObjectIds, char** opString) ; \


#define ENVTIEdefine_ENOVIObjectServiceCode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RunObjectServiceCode(CATListValCATBaseUnknown_var& iObjectIds, const char* ipString, CATListValCATBaseUnknown_var& oObjectIds, char** opString)  \
{ \
return (ENVTIECALL(ENOVIObjectServiceCode,ENVTIETypeLetter,ENVTIELetter)RunObjectServiceCode(iObjectIds,ipString,oObjectIds,opString)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIObjectServiceCode(classe)    TIEENOVIObjectServiceCode##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIObjectServiceCode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIObjectServiceCode, classe) \
 \
 \
CATImplementTIEMethods(ENOVIObjectServiceCode, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIObjectServiceCode, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIObjectServiceCode, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIObjectServiceCode, classe) \
 \
HRESULT  TIEENOVIObjectServiceCode##classe::RunObjectServiceCode(CATListValCATBaseUnknown_var& iObjectIds, const char* ipString, CATListValCATBaseUnknown_var& oObjectIds, char** opString)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunObjectServiceCode(iObjectIds,ipString,oObjectIds,opString)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIObjectServiceCode(classe) \
 \
 \
declare_TIE_ENOVIObjectServiceCode(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIObjectServiceCode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIObjectServiceCode,"ENOVIObjectServiceCode",ENOVIObjectServiceCode::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIObjectServiceCode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIObjectServiceCode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIObjectServiceCode##classe(classe::MetaObject(),ENOVIObjectServiceCode::MetaObject(),(void *)CreateTIEENOVIObjectServiceCode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIObjectServiceCode(classe) \
 \
 \
declare_TIE_ENOVIObjectServiceCode(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIObjectServiceCode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIObjectServiceCode,"ENOVIObjectServiceCode",ENOVIObjectServiceCode::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIObjectServiceCode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIObjectServiceCode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIObjectServiceCode##classe(classe::MetaObject(),ENOVIObjectServiceCode::MetaObject(),(void *)CreateTIEENOVIObjectServiceCode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIObjectServiceCode(classe) TIE_ENOVIObjectServiceCode(classe)
#else
#define BOA_ENOVIObjectServiceCode(classe) CATImplementBOA(ENOVIObjectServiceCode, classe)
#endif

#endif
