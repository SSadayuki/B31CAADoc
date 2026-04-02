#ifndef __TIE_CATIASchCompGraphic
#define __TIE_CATIASchCompGraphic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCompGraphic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCompGraphic */
#define declare_TIE_CATIASchCompGraphic(classe) \
 \
 \
class TIECATIASchCompGraphic##classe : public CATIASchCompGraphic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCompGraphic, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddGraphicalRepresentation(CATIASchGRRComp * iGRRToAdd); \
      virtual HRESULT __stdcall RemoveGraphicalRepresentation(CATIASchGRRComp * iGRRToRemove); \
      virtual HRESULT __stdcall ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR); \
      virtual HRESULT __stdcall ListGraphicalImages(CATIASchListOfObjects *& oLGRR); \
      virtual HRESULT __stdcall SwitchAll(const CATBSTR & iGRRName); \
      virtual HRESULT __stdcall Switch(CATIASchGRRComp * iGRR, const CATBSTR & iGRRName, CATIASchGRRComp *& oGRR); \
      virtual HRESULT __stdcall Activate(const CATBSTR & iGRRName, const CATSafeArrayVariant & iDb2WhereAt, CATIASchGRRComp *& oGRR); \
      virtual HRESULT __stdcall Deactivate(CATIASchGRRComp * iGRR); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCompGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddGraphicalRepresentation(CATIASchGRRComp * iGRRToAdd); \
virtual HRESULT __stdcall RemoveGraphicalRepresentation(CATIASchGRRComp * iGRRToRemove); \
virtual HRESULT __stdcall ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR); \
virtual HRESULT __stdcall ListGraphicalImages(CATIASchListOfObjects *& oLGRR); \
virtual HRESULT __stdcall SwitchAll(const CATBSTR & iGRRName); \
virtual HRESULT __stdcall Switch(CATIASchGRRComp * iGRR, const CATBSTR & iGRRName, CATIASchGRRComp *& oGRR); \
virtual HRESULT __stdcall Activate(const CATBSTR & iGRRName, const CATSafeArrayVariant & iDb2WhereAt, CATIASchGRRComp *& oGRR); \
virtual HRESULT __stdcall Deactivate(CATIASchGRRComp * iGRR); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCompGraphic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddGraphicalRepresentation(CATIASchGRRComp * iGRRToAdd) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)AddGraphicalRepresentation(iGRRToAdd)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGraphicalRepresentation(CATIASchGRRComp * iGRRToRemove) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)RemoveGraphicalRepresentation(iGRRToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)ListGraphicalRepresentations(oLGRR)); \
} \
HRESULT __stdcall  ENVTIEName::ListGraphicalImages(CATIASchListOfObjects *& oLGRR) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)ListGraphicalImages(oLGRR)); \
} \
HRESULT __stdcall  ENVTIEName::SwitchAll(const CATBSTR & iGRRName) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)SwitchAll(iGRRName)); \
} \
HRESULT __stdcall  ENVTIEName::Switch(CATIASchGRRComp * iGRR, const CATBSTR & iGRRName, CATIASchGRRComp *& oGRR) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)Switch(iGRR,iGRRName,oGRR)); \
} \
HRESULT __stdcall  ENVTIEName::Activate(const CATBSTR & iGRRName, const CATSafeArrayVariant & iDb2WhereAt, CATIASchGRRComp *& oGRR) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)Activate(iGRRName,iDb2WhereAt,oGRR)); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate(CATIASchGRRComp * iGRR) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)Deactivate(iGRR)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCompGraphic,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCompGraphic(classe)    TIECATIASchCompGraphic##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCompGraphic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCompGraphic, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCompGraphic, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCompGraphic, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCompGraphic, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCompGraphic, classe) \
 \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::AddGraphicalRepresentation(CATIASchGRRComp * iGRRToAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRRToAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGraphicalRepresentation(iGRRToAdd); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRRToAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::RemoveGraphicalRepresentation(CATIASchGRRComp * iGRRToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRRToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGraphicalRepresentation(iGRRToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRRToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::ListGraphicalRepresentations(CATIASchListOfObjects *& oLGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListGraphicalRepresentations(oLGRR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::ListGraphicalImages(CATIASchListOfObjects *& oLGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListGraphicalImages(oLGRR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::SwitchAll(const CATBSTR & iGRRName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iGRRName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwitchAll(iGRRName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iGRRName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::Switch(CATIASchGRRComp * iGRR, const CATBSTR & iGRRName, CATIASchGRRComp *& oGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGRR,&iGRRName,&oGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Switch(iGRR,iGRRName,oGRR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGRR,&iGRRName,&oGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::Activate(const CATBSTR & iGRRName, const CATSafeArrayVariant & iDb2WhereAt, CATIASchGRRComp *& oGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iGRRName,&iDb2WhereAt,&oGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(iGRRName,iDb2WhereAt,oGRR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iGRRName,&iDb2WhereAt,&oGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGraphic##classe::Deactivate(CATIASchGRRComp * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(iGRR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iGRR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGraphic##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGraphic##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGraphic##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGraphic##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGraphic##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCompGraphic(classe) \
 \
 \
declare_TIE_CATIASchCompGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompGraphic,"CATIASchCompGraphic",CATIASchCompGraphic::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCompGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompGraphic##classe(classe::MetaObject(),CATIASchCompGraphic::MetaObject(),(void *)CreateTIECATIASchCompGraphic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCompGraphic(classe) \
 \
 \
declare_TIE_CATIASchCompGraphic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompGraphic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompGraphic,"CATIASchCompGraphic",CATIASchCompGraphic::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompGraphic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCompGraphic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompGraphic##classe(classe::MetaObject(),CATIASchCompGraphic::MetaObject(),(void *)CreateTIECATIASchCompGraphic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCompGraphic(classe) TIE_CATIASchCompGraphic(classe)
#else
#define BOA_CATIASchCompGraphic(classe) CATImplementBOA(CATIASchCompGraphic, classe)
#endif

#endif
