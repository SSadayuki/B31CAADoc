#ifndef __TIE_CATISchAppAddCATStateCommand
#define __TIE_CATISchAppAddCATStateCommand

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppAddCATStateCommand.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppAddCATStateCommand */
#define declare_TIE_CATISchAppAddCATStateCommand(classe) \
 \
 \
class TIECATISchAppAddCATStateCommand##classe : public CATISchAppAddCATStateCommand \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppAddCATStateCommand, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetCATStateCommand (CATStateCommand **oAppCATStateCommand) ; \
};



#define ENVTIEdeclare_CATISchAppAddCATStateCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetCATStateCommand (CATStateCommand **oAppCATStateCommand) ; \


#define ENVTIEdefine_CATISchAppAddCATStateCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetCATStateCommand (CATStateCommand **oAppCATStateCommand)  \
{ \
return (ENVTIECALL(CATISchAppAddCATStateCommand,ENVTIETypeLetter,ENVTIELetter)AppGetCATStateCommand (oAppCATStateCommand)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppAddCATStateCommand(classe)    TIECATISchAppAddCATStateCommand##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppAddCATStateCommand(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppAddCATStateCommand, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppAddCATStateCommand, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppAddCATStateCommand, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppAddCATStateCommand, classe) \
 \
HRESULT  TIECATISchAppAddCATStateCommand##classe::AppGetCATStateCommand (CATStateCommand **oAppCATStateCommand)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetCATStateCommand (oAppCATStateCommand)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppAddCATStateCommand(classe) \
 \
 \
declare_TIE_CATISchAppAddCATStateCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAddCATStateCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAddCATStateCommand,"CATISchAppAddCATStateCommand",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAddCATStateCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppAddCATStateCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAddCATStateCommand##classe(classe::MetaObject(),TIECATISchAppAddCATStateCommand##classe::MetaObject(),(void *)CreateTIECATISchAppAddCATStateCommand##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppAddCATStateCommand(classe) \
 \
 \
declare_TIE_CATISchAppAddCATStateCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppAddCATStateCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppAddCATStateCommand,"CATISchAppAddCATStateCommand",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppAddCATStateCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppAddCATStateCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppAddCATStateCommand##classe(classe::MetaObject(),TIECATISchAppAddCATStateCommand##classe::MetaObject(),(void *)CreateTIECATISchAppAddCATStateCommand##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppAddCATStateCommand(classe) TIE_CATISchAppAddCATStateCommand(classe)
#else
#define BOA_CATISchAppAddCATStateCommand(classe) CATImplementBOA(CATISchAppAddCATStateCommand, classe)
#endif

#endif
