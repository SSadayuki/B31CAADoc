#ifndef __TIE_CATIASfmProfile
#define __TIE_CATIASfmProfile

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmProfile.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmProfile */
#define declare_TIE_CATIASfmProfile(classe) \
 \
 \
class TIECATIASfmProfile##classe : public CATIASfmProfile \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmProfile, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SectionName(CATBSTR & oName); \
      virtual HRESULT __stdcall put_SectionName(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall get_AnchorPoint(CATBSTR & oAnchorPoint); \
      virtual HRESULT __stdcall put_AnchorPoint(const CATBSTR & iAnchorPoint); \
      virtual HRESULT __stdcall Run(); \
      virtual HRESULT __stdcall GetStartCoord(CATSafeArrayVariant & oCoord); \
      virtual HRESULT __stdcall GetEndCoord(CATSafeArrayVariant & oCoord); \
      virtual HRESULT __stdcall GetSectionAxis(double iAbside, CATSafeArrayVariant & iOrigin, CATSafeArrayVariant & ioVector1, CATSafeArrayVariant & ioVector2, CATSafeArrayVariant & ioVector3); \
      virtual HRESULT __stdcall AddEndcut(CATLONG iExtremityIndex, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATIASfmReferences * iListContext, CATIASfmConnectionParameters * iListParameters, CATIASfmEndcut *& oSfmProfileEndCut); \
      virtual HRESULT __stdcall GetEndcut(CATLONG iExtremityIndex, CATIASfmEndcut *& oSfmEndcut); \
      virtual HRESULT __stdcall RemoveEndcut(CATLONG iExtremityIndex); \
      virtual HRESULT __stdcall GetSlotsOnProfile(CATIASfmSlots *& oSfmSlots); \
      virtual HRESULT __stdcall GetProfileLimit(CATLONG iExtremityIndex, CATIAReference *& oLimit); \
      virtual HRESULT __stdcall SetProfileLimit(CATLONG iExtremityIndex, CATIAReference * iLimit); \
      virtual HRESULT __stdcall get_SplitProfiles(CATIAReferences *& oSplitProfiles); \
      virtual HRESULT __stdcall get_Category(CATBSTR & oCategory); \
      virtual HRESULT __stdcall put_Category(const CATBSTR & iCategory); \
      virtual HRESULT __stdcall get_Material(CATBSTR & oMaterial); \
      virtual HRESULT __stdcall put_Material(const CATBSTR & iMaterial); \
      virtual HRESULT __stdcall get_Grade(CATBSTR & oGrade); \
      virtual HRESULT __stdcall put_Grade(const CATBSTR & iGrade); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmProfile(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SectionName(CATBSTR & oName); \
virtual HRESULT __stdcall put_SectionName(const CATBSTR & iName); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall get_AnchorPoint(CATBSTR & oAnchorPoint); \
virtual HRESULT __stdcall put_AnchorPoint(const CATBSTR & iAnchorPoint); \
virtual HRESULT __stdcall Run(); \
virtual HRESULT __stdcall GetStartCoord(CATSafeArrayVariant & oCoord); \
virtual HRESULT __stdcall GetEndCoord(CATSafeArrayVariant & oCoord); \
virtual HRESULT __stdcall GetSectionAxis(double iAbside, CATSafeArrayVariant & iOrigin, CATSafeArrayVariant & ioVector1, CATSafeArrayVariant & ioVector2, CATSafeArrayVariant & ioVector3); \
virtual HRESULT __stdcall AddEndcut(CATLONG iExtremityIndex, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATIASfmReferences * iListContext, CATIASfmConnectionParameters * iListParameters, CATIASfmEndcut *& oSfmProfileEndCut); \
virtual HRESULT __stdcall GetEndcut(CATLONG iExtremityIndex, CATIASfmEndcut *& oSfmEndcut); \
virtual HRESULT __stdcall RemoveEndcut(CATLONG iExtremityIndex); \
virtual HRESULT __stdcall GetSlotsOnProfile(CATIASfmSlots *& oSfmSlots); \
virtual HRESULT __stdcall GetProfileLimit(CATLONG iExtremityIndex, CATIAReference *& oLimit); \
virtual HRESULT __stdcall SetProfileLimit(CATLONG iExtremityIndex, CATIAReference * iLimit); \
virtual HRESULT __stdcall get_SplitProfiles(CATIAReferences *& oSplitProfiles); \
virtual HRESULT __stdcall get_Category(CATBSTR & oCategory); \
virtual HRESULT __stdcall put_Category(const CATBSTR & iCategory); \
virtual HRESULT __stdcall get_Material(CATBSTR & oMaterial); \
virtual HRESULT __stdcall put_Material(const CATBSTR & iMaterial); \
virtual HRESULT __stdcall get_Grade(CATBSTR & oGrade); \
virtual HRESULT __stdcall put_Grade(const CATBSTR & iGrade); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmProfile(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SectionName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_SectionName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionName(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)put_SectionName(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorPoint(CATBSTR & oAnchorPoint) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_AnchorPoint(oAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorPoint(const CATBSTR & iAnchorPoint) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)put_AnchorPoint(iAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::Run() \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)Run()); \
} \
HRESULT __stdcall  ENVTIEName::GetStartCoord(CATSafeArrayVariant & oCoord) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)GetStartCoord(oCoord)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndCoord(CATSafeArrayVariant & oCoord) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)GetEndCoord(oCoord)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectionAxis(double iAbside, CATSafeArrayVariant & iOrigin, CATSafeArrayVariant & ioVector1, CATSafeArrayVariant & ioVector2, CATSafeArrayVariant & ioVector3) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)GetSectionAxis(iAbside,iOrigin,ioVector1,ioVector2,ioVector3)); \
} \
HRESULT __stdcall  ENVTIEName::AddEndcut(CATLONG iExtremityIndex, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATIASfmReferences * iListContext, CATIASfmConnectionParameters * iListParameters, CATIASfmEndcut *& oSfmProfileEndCut) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)AddEndcut(iExtremityIndex,iEndcutType,iEndcutName,iListContext,iListParameters,oSfmProfileEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndcut(CATLONG iExtremityIndex, CATIASfmEndcut *& oSfmEndcut) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)GetEndcut(iExtremityIndex,oSfmEndcut)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveEndcut(CATLONG iExtremityIndex) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)RemoveEndcut(iExtremityIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetSlotsOnProfile(CATIASfmSlots *& oSfmSlots) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)GetSlotsOnProfile(oSfmSlots)); \
} \
HRESULT __stdcall  ENVTIEName::GetProfileLimit(CATLONG iExtremityIndex, CATIAReference *& oLimit) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)GetProfileLimit(iExtremityIndex,oLimit)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileLimit(CATLONG iExtremityIndex, CATIAReference * iLimit) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)SetProfileLimit(iExtremityIndex,iLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplitProfiles(CATIAReferences *& oSplitProfiles) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_SplitProfiles(oSplitProfiles)); \
} \
HRESULT __stdcall  ENVTIEName::get_Category(CATBSTR & oCategory) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_Category(oCategory)); \
} \
HRESULT __stdcall  ENVTIEName::put_Category(const CATBSTR & iCategory) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)put_Category(iCategory)); \
} \
HRESULT __stdcall  ENVTIEName::get_Material(CATBSTR & oMaterial) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_Material(oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::put_Material(const CATBSTR & iMaterial) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)put_Material(iMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::get_Grade(CATBSTR & oGrade) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_Grade(oGrade)); \
} \
HRESULT __stdcall  ENVTIEName::put_Grade(const CATBSTR & iGrade) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)put_Grade(iGrade)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmProfile,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmProfile(classe)    TIECATIASfmProfile##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmProfile(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmProfile, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmProfile, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmProfile, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmProfile, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmProfile, classe) \
 \
