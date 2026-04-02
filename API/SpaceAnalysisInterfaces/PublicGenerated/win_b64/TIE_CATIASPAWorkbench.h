#ifndef __TIE_CATIASPAWorkbench
#define __TIE_CATIASPAWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASPAWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASPAWorkbench */
#define declare_TIE_CATIASPAWorkbench(classe) \
 \
 \
class TIECATIASPAWorkbench##classe : public CATIASPAWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASPAWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetMeasurable(CATIAReference * iMeasuredItem, CATIAMeasurable *& oMeasurable); \
      virtual HRESULT __stdcall GetMeasurableInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATIAMeasurable *& oMeasurable); \
      virtual HRESULT __stdcall get_Inertias(CATIAInertias *& oInertias); \
      virtual HRESULT __stdcall get_Clashes(CATIAClashes *& oClashes); \
      virtual HRESULT __stdcall get_Sections(CATIASections *& oSections); \
      virtual HRESULT __stdcall get_Distances(CATIADistances *& oDistances); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASPAWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetMeasurable(CATIAReference * iMeasuredItem, CATIAMeasurable *& oMeasurable); \
virtual HRESULT __stdcall GetMeasurableInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATIAMeasurable *& oMeasurable); \
virtual HRESULT __stdcall get_Inertias(CATIAInertias *& oInertias); \
virtual HRESULT __stdcall get_Clashes(CATIAClashes *& oClashes); \
virtual HRESULT __stdcall get_Sections(CATIASections *& oSections); \
virtual HRESULT __stdcall get_Distances(CATIADistances *& oDistances); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASPAWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetMeasurable(CATIAReference * iMeasuredItem, CATIAMeasurable *& oMeasurable) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)GetMeasurable(iMeasuredItem,oMeasurable)); \
} \
HRESULT __stdcall  ENVTIEName::GetMeasurableInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATIAMeasurable *& oMeasurable) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)GetMeasurableInContext(iMeasuredItem,iProductInstance,oMeasurable)); \
} \
HRESULT __stdcall  ENVTIEName::get_Inertias(CATIAInertias *& oInertias) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Inertias(oInertias)); \
} \
HRESULT __stdcall  ENVTIEName::get_Clashes(CATIAClashes *& oClashes) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Clashes(oClashes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sections(CATIASections *& oSections) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Sections(oSections)); \
} \
HRESULT __stdcall  ENVTIEName::get_Distances(CATIADistances *& oDistances) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Distances(oDistances)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASPAWorkbench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASPAWorkbench(classe)    TIECATIASPAWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASPAWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASPAWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIASPAWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASPAWorkbench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASPAWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASPAWorkbench, classe) \
 \
HRESULT __stdcall  TIECATIASPAWorkbench##classe::GetMeasurable(CATIAReference * iMeasuredItem, CATIAMeasurable *& oMeasurable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iMeasuredItem,&oMeasurable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMeasurable(iMeasuredItem,oMeasurable); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iMeasuredItem,&oMeasurable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASPAWorkbench##classe::GetMeasurableInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATIAMeasurable *& oMeasurable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMeasuredItem,&iProductInstance,&oMeasurable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMeasurableInContext(iMeasuredItem,iProductInstance,oMeasurable); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMeasuredItem,&iProductInstance,&oMeasurable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASPAWorkbench##classe::get_Inertias(CATIAInertias *& oInertias) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oInertias); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Inertias(oInertias); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oInertias); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASPAWorkbench##classe::get_Clashes(CATIAClashes *& oClashes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oClashes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Clashes(oClashes); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oClashes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASPAWorkbench##classe::get_Sections(CATIASections *& oSections) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSections); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sections(oSections); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSections); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASPAWorkbench##classe::get_Distances(CATIADistances *& oDistances) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oDistances); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Distances(oDistances); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oDistances); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASPAWorkbench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASPAWorkbench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASPAWorkbench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASPAWorkbench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASPAWorkbench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASPAWorkbench(classe) \
 \
 \
declare_TIE_CATIASPAWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASPAWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASPAWorkbench,"CATIASPAWorkbench",CATIASPAWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASPAWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASPAWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASPAWorkbench##classe(classe::MetaObject(),CATIASPAWorkbench::MetaObject(),(void *)CreateTIECATIASPAWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASPAWorkbench(classe) \
 \
 \
declare_TIE_CATIASPAWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASPAWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASPAWorkbench,"CATIASPAWorkbench",CATIASPAWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASPAWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASPAWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASPAWorkbench##classe(classe::MetaObject(),CATIASPAWorkbench::MetaObject(),(void *)CreateTIECATIASPAWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASPAWorkbench(classe) TIE_CATIASPAWorkbench(classe)
#else
#define BOA_CATIASPAWorkbench(classe) CATImplementBOA(CATIASPAWorkbench, classe)
#endif

#endif
