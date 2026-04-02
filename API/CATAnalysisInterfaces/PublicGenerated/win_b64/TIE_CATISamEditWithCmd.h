#ifndef __TIE_CATISamEditWithCmd
#define __TIE_CATISamEditWithCmd

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEditWithCmd.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEditWithCmd */
#define declare_TIE_CATISamEditWithCmd(classe) \
 \
 \
class TIECATISamEditWithCmd##classe : public CATISamEditWithCmd \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEditWithCmd, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATStateCommand * GetCommand(CATCommandMode iStatus = CATCommandModeUndefined) ; \
};



#define ENVTIEdeclare_CATISamEditWithCmd(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATStateCommand * GetCommand(CATCommandMode iStatus = CATCommandModeUndefined) ; \


#define ENVTIEdefine_CATISamEditWithCmd(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATStateCommand *  ENVTIEName::GetCommand(CATCommandMode iStatus )  \
{ \
return (ENVTIECALL(CATISamEditWithCmd,ENVTIETypeLetter,ENVTIELetter)GetCommand(iStatus )); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEditWithCmd(classe)    TIECATISamEditWithCmd##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEditWithCmd(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEditWithCmd, classe) \
 \
 \
CATImplementTIEMethods(CATISamEditWithCmd, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEditWithCmd, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEditWithCmd, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEditWithCmd, classe) \
 \
CATStateCommand *  TIECATISamEditWithCmd##classe::GetCommand(CATCommandMode iStatus )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCommand(iStatus )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEditWithCmd(classe) \
 \
 \
declare_TIE_CATISamEditWithCmd(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditWithCmd##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditWithCmd,"CATISamEditWithCmd",CATISamEditWithCmd::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditWithCmd(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEditWithCmd, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditWithCmd##classe(classe::MetaObject(),CATISamEditWithCmd::MetaObject(),(void *)CreateTIECATISamEditWithCmd##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEditWithCmd(classe) \
 \
 \
declare_TIE_CATISamEditWithCmd(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditWithCmd##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditWithCmd,"CATISamEditWithCmd",CATISamEditWithCmd::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditWithCmd(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEditWithCmd, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditWithCmd##classe(classe::MetaObject(),CATISamEditWithCmd::MetaObject(),(void *)CreateTIECATISamEditWithCmd##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEditWithCmd(classe) TIE_CATISamEditWithCmd(classe)
#else
#define BOA_CATISamEditWithCmd(classe) CATImplementBOA(CATISamEditWithCmd, classe)
#endif

#endif
