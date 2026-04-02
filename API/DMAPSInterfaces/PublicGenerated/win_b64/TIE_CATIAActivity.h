#ifndef __TIE_CATIAActivity
#define __TIE_CATIAActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAActivity */
#define declare_TIE_CATIAActivity(classe) \
 \
 \
class TIECATIAActivity##classe : public CATIAActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal); \
      virtual HRESULT __stdcall AttrValue(const CATVariant & iIndex, CATVariant & oAttVal); \
      virtual HRESULT __stdcall AttrName(CATLONG iIndex, CATBSTR & oName); \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_Description(CATBSTR & oDescriptionBSTR); \
      virtual HRESULT __stdcall put_Description(const CATBSTR & iDescriptionBSTR); \
      virtual HRESULT __stdcall get_CycleTime(double & oCT); \
      virtual HRESULT __stdcall put_CycleTime(double iCT); \
      virtual HRESULT __stdcall get_CalculatedCycleTime(double & oCCT); \
      virtual HRESULT __stdcall get_BeginningDate(double & oBegin); \
      virtual HRESULT __stdcall put_BeginningDate(double iSBT); \
      virtual HRESULT __stdcall get_EndDate(double & oEnd); \
      virtual HRESULT __stdcall get_ChildrenActivities(CATIAActivities *& oChildren); \
      virtual HRESULT __stdcall CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild); \
      virtual HRESULT __stdcall CreateLink(CATIAActivity * iSecondActivity); \
      virtual HRESULT __stdcall RemoveLink(CATIAActivity * iSecondActivity); \
      virtual HRESULT __stdcall get_NextCFActivities(CATIAActivities *& oNextCF); \
      virtual HRESULT __stdcall get_PreviousCFActivities(CATIAActivities *& oPreviousCF); \
      virtual HRESULT __stdcall get_NextPRFActivities(CATIAActivities *& oNextPRF); \
      virtual HRESULT __stdcall get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF); \
      virtual HRESULT __stdcall get_AttrCount(CATLONG & oNbAttr); \
      virtual HRESULT __stdcall get_Items(CATIAItems *& oItems); \
      virtual HRESULT __stdcall get_Outputs(CATIAOutputs *& oOutputs); \
      virtual HRESULT __stdcall get_Resources(CATIAResources *& oResources); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT __stdcall get_PrecedenceActivities(CATIAActivities *& oActivities); \
      virtual HRESULT __stdcall get_PossiblePrecedenceActivities(CATIAActivities *& oActivities); \
      virtual HRESULT __stdcall get_ProcessID(CATBSTR & oProcessID); \
      virtual HRESULT __stdcall SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique); \
      virtual HRESULT __stdcall get_CalculatedBeginTime(double & oCBT); \
      virtual HRESULT __stdcall AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName); \
      virtual HRESULT __stdcall RemoveAttr(const CATBSTR & iAttributeName); \
      virtual HRESULT __stdcall AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
      virtual HRESULT __stdcall RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
      virtual HRESULT __stdcall GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal); \
virtual HRESULT __stdcall AttrValue(const CATVariant & iIndex, CATVariant & oAttVal); \
virtual HRESULT __stdcall AttrName(CATLONG iIndex, CATBSTR & oName); \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_Description(CATBSTR & oDescriptionBSTR); \
virtual HRESULT __stdcall put_Description(const CATBSTR & iDescriptionBSTR); \
virtual HRESULT __stdcall get_CycleTime(double & oCT); \
virtual HRESULT __stdcall put_CycleTime(double iCT); \
virtual HRESULT __stdcall get_CalculatedCycleTime(double & oCCT); \
virtual HRESULT __stdcall get_BeginningDate(double & oBegin); \
virtual HRESULT __stdcall put_BeginningDate(double iSBT); \
virtual HRESULT __stdcall get_EndDate(double & oEnd); \
virtual HRESULT __stdcall get_ChildrenActivities(CATIAActivities *& oChildren); \
virtual HRESULT __stdcall CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild); \
virtual HRESULT __stdcall CreateLink(CATIAActivity * iSecondActivity); \
virtual HRESULT __stdcall RemoveLink(CATIAActivity * iSecondActivity); \
virtual HRESULT __stdcall get_NextCFActivities(CATIAActivities *& oNextCF); \
virtual HRESULT __stdcall get_PreviousCFActivities(CATIAActivities *& oPreviousCF); \
virtual HRESULT __stdcall get_NextPRFActivities(CATIAActivities *& oNextPRF); \
virtual HRESULT __stdcall get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF); \
virtual HRESULT __stdcall get_AttrCount(CATLONG & oNbAttr); \
virtual HRESULT __stdcall get_Items(CATIAItems *& oItems); \
virtual HRESULT __stdcall get_Outputs(CATIAOutputs *& oOutputs); \
virtual HRESULT __stdcall get_Resources(CATIAResources *& oResources); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT __stdcall get_PrecedenceActivities(CATIAActivities *& oActivities); \
virtual HRESULT __stdcall get_PossiblePrecedenceActivities(CATIAActivities *& oActivities); \
virtual HRESULT __stdcall get_ProcessID(CATBSTR & oProcessID); \
virtual HRESULT __stdcall SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique); \
virtual HRESULT __stdcall get_CalculatedBeginTime(double & oCBT); \
virtual HRESULT __stdcall AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName); \
virtual HRESULT __stdcall RemoveAttr(const CATBSTR & iAttributeName); \
virtual HRESULT __stdcall AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
virtual HRESULT __stdcall RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
virtual HRESULT __stdcall GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)IsSubTypeOf(iName,oVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)AttrValue(iIndex,oAttVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)AttrName(iIndex,oName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Description(oDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)put_Description(iDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CycleTime(double & oCT) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_CycleTime(oCT)); \
} \
HRESULT __stdcall  ENVTIEName::put_CycleTime(double iCT) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)put_CycleTime(iCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedCycleTime(double & oCCT) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_CalculatedCycleTime(oCCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginningDate(double & oBegin) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_BeginningDate(oBegin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BeginningDate(double iSBT) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)put_BeginningDate(iSBT)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndDate(double & oEnd) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_EndDate(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_ChildrenActivities(oChildren)); \
} \
HRESULT __stdcall  ENVTIEName::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)CreateChild(iTypeOfChild,oCreatedChild)); \
} \
HRESULT __stdcall  ENVTIEName::CreateLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)CreateLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)RemoveLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_NextCFActivities(oNextCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_PreviousCFActivities(oPreviousCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_NextPRFActivities(oNextPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_PreviousPRFActivities(oPreviousPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttrCount(CATLONG & oNbAttr) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_AttrCount(oNbAttr)); \
} \
HRESULT __stdcall  ENVTIEName::get_Items(CATIAItems *& oItems) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Items(oItems)); \
} \
HRESULT __stdcall  ENVTIEName::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Outputs(oOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_Resources(CATIAResources *& oResources) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Resources(oResources)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_PrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_PossiblePrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProcessID(CATBSTR & oProcessID) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_ProcessID(oProcessID)); \
} \
HRESULT __stdcall  ENVTIEName::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)SetProcessID(iProcessID,iCheckUnique)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedBeginTime(double & oCBT) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_CalculatedBeginTime(oCBT)); \
} \
HRESULT __stdcall  ENVTIEName::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)AddAttr(iAttributeName,AttrType,iAttributePromptName)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)RemoveAttr(iAttributeName)); \
} \
HRESULT __stdcall  ENVTIEName::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)AddActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)RemoveActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)GetActivityConstraints(iConstraintType,oConstrtList)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAActivity,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAActivity(classe)    TIECATIAActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIAActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAActivity, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAActivity, classe) \
 \
