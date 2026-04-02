#ifndef __TIE_CATIRepeatableCommand
#define __TIE_CATIRepeatableCommand

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIRepeatableCommand.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIRepeatableCommand */
#define declare_TIE_CATIRepeatableCommand(classe) \
 \
 \
class TIECATIRepeatableCommand##classe : public CATIRepeatableCommand \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIRepeatableCommand, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void RepeatCommand() ; \
};



#define ENVTIEdeclare_CATIRepeatableCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void RepeatCommand() ; \


#define ENVTIEdefine_CATIRepeatableCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::RepeatCommand()  \
{ \
 (ENVTIECALL(CATIRepeatableCommand,ENVTIETypeLetter,ENVTIELetter)RepeatCommand()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIRepeatableCommand(classe)    TIECATIRepeatableCommand##classe


/* Common methods inside a TIE */
#define common_TIE_CATIRepeatableCommand(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIRepeatableCommand, classe) \
 \
 \
CATImplementTIEMethods(CATIRepeatableCommand, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIRepeatableCommand, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIRepeatableCommand, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIRepeatableCommand, classe) \
 \
void  TIECATIRepeatableCommand##classe::RepeatCommand()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RepeatCommand(); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIRepeatableCommand(classe) \
 \
 \
declare_TIE_CATIRepeatableCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIRepeatableCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIRepeatableCommand,"CATIRepeatableCommand",CATIRepeatableCommand::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIRepeatableCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIRepeatableCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIRepeatableCommand##classe(classe::MetaObject(),CATIRepeatableCommand::MetaObject(),(void *)CreateTIECATIRepeatableCommand##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIRepeatableCommand(classe) \
 \
 \
declare_TIE_CATIRepeatableCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIRepeatableCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIRepeatableCommand,"CATIRepeatableCommand",CATIRepeatableCommand::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIRepeatableCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIRepeatableCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIRepeatableCommand##classe(classe::MetaObject(),CATIRepeatableCommand::MetaObject(),(void *)CreateTIECATIRepeatableCommand##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIRepeatableCommand(classe) TIE_CATIRepeatableCommand(classe)
#else
#define BOA_CATIRepeatableCommand(classe) CATImplementBOA(CATIRepeatableCommand, classe)
#endif

#endif
