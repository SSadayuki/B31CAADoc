#ifndef __TIE_CATIAPspClass
#define __TIE_CATIAPspClass

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspClass.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspClass */
#define declare_TIE_CATIAPspClass(classe) \
 \
 \
class TIECATIAPspClass##classe : public CATIAPspClass \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspClass, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_StartUpPhysicals(CATIAPspListOfBSTRs *& oListPhysicals); \
      virtual HRESULT __stdcall get_StartUpFunctions(CATIAPspListOfBSTRs *& oListFunctions); \
      virtual HRESULT __stdcall get_StartUpConnectors(CATIAPspListOfBSTRs *& oListConnectors); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_StartUpPhysicals(CATIAPspListOfBSTRs *& oListPhysicals); \
virtual HRESULT __stdcall get_StartUpFunctions(CATIAPspListOfBSTRs *& oListFunctions); \
virtual HRESULT __stdcall get_StartUpConnectors(CATIAPspListOfBSTRs *& oListConnectors); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_StartUpPhysicals(CATIAPspListOfBSTRs *& oListPhysicals) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)get_StartUpPhysicals(oListPhysicals)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartUpFunctions(CATIAPspListOfBSTRs *& oListFunctions) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)get_StartUpFunctions(oListFunctions)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartUpConnectors(CATIAPspListOfBSTRs *& oListConnectors) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)get_StartUpConnectors(oListConnectors)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspClass,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspClass(classe)    TIECATIAPspClass##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspClass(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspClass, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspClass, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspClass, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspClass, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspClass, classe) \
 \
HRESULT __stdcall  TIECATIAPspClass##classe::get_StartUpPhysicals(CATIAPspListOfBSTRs *& oListPhysicals) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListPhysicals); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartUpPhysicals(oListPhysicals); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListPhysicals); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspClass##classe::get_StartUpFunctions(CATIAPspListOfBSTRs *& oListFunctions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oListFunctions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartUpFunctions(oListFunctions); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oListFunctions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspClass##classe::get_StartUpConnectors(CATIAPspListOfBSTRs *& oListConnectors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oListConnectors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartUpConnectors(oListConnectors); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oListConnectors); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspClass##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspClass##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspClass##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspClass##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspClass##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspClass(classe) \
 \
 \
declare_TIE_CATIAPspClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspClass,"CATIAPspClass",CATIAPspClass::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspClass##classe(classe::MetaObject(),CATIAPspClass::MetaObject(),(void *)CreateTIECATIAPspClass##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspClass(classe) \
 \
 \
declare_TIE_CATIAPspClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspClass,"CATIAPspClass",CATIAPspClass::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspClass##classe(classe::MetaObject(),CATIAPspClass::MetaObject(),(void *)CreateTIECATIAPspClass##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspClass(classe) TIE_CATIAPspClass(classe)
#else
#define BOA_CATIAPspClass(classe) CATImplementBOA(CATIAPspClass, classe)
#endif

#endif