HRESULT __stdcall  TIECATIASfmProfile##classe::get_SectionName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionName(oName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::put_SectionName(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionName(iName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::get_AnchorPoint(CATBSTR & oAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorPoint(oAnchorPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::put_AnchorPoint(const CATBSTR & iAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorPoint(iAnchorPoint); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::Run() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::GetStartCoord(CATSafeArrayVariant & oCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartCoord(oCoord); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::GetEndCoord(CATSafeArrayVariant & oCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndCoord(oCoord); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::GetSectionAxis(double iAbside, CATSafeArrayVariant & iOrigin, CATSafeArrayVariant & ioVector1, CATSafeArrayVariant & ioVector2, CATSafeArrayVariant & ioVector3) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iAbside,&iOrigin,&ioVector1,&ioVector2,&ioVector3); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectionAxis(iAbside,iOrigin,ioVector1,ioVector2,ioVector3); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iAbside,&iOrigin,&ioVector1,&ioVector2,&ioVector3); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::AddEndcut(CATLONG iExtremityIndex, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATIASfmReferences * iListContext, CATIASfmConnectionParameters * iListParameters, CATIASfmEndcut *& oSfmProfileEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iExtremityIndex,&iEndcutType,&iEndcutName,&iListContext,&iListParameters,&oSfmProfileEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEndcut(iExtremityIndex,iEndcutType,iEndcutName,iListContext,iListParameters,oSfmProfileEndCut); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iExtremityIndex,&iEndcutType,&iEndcutName,&iListContext,&iListParameters,&oSfmProfileEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::GetEndcut(CATLONG iExtremityIndex, CATIASfmEndcut *& oSfmEndcut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iExtremityIndex,&oSfmEndcut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndcut(iExtremityIndex,oSfmEndcut); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iExtremityIndex,&oSfmEndcut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::RemoveEndcut(CATLONG iExtremityIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iExtremityIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveEndcut(iExtremityIndex); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iExtremityIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::GetSlotsOnProfile(CATIASfmSlots *& oSfmSlots) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSfmSlots); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSlotsOnProfile(oSfmSlots); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSfmSlots); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::GetProfileLimit(CATLONG iExtremityIndex, CATIAReference *& oLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iExtremityIndex,&oLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProfileLimit(iExtremityIndex,oLimit); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iExtremityIndex,&oLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::SetProfileLimit(CATLONG iExtremityIndex, CATIAReference * iLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iExtremityIndex,&iLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileLimit(iExtremityIndex,iLimit); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iExtremityIndex,&iLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::get_SplitProfiles(CATIAReferences *& oSplitProfiles) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oSplitProfiles); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplitProfiles(oSplitProfiles); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oSplitProfiles); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::get_Category(CATBSTR & oCategory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oCategory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Category(oCategory); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oCategory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::put_Category(const CATBSTR & iCategory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iCategory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Category(iCategory); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iCategory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::get_Material(CATBSTR & oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Material(oMaterial); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::put_Material(const CATBSTR & iMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Material(iMaterial); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::get_Grade(CATBSTR & oGrade) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oGrade); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Grade(oGrade); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oGrade); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmProfile##classe::put_Grade(const CATBSTR & iGrade) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iGrade); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Grade(iGrade); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iGrade); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmProfile##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmProfile##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmProfile##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmProfile##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmProfile##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmProfile(classe) \
 \
 \
declare_TIE_CATIASfmProfile(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmProfile##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmProfile,"CATIASfmProfile",CATIASfmProfile::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmProfile(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmProfile, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmProfile##classe(classe::MetaObject(),CATIASfmProfile::MetaObject(),(void *)CreateTIECATIASfmProfile##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmProfile(classe) \
 \
 \
declare_TIE_CATIASfmProfile(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmProfile##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmProfile,"CATIASfmProfile",CATIASfmProfile::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmProfile(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmProfile, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmProfile##classe(classe::MetaObject(),CATIASfmProfile::MetaObject(),(void *)CreateTIECATIASfmProfile##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmProfile(classe) TIE_CATIASfmProfile(classe)
#else
#define BOA_CATIASfmProfile(classe) CATImplementBOA(CATIASfmProfile, classe)
#endif

#endif
