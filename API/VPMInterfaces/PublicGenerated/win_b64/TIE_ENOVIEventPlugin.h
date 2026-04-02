#ifndef __TIE_ENOVIEventPlugin
#define __TIE_ENOVIEventPlugin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIEventPlugin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIEventPlugin */
#define declare_TIE_ENOVIEventPlugin(classe) \
 \
 \
class TIEENOVIEventPlugin##classe : public ENOVIEventPlugin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIEventPlugin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Init ( const ENOVIEventManager_var &iEventManager ) ; \
};



#define ENVTIEdeclare_ENOVIEventPlugin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Init ( const ENOVIEventManager_var &iEventManager ) ; \


#define ENVTIEdefine_ENOVIEventPlugin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Init ( const ENOVIEventManager_var &iEventManager )  \
{ \
return (ENVTIECALL(ENOVIEventPlugin,ENVTIETypeLetter,ENVTIELetter)Init (iEventManager )); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIEventPlugin(classe)    TIEENOVIEventPlugin##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIEventPlugin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIEventPlugin, classe) \
 \
 \
CATImplementTIEMethods(ENOVIEventPlugin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIEventPlugin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIEventPlugin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIEventPlugin, classe) \
 \
HRESULT  TIEENOVIEventPlugin##classe::Init ( const ENOVIEventManager_var &iEventManager )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init (iEventManager )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIEventPlugin(classe) \
 \
 \
declare_TIE_ENOVIEventPlugin(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIEventPlugin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIEventPlugin,"ENOVIEventPlugin",ENOVIEventPlugin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIEventPlugin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIEventPlugin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIEventPlugin##classe(classe::MetaObject(),ENOVIEventPlugin::MetaObject(),(void *)CreateTIEENOVIEventPlugin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIEventPlugin(classe) \
 \
 \
declare_TIE_ENOVIEventPlugin(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIEventPlugin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIEventPlugin,"ENOVIEventPlugin",ENOVIEventPlugin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIEventPlugin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIEventPlugin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIEventPlugin##classe(classe::MetaObject(),ENOVIEventPlugin::MetaObject(),(void *)CreateTIEENOVIEventPlugin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIEventPlugin(classe) TIE_ENOVIEventPlugin(classe)
#else
#define BOA_ENOVIEventPlugin(classe) CATImplementBOA(ENOVIEventPlugin, classe)
#endif

#endif
