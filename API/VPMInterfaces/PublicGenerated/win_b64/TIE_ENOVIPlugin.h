#ifndef __TIE_ENOVIPlugin
#define __TIE_ENOVIPlugin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIPlugin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIPlugin */
#define declare_TIE_ENOVIPlugin(classe) \
 \
 \
class TIEENOVIPlugin##classe : public ENOVIPlugin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIPlugin, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Init () ; \
};



#define ENVTIEdeclare_ENOVIPlugin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Init () ; \


#define ENVTIEdefine_ENOVIPlugin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Init ()  \
{ \
return (ENVTIECALL(ENOVIPlugin,ENVTIETypeLetter,ENVTIELetter)Init ()); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIPlugin(classe)    TIEENOVIPlugin##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIPlugin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIPlugin, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(ENOVIPlugin, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(ENOVIPlugin, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIPlugin, classe) \
 \
HRESULT  TIEENOVIPlugin##classe::Init ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIPlugin(classe) \
 \
 \
declare_TIE_ENOVIPlugin(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPlugin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPlugin,"ENOVIPlugin",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPlugin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIPlugin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPlugin##classe(classe::MetaObject(),TIEENOVIPlugin##classe::MetaObject(),(void *)CreateTIEENOVIPlugin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIPlugin(classe) \
 \
 \
declare_TIE_ENOVIPlugin(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPlugin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPlugin,"ENOVIPlugin",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPlugin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIPlugin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPlugin##classe(classe::MetaObject(),TIEENOVIPlugin##classe::MetaObject(),(void *)CreateTIEENOVIPlugin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIPlugin(classe) TIE_ENOVIPlugin(classe)
#else
#define BOA_ENOVIPlugin(classe) CATImplementBOA(ENOVIPlugin, classe)
#endif

#endif
