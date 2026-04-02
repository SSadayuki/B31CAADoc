#ifndef __TIE_CATIAFunctActionsGroups
#define __TIE_CATIAFunctActionsGroups

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctActionsGroups.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctActionsGroups */
#define declare_TIE_CATIAFunctActionsGroups(classe) \
 \
 \
class TIECATIAFunctActionsGroups##classe : public CATIAFunctActionsGroups \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctActionsGroups, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctActionsGroup *& oActGrp); \
      virtual HRESULT __stdcall Create(const CATBSTR & iName, double iInputX, double iInputY, double iOutputX, double iOutputY, CATIAFunctActionsGroup *& oActGrp); \
      virtual HRESULT __stdcall Delete(CATIAFunctActionsGroup * iActGrp); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFunctActionsGroups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctActionsGroup *& oActGrp); \
virtual HRESULT __stdcall Create(const CATBSTR & iName, double iInputX, double iInputY, double iOutputX, double iOutputY, CATIAFunctActionsGroup *& oActGrp); \
virtual HRESULT __stdcall Delete(CATIAFunctActionsGroup * iActGrp); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFunctActionsGroups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Elem(const CATVariant & iIndex, CATIAFunctActionsGroup *& oActGrp) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)Elem(iIndex,oActGrp)); \
} \
HRESULT __stdcall  ENVTIEName::Create(const CATBSTR & iName, double iInputX, double iInputY, double iOutputX, double iOutputY, CATIAFunctActionsGroup *& oActGrp) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)Create(iName,iInputX,iInputY,iOutputX,iOutputY,oActGrp)); \
} \
HRESULT __stdcall  ENVTIEName::Delete(CATIAFunctActionsGroup * iActGrp) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)Delete(iActGrp)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroups,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctActionsGroups(classe)    TIECATIAFunctActionsGroups##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctActionsGroups(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctActionsGroups, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctActionsGroups, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctActionsGroups, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctActionsGroups, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctActionsGroups, classe) \
 \
HRESULT __stdcall  TIECATIAFunctActionsGroups##classe::Elem(const CATVariant & iIndex, CATIAFunctActionsGroup *& oActGrp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oActGrp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Elem(iIndex,oActGrp); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oActGrp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroups##classe::Create(const CATBSTR & iName, double iInputX, double iInputY, double iOutputX, double iOutputY, CATIAFunctActionsGroup *& oActGrp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&iInputX,&iInputY,&iOutputX,&iOutputY,&oActGrp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create(iName,iInputX,iInputY,iOutputX,iOutputY,oActGrp); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&iInputX,&iInputY,&iOutputX,&iOutputY,&oActGrp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroups##classe::Delete(CATIAFunctActionsGroup * iActGrp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iActGrp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete(iActGrp); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iActGrp); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroups##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroups##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroups##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroups##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroups##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroups##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctActionsGroups(classe) \
 \
 \
declare_TIE_CATIAFunctActionsGroups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctActionsGroups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctActionsGroups,"CATIAFunctActionsGroups",CATIAFunctActionsGroups::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctActionsGroups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctActionsGroups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctActionsGroups##classe(classe::MetaObject(),CATIAFunctActionsGroups::MetaObject(),(void *)CreateTIECATIAFunctActionsGroups##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctActionsGroups(classe) \
 \
 \
declare_TIE_CATIAFunctActionsGroups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctActionsGroups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctActionsGroups,"CATIAFunctActionsGroups",CATIAFunctActionsGroups::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctActionsGroups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctActionsGroups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctActionsGroups##classe(classe::MetaObject(),CATIAFunctActionsGroups::MetaObject(),(void *)CreateTIECATIAFunctActionsGroups##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctActionsGroups(classe) TIE_CATIAFunctActionsGroups(classe)
#else
#define BOA_CATIAFunctActionsGroups(classe) CATImplementBOA(CATIAFunctActionsGroups, classe)
#endif

#endif
