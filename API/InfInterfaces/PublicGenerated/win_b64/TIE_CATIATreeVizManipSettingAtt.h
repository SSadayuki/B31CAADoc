#ifndef __TIE_CATIATreeVizManipSettingAtt
#define __TIE_CATIATreeVizManipSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATreeVizManipSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATreeVizManipSettingAtt */
#define declare_TIE_CATIATreeVizManipSettingAtt(classe) \
 \
 \
class TIECATIATreeVizManipSettingAtt##classe : public CATIATreeVizManipSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATreeVizManipSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatTreeTypeEnum & oType); \
      virtual HRESULT __stdcall put_Type(CatTreeTypeEnum iType); \
      virtual HRESULT __stdcall GetTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Orientation(CatTreeOrientationEnum & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CatTreeOrientationEnum iOrientation); \
      virtual HRESULT __stdcall GetOrientationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOrientationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SizeType(CatTreeSizeTypeEnum & oSizeType); \
      virtual HRESULT __stdcall put_SizeType(CatTreeSizeTypeEnum iSizeType); \
      virtual HRESULT __stdcall GetSizeTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSizeTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Size(CATLONG & oSize); \
      virtual HRESULT __stdcall put_Size(CATLONG iSize); \
      virtual HRESULT __stdcall get_ShowActivation(CAT_VARIANT_BOOL & oShowActivation); \
      virtual HRESULT __stdcall put_ShowActivation(CAT_VARIANT_BOOL iShowActivation); \
      virtual HRESULT __stdcall GetShowActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetShowActivationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayGeomOnScrolling(CAT_VARIANT_BOOL & oDisplayGeomOnScrolling); \
      virtual HRESULT __stdcall put_DisplayGeomOnScrolling(CAT_VARIANT_BOOL iDisplayGeomOnScrolling); \
      virtual HRESULT __stdcall GetDisplayGeomOnScrollingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayGeomOnScrollingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AutoExpandActivation(CAT_VARIANT_BOOL & oAutoExpandActivation); \
      virtual HRESULT __stdcall put_AutoExpandActivation(CAT_VARIANT_BOOL iAutoExpandActivation); \
      virtual HRESULT __stdcall GetAutoExpandActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAutoExpandActivationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ArcSelectionActivation(CAT_VARIANT_BOOL & oArcSelectionActivation); \
      virtual HRESULT __stdcall put_ArcSelectionActivation(CAT_VARIANT_BOOL iArcSelectionActivation); \
      virtual HRESULT __stdcall GetArcSelectionActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetArcSelectionActivationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AutoScrollActivation(CAT_VARIANT_BOOL & oAutoScrollActivation); \
      virtual HRESULT __stdcall put_AutoScrollActivation(CAT_VARIANT_BOOL iAutoScrollActivation); \
      virtual HRESULT __stdcall GetAutoScrollActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAutoScrollActivationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATreeVizManipSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatTreeTypeEnum & oType); \
