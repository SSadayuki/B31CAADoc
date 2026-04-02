#ifndef __TIE_CATICloudEditorAddin
#define __TIE_CATICloudEditorAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICloudEditorAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICloudEditorAddin */
#define declare_TIE_CATICloudEditorAddin(classe) \
 \
 \
class TIECATICloudEditorAddin##classe : public CATICloudEditorAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICloudEditorAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICloudEditorAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICloudEditorAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICloudEditorAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICloudEditorAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICloudEditorAddin(classe)    TIECATICloudEditorAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICloudEditorAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICloudEditorAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICloudEditorAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICloudEditorAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICloudEditorAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICloudEditorAddin, classe) \
 \
void               TIECATICloudEditorAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICloudEditorAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICloudEditorAddin(classe) \
 \
 \
declare_TIE_CATICloudEditorAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloudEditorAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloudEditorAddin,"CATICloudEditorAddin",CATICloudEditorAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloudEditorAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICloudEditorAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloudEditorAddin##classe(classe::MetaObject(),CATICloudEditorAddin::MetaObject(),(void *)CreateTIECATICloudEditorAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICloudEditorAddin(classe) \
 \
 \
declare_TIE_CATICloudEditorAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloudEditorAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloudEditorAddin,"CATICloudEditorAddin",CATICloudEditorAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloudEditorAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICloudEditorAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloudEditorAddin##classe(classe::MetaObject(),CATICloudEditorAddin::MetaObject(),(void *)CreateTIECATICloudEditorAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICloudEditorAddin(classe) TIE_CATICloudEditorAddin(classe)
#else
#define BOA_CATICloudEditorAddin(classe) CATImplementBOA(CATICloudEditorAddin, classe)
#endif

#endif
