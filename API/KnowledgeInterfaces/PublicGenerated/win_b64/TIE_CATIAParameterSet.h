#ifndef __TIE_CATIAParameterSet
#define __TIE_CATIAParameterSet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAParameterSet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAParameterSet */
#define declare_TIE_CATIAParameterSet(classe) \
 \
 \
class TIECATIAParameterSet##classe : public CATIAParameterSet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAParameterSet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ParameterSets(CATIAParameterSets *& oParameterSets); \
      virtual HRESULT __stdcall get_DirectParameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall get_AllParameters(CATIAParameters *& oParameters); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAParameterSet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ParameterSets(CATIAParameterSets *& oParameterSets); \
virtual HRESULT __stdcall get_DirectParameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall get_AllParameters(CATIAParameters *& oParameters); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAParameterSet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ParameterSets(CATIAParameterSets *& oParameterSets) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)get_ParameterSets(oParameterSets)); \
} \
HRESULT __stdcall  ENVTIEName::get_DirectParameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)get_DirectParameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllParameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)get_AllParameters(oParameters)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAParameterSet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAParameterSet(classe)    TIECATIAParameterSet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAParameterSet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAParameterSet, classe) \
 \
 \
CATImplementTIEMethods(CATIAParameterSet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAParameterSet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAParameterSet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAParameterSet, classe) \
 \
HRESULT __stdcall  TIECATIAParameterSet##classe::get_ParameterSets(CATIAParameterSets *& oParameterSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oParameterSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterSets(oParameterSets); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oParameterSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameterSet##classe::get_DirectParameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectParameters(oParameters); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAParameterSet##classe::get_AllParameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllParameters(oParameters); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameterSet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameterSet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameterSet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameterSet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAParameterSet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAParameterSet(classe) \
 \
 \
declare_TIE_CATIAParameterSet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAParameterSet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAParameterSet,"CATIAParameterSet",CATIAParameterSet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAParameterSet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAParameterSet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAParameterSet##classe(classe::MetaObject(),CATIAParameterSet::MetaObject(),(void *)CreateTIECATIAParameterSet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAParameterSet(classe) \
 \
 \
declare_TIE_CATIAParameterSet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAParameterSet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAParameterSet,"CATIAParameterSet",CATIAParameterSet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAParameterSet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAParameterSet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAParameterSet##classe(classe::MetaObject(),CATIAParameterSet::MetaObject(),(void *)CreateTIECATIAParameterSet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAParameterSet(classe) TIE_CATIAParameterSet(classe)
#else
#define BOA_CATIAParameterSet(classe) CATImplementBOA(CATIAParameterSet, classe)
#endif

#endif
