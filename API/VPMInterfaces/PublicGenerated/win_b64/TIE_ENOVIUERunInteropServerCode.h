#ifndef __TIE_ENOVIUERunInteropServerCode
#define __TIE_ENOVIUERunInteropServerCode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUERunInteropServerCode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUERunInteropServerCode */
#define declare_TIE_ENOVIUERunInteropServerCode(classe) \
 \
 \
class TIEENOVIUERunInteropServerCode##classe : public ENOVIUERunInteropServerCode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUERunInteropServerCode, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RunServerCode (const CATVariant& iInput, CATVariant& oOutput ) ; \
};



#define ENVTIEdeclare_ENOVIUERunInteropServerCode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RunServerCode (const CATVariant& iInput, CATVariant& oOutput ) ; \


#define ENVTIEdefine_ENOVIUERunInteropServerCode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RunServerCode (const CATVariant& iInput, CATVariant& oOutput )  \
{ \
return (ENVTIECALL(ENOVIUERunInteropServerCode,ENVTIETypeLetter,ENVTIELetter)RunServerCode (iInput,oOutput )); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUERunInteropServerCode(classe)    TIEENOVIUERunInteropServerCode##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUERunInteropServerCode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUERunInteropServerCode, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUERunInteropServerCode, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUERunInteropServerCode, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUERunInteropServerCode, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUERunInteropServerCode, classe) \
 \
HRESULT  TIEENOVIUERunInteropServerCode##classe::RunServerCode (const CATVariant& iInput, CATVariant& oOutput )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunServerCode (iInput,oOutput )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUERunInteropServerCode(classe) \
 \
 \
declare_TIE_ENOVIUERunInteropServerCode(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUERunInteropServerCode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUERunInteropServerCode,"ENOVIUERunInteropServerCode",ENOVIUERunInteropServerCode::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUERunInteropServerCode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUERunInteropServerCode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUERunInteropServerCode##classe(classe::MetaObject(),ENOVIUERunInteropServerCode::MetaObject(),(void *)CreateTIEENOVIUERunInteropServerCode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUERunInteropServerCode(classe) \
 \
 \
declare_TIE_ENOVIUERunInteropServerCode(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUERunInteropServerCode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUERunInteropServerCode,"ENOVIUERunInteropServerCode",ENOVIUERunInteropServerCode::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUERunInteropServerCode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUERunInteropServerCode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUERunInteropServerCode##classe(classe::MetaObject(),ENOVIUERunInteropServerCode::MetaObject(),(void *)CreateTIEENOVIUERunInteropServerCode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUERunInteropServerCode(classe) TIE_ENOVIUERunInteropServerCode(classe)
#else
#define BOA_ENOVIUERunInteropServerCode(classe) CATImplementBOA(ENOVIUERunInteropServerCode, classe)
#endif

#endif
