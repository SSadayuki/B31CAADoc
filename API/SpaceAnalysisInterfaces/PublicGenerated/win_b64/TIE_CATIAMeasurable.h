#ifndef __TIE_CATIAMeasurable
#define __TIE_CATIAMeasurable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMeasurable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMeasurable */
#define declare_TIE_CATIAMeasurable(classe) \
 \
 \
class TIECATIAMeasurable##classe : public CATIAMeasurable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMeasurable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_GeometryName(CatMeasurableName & oGeometryName); \
      virtual HRESULT __stdcall get_Volume(double & oVolume); \
      virtual HRESULT __stdcall get_Area(double & oArea); \
      virtual HRESULT __stdcall GetCOG(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall get_Perimeter(double & oPerimeter); \
      virtual HRESULT __stdcall GetPlane(CATSafeArrayVariant & oComponents); \
      virtual HRESULT __stdcall get_Radius(double & oRadius); \
      virtual HRESULT __stdcall GetCenter(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
      virtual HRESULT __stdcall GetAxis(CATSafeArrayVariant & oAxisVector); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall get_Length(double & oLength); \
      virtual HRESULT __stdcall GetPointsOnCurve(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall GetPointsOnAxis(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall GetPoint(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall GetAxisSystem(CATSafeArrayVariant & oComponents); \
      virtual HRESULT __stdcall GetMinimumDistance(CATIAReference * iMeasuredItem, double & oDistance); \
      virtual HRESULT __stdcall GetMinimumDistanceInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oDistance); \
      virtual HRESULT __stdcall GetMinimumDistancePoints(CATIAReference * iMeasuredItem, CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall GetMinimumDistancePointsInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall GetAngleBetween(CATIAReference * iMeasuredItem, double & oAngle); \
      virtual HRESULT __stdcall GetAngleBetweenInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oAngle); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMeasurable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_GeometryName(CatMeasurableName & oGeometryName); \
virtual HRESULT __stdcall get_Volume(double & oVolume); \
virtual HRESULT __stdcall get_Area(double & oArea); \
virtual HRESULT __stdcall GetCOG(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall get_Perimeter(double & oPerimeter); \
virtual HRESULT __stdcall GetPlane(CATSafeArrayVariant & oComponents); \
virtual HRESULT __stdcall get_Radius(double & oRadius); \
virtual HRESULT __stdcall GetCenter(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
virtual HRESULT __stdcall GetAxis(CATSafeArrayVariant & oAxisVector); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall get_Length(double & oLength); \
virtual HRESULT __stdcall GetPointsOnCurve(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall GetPointsOnAxis(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall GetPoint(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall GetAxisSystem(CATSafeArrayVariant & oComponents); \
virtual HRESULT __stdcall GetMinimumDistance(CATIAReference * iMeasuredItem, double & oDistance); \
virtual HRESULT __stdcall GetMinimumDistanceInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oDistance); \
virtual HRESULT __stdcall GetMinimumDistancePoints(CATIAReference * iMeasuredItem, CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall GetMinimumDistancePointsInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall GetAngleBetween(CATIAReference * iMeasuredItem, double & oAngle); \
virtual HRESULT __stdcall GetAngleBetweenInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oAngle); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMeasurable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_GeometryName(CatMeasurableName & oGeometryName) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_GeometryName(oGeometryName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Volume(double & oVolume) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Volume(oVolume)); \
} \
HRESULT __stdcall  ENVTIEName::get_Area(double & oArea) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Area(oArea)); \
} \
HRESULT __stdcall  ENVTIEName::GetCOG(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetCOG(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_Perimeter(double & oPerimeter) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Perimeter(oPerimeter)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlane(CATSafeArrayVariant & oComponents) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetPlane(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(double & oRadius) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetCenter(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxis(CATSafeArrayVariant & oAxisVector) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetAxis(oAxisVector)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(double & oLength) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Length(oLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetPointsOnCurve(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetPointsOnCurve(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetPointsOnAxis(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetPointsOnAxis(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoint(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetPoint(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxisSystem(CATSafeArrayVariant & oComponents) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetAxisSystem(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::GetMinimumDistance(CATIAReference * iMeasuredItem, double & oDistance) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetMinimumDistance(iMeasuredItem,oDistance)); \
} \
HRESULT __stdcall  ENVTIEName::GetMinimumDistanceInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oDistance) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetMinimumDistanceInContext(iMeasuredItem,iProductInstance,oDistance)); \
} \
HRESULT __stdcall  ENVTIEName::GetMinimumDistancePoints(CATIAReference * iMeasuredItem, CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetMinimumDistancePoints(iMeasuredItem,oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetMinimumDistancePointsInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetMinimumDistancePointsInContext(iMeasuredItem,iProductInstance,oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleBetween(CATIAReference * iMeasuredItem, double & oAngle) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetAngleBetween(iMeasuredItem,oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleBetweenInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oAngle) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetAngleBetweenInContext(iMeasuredItem,iProductInstance,oAngle)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMeasurable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMeasurable(classe)    TIECATIAMeasurable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMeasurable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMeasurable, classe) \
 \
 \
CATImplementTIEMethods(CATIAMeasurable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMeasurable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMeasurable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMeasurable, classe) \
 \
HRESULT __stdcall  TIECATIAMeasurable##classe::get_GeometryName(CatMeasurableName & oGeometryName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGeometryName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometryName(oGeometryName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGeometryName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::get_Volume(double & oVolume) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oVolume); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Volume(oVolume); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oVolume); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::get_Area(double & oArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Area(oArea); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetCOG(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCOG(oCoordinates); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::get_Perimeter(double & oPerimeter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPerimeter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Perimeter(oPerimeter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPerimeter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetPlane(CATSafeArrayVariant & oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlane(oComponents); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::get_Radius(double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetCenter(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCoordinates); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetAxis(CATSafeArrayVariant & oAxisVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oAxisVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxis(oAxisVector); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oAxisVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::get_Length(double & oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(oLength); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetPointsOnCurve(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointsOnCurve(oCoordinates); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetPointsOnAxis(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointsOnAxis(oCoordinates); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetPoint(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoint(oCoordinates); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetAxisSystem(CATSafeArrayVariant & oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxisSystem(oComponents); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetMinimumDistance(CATIAReference * iMeasuredItem, double & oDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iMeasuredItem,&oDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMinimumDistance(iMeasuredItem,oDistance); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iMeasuredItem,&oDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetMinimumDistanceInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iMeasuredItem,&iProductInstance,&oDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMinimumDistanceInContext(iMeasuredItem,iProductInstance,oDistance); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iMeasuredItem,&iProductInstance,&oDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetMinimumDistancePoints(CATIAReference * iMeasuredItem, CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iMeasuredItem,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMinimumDistancePoints(iMeasuredItem,oCoordinates); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iMeasuredItem,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetMinimumDistancePointsInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iMeasuredItem,&iProductInstance,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMinimumDistancePointsInContext(iMeasuredItem,iProductInstance,oCoordinates); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iMeasuredItem,&iProductInstance,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetAngleBetween(CATIAReference * iMeasuredItem, double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iMeasuredItem,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleBetween(iMeasuredItem,oAngle); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iMeasuredItem,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasurable##classe::GetAngleBetweenInContext(CATIAReference * iMeasuredItem, CATIABase * iProductInstance, double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iMeasuredItem,&iProductInstance,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleBetweenInContext(iMeasuredItem,iProductInstance,oAngle); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iMeasuredItem,&iProductInstance,&oAngle); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasurable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasurable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasurable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasurable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasurable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMeasurable(classe) \
 \
 \
declare_TIE_CATIAMeasurable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMeasurable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMeasurable,"CATIAMeasurable",CATIAMeasurable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMeasurable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMeasurable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMeasurable##classe(classe::MetaObject(),CATIAMeasurable::MetaObject(),(void *)CreateTIECATIAMeasurable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMeasurable(classe) \
 \
 \
declare_TIE_CATIAMeasurable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMeasurable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMeasurable,"CATIAMeasurable",CATIAMeasurable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMeasurable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMeasurable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMeasurable##classe(classe::MetaObject(),CATIAMeasurable::MetaObject(),(void *)CreateTIECATIAMeasurable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMeasurable(classe) TIE_CATIAMeasurable(classe)
#else
#define BOA_CATIAMeasurable(classe) CATImplementBOA(CATIAMeasurable, classe)
#endif

#endif
