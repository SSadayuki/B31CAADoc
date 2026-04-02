#ifndef __TIE_SWKIAIKConstraint
#define __TIE_SWKIAIKConstraint

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAIKConstraint.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAIKConstraint */
#define declare_TIE_SWKIAIKConstraint(classe) \
 \
 \
class TIESWKIAIKConstraint##classe : public SWKIAIKConstraint \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAIKConstraint, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Identifier(CATBSTR & pioIdentifier); \
      virtual HRESULT __stdcall GetConstraintElement(CATBaseDispatch *& poConstraintElement); \
      virtual HRESULT __stdcall SetConstraintElement(CATBaseDispatch * piConstraintElement, const CATBSTR & piConstraintType); \
      virtual HRESULT __stdcall GetTargetPoint(CATSafeArrayVariant & poTargetPtCoord); \
      virtual HRESULT __stdcall SetTargetPoint(CATIAReference * piObject, double piCoordX, double piCoordY, double piCoordZ); \
      virtual HRESULT __stdcall GetTargetLine(CATSafeArrayVariant & poTargetLineCoord); \
      virtual HRESULT __stdcall SetTargetLine(CATIAReference * piObject, double piStartPointX, double piStartPointY, double piStartPointZ, double piEndPointX, double piEndPointY, double piEndPointZ, const CATBSTR & piConstraintType); \
      virtual HRESULT __stdcall GetTargetPlane(CATSafeArrayVariant & poTargetPlaneCoord); \
      virtual HRESULT __stdcall SetTargetPlane(CATIAReference * piObject, double piOriginX, double piOriginY, double piOriginZ, double piNormalX, double piNormalY, double piNormalZ, const CATBSTR & piConstraintType); \
      virtual HRESULT __stdcall ResetTarget(); \
      virtual HRESULT __stdcall GetEndEffector(SWKIABodyElement *& poEndEffector); \
      virtual HRESULT __stdcall get_EndEffector(CATBSTR & poEndEffector); \
      virtual HRESULT __stdcall put_EndEffector(const CATBSTR & piEndEffector); \
      virtual HRESULT __stdcall GetStartSegment(SWKIASegment *& poStartSegment); \
      virtual HRESULT __stdcall get_StartSegment(CATBSTR & poStartSegment); \
      virtual HRESULT __stdcall put_StartSegment(const CATBSTR & piStartSegment); \
      virtual HRESULT __stdcall get_UserType(CATBSTR & pioUserType); \
      virtual HRESULT __stdcall get_Active(CAT_VARIANT_BOOL & poActive); \
      virtual HRESULT __stdcall put_Active(CAT_VARIANT_BOOL piActive); \
      virtual HRESULT __stdcall get_TransferWithTarget(CAT_VARIANT_BOOL & poActive); \
      virtual HRESULT __stdcall put_TransferWithTarget(CAT_VARIANT_BOOL piActive); \
      virtual HRESULT __stdcall get_Priority(CATLONG & poPriority); \
      virtual HRESULT __stdcall put_Priority(CATLONG piPriority); \
      virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
      virtual HRESULT __stdcall get_RotationOffsetAngle(double & poRotationOffsetAngle); \
      virtual HRESULT __stdcall put_RotationOffsetAngle(double piRotationOffsetAngle); \
      virtual HRESULT __stdcall get_DistanceCriteria(double & poDistanceCriteria); \
      virtual HRESULT __stdcall put_DistanceCriteria(double piDistanceCriteria); \
      virtual HRESULT __stdcall get_AngleCriteria(double & poAngleCriteria); \
      virtual HRESULT __stdcall put_AngleCriteria(double piAngleCriteria); \
      virtual HRESULT __stdcall get_DistanceToTarget(double & poLength); \
      virtual HRESULT __stdcall get_AngleToTarget(double & poAngle); \
      virtual HRESULT __stdcall get_IsSuccess(CAT_VARIANT_BOOL & poSucess); \
      virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAIKConstraint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Identifier(CATBSTR & pioIdentifier); \
