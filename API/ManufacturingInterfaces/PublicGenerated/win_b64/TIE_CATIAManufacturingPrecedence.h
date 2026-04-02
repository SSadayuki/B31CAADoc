#ifndef __TIE_CATIAManufacturingPrecedence
#define __TIE_CATIAManufacturingPrecedence

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingPrecedence.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingPrecedence */
#define declare_TIE_CATIAManufacturingPrecedence(classe) \
 \
 \
class TIECATIAManufacturingPrecedence##classe : public CATIAManufacturingPrecedence \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingPrecedence, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_TargetOperation(CATIAManufacturingActivity *& oTarget); \
      virtual HRESULT __stdcall get_PrecedenceType(CatManufacturingPrecedenceType & oType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingPrecedence(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_TargetOperation(CATIAManufacturingActivity *& oTarget); \
virtual HRESULT __stdcall get_PrecedenceType(CatManufacturingPrecedenceType & oType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingPrecedence(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_TargetOperation(CATIAManufacturingActivity *& oTarget) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedence,ENVTIETypeLetter,ENVTIELetter)get_TargetOperation(oTarget)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrecedenceType(CatManufacturingPrecedenceType & oType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedence,ENVTIETypeLetter,ENVTIELetter)get_PrecedenceType(oType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedence,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedence,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedence,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedence,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingPrecedence,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingPrecedence(classe)    TIECATIAManufacturingPrecedence##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingPrecedence(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingPrecedence, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingPrecedence, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingPrecedence, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingPrecedence, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingPrecedence, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingPrecedence##classe::get_TargetOperation(CATIAManufacturingActivity *& oTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TargetOperation(oTarget); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrecedence##classe::get_PrecedenceType(CatManufacturingPrecedenceType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrecedenceType(oType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedence##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedence##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedence##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedence##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrecedence##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingPrecedence(classe) \
 \
 \
declare_TIE_CATIAManufacturingPrecedence(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPrecedence##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPrecedence,"CATIAManufacturingPrecedence",CATIAManufacturingPrecedence::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPrecedence(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingPrecedence, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPrecedence##classe(classe::MetaObject(),CATIAManufacturingPrecedence::MetaObject(),(void *)CreateTIECATIAManufacturingPrecedence##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingPrecedence(classe) \
 \
 \
declare_TIE_CATIAManufacturingPrecedence(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPrecedence##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPrecedence,"CATIAManufacturingPrecedence",CATIAManufacturingPrecedence::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPrecedence(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingPrecedence, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPrecedence##classe(classe::MetaObject(),CATIAManufacturingPrecedence::MetaObject(),(void *)CreateTIECATIAManufacturingPrecedence##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingPrecedence(classe) TIE_CATIAManufacturingPrecedence(classe)
#else
#define BOA_CATIAManufacturingPrecedence(classe) CATImplementBOA(CATIAManufacturingPrecedence, classe)
#endif

#endif