virtual HRESULT __stdcall put_Type(CatTreeTypeEnum iType); \
virtual HRESULT __stdcall GetTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Orientation(CatTreeOrientationEnum & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CatTreeOrientationEnum iOrientation); \
virtual HRESULT __stdcall GetOrientationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOrientationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SizeType(CatTreeSizeTypeEnum & oSizeType); \
virtual HRESULT __stdcall put_SizeType(CatTreeSizeTypeEnum iSizeType); \
virtual HRESULT __stdcall GetSizeTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSizeTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Size(CATLONG & oSize); \
virtual HRESULT __stdcall put_Size(CATLONG iSize); \
virtual HRESULT __stdcall get_ShowActivation(CAT_VARIANT_BOOL & oShowActivation); \
virtual HRESULT __stdcall put_ShowActivation(CAT_VARIANT_BOOL iShowActivation); \
virtual HRESULT __stdcall GetShowActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetShowActivationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayGeomOnScrolling(CAT_VARIANT_BOOL & oDisplayGeomOnScrolling); \
virtual HRESULT __stdcall put_DisplayGeomOnScrolling(CAT_VARIANT_BOOL iDisplayGeomOnScrolling); \
virtual HRESULT __stdcall GetDisplayGeomOnScrollingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayGeomOnScrollingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AutoExpandActivation(CAT_VARIANT_BOOL & oAutoExpandActivation); \
virtual HRESULT __stdcall put_AutoExpandActivation(CAT_VARIANT_BOOL iAutoExpandActivation); \
virtual HRESULT __stdcall GetAutoExpandActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAutoExpandActivationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ArcSelectionActivation(CAT_VARIANT_BOOL & oArcSelectionActivation); \
virtual HRESULT __stdcall put_ArcSelectionActivation(CAT_VARIANT_BOOL iArcSelectionActivation); \
virtual HRESULT __stdcall GetArcSelectionActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetArcSelectionActivationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AutoScrollActivation(CAT_VARIANT_BOOL & oAutoScrollActivation); \
virtual HRESULT __stdcall put_AutoScrollActivation(CAT_VARIANT_BOOL iAutoScrollActivation); \
virtual HRESULT __stdcall GetAutoScrollActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAutoScrollActivationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATreeVizManipSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatTreeTypeEnum & oType) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CatTreeTypeEnum iType) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::GetTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CatTreeOrientationEnum & oOrientation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CatTreeOrientationEnum iOrientation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrientationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOrientationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrientationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOrientationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SizeType(CatTreeSizeTypeEnum & oSizeType) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SizeType(oSizeType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SizeType(CatTreeSizeTypeEnum iSizeType) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SizeType(iSizeType)); \
} \
HRESULT __stdcall  ENVTIEName::GetSizeTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSizeTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSizeTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSizeTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Size(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Size(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_Size(CATLONG iSize) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Size(iSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShowActivation(CAT_VARIANT_BOOL & oShowActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ShowActivation(oShowActivation)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShowActivation(CAT_VARIANT_BOOL iShowActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ShowActivation(iShowActivation)); \
} \
HRESULT __stdcall  ENVTIEName::GetShowActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShowActivationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetShowActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShowActivationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayGeomOnScrolling(CAT_VARIANT_BOOL & oDisplayGeomOnScrolling) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayGeomOnScrolling(oDisplayGeomOnScrolling)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayGeomOnScrolling(CAT_VARIANT_BOOL iDisplayGeomOnScrolling) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayGeomOnScrolling(iDisplayGeomOnScrolling)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayGeomOnScrollingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayGeomOnScrollingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayGeomOnScrollingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayGeomOnScrollingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutoExpandActivation(CAT_VARIANT_BOOL & oAutoExpandActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AutoExpandActivation(oAutoExpandActivation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoExpandActivation(CAT_VARIANT_BOOL iAutoExpandActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AutoExpandActivation(iAutoExpandActivation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAutoExpandActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAutoExpandActivationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoExpandActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAutoExpandActivationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArcSelectionActivation(CAT_VARIANT_BOOL & oArcSelectionActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ArcSelectionActivation(oArcSelectionActivation)); \
} \
HRESULT __stdcall  ENVTIEName::put_ArcSelectionActivation(CAT_VARIANT_BOOL iArcSelectionActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ArcSelectionActivation(iArcSelectionActivation)); \
} \
HRESULT __stdcall  ENVTIEName::GetArcSelectionActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetArcSelectionActivationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetArcSelectionActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetArcSelectionActivationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutoScrollActivation(CAT_VARIANT_BOOL & oAutoScrollActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AutoScrollActivation(oAutoScrollActivation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoScrollActivation(CAT_VARIANT_BOOL iAutoScrollActivation) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AutoScrollActivation(iAutoScrollActivation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAutoScrollActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAutoScrollActivationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoScrollActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAutoScrollActivationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATreeVizManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATreeVizManipSettingAtt(classe)    TIECATIATreeVizManipSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATreeVizManipSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATreeVizManipSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIATreeVizManipSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATreeVizManipSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATreeVizManipSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATreeVizManipSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_Type(CatTreeTypeEnum & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_Type(CatTreeTypeEnum iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTypeLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_Orientation(CatTreeOrientationEnum & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_Orientation(CatTreeOrientationEnum iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetOrientationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetOrientationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientationLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_SizeType(CatTreeSizeTypeEnum & oSizeType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSizeType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SizeType(oSizeType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSizeType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_SizeType(CatTreeSizeTypeEnum iSizeType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSizeType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SizeType(iSizeType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSizeType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetSizeTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSizeTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetSizeTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSizeTypeLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_Size(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Size(oSize); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_Size(CATLONG iSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Size(iSize); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_ShowActivation(CAT_VARIANT_BOOL & oShowActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oShowActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShowActivation(oShowActivation); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oShowActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_ShowActivation(CAT_VARIANT_BOOL iShowActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iShowActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShowActivation(iShowActivation); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iShowActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetShowActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShowActivationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetShowActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShowActivationLock(iLocked); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_DisplayGeomOnScrolling(CAT_VARIANT_BOOL & oDisplayGeomOnScrolling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oDisplayGeomOnScrolling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayGeomOnScrolling(oDisplayGeomOnScrolling); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oDisplayGeomOnScrolling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_DisplayGeomOnScrolling(CAT_VARIANT_BOOL iDisplayGeomOnScrolling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iDisplayGeomOnScrolling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayGeomOnScrolling(iDisplayGeomOnScrolling); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iDisplayGeomOnScrolling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetDisplayGeomOnScrollingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayGeomOnScrollingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetDisplayGeomOnScrollingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayGeomOnScrollingLock(iLocked); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_AutoExpandActivation(CAT_VARIANT_BOOL & oAutoExpandActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oAutoExpandActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoExpandActivation(oAutoExpandActivation); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oAutoExpandActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_AutoExpandActivation(CAT_VARIANT_BOOL iAutoExpandActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iAutoExpandActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoExpandActivation(iAutoExpandActivation); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iAutoExpandActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetAutoExpandActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutoExpandActivationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetAutoExpandActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoExpandActivationLock(iLocked); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_ArcSelectionActivation(CAT_VARIANT_BOOL & oArcSelectionActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oArcSelectionActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArcSelectionActivation(oArcSelectionActivation); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oArcSelectionActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_ArcSelectionActivation(CAT_VARIANT_BOOL iArcSelectionActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iArcSelectionActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ArcSelectionActivation(iArcSelectionActivation); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iArcSelectionActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetArcSelectionActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetArcSelectionActivationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetArcSelectionActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetArcSelectionActivationLock(iLocked); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_AutoScrollActivation(CAT_VARIANT_BOOL & oAutoScrollActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oAutoScrollActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoScrollActivation(oAutoScrollActivation); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oAutoScrollActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_AutoScrollActivation(CAT_VARIANT_BOOL iAutoScrollActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAutoScrollActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoScrollActivation(iAutoScrollActivation); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAutoScrollActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetAutoScrollActivationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutoScrollActivationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SetAutoScrollActivationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoScrollActivationLock(iLocked); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeVizManipSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeVizManipSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeVizManipSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeVizManipSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATreeVizManipSettingAtt(classe) \
 \
 \
declare_TIE_CATIATreeVizManipSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATreeVizManipSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATreeVizManipSettingAtt,"CATIATreeVizManipSettingAtt",CATIATreeVizManipSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATreeVizManipSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATreeVizManipSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATreeVizManipSettingAtt##classe(classe::MetaObject(),CATIATreeVizManipSettingAtt::MetaObject(),(void *)CreateTIECATIATreeVizManipSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATreeVizManipSettingAtt(classe) \
 \
 \
declare_TIE_CATIATreeVizManipSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATreeVizManipSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATreeVizManipSettingAtt,"CATIATreeVizManipSettingAtt",CATIATreeVizManipSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATreeVizManipSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATreeVizManipSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATreeVizManipSettingAtt##classe(classe::MetaObject(),CATIATreeVizManipSettingAtt::MetaObject(),(void *)CreateTIECATIATreeVizManipSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATreeVizManipSettingAtt(classe) TIE_CATIATreeVizManipSettingAtt(classe)
#else
#define BOA_CATIATreeVizManipSettingAtt(classe) CATImplementBOA(CATIATreeVizManipSettingAtt, classe)
#endif

#endif
