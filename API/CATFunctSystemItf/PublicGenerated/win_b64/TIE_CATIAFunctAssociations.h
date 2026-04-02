#ifndef __TIE_CATIAFunctAssociations
#define __TIE_CATIAFunctAssociations

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctAssociations.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctAssociations */
#define declare_TIE_CATIAFunctAssociations(classe) \
 \
 \
class TIECATIAFunctAssociations##classe : public CATIAFunctAssociations \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctAssociations, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctAssociation *& oAssociation); \
      virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctAssociation *& oAssociation); \
      virtual HRESULT __stdcall Delete(CATIAFunctAssociation * iAssociation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFunctAssociations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctAssociation *& oAssociation); \
virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctAssociation *& oAssociation); \
virtual HRESULT __stdcall Delete(CATIAFunctAssociation * iAssociation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFunctAssociations(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Elem(const CATVariant & iIndex, CATIAFunctAssociation *& oAssociation) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)Elem(iIndex,oAssociation)); \
} \
HRESULT __stdcall  ENVTIEName::Create(const CATBSTR & iName, CATIAFunctAssociation *& oAssociation) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)Create(iName,oAssociation)); \
} \
HRESULT __stdcall  ENVTIEName::Delete(CATIAFunctAssociation * iAssociation) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)Delete(iAssociation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFunctAssociations,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctAssociations(classe)    TIECATIAFunctAssociations##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctAssociations(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctAssociations, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctAssociations, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctAssociations, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctAssociations, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctAssociations, classe) \
 \
HRESULT __stdcall  TIECATIAFunctAssociations##classe::Elem(const CATVariant & iIndex, CATIAFunctAssociation *& oAssociation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oAssociation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Elem(iIndex,oAssociation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oAssociation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctAssociations##classe::Create(const CATBSTR & iName, CATIAFunctAssociation *& oAssociation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&oAssociation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create(iName,oAssociation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&oAssociation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctAssociations##classe::Delete(CATIAFunctAssociation * iAssociation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAssociation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete(iAssociation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAssociation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociations##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociations##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociations##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociations##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociations##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociations##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctAssociations(classe) \
 \
 \
declare_TIE_CATIAFunctAssociations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctAssociations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctAssociations,"CATIAFunctAssociations",CATIAFunctAssociations::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctAssociations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctAssociations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctAssociations##classe(classe::MetaObject(),CATIAFunctAssociations::MetaObject(),(void *)CreateTIECATIAFunctAssociations##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctAssociations(classe) \
 \
 \
declare_TIE_CATIAFunctAssociations(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctAssociations##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctAssociations,"CATIAFunctAssociations",CATIAFunctAssociations::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctAssociations(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctAssociations, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctAssociations##classe(classe::MetaObject(),CATIAFunctAssociations::MetaObject(),(void *)CreateTIECATIAFunctAssociations##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctAssociations(classe) TIE_CATIAFunctAssociations(classe)
#else
#define BOA_CATIAFunctAssociations(classe) CATImplementBOA(CATIAFunctAssociations, classe)
#endif

#endif
