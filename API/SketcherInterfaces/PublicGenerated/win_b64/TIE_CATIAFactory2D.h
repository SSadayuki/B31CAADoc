#ifndef __TIE_CATIAFactory2D
#define __TIE_CATIAFactory2D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFactory2D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFactory2D */
#define declare_TIE_CATIAFactory2D(classe) \
 \
 \
class TIECATIAFactory2D##classe : public CATIAFactory2D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFactory2D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreatePoint(double iX, double iY, CATIAPoint2D *& oNewPoint); \
      virtual HRESULT __stdcall CreateControlPoint(double iX, double iY, CATIAControlPoint2D *& oNewPoint); \
      virtual HRESULT __stdcall CreateLine(double iX1, double iY1, double iX2, double iY2, CATIALine2D *& oNewLine); \
      virtual HRESULT __stdcall CreateLineFromVector(double iX1, double iY1, double iUX, double iUY, CATIALine2D *& oNewLine); \
      virtual HRESULT __stdcall CreateClosedCircle(double iCenterX, double iCenterY, double iRadius, CATIACircle2D *& oNewCircle); \
      virtual HRESULT __stdcall CreateCircle(double iCenterX, double iCenterY, double iRadius, double iStartParam, double iEndParam, CATIACircle2D *& oNewCircle); \
      virtual HRESULT __stdcall CreateClosedEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, CATIAEllipse2D *& oNewEllipse); \
      virtual HRESULT __stdcall CreateEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, double iStartParam, double iEndParam, CATIAEllipse2D *& oNewEllipse); \
      virtual HRESULT __stdcall CreateSpline(const CATSafeArrayVariant & iPoles, CATIASpline2D *& oNewSpline); \
      virtual HRESULT __stdcall CreateProjections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions); \
      virtual HRESULT __stdcall CreateIntersections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions); \
      virtual HRESULT __stdcall CreateProjection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution); \
      virtual HRESULT __stdcall CreateIntersection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution); \
      virtual HRESULT __stdcall CreateParabola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iFocalDistance, CATIAParabola2D *& oParabola); \
      virtual HRESULT __stdcall CreateHyperbola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iMajorRadius, double iMinorRadius, CATIAHyperbola2D *& oHyperbola); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFactory2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreatePoint(double iX, double iY, CATIAPoint2D *& oNewPoint); \
