#ifndef __TIE_CATISchAppAddCommand
#define __TIE_CATISchAppAddCommand

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppAddCommand.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppAddCommand */
#define declare_TIE_CATISchAppAddCommand(classe) \
 \
 \
class TIECATISchAppAddCommand##classe : public CATISchAppAddCommand \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppAddCommand, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetApplicationCommand (CATCommandMode *iCommandMode, const char *iApplicationName, CATISchAppAddCATStateCommand **oAppCATStateCommand) ; \
};



#define ENVTIEdeclare_CATISchAppAddCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetApplicationCommand (CATCommandMode *iCommandMode, const char *iApplicationName, CATISchAppAddCATStateCommand **oAppCATStateCommand) ; \


#define ENVTIEdefine_CATISchAppAddCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetApplicationCommand (CATCommandMode *iCommandMode, const char *iApplicationName, CATISchAppAddCATStateCommand **oAppCATStateCommand)  \
{ \
return (ENVTIECALL(CATISchAppAddCommand,ENVTIETypeLetter,ENVTIELetter)AppGetApplicationCommand (iCommandMode,iApplicationName,oAppCATStateCommand)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppAddCommand(classe)    TIECATISchAppAddCommand##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppAddCommand(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppAddCommand, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppAddCommand, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppAddCommand, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppAddCommand, classe) \
 \
HRESULT  TIECATISchAppAddCommand##classe::AppGetApplicationCommand (CATCommandMode *iCommandMode, const char *iApplicationName, CATISchAppAddCATStateCommand **oAppCATStateCommand)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetApplicationCommand (iCommandMode,iApplicationName,oAppCATStateCommand)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppAddCommand(classe) \
 \
 \
declare_TIE_CATISchAppAddCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAddCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAddCommand,"CATISchAppAddCommand",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAddCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppAddCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAddCommand##classe(classe::MetaObject(),TIECATISchAppAddCommand##classe::MetaObject(),(void *)CreateTIECATISchAppAddCommand##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppAddCommand(classe) \
 \
 \
declare_TIE_CATISchAppAddCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAddCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAddCommand,"CATISchAppAddCommand",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAddCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppAddCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAddCommand##classe(classe::MetaObject(),TIECATISchAppAddCommand##classe::MetaObject(),(void *)CreateTIECATISchAppAddCommand##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppAddCommand(classe) TIE_CATISchAppAddCommand(classe)
#else
#define BOA_CATISchAppAddCommand(classe) CATImplementBOA(CATISchAppAddCommand, classe)
#endif

#endif
