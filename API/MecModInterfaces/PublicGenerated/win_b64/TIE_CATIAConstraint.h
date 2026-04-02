#ifndef __TIE_CATIAConstraint
#define __TIE_CATIAConstraint

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAConstraint.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAConstraint */
#define declare_TIE_CATIAConstraint(classe) \
 \
 \
class TIECATIAConstraint##classe : public CATIAConstraint \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAConstraint, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatConstraintType & oType); \
      virtual HRESULT __stdcall get_Dimension(CATIADimension *& oDimension); \
      virtual HRESULT __stdcall get_Mode(CatConstraintMode & oMode); \
      virtual HRESULT __stdcall put_Mode(CatConstraintMode iNewMode); \
      virtual HRESULT __stdcall get_Side(CatConstraintSide & oCurrentSide); \
      virtual HRESULT __stdcall put_Side(CatConstraintSide iNewSide); \
      virtual HRESULT __stdcall get_Orientation(CatConstraintOrientation & oOrient); \
      virtual HRESULT __stdcall put_Orientation(CatConstraintOrientation iNewOrient); \
      virtual HRESULT __stdcall get_DistanceConfig(CatConstraintDistConfig & oCurrentConf); \
      virtual HRESULT __stdcall put_DistanceConfig(CatConstraintDistConfig iNewConfig); \
      virtual HRESULT __stdcall get_DistanceDirection(CatConstraintDistDirection & oCurrentDirection); \
      virtual HRESULT __stdcall put_DistanceDirection(CatConstraintDistDirection iNewDirection); \
      virtual HRESULT __stdcall get_AngleSector(CatConstraintAngleSector & oCurrentSector); \
      virtual HRESULT __stdcall put_AngleSector(CatConstraintAngleSector iNewSector); \
      virtual HRESULT __stdcall get_ReferenceAxis(CatConstraintRefAxis & oCurrentRefAxis); \
      virtual HRESULT __stdcall put_ReferenceAxis(CatConstraintRefAxis iNewRefAxis); \
      virtual HRESULT __stdcall get_ReferenceType(CatConstraintRefType & oCurrentRefType); \
      virtual HRESULT __stdcall put_ReferenceType(CatConstraintRefType iNewRefType); \
      virtual HRESULT __stdcall get_Status(CatConstraintStatus & oStatus); \
      virtual HRESULT __stdcall GetConstraintVisuLocation(CATSafeArrayVariant & oAnchorPoint, CATSafeArrayVariant & oAnchorVector); \
      virtual HRESULT __stdcall SetConstraintVisuLocation(double iNewX, double iNewY, double iNewZ); \
      virtual HRESULT __stdcall GetConstraintElement(CATLONG iElementNumber, CATIAReference *& oCurrentElement); \
      virtual HRESULT __stdcall SetConstraintElement(CATLONG iElementNumber, CATIAReference * iNewElement); \
      virtual HRESULT __stdcall Deactivate(); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall IsInactive(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAConstraint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatConstraintType & oType); \
