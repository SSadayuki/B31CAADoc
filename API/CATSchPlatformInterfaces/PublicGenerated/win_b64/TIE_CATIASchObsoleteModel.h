#ifndef __TIE_CATIASchObsoleteModel
#define __TIE_CATIASchObsoleteModel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchObsoleteModel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchObsoleteModel */
#define declare_TIE_CATIASchObsoleteModel(classe) \
 \
 \
class TIECATIASchObsoleteModel##classe : public CATIASchObsoleteModel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchObsoleteModel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall FindObsoleteClasses(CATIASchListOfObjects *& oListObsoleteObj); \
      virtual HRESULT __stdcall HasObsoleteClass(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchObsoleteModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall FindObsoleteClasses(CATIASchListOfObjects *& oListObsoleteObj); \
virtual HRESULT __stdcall HasObsoleteClass(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchObsoleteModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::FindObsoleteClasses(CATIASchListOfObjects *& oListObsoleteObj) \
{ \
return (ENVTIECALL(CATIASchObsoleteModel,ENVTIETypeLetter,ENVTIELetter)FindObsoleteClasses(oListObsoleteObj)); \
} \
HRESULT __stdcall  ENVTIEName::HasObsoleteClass(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchObsoleteModel,ENVTIETypeLetter,ENVTIELetter)HasObsoleteClass(oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchObsoleteModel,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchObsoleteModel,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchObsoleteModel,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchObsoleteModel,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchObsoleteModel,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchObsoleteModel(classe)    TIECATIASchObsoleteModel##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchObsoleteModel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchObsoleteModel, classe) \
 \
 \
CATImplementTIEMethods(CATIASchObsoleteModel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchObsoleteModel, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchObsoleteModel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchObsoleteModel, classe) \
 \
HRESULT __stdcall  TIECATIASchObsoleteModel##classe::FindObsoleteClasses(CATIASchListOfObjects *& oListObsoleteObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListObsoleteObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindObsoleteClasses(oListObsoleteObj); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListObsoleteObj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchObsoleteModel##classe::HasObsoleteClass(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasObsoleteClass(oBYes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchObsoleteModel##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchObsoleteModel##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchObsoleteModel##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchObsoleteModel##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchObsoleteModel##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchObsoleteModel(classe) \
 \
 \
declare_TIE_CATIASchObsoleteModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchObsoleteModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchObsoleteModel,"CATIASchObsoleteModel",CATIASchObsoleteModel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchObsoleteModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchObsoleteModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchObsoleteModel##classe(classe::MetaObject(),CATIASchObsoleteModel::MetaObject(),(void *)CreateTIECATIASchObsoleteModel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchObsoleteModel(classe) \
 \
 \
declare_TIE_CATIASchObsoleteModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchObsoleteModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchObsoleteModel,"CATIASchObsoleteModel",CATIASchObsoleteModel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchObsoleteModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchObsoleteModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchObsoleteModel##classe(classe::MetaObject(),CATIASchObsoleteModel::MetaObject(),(void *)CreateTIECATIASchObsoleteModel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchObsoleteModel(classe) TIE_CATIASchObsoleteModel(classe)
#else
#define BOA_CATIASchObsoleteModel(classe) CATImplementBOA(CATIASchObsoleteModel, classe)
#endif

#endif
