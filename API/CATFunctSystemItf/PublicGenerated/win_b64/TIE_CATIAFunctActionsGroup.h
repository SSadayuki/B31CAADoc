#ifndef __TIE_CATIAFunctActionsGroup
#define __TIE_CATIAFunctActionsGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctActionsGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctActionsGroup */
#define declare_TIE_CATIAFunctActionsGroup(classe) \
 \
 \
class TIECATIAFunctActionsGroup##classe : public CATIAFunctActionsGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctActionsGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ActionsCount(CATLONG & oCount); \
      virtual HRESULT __stdcall Retrieve(const CATVariant & iIndex, CATIAFunctionalAction *& oAction); \
      virtual HRESULT __stdcall Add(CATIAFunctionalAction * iAction); \
      virtual HRESULT __stdcall Remove(CATIAFunctionalAction * iAction); \
      virtual HRESULT __stdcall RemovePosition(CATLONG iPosition); \
      virtual HRESULT __stdcall GetExtremities(double & oInputX, double & oInputY, double & oOutputX, double & oOutputY); \
      virtual HRESULT __stdcall SetExtremities(double iInputX, double iInputY, double iOutputX, double iOutputY); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctActionsGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ActionsCount(CATLONG & oCount); \
virtual HRESULT __stdcall Retrieve(const CATVariant & iIndex, CATIAFunctionalAction *& oAction); \
virtual HRESULT __stdcall Add(CATIAFunctionalAction * iAction); \
virtual HRESULT __stdcall Remove(CATIAFunctionalAction * iAction); \
virtual HRESULT __stdcall RemovePosition(CATLONG iPosition); \
virtual HRESULT __stdcall GetExtremities(double & oInputX, double & oInputY, double & oOutputX, double & oOutputY); \
virtual HRESULT __stdcall SetExtremities(double iInputX, double iInputY, double iOutputX, double iOutputY); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctActionsGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ActionsCount(CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)get_ActionsCount(oCount)); \
} \
HRESULT __stdcall  ENVTIEName::Retrieve(const CATVariant & iIndex, CATIAFunctionalAction *& oAction) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)Retrieve(iIndex,oAction)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAFunctionalAction * iAction) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)Add(iAction)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATIAFunctionalAction * iAction) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)Remove(iAction)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePosition(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)RemovePosition(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetExtremities(double & oInputX, double & oInputY, double & oOutputX, double & oOutputY) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)GetExtremities(oInputX,oInputY,oOutputX,oOutputY)); \
} \
HRESULT __stdcall  ENVTIEName::SetExtremities(double iInputX, double iInputY, double iOutputX, double iOutputY) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)SetExtremities(iInputX,iInputY,iOutputX,iOutputY)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctActionsGroup,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctActionsGroup(classe)    TIECATIAFunctActionsGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctActionsGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctActionsGroup, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctActionsGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctActionsGroup, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctActionsGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctActionsGroup, classe) \
 \
HRESULT __stdcall  TIECATIAFunctActionsGroup##classe::get_ActionsCount(CATLONG & oCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActionsCount(oCount); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroup##classe::Retrieve(const CATVariant & iIndex, CATIAFunctionalAction *& oAction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oAction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Retrieve(iIndex,oAction); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oAction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroup##classe::Add(CATIAFunctionalAction * iAction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iAction); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroup##classe::Remove(CATIAFunctionalAction * iAction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iAction); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroup##classe::RemovePosition(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePosition(iPosition); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroup##classe::GetExtremities(double & oInputX, double & oInputY, double & oOutputX, double & oOutputY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oInputX,&oInputY,&oOutputX,&oOutputY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtremities(oInputX,oInputY,oOutputX,oOutputY); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oInputX,&oInputY,&oOutputX,&oOutputY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctActionsGroup##classe::SetExtremities(double iInputX, double iInputY, double iOutputX, double iOutputY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iInputX,&iInputY,&iOutputX,&iOutputY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExtremities(iInputX,iInputY,iOutputX,iOutputY); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iInputX,&iInputY,&iOutputX,&iOutputY); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroup##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroup##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroup##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroup##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctActionsGroup##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctActionsGroup(classe) \
 \
 \
declare_TIE_CATIAFunctActionsGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctActionsGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctActionsGroup,"CATIAFunctActionsGroup",CATIAFunctActionsGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctActionsGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctActionsGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctActionsGroup##classe(classe::MetaObject(),CATIAFunctActionsGroup::MetaObject(),(void *)CreateTIECATIAFunctActionsGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctActionsGroup(classe) \
 \
 \
declare_TIE_CATIAFunctActionsGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctActionsGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctActionsGroup,"CATIAFunctActionsGroup",CATIAFunctActionsGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctActionsGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctActionsGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctActionsGroup##classe(classe::MetaObject(),CATIAFunctActionsGroup::MetaObject(),(void *)CreateTIECATIAFunctActionsGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctActionsGroup(classe) TIE_CATIAFunctActionsGroup(classe)
#else
#define BOA_CATIAFunctActionsGroup(classe) CATImplementBOA(CATIAFunctActionsGroup, classe)
#endif

#endif
