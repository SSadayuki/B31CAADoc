#ifndef __TIE_CATIADraftDomain
#define __TIE_CATIADraftDomain

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADraftDomain.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADraftDomain */
#define declare_TIE_CATIADraftDomain(classe) \
 \
 \
class TIECATIADraftDomain##classe : public CATIADraftDomain \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADraftDomain, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DraftAngle(CATIAAngle *& oDraftAngle); \
      virtual HRESULT __stdcall get_FacesToDraft(CATIAReferences *& oSupport); \
      virtual HRESULT __stdcall get_NeutralElement(CATIAReference *& oNeutralElement); \
      virtual HRESULT __stdcall put_NeutralElement(CATIAReference * iNeutralElement); \
      virtual HRESULT __stdcall get_NeutralPropagationMode(CatDraftNeutralPropagationMode & oNeutralPropagationMode); \
      virtual HRESULT __stdcall put_NeutralPropagationMode(CatDraftNeutralPropagationMode iNeutralPropagationMode); \
      virtual HRESULT __stdcall get_MultiselectionMode(CatDraftMultiselectionMode & oMultiselectionMode); \
      virtual HRESULT __stdcall put_MultiselectionMode(CatDraftMultiselectionMode iMultiselectionMode); \
      virtual HRESULT __stdcall GetPullingDirection(CATSafeArrayVariant & ioPullingDirection); \
      virtual HRESULT __stdcall SetPullingDirection(double iX, double iY, double iZ); \
      virtual HRESULT __stdcall get_PullingDirectionElement(CATIAReference *& oPullingDirectionElement); \
      virtual HRESULT __stdcall put_PullingDirectionElement(CATIAReference * iPullingDirectionElement); \
      virtual HRESULT __stdcall AddFaceToDraft(CATIAReference * iFace); \
      virtual HRESULT __stdcall RemoveFaceToDraft(CATIAReference * iFace); \
      virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolumeSupport); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADraftDomain(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DraftAngle(CATIAAngle *& oDraftAngle); \
virtual HRESULT __stdcall get_FacesToDraft(CATIAReferences *& oSupport); \
virtual HRESULT __stdcall get_NeutralElement(CATIAReference *& oNeutralElement); \
virtual HRESULT __stdcall put_NeutralElement(CATIAReference * iNeutralElement); \
virtual HRESULT __stdcall get_NeutralPropagationMode(CatDraftNeutralPropagationMode & oNeutralPropagationMode); \
virtual HRESULT __stdcall put_NeutralPropagationMode(CatDraftNeutralPropagationMode iNeutralPropagationMode); \
virtual HRESULT __stdcall get_MultiselectionMode(CatDraftMultiselectionMode & oMultiselectionMode); \
virtual HRESULT __stdcall put_MultiselectionMode(CatDraftMultiselectionMode iMultiselectionMode); \
virtual HRESULT __stdcall GetPullingDirection(CATSafeArrayVariant & ioPullingDirection); \
virtual HRESULT __stdcall SetPullingDirection(double iX, double iY, double iZ); \
virtual HRESULT __stdcall get_PullingDirectionElement(CATIAReference *& oPullingDirectionElement); \
virtual HRESULT __stdcall put_PullingDirectionElement(CATIAReference * iPullingDirectionElement); \
virtual HRESULT __stdcall AddFaceToDraft(CATIAReference * iFace); \
virtual HRESULT __stdcall RemoveFaceToDraft(CATIAReference * iFace); \
virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolumeSupport); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADraftDomain(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DraftAngle(CATIAAngle *& oDraftAngle) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_DraftAngle(oDraftAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_FacesToDraft(CATIAReferences *& oSupport) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_FacesToDraft(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_NeutralElement(CATIAReference *& oNeutralElement) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_NeutralElement(oNeutralElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_NeutralElement(CATIAReference * iNeutralElement) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)put_NeutralElement(iNeutralElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_NeutralPropagationMode(CatDraftNeutralPropagationMode & oNeutralPropagationMode) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_NeutralPropagationMode(oNeutralPropagationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_NeutralPropagationMode(CatDraftNeutralPropagationMode iNeutralPropagationMode) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)put_NeutralPropagationMode(iNeutralPropagationMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_MultiselectionMode(CatDraftMultiselectionMode & oMultiselectionMode) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_MultiselectionMode(oMultiselectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_MultiselectionMode(CatDraftMultiselectionMode iMultiselectionMode) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)put_MultiselectionMode(iMultiselectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetPullingDirection(CATSafeArrayVariant & ioPullingDirection) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)GetPullingDirection(ioPullingDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetPullingDirection(double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)SetPullingDirection(iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_PullingDirectionElement(CATIAReference *& oPullingDirectionElement) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_PullingDirectionElement(oPullingDirectionElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_PullingDirectionElement(CATIAReference * iPullingDirectionElement) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)put_PullingDirectionElement(iPullingDirectionElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceToDraft(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)AddFaceToDraft(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFaceToDraft(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)RemoveFaceToDraft(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::SetVolumeSupport(CATIAReference * iVolumeSupport) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)SetVolumeSupport(iVolumeSupport)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADraftDomain,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADraftDomain(classe)    TIECATIADraftDomain##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADraftDomain(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADraftDomain, classe) \
 \
 \
CATImplementTIEMethods(CATIADraftDomain, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADraftDomain, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADraftDomain, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADraftDomain, classe) \
 \
HRESULT __stdcall  TIECATIADraftDomain##classe::get_DraftAngle(CATIAAngle *& oDraftAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDraftAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DraftAngle(oDraftAngle); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDraftAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::get_FacesToDraft(CATIAReferences *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FacesToDraft(oSupport); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::get_NeutralElement(CATIAReference *& oNeutralElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNeutralElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NeutralElement(oNeutralElement); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNeutralElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::put_NeutralElement(CATIAReference * iNeutralElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iNeutralElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NeutralElement(iNeutralElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iNeutralElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::get_NeutralPropagationMode(CatDraftNeutralPropagationMode & oNeutralPropagationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNeutralPropagationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NeutralPropagationMode(oNeutralPropagationMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNeutralPropagationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::put_NeutralPropagationMode(CatDraftNeutralPropagationMode iNeutralPropagationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNeutralPropagationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NeutralPropagationMode(iNeutralPropagationMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNeutralPropagationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::get_MultiselectionMode(CatDraftMultiselectionMode & oMultiselectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMultiselectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MultiselectionMode(oMultiselectionMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMultiselectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::put_MultiselectionMode(CatDraftMultiselectionMode iMultiselectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMultiselectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MultiselectionMode(iMultiselectionMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMultiselectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::GetPullingDirection(CATSafeArrayVariant & ioPullingDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ioPullingDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPullingDirection(ioPullingDirection); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ioPullingDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::SetPullingDirection(double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPullingDirection(iX,iY,iZ); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::get_PullingDirectionElement(CATIAReference *& oPullingDirectionElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oPullingDirectionElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PullingDirectionElement(oPullingDirectionElement); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oPullingDirectionElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::put_PullingDirectionElement(CATIAReference * iPullingDirectionElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iPullingDirectionElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PullingDirectionElement(iPullingDirectionElement); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iPullingDirectionElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::AddFaceToDraft(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceToDraft(iFace); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::RemoveFaceToDraft(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFaceToDraft(iFace); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftDomain##classe::SetVolumeSupport(CATIAReference * iVolumeSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iVolumeSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVolumeSupport(iVolumeSupport); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iVolumeSupport); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftDomain##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftDomain##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftDomain##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftDomain##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftDomain##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADraftDomain(classe) \
 \
 \
declare_TIE_CATIADraftDomain(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADraftDomain##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADraftDomain,"CATIADraftDomain",CATIADraftDomain::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADraftDomain(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADraftDomain, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADraftDomain##classe(classe::MetaObject(),CATIADraftDomain::MetaObject(),(void *)CreateTIECATIADraftDomain##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADraftDomain(classe) \
 \
 \
declare_TIE_CATIADraftDomain(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADraftDomain##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADraftDomain,"CATIADraftDomain",CATIADraftDomain::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADraftDomain(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADraftDomain, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADraftDomain##classe(classe::MetaObject(),CATIADraftDomain::MetaObject(),(void *)CreateTIECATIADraftDomain##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADraftDomain(classe) TIE_CATIADraftDomain(classe)
#else
#define BOA_CATIADraftDomain(classe) CATImplementBOA(CATIADraftDomain, classe)
#endif

#endif