virtual HRESULT __stdcall CreateControlPoint(double iX, double iY, CATIAControlPoint2D *& oNewPoint); \
virtual HRESULT __stdcall CreateLine(double iX1, double iY1, double iX2, double iY2, CATIALine2D *& oNewLine); \
virtual HRESULT __stdcall CreateLineFromVector(double iX1, double iY1, double iUX, double iUY, CATIALine2D *& oNewLine); \
virtual HRESULT __stdcall CreateClosedCircle(double iCenterX, double iCenterY, double iRadius, CATIACircle2D *& oNewCircle); \
virtual HRESULT __stdcall CreateCircle(double iCenterX, double iCenterY, double iRadius, double iStartParam, double iEndParam, CATIACircle2D *& oNewCircle); \
virtual HRESULT __stdcall CreateClosedEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, CATIAEllipse2D *& oNewEllipse); \
virtual HRESULT __stdcall CreateEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, double iStartParam, double iEndParam, CATIAEllipse2D *& oNewEllipse); \
virtual HRESULT __stdcall CreateSpline(const CATSafeArrayVariant & iPoles, CATIASpline2D *& oNewSpline); \
virtual HRESULT __stdcall CreateProjections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions); \
virtual HRESULT __stdcall CreateIntersections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions); \
virtual HRESULT __stdcall CreateProjection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution); \
virtual HRESULT __stdcall CreateIntersection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution); \
virtual HRESULT __stdcall CreateParabola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iFocalDistance, CATIAParabola2D *& oParabola); \
virtual HRESULT __stdcall CreateHyperbola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iMajorRadius, double iMinorRadius, CATIAHyperbola2D *& oHyperbola); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFactory2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreatePoint(double iX, double iY, CATIAPoint2D *& oNewPoint) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreatePoint(iX,iY,oNewPoint)); \
} \
HRESULT __stdcall  ENVTIEName::CreateControlPoint(double iX, double iY, CATIAControlPoint2D *& oNewPoint) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateControlPoint(iX,iY,oNewPoint)); \
} \
HRESULT __stdcall  ENVTIEName::CreateLine(double iX1, double iY1, double iX2, double iY2, CATIALine2D *& oNewLine) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateLine(iX1,iY1,iX2,iY2,oNewLine)); \
} \
HRESULT __stdcall  ENVTIEName::CreateLineFromVector(double iX1, double iY1, double iUX, double iUY, CATIALine2D *& oNewLine) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateLineFromVector(iX1,iY1,iUX,iUY,oNewLine)); \
} \
HRESULT __stdcall  ENVTIEName::CreateClosedCircle(double iCenterX, double iCenterY, double iRadius, CATIACircle2D *& oNewCircle) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateClosedCircle(iCenterX,iCenterY,iRadius,oNewCircle)); \
} \
HRESULT __stdcall  ENVTIEName::CreateCircle(double iCenterX, double iCenterY, double iRadius, double iStartParam, double iEndParam, CATIACircle2D *& oNewCircle) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateCircle(iCenterX,iCenterY,iRadius,iStartParam,iEndParam,oNewCircle)); \
} \
HRESULT __stdcall  ENVTIEName::CreateClosedEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, CATIAEllipse2D *& oNewEllipse) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateClosedEllipse(iCenterX,iCenterY,iMajorX,iMajorY,iMajorRadius,iMinorRadius,oNewEllipse)); \
} \
HRESULT __stdcall  ENVTIEName::CreateEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, double iStartParam, double iEndParam, CATIAEllipse2D *& oNewEllipse) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateEllipse(iCenterX,iCenterY,iMajorX,iMajorY,iMajorRadius,iMinorRadius,iStartParam,iEndParam,oNewEllipse)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSpline(const CATSafeArrayVariant & iPoles, CATIASpline2D *& oNewSpline) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateSpline(iPoles,oNewSpline)); \
} \
HRESULT __stdcall  ENVTIEName::CreateProjections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateProjections(iGeometry,oSolutions)); \
} \
HRESULT __stdcall  ENVTIEName::CreateIntersections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateIntersections(iGeometry,oSolutions)); \
} \
HRESULT __stdcall  ENVTIEName::CreateProjection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateProjection(iGeometry,oFirstSolution)); \
} \
HRESULT __stdcall  ENVTIEName::CreateIntersection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateIntersection(iGeometry,oFirstSolution)); \
} \
HRESULT __stdcall  ENVTIEName::CreateParabola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iFocalDistance, CATIAParabola2D *& oParabola) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateParabola(iCenterX,iCenterY,iAxisX,iAxisY,iFocalDistance,oParabola)); \
} \
HRESULT __stdcall  ENVTIEName::CreateHyperbola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iMajorRadius, double iMinorRadius, CATIAHyperbola2D *& oHyperbola) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)CreateHyperbola(iCenterX,iCenterY,iAxisX,iAxisY,iMajorRadius,iMinorRadius,oHyperbola)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFactory2D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFactory2D(classe)    TIECATIAFactory2D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFactory2D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFactory2D, classe) \
 \
 \
