#ifndef __TIE_CATIASelectionSets
#define __TIE_CATIASelectionSets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASelectionSets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASelectionSets */
#define declare_TIE_CATIASelectionSets(classe) \
 \
 \
class TIECATIASelectionSets##classe : public CATIASelectionSets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASelectionSets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetListOfSelectionSet(CATSafeArrayVariant & oListOfSelectionSet); \
      virtual HRESULT __stdcall CreateSelectionSet(const CATBSTR & iSelSetName); \
      virtual HRESULT __stdcall DeleteSelectionSet(const CATBSTR & iSelSetName); \
      virtual HRESULT __stdcall AddCSOIntoSelectionSet(const CATBSTR & iSelSetName); \
      virtual HRESULT __stdcall PutSelectionSetIntoCSO(const CATBSTR & iSelSetName); \
      virtual HRESULT __stdcall RenameSelectionSet(const CATBSTR & iOldSelSetName, const CATBSTR & iNewSelSetName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASelectionSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetListOfSelectionSet(CATSafeArrayVariant & oListOfSelectionSet); \
virtual HRESULT __stdcall CreateSelectionSet(const CATBSTR & iSelSetName); \
virtual HRESULT __stdcall DeleteSelectionSet(const CATBSTR & iSelSetName); \
virtual HRESULT __stdcall AddCSOIntoSelectionSet(const CATBSTR & iSelSetName); \
virtual HRESULT __stdcall PutSelectionSetIntoCSO(const CATBSTR & iSelSetName); \
virtual HRESULT __stdcall RenameSelectionSet(const CATBSTR & iOldSelSetName, const CATBSTR & iNewSelSetName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASelectionSets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetListOfSelectionSet(CATSafeArrayVariant & oListOfSelectionSet) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)GetListOfSelectionSet(oListOfSelectionSet)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSelectionSet(const CATBSTR & iSelSetName) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)CreateSelectionSet(iSelSetName)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteSelectionSet(const CATBSTR & iSelSetName) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)DeleteSelectionSet(iSelSetName)); \
} \
HRESULT __stdcall  ENVTIEName::AddCSOIntoSelectionSet(const CATBSTR & iSelSetName) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)AddCSOIntoSelectionSet(iSelSetName)); \
} \
HRESULT __stdcall  ENVTIEName::PutSelectionSetIntoCSO(const CATBSTR & iSelSetName) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)PutSelectionSetIntoCSO(iSelSetName)); \
} \
HRESULT __stdcall  ENVTIEName::RenameSelectionSet(const CATBSTR & iOldSelSetName, const CATBSTR & iNewSelSetName) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)RenameSelectionSet(iOldSelSetName,iNewSelSetName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASelectionSets,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASelectionSets(classe)    TIECATIASelectionSets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASelectionSets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASelectionSets, classe) \
 \
 \
CATImplementTIEMethods(CATIASelectionSets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASelectionSets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASelectionSets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASelectionSets, classe) \
 \
HRESULT __stdcall  TIECATIASelectionSets##classe::GetListOfSelectionSet(CATSafeArrayVariant & oListOfSelectionSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListOfSelectionSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfSelectionSet(oListOfSelectionSet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListOfSelectionSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectionSets##classe::CreateSelectionSet(const CATBSTR & iSelSetName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSelSetName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSelectionSet(iSelSetName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSelSetName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectionSets##classe::DeleteSelectionSet(const CATBSTR & iSelSetName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iSelSetName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteSelectionSet(iSelSetName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iSelSetName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectionSets##classe::AddCSOIntoSelectionSet(const CATBSTR & iSelSetName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSelSetName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCSOIntoSelectionSet(iSelSetName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSelSetName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectionSets##classe::PutSelectionSetIntoCSO(const CATBSTR & iSelSetName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSelSetName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutSelectionSetIntoCSO(iSelSetName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSelSetName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectionSets##classe::RenameSelectionSet(const CATBSTR & iOldSelSetName, const CATBSTR & iNewSelSetName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOldSelSetName,&iNewSelSetName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RenameSelectionSet(iOldSelSetName,iNewSelSetName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOldSelSetName,&iNewSelSetName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectionSets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectionSets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectionSets##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectionSets##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectionSets##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASelectionSets(classe) \
 \
 \
declare_TIE_CATIASelectionSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASelectionSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASelectionSets,"CATIASelectionSets",CATIASelectionSets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASelectionSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASelectionSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASelectionSets##classe(classe::MetaObject(),CATIASelectionSets::MetaObject(),(void *)CreateTIECATIASelectionSets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASelectionSets(classe) \
 \
 \
declare_TIE_CATIASelectionSets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASelectionSets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASelectionSets,"CATIASelectionSets",CATIASelectionSets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASelectionSets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASelectionSets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASelectionSets##classe(classe::MetaObject(),CATIASelectionSets::MetaObject(),(void *)CreateTIECATIASelectionSets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASelectionSets(classe) TIE_CATIASelectionSets(classe)
#else
#define BOA_CATIASelectionSets(classe) CATImplementBOA(CATIASelectionSets, classe)
#endif

#endif