virtual HRESULT __stdcall get_Dimension(CATIADimension *& oDimension); \
virtual HRESULT __stdcall get_Mode(CatConstraintMode & oMode); \
virtual HRESULT __stdcall put_Mode(CatConstraintMode iNewMode); \
virtual HRESULT __stdcall get_Side(CatConstraintSide & oCurrentSide); \
virtual HRESULT __stdcall put_Side(CatConstraintSide iNewSide); \
virtual HRESULT __stdcall get_Orientation(CatConstraintOrientation & oOrient); \
virtual HRESULT __stdcall put_Orientation(CatConstraintOrientation iNewOrient); \
virtual HRESULT __stdcall get_DistanceConfig(CatConstraintDistConfig & oCurrentConf); \
virtual HRESULT __stdcall put_DistanceConfig(CatConstraintDistConfig iNewConfig); \
virtual HRESULT __stdcall get_DistanceDirection(CatConstraintDistDirection & oCurrentDirection); \
virtual HRESULT __stdcall put_DistanceDirection(CatConstraintDistDirection iNewDirection); \
virtual HRESULT __stdcall get_AngleSector(CatConstraintAngleSector & oCurrentSector); \
virtual HRESULT __stdcall put_AngleSector(CatConstraintAngleSector iNewSector); \
virtual HRESULT __stdcall get_ReferenceAxis(CatConstraintRefAxis & oCurrentRefAxis); \
virtual HRESULT __stdcall put_ReferenceAxis(CatConstraintRefAxis iNewRefAxis); \
virtual HRESULT __stdcall get_ReferenceType(CatConstraintRefType & oCurrentRefType); \
virtual HRESULT __stdcall put_ReferenceType(CatConstraintRefType iNewRefType); \
virtual HRESULT __stdcall get_Status(CatConstraintStatus & oStatus); \
virtual HRESULT __stdcall GetConstraintVisuLocation(CATSafeArrayVariant & oAnchorPoint, CATSafeArrayVariant & oAnchorVector); \
virtual HRESULT __stdcall SetConstraintVisuLocation(double iNewX, double iNewY, double iNewZ); \
virtual HRESULT __stdcall GetConstraintElement(CATLONG iElementNumber, CATIAReference *& oCurrentElement); \
virtual HRESULT __stdcall SetConstraintElement(CATLONG iElementNumber, CATIAReference * iNewElement); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall IsInactive(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAConstraint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatConstraintType & oType) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dimension(CATIADimension *& oDimension) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Dimension(oDimension)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mode(CatConstraintMode & oMode) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Mode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CatConstraintMode iNewMode) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_Mode(iNewMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Side(CatConstraintSide & oCurrentSide) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Side(oCurrentSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_Side(CatConstraintSide iNewSide) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_Side(iNewSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CatConstraintOrientation & oOrient) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrient)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CatConstraintOrientation iNewOrient) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iNewOrient)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceConfig(CatConstraintDistConfig & oCurrentConf) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_DistanceConfig(oCurrentConf)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceConfig(CatConstraintDistConfig iNewConfig) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_DistanceConfig(iNewConfig)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceDirection(CatConstraintDistDirection & oCurrentDirection) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_DistanceDirection(oCurrentDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceDirection(CatConstraintDistDirection iNewDirection) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_DistanceDirection(iNewDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleSector(CatConstraintAngleSector & oCurrentSector) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_AngleSector(oCurrentSector)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleSector(CatConstraintAngleSector iNewSector) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_AngleSector(iNewSector)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceAxis(CatConstraintRefAxis & oCurrentRefAxis) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_ReferenceAxis(oCurrentRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceAxis(CatConstraintRefAxis iNewRefAxis) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_ReferenceAxis(iNewRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceType(CatConstraintRefType & oCurrentRefType) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_ReferenceType(oCurrentRefType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceType(CatConstraintRefType iNewRefType) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_ReferenceType(iNewRefType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Status(CatConstraintStatus & oStatus) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Status(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintVisuLocation(CATSafeArrayVariant & oAnchorPoint, CATSafeArrayVariant & oAnchorVector) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)GetConstraintVisuLocation(oAnchorPoint,oAnchorVector)); \
} \
HRESULT __stdcall  ENVTIEName::SetConstraintVisuLocation(double iNewX, double iNewY, double iNewZ) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)SetConstraintVisuLocation(iNewX,iNewY,iNewZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintElement(CATLONG iElementNumber, CATIAReference *& oCurrentElement) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)GetConstraintElement(iElementNumber,oCurrentElement)); \
} \
HRESULT __stdcall  ENVTIEName::SetConstraintElement(CATLONG iElementNumber, CATIAReference * iNewElement) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)SetConstraintElement(iElementNumber,iNewElement)); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::IsInactive(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)IsInactive(oValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAConstraint,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAConstraint(classe)    TIECATIAConstraint##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAConstraint(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAConstraint, classe) \
 \
 \
CATImplementTIEMethods(CATIAConstraint, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAConstraint, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAConstraint, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAConstraint, classe) \
 \
HRESULT __stdcall  TIECATIAConstraint##classe::get_Type(CatConstraintType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_Dimension(CATIADimension *& oDimension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDimension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dimension(oDimension); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDimension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_Mode(CatConstraintMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(oMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_Mode(CatConstraintMode iNewMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iNewMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(iNewMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iNewMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_Side(CatConstraintSide & oCurrentSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCurrentSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Side(oCurrentSide); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCurrentSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_Side(CatConstraintSide iNewSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNewSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Side(iNewSide); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNewSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_Orientation(CatConstraintOrientation & oOrient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOrient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrient); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOrient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_Orientation(CatConstraintOrientation iNewOrient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNewOrient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iNewOrient); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNewOrient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_DistanceConfig(CatConstraintDistConfig & oCurrentConf) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCurrentConf); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceConfig(oCurrentConf); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCurrentConf); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_DistanceConfig(CatConstraintDistConfig iNewConfig) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNewConfig); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceConfig(iNewConfig); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNewConfig); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_DistanceDirection(CatConstraintDistDirection & oCurrentDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oCurrentDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceDirection(oCurrentDirection); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oCurrentDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_DistanceDirection(CatConstraintDistDirection iNewDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNewDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceDirection(iNewDirection); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNewDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_AngleSector(CatConstraintAngleSector & oCurrentSector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oCurrentSector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleSector(oCurrentSector); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oCurrentSector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_AngleSector(CatConstraintAngleSector iNewSector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNewSector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleSector(iNewSector); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNewSector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_ReferenceAxis(CatConstraintRefAxis & oCurrentRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oCurrentRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceAxis(oCurrentRefAxis); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oCurrentRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_ReferenceAxis(CatConstraintRefAxis iNewRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNewRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceAxis(iNewRefAxis); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNewRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_ReferenceType(CatConstraintRefType & oCurrentRefType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oCurrentRefType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceType(oCurrentRefType); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oCurrentRefType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::put_ReferenceType(CatConstraintRefType iNewRefType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNewRefType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceType(iNewRefType); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNewRefType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::get_Status(CatConstraintStatus & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Status(oStatus); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::GetConstraintVisuLocation(CATSafeArrayVariant & oAnchorPoint, CATSafeArrayVariant & oAnchorVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oAnchorPoint,&oAnchorVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintVisuLocation(oAnchorPoint,oAnchorVector); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oAnchorPoint,&oAnchorVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::SetConstraintVisuLocation(double iNewX, double iNewY, double iNewZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNewX,&iNewY,&iNewZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConstraintVisuLocation(iNewX,iNewY,iNewZ); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNewX,&iNewY,&iNewZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::GetConstraintElement(CATLONG iElementNumber, CATIAReference *& oCurrentElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iElementNumber,&oCurrentElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintElement(iElementNumber,oCurrentElement); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iElementNumber,&oCurrentElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::SetConstraintElement(CATLONG iElementNumber, CATIAReference * iNewElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iElementNumber,&iNewElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConstraintElement(iElementNumber,iNewElement); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iElementNumber,&iNewElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstraint##classe::IsInactive(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInactive(oValue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraint##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraint##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraint##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraint##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstraint##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAConstraint(classe) \
 \
 \
declare_TIE_CATIAConstraint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstraint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstraint,"CATIAConstraint",CATIAConstraint::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstraint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAConstraint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstraint##classe(classe::MetaObject(),CATIAConstraint::MetaObject(),(void *)CreateTIECATIAConstraint##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAConstraint(classe) \
 \
 \
declare_TIE_CATIAConstraint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstraint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstraint,"CATIAConstraint",CATIAConstraint::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstraint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAConstraint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstraint##classe(classe::MetaObject(),CATIAConstraint::MetaObject(),(void *)CreateTIECATIAConstraint##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAConstraint(classe) TIE_CATIAConstraint(classe)
#else
#define BOA_CATIAConstraint(classe) CATImplementBOA(CATIAConstraint, classe)
#endif

#endif
