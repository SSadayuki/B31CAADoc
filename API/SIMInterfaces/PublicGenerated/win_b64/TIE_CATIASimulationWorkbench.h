#ifndef __TIE_CATIASimulationWorkbench
#define __TIE_CATIASimulationWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASimulationWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASimulationWorkbench */
#define declare_TIE_CATIASimulationWorkbench(classe) \
 \
 \
class TIECATIASimulationWorkbench##classe : public CATIASimulationWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASimulationWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SimulationPlayer(CATIASIMPlayer *& oPlayer); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASimulationWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SimulationPlayer(CATIASIMPlayer *& oPlayer); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASimulationWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SimulationPlayer(CATIASIMPlayer *& oPlayer) \
{ \
return (ENVTIECALL(CATIASimulationWorkbench,ENVTIETypeLetter,ENVTIELetter)get_SimulationPlayer(oPlayer)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASimulationWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASimulationWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASimulationWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASimulationWorkbench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASimulationWorkbench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASimulationWorkbench(classe)    TIECATIASimulationWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASimulationWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASimulationWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIASimulationWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASimulationWorkbench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASimulationWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASimulationWorkbench, classe) \
 \
HRESULT __stdcall  TIECATIASimulationWorkbench##classe::get_SimulationPlayer(CATIASIMPlayer *& oPlayer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPlayer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SimulationPlayer(oPlayer); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPlayer); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimulationWorkbench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimulationWorkbench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimulationWorkbench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimulationWorkbench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimulationWorkbench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASimulationWorkbench(classe) \
 \
 \
declare_TIE_CATIASimulationWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASimulationWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASimulationWorkbench,"CATIASimulationWorkbench",CATIASimulationWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASimulationWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASimulationWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASimulationWorkbench##classe(classe::MetaObject(),CATIASimulationWorkbench::MetaObject(),(void *)CreateTIECATIASimulationWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASimulationWorkbench(classe) \
 \
 \
declare_TIE_CATIASimulationWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASimulationWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASimulationWorkbench,"CATIASimulationWorkbench",CATIASimulationWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASimulationWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASimulationWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASimulationWorkbench##classe(classe::MetaObject(),CATIASimulationWorkbench::MetaObject(),(void *)CreateTIECATIASimulationWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASimulationWorkbench(classe) TIE_CATIASimulationWorkbench(classe)
#else
#define BOA_CATIASimulationWorkbench(classe) CATImplementBOA(CATIASimulationWorkbench, classe)
#endif

#endif