virtual HRESULT __stdcall GetConstraintElement(CATBaseDispatch *& poConstraintElement); \
virtual HRESULT __stdcall SetConstraintElement(CATBaseDispatch * piConstraintElement, const CATBSTR & piConstraintType); \
virtual HRESULT __stdcall GetTargetPoint(CATSafeArrayVariant & poTargetPtCoord); \
virtual HRESULT __stdcall SetTargetPoint(CATIAReference * piObject, double piCoordX, double piCoordY, double piCoordZ); \
virtual HRESULT __stdcall GetTargetLine(CATSafeArrayVariant & poTargetLineCoord); \
virtual HRESULT __stdcall SetTargetLine(CATIAReference * piObject, double piStartPointX, double piStartPointY, double piStartPointZ, double piEndPointX, double piEndPointY, double piEndPointZ, const CATBSTR & piConstraintType); \
virtual HRESULT __stdcall GetTargetPlane(CATSafeArrayVariant & poTargetPlaneCoord); \
virtual HRESULT __stdcall SetTargetPlane(CATIAReference * piObject, double piOriginX, double piOriginY, double piOriginZ, double piNormalX, double piNormalY, double piNormalZ, const CATBSTR & piConstraintType); \
virtual HRESULT __stdcall ResetTarget(); \
virtual HRESULT __stdcall GetEndEffector(SWKIABodyElement *& poEndEffector); \
virtual HRESULT __stdcall get_EndEffector(CATBSTR & poEndEffector); \
virtual HRESULT __stdcall put_EndEffector(const CATBSTR & piEndEffector); \
virtual HRESULT __stdcall GetStartSegment(SWKIASegment *& poStartSegment); \
virtual HRESULT __stdcall get_StartSegment(CATBSTR & poStartSegment); \
virtual HRESULT __stdcall put_StartSegment(const CATBSTR & piStartSegment); \
virtual HRESULT __stdcall get_UserType(CATBSTR & pioUserType); \
virtual HRESULT __stdcall get_Active(CAT_VARIANT_BOOL & poActive); \
virtual HRESULT __stdcall put_Active(CAT_VARIANT_BOOL piActive); \
virtual HRESULT __stdcall get_TransferWithTarget(CAT_VARIANT_BOOL & poActive); \
virtual HRESULT __stdcall put_TransferWithTarget(CAT_VARIANT_BOOL piActive); \
virtual HRESULT __stdcall get_Priority(CATLONG & poPriority); \
virtual HRESULT __stdcall put_Priority(CATLONG piPriority); \
virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
virtual HRESULT __stdcall get_RotationOffsetAngle(double & poRotationOffsetAngle); \
virtual HRESULT __stdcall put_RotationOffsetAngle(double piRotationOffsetAngle); \
virtual HRESULT __stdcall get_DistanceCriteria(double & poDistanceCriteria); \
virtual HRESULT __stdcall put_DistanceCriteria(double piDistanceCriteria); \
virtual HRESULT __stdcall get_AngleCriteria(double & poAngleCriteria); \
virtual HRESULT __stdcall put_AngleCriteria(double piAngleCriteria); \
virtual HRESULT __stdcall get_DistanceToTarget(double & poLength); \
virtual HRESULT __stdcall get_AngleToTarget(double & poAngle); \
virtual HRESULT __stdcall get_IsSuccess(CAT_VARIANT_BOOL & poSucess); \
virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAIKConstraint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Identifier(CATBSTR & pioIdentifier) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Identifier(pioIdentifier)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintElement(CATBaseDispatch *& poConstraintElement) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)GetConstraintElement(poConstraintElement)); \
} \
HRESULT __stdcall  ENVTIEName::SetConstraintElement(CATBaseDispatch * piConstraintElement, const CATBSTR & piConstraintType) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)SetConstraintElement(piConstraintElement,piConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::GetTargetPoint(CATSafeArrayVariant & poTargetPtCoord) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)GetTargetPoint(poTargetPtCoord)); \
} \
HRESULT __stdcall  ENVTIEName::SetTargetPoint(CATIAReference * piObject, double piCoordX, double piCoordY, double piCoordZ) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)SetTargetPoint(piObject,piCoordX,piCoordY,piCoordZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetTargetLine(CATSafeArrayVariant & poTargetLineCoord) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)GetTargetLine(poTargetLineCoord)); \
} \
HRESULT __stdcall  ENVTIEName::SetTargetLine(CATIAReference * piObject, double piStartPointX, double piStartPointY, double piStartPointZ, double piEndPointX, double piEndPointY, double piEndPointZ, const CATBSTR & piConstraintType) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)SetTargetLine(piObject,piStartPointX,piStartPointY,piStartPointZ,piEndPointX,piEndPointY,piEndPointZ,piConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::GetTargetPlane(CATSafeArrayVariant & poTargetPlaneCoord) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)GetTargetPlane(poTargetPlaneCoord)); \
} \
HRESULT __stdcall  ENVTIEName::SetTargetPlane(CATIAReference * piObject, double piOriginX, double piOriginY, double piOriginZ, double piNormalX, double piNormalY, double piNormalZ, const CATBSTR & piConstraintType) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)SetTargetPlane(piObject,piOriginX,piOriginY,piOriginZ,piNormalX,piNormalY,piNormalZ,piConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::ResetTarget() \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)ResetTarget()); \
} \
HRESULT __stdcall  ENVTIEName::GetEndEffector(SWKIABodyElement *& poEndEffector) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)GetEndEffector(poEndEffector)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndEffector(CATBSTR & poEndEffector) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_EndEffector(poEndEffector)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndEffector(const CATBSTR & piEndEffector) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_EndEffector(piEndEffector)); \
} \
HRESULT __stdcall  ENVTIEName::GetStartSegment(SWKIASegment *& poStartSegment) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)GetStartSegment(poStartSegment)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartSegment(CATBSTR & poStartSegment) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_StartSegment(poStartSegment)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartSegment(const CATBSTR & piStartSegment) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_StartSegment(piStartSegment)); \
} \
HRESULT __stdcall  ENVTIEName::get_UserType(CATBSTR & pioUserType) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_UserType(pioUserType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Active(CAT_VARIANT_BOOL & poActive) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Active(poActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Active(CAT_VARIANT_BOOL piActive) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_Active(piActive)); \
} \
HRESULT __stdcall  ENVTIEName::get_TransferWithTarget(CAT_VARIANT_BOOL & poActive) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_TransferWithTarget(poActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_TransferWithTarget(CAT_VARIANT_BOOL piActive) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_TransferWithTarget(piActive)); \
} \
HRESULT __stdcall  ENVTIEName::get_Priority(CATLONG & poPriority) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Priority(poPriority)); \
} \
HRESULT __stdcall  ENVTIEName::put_Priority(CATLONG piPriority) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_Priority(piPriority)); \
} \
HRESULT __stdcall  ENVTIEName::get_Manikin(SWKIAManikin *& poManikin) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Manikin(poManikin)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationOffsetAngle(double & poRotationOffsetAngle) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_RotationOffsetAngle(poRotationOffsetAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_RotationOffsetAngle(double piRotationOffsetAngle) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_RotationOffsetAngle(piRotationOffsetAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceCriteria(double & poDistanceCriteria) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_DistanceCriteria(poDistanceCriteria)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceCriteria(double piDistanceCriteria) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_DistanceCriteria(piDistanceCriteria)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleCriteria(double & poAngleCriteria) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_AngleCriteria(poAngleCriteria)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleCriteria(double piAngleCriteria) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_AngleCriteria(piAngleCriteria)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceToTarget(double & poLength) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_DistanceToTarget(poLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleToTarget(double & poAngle) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_AngleToTarget(poAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsSuccess(CAT_VARIANT_BOOL & poSucess) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_IsSuccess(poSucess)); \
} \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & pioText) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Memo(pioText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAIKConstraint,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAIKConstraint(classe)    TIESWKIAIKConstraint##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAIKConstraint(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAIKConstraint, classe) \
 \
 \
CATImplementTIEMethods(SWKIAIKConstraint, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAIKConstraint, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAIKConstraint, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAIKConstraint, classe) \
 \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_Identifier(CATBSTR & pioIdentifier) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&pioIdentifier); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Identifier(pioIdentifier); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&pioIdentifier); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::GetConstraintElement(CATBaseDispatch *& poConstraintElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&poConstraintElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintElement(poConstraintElement); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&poConstraintElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::SetConstraintElement(CATBaseDispatch * piConstraintElement, const CATBSTR & piConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&piConstraintElement,&piConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConstraintElement(piConstraintElement,piConstraintType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&piConstraintElement,&piConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::GetTargetPoint(CATSafeArrayVariant & poTargetPtCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&poTargetPtCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTargetPoint(poTargetPtCoord); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&poTargetPtCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::SetTargetPoint(CATIAReference * piObject, double piCoordX, double piCoordY, double piCoordZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&piObject,&piCoordX,&piCoordY,&piCoordZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTargetPoint(piObject,piCoordX,piCoordY,piCoordZ); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&piObject,&piCoordX,&piCoordY,&piCoordZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::GetTargetLine(CATSafeArrayVariant & poTargetLineCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&poTargetLineCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTargetLine(poTargetLineCoord); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&poTargetLineCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::SetTargetLine(CATIAReference * piObject, double piStartPointX, double piStartPointY, double piStartPointZ, double piEndPointX, double piEndPointY, double piEndPointZ, const CATBSTR & piConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&piObject,&piStartPointX,&piStartPointY,&piStartPointZ,&piEndPointX,&piEndPointY,&piEndPointZ,&piConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTargetLine(piObject,piStartPointX,piStartPointY,piStartPointZ,piEndPointX,piEndPointY,piEndPointZ,piConstraintType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&piObject,&piStartPointX,&piStartPointY,&piStartPointZ,&piEndPointX,&piEndPointY,&piEndPointZ,&piConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::GetTargetPlane(CATSafeArrayVariant & poTargetPlaneCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poTargetPlaneCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTargetPlane(poTargetPlaneCoord); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poTargetPlaneCoord); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::SetTargetPlane(CATIAReference * piObject, double piOriginX, double piOriginY, double piOriginZ, double piNormalX, double piNormalY, double piNormalZ, const CATBSTR & piConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&piObject,&piOriginX,&piOriginY,&piOriginZ,&piNormalX,&piNormalY,&piNormalZ,&piConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTargetPlane(piObject,piOriginX,piOriginY,piOriginZ,piNormalX,piNormalY,piNormalZ,piConstraintType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&piObject,&piOriginX,&piOriginY,&piOriginZ,&piNormalX,&piNormalY,&piNormalZ,&piConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::ResetTarget() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetTarget(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::GetEndEffector(SWKIABodyElement *& poEndEffector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&poEndEffector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndEffector(poEndEffector); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&poEndEffector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_EndEffector(CATBSTR & poEndEffector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poEndEffector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndEffector(poEndEffector); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poEndEffector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_EndEffector(const CATBSTR & piEndEffector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&piEndEffector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndEffector(piEndEffector); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&piEndEffector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::GetStartSegment(SWKIASegment *& poStartSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&poStartSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartSegment(poStartSegment); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&poStartSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_StartSegment(CATBSTR & poStartSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&poStartSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartSegment(poStartSegment); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&poStartSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_StartSegment(const CATBSTR & piStartSegment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&piStartSegment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartSegment(piStartSegment); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&piStartSegment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_UserType(CATBSTR & pioUserType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&pioUserType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UserType(pioUserType); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&pioUserType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_Active(CAT_VARIANT_BOOL & poActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&poActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Active(poActive); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&poActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_Active(CAT_VARIANT_BOOL piActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&piActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Active(piActive); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&piActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_TransferWithTarget(CAT_VARIANT_BOOL & poActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&poActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TransferWithTarget(poActive); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&poActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_TransferWithTarget(CAT_VARIANT_BOOL piActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&piActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TransferWithTarget(piActive); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&piActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_Priority(CATLONG & poPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&poPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Priority(poPriority); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&poPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_Priority(CATLONG piPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&piPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Priority(piPriority); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&piPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_Manikin(SWKIAManikin *& poManikin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&poManikin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Manikin(poManikin); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&poManikin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_RotationOffsetAngle(double & poRotationOffsetAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&poRotationOffsetAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationOffsetAngle(poRotationOffsetAngle); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&poRotationOffsetAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_RotationOffsetAngle(double piRotationOffsetAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&piRotationOffsetAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RotationOffsetAngle(piRotationOffsetAngle); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&piRotationOffsetAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_DistanceCriteria(double & poDistanceCriteria) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&poDistanceCriteria); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceCriteria(poDistanceCriteria); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&poDistanceCriteria); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_DistanceCriteria(double piDistanceCriteria) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&piDistanceCriteria); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceCriteria(piDistanceCriteria); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&piDistanceCriteria); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_AngleCriteria(double & poAngleCriteria) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&poAngleCriteria); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleCriteria(poAngleCriteria); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&poAngleCriteria); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_AngleCriteria(double piAngleCriteria) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&piAngleCriteria); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleCriteria(piAngleCriteria); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&piAngleCriteria); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_DistanceToTarget(double & poLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&poLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceToTarget(poLength); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&poLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_AngleToTarget(double & poAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&poAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleToTarget(poAngle); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&poAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_IsSuccess(CAT_VARIANT_BOOL & poSucess) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&poSucess); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsSuccess(poSucess); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&poSucess); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::get_Memo(CATBSTR & pioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&pioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(pioText); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&pioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAIKConstraint##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKConstraint##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKConstraint##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKConstraint##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKConstraint##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAIKConstraint##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAIKConstraint(classe) \
 \
 \
declare_TIE_SWKIAIKConstraint(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAIKConstraint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAIKConstraint,"SWKIAIKConstraint",SWKIAIKConstraint::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAIKConstraint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAIKConstraint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAIKConstraint##classe(classe::MetaObject(),SWKIAIKConstraint::MetaObject(),(void *)CreateTIESWKIAIKConstraint##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAIKConstraint(classe) \
 \
 \
declare_TIE_SWKIAIKConstraint(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAIKConstraint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAIKConstraint,"SWKIAIKConstraint",SWKIAIKConstraint::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAIKConstraint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAIKConstraint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAIKConstraint##classe(classe::MetaObject(),SWKIAIKConstraint::MetaObject(),(void *)CreateTIESWKIAIKConstraint##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAIKConstraint(classe) TIE_SWKIAIKConstraint(classe)
#else
#define BOA_SWKIAIKConstraint(classe) CATImplementBOA(SWKIAIKConstraint, classe)
#endif

#endif