HRESULT __stdcall  TIECATIAActivity##classe::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&oVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSubTypeOf(iName,oVal); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&oVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oAttVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrValue(iIndex,oAttVal); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oAttVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrName(iIndex,oName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Description(oDescriptionBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Description(iDescriptionBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_CycleTime(double & oCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CycleTime(oCT); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::put_CycleTime(double iCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CycleTime(iCT); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_CalculatedCycleTime(double & oCCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedCycleTime(oCCT); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_BeginningDate(double & oBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginningDate(oBegin); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::put_BeginningDate(double iSBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iSBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BeginningDate(iSBT); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iSBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_EndDate(double & oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndDate(oEnd); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChildrenActivities(oChildren); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iTypeOfChild,&oCreatedChild); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateChild(iTypeOfChild,oCreatedChild); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iTypeOfChild,&oCreatedChild); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::CreateLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLink(iSecondActivity); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLink(iSecondActivity); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNextCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextCFActivities(oNextCF); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNextCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oPreviousCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousCFActivities(oPreviousCF); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oPreviousCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNextPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextPRFActivities(oNextPRF); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNextPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oPreviousPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousPRFActivities(oPreviousPRF); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oPreviousPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_AttrCount(CATLONG & oNbAttr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNbAttr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttrCount(oNbAttr); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNbAttr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_Items(CATIAItems *& oItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Items(oItems); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Outputs(oOutputs); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_Resources(CATIAResources *& oResources) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oResources); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Resources(oResources); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oResources); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrecedenceActivities(oActivities); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PossiblePrecedenceActivities(oActivities); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_ProcessID(CATBSTR & oProcessID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oProcessID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProcessID(oProcessID); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oProcessID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iProcessID,&iCheckUnique); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProcessID(iProcessID,iCheckUnique); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iProcessID,&iCheckUnique); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::get_CalculatedBeginTime(double & oCBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oCBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedBeginTime(oCBT); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oCBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iAttributeName,&AttrType,&iAttributePromptName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAttr(iAttributeName,AttrType,iAttributePromptName); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iAttributeName,&AttrType,&iAttributePromptName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iAttributeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAttr(iAttributeName); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iAttributeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivity##classe::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iConstraintType,&oConstrtList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActivityConstraints(iConstraintType,oConstrtList); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iConstraintType,&oConstrtList); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivity##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivity##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivity##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivity##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivity##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAActivity(classe) \
 \
 \
declare_TIE_CATIAActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAActivity,"CATIAActivity",CATIAActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAActivity##classe(classe::MetaObject(),CATIAActivity::MetaObject(),(void *)CreateTIECATIAActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAActivity(classe) \
 \
 \
declare_TIE_CATIAActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAActivity,"CATIAActivity",CATIAActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAActivity##classe(classe::MetaObject(),CATIAActivity::MetaObject(),(void *)CreateTIECATIAActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAActivity(classe) TIE_CATIAActivity(classe)
#else
#define BOA_CATIAActivity(classe) CATImplementBOA(CATIAActivity, classe)
#endif

#endif
