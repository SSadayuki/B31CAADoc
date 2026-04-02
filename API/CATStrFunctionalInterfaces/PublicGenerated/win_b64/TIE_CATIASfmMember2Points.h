#ifndef __TIE_CATIASfmMember2Points
#define __TIE_CATIASfmMember2Points

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmMember2Points.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmMember2Points */
#define declare_TIE_CATIASfmMember2Points(classe) \
 \
 \
class TIECATIASfmMember2Points##classe : public CATIASfmMember2Points \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmMember2Points, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_StartPointSpec(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_StartPointSpec(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_EndPointSpec(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_EndPointSpec(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_StartPointOnCrvCurve(CATIAReference *& oCurve); \
      virtual HRESULT __stdcall put_StartPointOnCrvCurve(CATIAReference * iCurve); \
      virtual HRESULT __stdcall get_StartPointOnCrvMode(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_StartPointOnCrvMode(CAT_VARIANT_BOOL oCurve); \
      virtual HRESULT __stdcall get_StartPointOnCrvOffset(double & oOffset); \
      virtual HRESULT __stdcall put_StartPointOnCrvOffset(double iOffset); \
      virtual HRESULT __stdcall get_StartPointOnCrvOffsetParam(CATIALength *& oOffset); \
      virtual HRESULT __stdcall get_StartPointOnCrvOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_StartPointOnCrvOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_EndPointOnCrvCurve(CATIAReference *& oCurve); \
      virtual HRESULT __stdcall put_EndPointOnCrvCurve(CATIAReference * iCurve); \
      virtual HRESULT __stdcall get_EndPointOnCrvMode(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_EndPointOnCrvMode(CAT_VARIANT_BOOL oCurve); \
      virtual HRESULT __stdcall get_EndPointOnCrvOffset(double & oOffset); \
      virtual HRESULT __stdcall put_EndPointOnCrvOffset(double iOffset); \
      virtual HRESULT __stdcall get_EndPointOnCrvOffsetParam(CATIALength *& oOffset); \
      virtual HRESULT __stdcall get_EndPointOnCrvOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_EndPointOnCrvOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall InvertStartPointOnCrvOrientation(); \
      virtual HRESULT __stdcall InvertEndPointOnCrvOrientation(); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_AngleParam(CATIAAngle *& oParam); \
      virtual HRESULT __stdcall get_HorizontalAnchorPointOffset(double & oHorizontalAnchorPointOffset); \
      virtual HRESULT __stdcall put_HorizontalAnchorPointOffset(double iHorizontalAnchorPointOffset); \
      virtual HRESULT __stdcall get_HorizontalAnchorPointOffsetParam(CATIALength *& oParam); \
      virtual HRESULT __stdcall get_VerticalAnchorPointOffset(double & oVerticalAnchorPointOffset); \
      virtual HRESULT __stdcall put_VerticalAnchorPointOffset(double iVerticalAnchorPointOffset); \
      virtual HRESULT __stdcall get_VerticalAnchorPointOffsetParam(CATIALength *& oParam); \
      virtual HRESULT __stdcall Flip(); \
      virtual HRESULT __stdcall IsFlip(CAT_VARIANT_BOOL & oIsFlip); \
      virtual HRESULT __stdcall GetMemberType(CATBSTR & oName); \
      virtual HRESULT __stdcall GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds); \
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



#define ENVTIEdeclare_CATIASfmMember2Points(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_StartPointSpec(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_StartPointSpec(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_EndPointSpec(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_EndPointSpec(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_StartPointOnCrvCurve(CATIAReference *& oCurve); \
virtual HRESULT __stdcall put_StartPointOnCrvCurve(CATIAReference * iCurve); \
virtual HRESULT __stdcall get_StartPointOnCrvMode(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_StartPointOnCrvMode(CAT_VARIANT_BOOL oCurve); \
virtual HRESULT __stdcall get_StartPointOnCrvOffset(double & oOffset); \
virtual HRESULT __stdcall put_StartPointOnCrvOffset(double iOffset); \
virtual HRESULT __stdcall get_StartPointOnCrvOffsetParam(CATIALength *& oOffset); \
virtual HRESULT __stdcall get_StartPointOnCrvOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_StartPointOnCrvOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_EndPointOnCrvCurve(CATIAReference *& oCurve); \
virtual HRESULT __stdcall put_EndPointOnCrvCurve(CATIAReference * iCurve); \
virtual HRESULT __stdcall get_EndPointOnCrvMode(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_EndPointOnCrvMode(CAT_VARIANT_BOOL oCurve); \
virtual HRESULT __stdcall get_EndPointOnCrvOffset(double & oOffset); \
virtual HRESULT __stdcall put_EndPointOnCrvOffset(double iOffset); \
virtual HRESULT __stdcall get_EndPointOnCrvOffsetParam(CATIALength *& oOffset); \
virtual HRESULT __stdcall get_EndPointOnCrvOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_EndPointOnCrvOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall InvertStartPointOnCrvOrientation(); \
virtual HRESULT __stdcall InvertEndPointOnCrvOrientation(); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_AngleParam(CATIAAngle *& oParam); \
virtual HRESULT __stdcall get_HorizontalAnchorPointOffset(double & oHorizontalAnchorPointOffset); \
virtual HRESULT __stdcall put_HorizontalAnchorPointOffset(double iHorizontalAnchorPointOffset); \
virtual HRESULT __stdcall get_HorizontalAnchorPointOffsetParam(CATIALength *& oParam); \
virtual HRESULT __stdcall get_VerticalAnchorPointOffset(double & oVerticalAnchorPointOffset); \
virtual HRESULT __stdcall put_VerticalAnchorPointOffset(double iVerticalAnchorPointOffset); \
virtual HRESULT __stdcall get_VerticalAnchorPointOffsetParam(CATIALength *& oParam); \
virtual HRESULT __stdcall Flip(); \
virtual HRESULT __stdcall IsFlip(CAT_VARIANT_BOOL & oIsFlip); \
virtual HRESULT __stdcall GetMemberType(CATBSTR & oName); \
virtual HRESULT __stdcall GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds); \
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


#define ENVTIEdefine_CATIASfmMember2Points(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_StartPointSpec(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_StartPointSpec(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPointSpec(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_StartPointSpec(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPointSpec(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_EndPointSpec(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndPointSpec(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_EndPointSpec(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartPointOnCrvCurve(CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_StartPointOnCrvCurve(oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPointOnCrvCurve(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_StartPointOnCrvCurve(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartPointOnCrvMode(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_StartPointOnCrvMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPointOnCrvMode(CAT_VARIANT_BOOL oCurve) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_StartPointOnCrvMode(oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartPointOnCrvOffset(double & oOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_StartPointOnCrvOffset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPointOnCrvOffset(double iOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_StartPointOnCrvOffset(iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartPointOnCrvOffsetParam(CATIALength *& oOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_StartPointOnCrvOffsetParam(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartPointOnCrvOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_StartPointOnCrvOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPointOnCrvOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_StartPointOnCrvOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPointOnCrvCurve(CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_EndPointOnCrvCurve(oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndPointOnCrvCurve(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_EndPointOnCrvCurve(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPointOnCrvMode(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_EndPointOnCrvMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndPointOnCrvMode(CAT_VARIANT_BOOL oCurve) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_EndPointOnCrvMode(oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPointOnCrvOffset(double & oOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_EndPointOnCrvOffset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndPointOnCrvOffset(double iOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_EndPointOnCrvOffset(iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPointOnCrvOffsetParam(CATIALength *& oOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_EndPointOnCrvOffsetParam(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPointOnCrvOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_EndPointOnCrvOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndPointOnCrvOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_EndPointOnCrvOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::InvertStartPointOnCrvOrientation() \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)InvertStartPointOnCrvOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::InvertEndPointOnCrvOrientation() \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)InvertEndPointOnCrvOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleParam(CATIAAngle *& oParam) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_AngleParam(oParam)); \
} \
HRESULT __stdcall  ENVTIEName::get_HorizontalAnchorPointOffset(double & oHorizontalAnchorPointOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_HorizontalAnchorPointOffset(oHorizontalAnchorPointOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_HorizontalAnchorPointOffset(double iHorizontalAnchorPointOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_HorizontalAnchorPointOffset(iHorizontalAnchorPointOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_HorizontalAnchorPointOffsetParam(CATIALength *& oParam) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_HorizontalAnchorPointOffsetParam(oParam)); \
} \
HRESULT __stdcall  ENVTIEName::get_VerticalAnchorPointOffset(double & oVerticalAnchorPointOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_VerticalAnchorPointOffset(oVerticalAnchorPointOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_VerticalAnchorPointOffset(double iVerticalAnchorPointOffset) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_VerticalAnchorPointOffset(iVerticalAnchorPointOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_VerticalAnchorPointOffsetParam(CATIALength *& oParam) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_VerticalAnchorPointOffsetParam(oParam)); \
} \
HRESULT __stdcall  ENVTIEName::Flip() \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)Flip()); \
} \
HRESULT __stdcall  ENVTIEName::IsFlip(CAT_VARIANT_BOOL & oIsFlip) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)IsFlip(oIsFlip)); \
} \
HRESULT __stdcall  ENVTIEName::GetMemberType(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetMemberType(oName)); \
} \
HRESULT __stdcall  ENVTIEName::GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetWelds(iOperatingEle,oWelds)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_SectionName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionName(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_SectionName(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorPoint(CATBSTR & oAnchorPoint) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_AnchorPoint(oAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorPoint(const CATBSTR & iAnchorPoint) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_AnchorPoint(iAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::Run() \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)Run()); \
} \
HRESULT __stdcall  ENVTIEName::GetStartCoord(CATSafeArrayVariant & oCoord) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetStartCoord(oCoord)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndCoord(CATSafeArrayVariant & oCoord) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetEndCoord(oCoord)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectionAxis(double iAbside, CATSafeArrayVariant & iOrigin, CATSafeArrayVariant & ioVector1, CATSafeArrayVariant & ioVector2, CATSafeArrayVariant & ioVector3) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetSectionAxis(iAbside,iOrigin,ioVector1,ioVector2,ioVector3)); \
} \
HRESULT __stdcall  ENVTIEName::AddEndcut(CATLONG iExtremityIndex, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATIASfmReferences * iListContext, CATIASfmConnectionParameters * iListParameters, CATIASfmEndcut *& oSfmProfileEndCut) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)AddEndcut(iExtremityIndex,iEndcutType,iEndcutName,iListContext,iListParameters,oSfmProfileEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndcut(CATLONG iExtremityIndex, CATIASfmEndcut *& oSfmEndcut) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetEndcut(iExtremityIndex,oSfmEndcut)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveEndcut(CATLONG iExtremityIndex) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)RemoveEndcut(iExtremityIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetSlotsOnProfile(CATIASfmSlots *& oSfmSlots) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetSlotsOnProfile(oSfmSlots)); \
} \
HRESULT __stdcall  ENVTIEName::GetProfileLimit(CATLONG iExtremityIndex, CATIAReference *& oLimit) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetProfileLimit(iExtremityIndex,oLimit)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileLimit(CATLONG iExtremityIndex, CATIAReference * iLimit) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)SetProfileLimit(iExtremityIndex,iLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplitProfiles(CATIAReferences *& oSplitProfiles) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_SplitProfiles(oSplitProfiles)); \
} \
HRESULT __stdcall  ENVTIEName::get_Category(CATBSTR & oCategory) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Category(oCategory)); \
} \
HRESULT __stdcall  ENVTIEName::put_Category(const CATBSTR & iCategory) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_Category(iCategory)); \
} \
HRESULT __stdcall  ENVTIEName::get_Material(CATBSTR & oMaterial) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Material(oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::put_Material(const CATBSTR & iMaterial) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_Material(iMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::get_Grade(CATBSTR & oGrade) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Grade(oGrade)); \
} \
HRESULT __stdcall  ENVTIEName::put_Grade(const CATBSTR & iGrade) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_Grade(iGrade)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmMember2Points,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmMember2Points(classe)    TIECATIASfmMember2Points##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmMember2Points(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmMember2Points, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmMember2Points, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmMember2Points, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmMember2Points, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmMember2Points, classe) \
 \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_StartPointSpec(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPointSpec(oPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_StartPointSpec(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPointSpec(iPoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_EndPointSpec(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPointSpec(oPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_EndPointSpec(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndPointSpec(iPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_StartPointOnCrvCurve(CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPointOnCrvCurve(oCurve); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_StartPointOnCrvCurve(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPointOnCrvCurve(iCurve); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_StartPointOnCrvMode(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPointOnCrvMode(oMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_StartPointOnCrvMode(CAT_VARIANT_BOOL oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPointOnCrvMode(oCurve); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_StartPointOnCrvOffset(double & oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPointOnCrvOffset(oOffset); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_StartPointOnCrvOffset(double iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPointOnCrvOffset(iOffset); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_StartPointOnCrvOffsetParam(CATIALength *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPointOnCrvOffsetParam(oOffset); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_StartPointOnCrvOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPointOnCrvOrientation(oOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_StartPointOnCrvOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPointOnCrvOrientation(iOrientation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_EndPointOnCrvCurve(CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPointOnCrvCurve(oCurve); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_EndPointOnCrvCurve(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndPointOnCrvCurve(iCurve); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_EndPointOnCrvMode(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPointOnCrvMode(oMode); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_EndPointOnCrvMode(CAT_VARIANT_BOOL oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndPointOnCrvMode(oCurve); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_EndPointOnCrvOffset(double & oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPointOnCrvOffset(oOffset); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_EndPointOnCrvOffset(double iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndPointOnCrvOffset(iOffset); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_EndPointOnCrvOffsetParam(CATIALength *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPointOnCrvOffsetParam(oOffset); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_EndPointOnCrvOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPointOnCrvOrientation(oOrientation); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_EndPointOnCrvOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndPointOnCrvOrientation(iOrientation); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::InvertStartPointOnCrvOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertStartPointOnCrvOrientation(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::InvertEndPointOnCrvOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertEndPointOnCrvOrientation(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_AngleParam(CATIAAngle *& oParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleParam(oParam); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_HorizontalAnchorPointOffset(double & oHorizontalAnchorPointOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oHorizontalAnchorPointOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HorizontalAnchorPointOffset(oHorizontalAnchorPointOffset); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oHorizontalAnchorPointOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_HorizontalAnchorPointOffset(double iHorizontalAnchorPointOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iHorizontalAnchorPointOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HorizontalAnchorPointOffset(iHorizontalAnchorPointOffset); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iHorizontalAnchorPointOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_HorizontalAnchorPointOffsetParam(CATIALength *& oParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HorizontalAnchorPointOffsetParam(oParam); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_VerticalAnchorPointOffset(double & oVerticalAnchorPointOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oVerticalAnchorPointOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VerticalAnchorPointOffset(oVerticalAnchorPointOffset); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oVerticalAnchorPointOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_VerticalAnchorPointOffset(double iVerticalAnchorPointOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iVerticalAnchorPointOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VerticalAnchorPointOffset(iVerticalAnchorPointOffset); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iVerticalAnchorPointOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_VerticalAnchorPointOffsetParam(CATIALength *& oParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VerticalAnchorPointOffsetParam(oParam); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::Flip() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Flip(); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::IsFlip(CAT_VARIANT_BOOL & oIsFlip) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oIsFlip); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsFlip(oIsFlip); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oIsFlip); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetMemberType(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMemberType(oName); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iOperatingEle,&oWelds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWelds(iOperatingEle,oWelds); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iOperatingEle,&oWelds); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_SectionName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionName(oName); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_SectionName(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionName(iName); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_AnchorPoint(CATBSTR & oAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorPoint(oAnchorPoint); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_AnchorPoint(const CATBSTR & iAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorPoint(iAnchorPoint); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::Run() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetStartCoord(CATSafeArrayVariant & oCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartCoord(oCoord); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetEndCoord(CATSafeArrayVariant & oCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndCoord(oCoord); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetSectionAxis(double iAbside, CATSafeArrayVariant & iOrigin, CATSafeArrayVariant & ioVector1, CATSafeArrayVariant & ioVector2, CATSafeArrayVariant & ioVector3) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iAbside,&iOrigin,&ioVector1,&ioVector2,&ioVector3); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectionAxis(iAbside,iOrigin,ioVector1,ioVector2,ioVector3); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iAbside,&iOrigin,&ioVector1,&ioVector2,&ioVector3); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::AddEndcut(CATLONG iExtremityIndex, const CATBSTR & iEndcutType, const CATBSTR & iEndcutName, CATIASfmReferences * iListContext, CATIASfmConnectionParameters * iListParameters, CATIASfmEndcut *& oSfmProfileEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iExtremityIndex,&iEndcutType,&iEndcutName,&iListContext,&iListParameters,&oSfmProfileEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEndcut(iExtremityIndex,iEndcutType,iEndcutName,iListContext,iListParameters,oSfmProfileEndCut); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iExtremityIndex,&iEndcutType,&iEndcutName,&iListContext,&iListParameters,&oSfmProfileEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetEndcut(CATLONG iExtremityIndex, CATIASfmEndcut *& oSfmEndcut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iExtremityIndex,&oSfmEndcut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndcut(iExtremityIndex,oSfmEndcut); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iExtremityIndex,&oSfmEndcut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::RemoveEndcut(CATLONG iExtremityIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iExtremityIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveEndcut(iExtremityIndex); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iExtremityIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetSlotsOnProfile(CATIASfmSlots *& oSfmSlots) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&oSfmSlots); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSlotsOnProfile(oSfmSlots); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&oSfmSlots); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::GetProfileLimit(CATLONG iExtremityIndex, CATIAReference *& oLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iExtremityIndex,&oLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProfileLimit(iExtremityIndex,oLimit); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iExtremityIndex,&oLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::SetProfileLimit(CATLONG iExtremityIndex, CATIAReference * iLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iExtremityIndex,&iLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileLimit(iExtremityIndex,iLimit); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iExtremityIndex,&iLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_SplitProfiles(CATIAReferences *& oSplitProfiles) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oSplitProfiles); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplitProfiles(oSplitProfiles); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oSplitProfiles); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_Category(CATBSTR & oCategory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oCategory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Category(oCategory); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oCategory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_Category(const CATBSTR & iCategory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&iCategory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Category(iCategory); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&iCategory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_Material(CATBSTR & oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Material(oMaterial); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_Material(const CATBSTR & iMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Material(iMaterial); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::get_Grade(CATBSTR & oGrade) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oGrade); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Grade(oGrade); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oGrade); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmMember2Points##classe::put_Grade(const CATBSTR & iGrade) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&iGrade); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Grade(iGrade); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&iGrade); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmMember2Points##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmMember2Points##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmMember2Points##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmMember2Points##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmMember2Points##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmMember2Points(classe) \
 \
 \
declare_TIE_CATIASfmMember2Points(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmMember2Points##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmMember2Points,"CATIASfmMember2Points",CATIASfmMember2Points::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmMember2Points(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmMember2Points, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmMember2Points##classe(classe::MetaObject(),CATIASfmMember2Points::MetaObject(),(void *)CreateTIECATIASfmMember2Points##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmMember2Points(classe) \
 \
 \
declare_TIE_CATIASfmMember2Points(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmMember2Points##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmMember2Points,"CATIASfmMember2Points",CATIASfmMember2Points::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmMember2Points(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmMember2Points, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmMember2Points##classe(classe::MetaObject(),CATIASfmMember2Points::MetaObject(),(void *)CreateTIECATIASfmMember2Points##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmMember2Points(classe) TIE_CATIASfmMember2Points(classe)
#else
#define BOA_CATIASfmMember2Points(classe) CATImplementBOA(CATIASfmMember2Points, classe)
#endif

#endif
