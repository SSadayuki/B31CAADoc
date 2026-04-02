#ifndef __TIE_CATIAfrGeneralWksAddin
#define __TIE_CATIAfrGeneralWksAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAfrGeneralWksAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAfrGeneralWksAddin */
#define declare_TIE_CATIAfrGeneralWksAddin(classe) \
 \
 \
class TIECATIAfrGeneralWksAddin##classe : public CATIAfrGeneralWksAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAfrGeneralWksAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIAfrGeneralWksAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIAfrGeneralWksAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIAfrGeneralWksAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIAfrGeneralWksAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAfrGeneralWksAddin(classe)    TIECATIAfrGeneralWksAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAfrGeneralWksAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAfrGeneralWksAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIAfrGeneralWksAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAfrGeneralWksAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAfrGeneralWksAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAfrGeneralWksAddin, classe) \
 \
void               TIECATIAfrGeneralWksAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIAfrGeneralWksAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAfrGeneralWksAddin(classe) \
 \
 \
declare_TIE_CATIAfrGeneralWksAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrGeneralWksAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrGeneralWksAddin,"CATIAfrGeneralWksAddin",CATIAfrGeneralWksAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrGeneralWksAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAfrGeneralWksAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrGeneralWksAddin##classe(classe::MetaObject(),CATIAfrGeneralWksAddin::MetaObject(),(void *)CreateTIECATIAfrGeneralWksAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAfrGeneralWksAddin(classe) \
 \
 \
declare_TIE_CATIAfrGeneralWksAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrGeneralWksAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrGeneralWksAddin,"CATIAfrGeneralWksAddin",CATIAfrGeneralWksAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrGeneralWksAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAfrGeneralWksAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrGeneralWksAddin##classe(classe::MetaObject(),CATIAfrGeneralWksAddin::MetaObject(),(void *)CreateTIECATIAfrGeneralWksAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAfrGeneralWksAddin(classe) TIE_CATIAfrGeneralWksAddin(classe)
#else
#define BOA_CATIAfrGeneralWksAddin(classe) CATImplementBOA(CATIAfrGeneralWksAddin, classe)
#endif

#endif
