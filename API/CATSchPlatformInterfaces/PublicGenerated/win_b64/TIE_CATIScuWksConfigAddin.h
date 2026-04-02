#ifndef __TIE_CATIScuWksConfigAddin
#define __TIE_CATIScuWksConfigAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIScuWksConfigAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIScuWksConfigAddin */
#define declare_TIE_CATIScuWksConfigAddin(classe) \
 \
 \
class TIECATIScuWksConfigAddin##classe : public CATIScuWksConfigAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIScuWksConfigAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIScuWksConfigAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIScuWksConfigAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIScuWksConfigAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIScuWksConfigAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIScuWksConfigAddin(classe)    TIECATIScuWksConfigAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIScuWksConfigAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIScuWksConfigAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIScuWksConfigAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIScuWksConfigAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIScuWksConfigAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIScuWksConfigAddin, classe) \
 \
void               TIECATIScuWksConfigAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIScuWksConfigAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIScuWksConfigAddin(classe) \
 \
 \
declare_TIE_CATIScuWksConfigAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIScuWksConfigAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIScuWksConfigAddin,"CATIScuWksConfigAddin",CATIScuWksConfigAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIScuWksConfigAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIScuWksConfigAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIScuWksConfigAddin##classe(classe::MetaObject(),CATIScuWksConfigAddin::MetaObject(),(void *)CreateTIECATIScuWksConfigAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIScuWksConfigAddin(classe) \
 \
 \
declare_TIE_CATIScuWksConfigAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIScuWksConfigAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIScuWksConfigAddin,"CATIScuWksConfigAddin",CATIScuWksConfigAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIScuWksConfigAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIScuWksConfigAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIScuWksConfigAddin##classe(classe::MetaObject(),CATIScuWksConfigAddin::MetaObject(),(void *)CreateTIECATIScuWksConfigAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIScuWksConfigAddin(classe) TIE_CATIScuWksConfigAddin(classe)
#else
#define BOA_CATIScuWksConfigAddin(classe) CATImplementBOA(CATIScuWksConfigAddin, classe)
#endif

#endif