CATImplementTIEMethods(CATIAFactory2D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFactory2D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFactory2D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFactory2D, classe) \
 \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreatePoint(double iX, double iY, CATIAPoint2D *& oNewPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iX,&iY,&oNewPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreatePoint(iX,iY,oNewPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iX,&iY,&oNewPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateControlPoint(double iX, double iY, CATIAControlPoint2D *& oNewPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iX,&iY,&oNewPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateControlPoint(iX,iY,oNewPoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iX,&iY,&oNewPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateLine(double iX1, double iY1, double iX2, double iY2, CATIALine2D *& oNewLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iX1,&iY1,&iX2,&iY2,&oNewLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLine(iX1,iY1,iX2,iY2,oNewLine); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iX1,&iY1,&iX2,&iY2,&oNewLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateLineFromVector(double iX1, double iY1, double iUX, double iUY, CATIALine2D *& oNewLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iX1,&iY1,&iUX,&iUY,&oNewLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLineFromVector(iX1,iY1,iUX,iUY,oNewLine); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iX1,&iY1,&iUX,&iUY,&oNewLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateClosedCircle(double iCenterX, double iCenterY, double iRadius, CATIACircle2D *& oNewCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iCenterX,&iCenterY,&iRadius,&oNewCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateClosedCircle(iCenterX,iCenterY,iRadius,oNewCircle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iCenterX,&iCenterY,&iRadius,&oNewCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateCircle(double iCenterX, double iCenterY, double iRadius, double iStartParam, double iEndParam, CATIACircle2D *& oNewCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCenterX,&iCenterY,&iRadius,&iStartParam,&iEndParam,&oNewCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCircle(iCenterX,iCenterY,iRadius,iStartParam,iEndParam,oNewCircle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCenterX,&iCenterY,&iRadius,&iStartParam,&iEndParam,&oNewCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateClosedEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, CATIAEllipse2D *& oNewEllipse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iCenterX,&iCenterY,&iMajorX,&iMajorY,&iMajorRadius,&iMinorRadius,&oNewEllipse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateClosedEllipse(iCenterX,iCenterY,iMajorX,iMajorY,iMajorRadius,iMinorRadius,oNewEllipse); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iCenterX,&iCenterY,&iMajorX,&iMajorY,&iMajorRadius,&iMinorRadius,&oNewEllipse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateEllipse(double iCenterX, double iCenterY, double iMajorX, double iMajorY, double iMajorRadius, double iMinorRadius, double iStartParam, double iEndParam, CATIAEllipse2D *& oNewEllipse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCenterX,&iCenterY,&iMajorX,&iMajorY,&iMajorRadius,&iMinorRadius,&iStartParam,&iEndParam,&oNewEllipse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateEllipse(iCenterX,iCenterY,iMajorX,iMajorY,iMajorRadius,iMinorRadius,iStartParam,iEndParam,oNewEllipse); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCenterX,&iCenterY,&iMajorX,&iMajorY,&iMajorRadius,&iMinorRadius,&iStartParam,&iEndParam,&oNewEllipse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateSpline(const CATSafeArrayVariant & iPoles, CATIASpline2D *& oNewSpline) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPoles,&oNewSpline); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSpline(iPoles,oNewSpline); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPoles,&oNewSpline); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateProjections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGeometry,&oSolutions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateProjections(iGeometry,oSolutions); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGeometry,&oSolutions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateIntersections(CATIAReference * iGeometry, CATIAGeometricElements *& oSolutions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iGeometry,&oSolutions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateIntersections(iGeometry,oSolutions); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iGeometry,&oSolutions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateProjection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iGeometry,&oFirstSolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateProjection(iGeometry,oFirstSolution); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iGeometry,&oFirstSolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateIntersection(CATIAReference * iGeometry, CATIAGeometry2D *& oFirstSolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iGeometry,&oFirstSolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateIntersection(iGeometry,oFirstSolution); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iGeometry,&oFirstSolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateParabola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iFocalDistance, CATIAParabola2D *& oParabola) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCenterX,&iCenterY,&iAxisX,&iAxisY,&iFocalDistance,&oParabola); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateParabola(iCenterX,iCenterY,iAxisX,iAxisY,iFocalDistance,oParabola); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCenterX,&iCenterY,&iAxisX,&iAxisY,&iFocalDistance,&oParabola); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFactory2D##classe::CreateHyperbola(double iCenterX, double iCenterY, double iAxisX, double iAxisY, double iMajorRadius, double iMinorRadius, CATIAHyperbola2D *& oHyperbola) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCenterX,&iCenterY,&iAxisX,&iAxisY,&iMajorRadius,&iMinorRadius,&oHyperbola); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateHyperbola(iCenterX,iCenterY,iAxisX,iAxisY,iMajorRadius,iMinorRadius,oHyperbola); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCenterX,&iCenterY,&iAxisX,&iAxisY,&iMajorRadius,&iMinorRadius,&oHyperbola); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFactory2D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFactory2D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFactory2D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFactory2D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFactory2D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFactory2D(classe) \
 \
 \
declare_TIE_CATIAFactory2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFactory2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFactory2D,"CATIAFactory2D",CATIAFactory2D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFactory2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFactory2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFactory2D##classe(classe::MetaObject(),CATIAFactory2D::MetaObject(),(void *)CreateTIECATIAFactory2D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFactory2D(classe) \
 \
 \
declare_TIE_CATIAFactory2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFactory2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFactory2D,"CATIAFactory2D",CATIAFactory2D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFactory2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFactory2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFactory2D##classe(classe::MetaObject(),CATIAFactory2D::MetaObject(),(void *)CreateTIECATIAFactory2D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFactory2D(classe) TIE_CATIAFactory2D(classe)
#else
#define BOA_CATIAFactory2D(classe) CATImplementBOA(CATIAFactory2D, classe)
#endif

#endif
