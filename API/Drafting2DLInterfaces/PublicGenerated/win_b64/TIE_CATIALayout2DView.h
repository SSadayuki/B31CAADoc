#ifndef __TIE_CATIALayout2DView
#define __TIE_CATIALayout2DView

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALayout2DView.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALayout2DView */
#define declare_TIE_CATIALayout2DView(classe) \
 \
 \
class TIECATIALayout2DView##classe : public CATIALayout2DView \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALayout2DView, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Texts(CATIADrawingTexts *& oTexts); \
      virtual HRESULT __stdcall get_Weldings(CATIADrawingWeldings *& oWeldings); \
      virtual HRESULT __stdcall get_GDTs(CATIADrawingGDTs *& oGDTs); \
      virtual HRESULT __stdcall get_CoordDims(CATIADrawingCoordDims *& oCoordDims); \
      virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeomElements); \
      virtual HRESULT __stdcall get_Components(CATIADrawingComponents *& oComponents); \
      virtual HRESULT __stdcall get_Tables(CATIADrawingTables *& oTables); \
      virtual HRESULT __stdcall get_Threads(CATIADrawingThreads *& oThreads); \
      virtual HRESULT __stdcall get_Dimensions(CATIADrawingDimensions *& oDimensions); \
      virtual HRESULT __stdcall get_Factory2D(CATIAFactory2D *& oFactory); \
      virtual HRESULT __stdcall get_Pictures(CATIADrawingPictures *& oPictures); \
      virtual HRESULT __stdcall get_Arrows(CATIADrawingArrows *& oArrows); \
      virtual HRESULT __stdcall get_x(double & oXPosition); \
      virtual HRESULT __stdcall put_x(double iXPosition); \
      virtual HRESULT __stdcall get_y(double & oYPosition); \
      virtual HRESULT __stdcall put_y(double iYPosition); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_ViewScale(double & oViewScale); \
      virtual HRESULT __stdcall put_ViewScale(double iViewScale); \
      virtual HRESULT __stdcall get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization); \
      virtual HRESULT __stdcall put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization); \
      virtual HRESULT __stdcall get_ReferenceView(CATIALayout2DView *& oRefView); \
      virtual HRESULT __stdcall put_ReferenceView(CATIALayout2DView * iRefView); \
      virtual HRESULT __stdcall get_LockStatus(CAT_VARIANT_BOOL & oStatus); \
      virtual HRESULT __stdcall put_LockStatus(CAT_VARIANT_BOOL iStatus); \
      virtual HRESULT __stdcall AlignedWithReferenceView(); \
      virtual HRESULT __stdcall UnAlignedWithReferenceView(); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix); \
      virtual HRESULT __stdcall SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix); \
      virtual HRESULT __stdcall Size(CATSafeArrayVariant & oValues); \
      virtual HRESULT __stdcall SaveEdition(); \
      virtual HRESULT __stdcall get_VisuIn3D(CatVisuIn3DMode & oMode); \
      virtual HRESULT __stdcall put_VisuIn3D(CatVisuIn3DMode iMode); \
      virtual HRESULT __stdcall get_VisuBackground(CatVisuBackgroundMode & oMode); \
      virtual HRESULT __stdcall put_VisuBackground(CatVisuBackgroundMode iMode); \
      virtual HRESULT __stdcall get_Visu2DMode(CatView2DModeVisu & oMode); \
      virtual HRESULT __stdcall put_Visu2DMode(CatView2DModeVisu iMode); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIALayout2DView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Texts(CATIADrawingTexts *& oTexts); \
virtual HRESULT __stdcall get_Weldings(CATIADrawingWeldings *& oWeldings); \
virtual HRESULT __stdcall get_GDTs(CATIADrawingGDTs *& oGDTs); \
virtual HRESULT __stdcall get_CoordDims(CATIADrawingCoordDims *& oCoordDims); \
virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeomElements); \
virtual HRESULT __stdcall get_Components(CATIADrawingComponents *& oComponents); \
virtual HRESULT __stdcall get_Tables(CATIADrawingTables *& oTables); \
virtual HRESULT __stdcall get_Threads(CATIADrawingThreads *& oThreads); \
virtual HRESULT __stdcall get_Dimensions(CATIADrawingDimensions *& oDimensions); \
virtual HRESULT __stdcall get_Factory2D(CATIAFactory2D *& oFactory); \
virtual HRESULT __stdcall get_Pictures(CATIADrawingPictures *& oPictures); \
virtual HRESULT __stdcall get_Arrows(CATIADrawingArrows *& oArrows); \
virtual HRESULT __stdcall get_x(double & oXPosition); \
virtual HRESULT __stdcall put_x(double iXPosition); \
virtual HRESULT __stdcall get_y(double & oYPosition); \
virtual HRESULT __stdcall put_y(double iYPosition); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_ViewScale(double & oViewScale); \
virtual HRESULT __stdcall put_ViewScale(double iViewScale); \
virtual HRESULT __stdcall get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization); \
virtual HRESULT __stdcall put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization); \
virtual HRESULT __stdcall get_ReferenceView(CATIALayout2DView *& oRefView); \
virtual HRESULT __stdcall put_ReferenceView(CATIALayout2DView * iRefView); \
virtual HRESULT __stdcall get_LockStatus(CAT_VARIANT_BOOL & oStatus); \
virtual HRESULT __stdcall put_LockStatus(CAT_VARIANT_BOOL iStatus); \
virtual HRESULT __stdcall AlignedWithReferenceView(); \
virtual HRESULT __stdcall UnAlignedWithReferenceView(); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix); \
virtual HRESULT __stdcall SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix); \
virtual HRESULT __stdcall Size(CATSafeArrayVariant & oValues); \
virtual HRESULT __stdcall SaveEdition(); \
virtual HRESULT __stdcall get_VisuIn3D(CatVisuIn3DMode & oMode); \
virtual HRESULT __stdcall put_VisuIn3D(CatVisuIn3DMode iMode); \
virtual HRESULT __stdcall get_VisuBackground(CatVisuBackgroundMode & oMode); \
virtual HRESULT __stdcall put_VisuBackground(CatVisuBackgroundMode iMode); \
virtual HRESULT __stdcall get_Visu2DMode(CatView2DModeVisu & oMode); \
virtual HRESULT __stdcall put_Visu2DMode(CatView2DModeVisu iMode); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIALayout2DView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Texts(CATIADrawingTexts *& oTexts) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Texts(oTexts)); \
} \
HRESULT __stdcall  ENVTIEName::get_Weldings(CATIADrawingWeldings *& oWeldings) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Weldings(oWeldings)); \
} \
HRESULT __stdcall  ENVTIEName::get_GDTs(CATIADrawingGDTs *& oGDTs) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_GDTs(oGDTs)); \
} \
HRESULT __stdcall  ENVTIEName::get_CoordDims(CATIADrawingCoordDims *& oCoordDims) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_CoordDims(oCoordDims)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeometricElements(CATIAGeometricElements *& oGeomElements) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_GeometricElements(oGeomElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_Components(CATIADrawingComponents *& oComponents) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Components(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::get_Tables(CATIADrawingTables *& oTables) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Tables(oTables)); \
} \
HRESULT __stdcall  ENVTIEName::get_Threads(CATIADrawingThreads *& oThreads) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Threads(oThreads)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dimensions(CATIADrawingDimensions *& oDimensions) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Dimensions(oDimensions)); \
} \
HRESULT __stdcall  ENVTIEName::get_Factory2D(CATIAFactory2D *& oFactory) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Factory2D(oFactory)); \
} \
HRESULT __stdcall  ENVTIEName::get_Pictures(CATIADrawingPictures *& oPictures) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Pictures(oPictures)); \
} \
HRESULT __stdcall  ENVTIEName::get_Arrows(CATIADrawingArrows *& oArrows) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Arrows(oArrows)); \
} \
HRESULT __stdcall  ENVTIEName::get_x(double & oXPosition) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_x(oXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double iXPosition) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_x(iXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oYPosition) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_y(oYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iYPosition) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_y(iYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewScale(double & oViewScale) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_ViewScale(oViewScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewScale(double iViewScale) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_ViewScale(iViewScale)); \
} \
HRESULT __stdcall  ENVTIEName::get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_FrameVisualization(oFrameVisualization)); \
} \
HRESULT __stdcall  ENVTIEName::put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_FrameVisualization(iFrameVisualization)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceView(CATIALayout2DView *& oRefView) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_ReferenceView(oRefView)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceView(CATIALayout2DView * iRefView) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_ReferenceView(iRefView)); \
} \
HRESULT __stdcall  ENVTIEName::get_LockStatus(CAT_VARIANT_BOOL & oStatus) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_LockStatus(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_LockStatus(CAT_VARIANT_BOOL iStatus) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_LockStatus(iStatus)); \
} \
HRESULT __stdcall  ENVTIEName::AlignedWithReferenceView() \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)AlignedWithReferenceView()); \
} \
HRESULT __stdcall  ENVTIEName::UnAlignedWithReferenceView() \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)UnAlignedWithReferenceView()); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)GetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)SetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix)); \
} \
HRESULT __stdcall  ENVTIEName::Size(CATSafeArrayVariant & oValues) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)Size(oValues)); \
} \
HRESULT __stdcall  ENVTIEName::SaveEdition() \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)SaveEdition()); \
} \
HRESULT __stdcall  ENVTIEName::get_VisuIn3D(CatVisuIn3DMode & oMode) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_VisuIn3D(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuIn3D(CatVisuIn3DMode iMode) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_VisuIn3D(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_VisuBackground(CatVisuBackgroundMode & oMode) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_VisuBackground(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuBackground(CatVisuBackgroundMode iMode) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_VisuBackground(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Visu2DMode(CatView2DModeVisu & oMode) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Visu2DMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Visu2DMode(CatView2DModeVisu iMode) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_Visu2DMode(iMode)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALayout2DView,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALayout2DView(classe)    TIECATIALayout2DView##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALayout2DView(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALayout2DView, classe) \
 \
 \
CATImplementTIEMethods(CATIALayout2DView, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALayout2DView, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALayout2DView, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALayout2DView, classe) \
 \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Texts(CATIADrawingTexts *& oTexts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oTexts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Texts(oTexts); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oTexts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Weldings(CATIADrawingWeldings *& oWeldings) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oWeldings); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Weldings(oWeldings); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oWeldings); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_GDTs(CATIADrawingGDTs *& oGDTs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oGDTs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GDTs(oGDTs); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oGDTs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_CoordDims(CATIADrawingCoordDims *& oCoordDims) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oCoordDims); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoordDims(oCoordDims); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oCoordDims); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_GeometricElements(CATIAGeometricElements *& oGeomElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oGeomElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricElements(oGeomElements); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oGeomElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Components(CATIADrawingComponents *& oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Components(oComponents); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Tables(CATIADrawingTables *& oTables) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oTables); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Tables(oTables); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oTables); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Threads(CATIADrawingThreads *& oThreads) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oThreads); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Threads(oThreads); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oThreads); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Dimensions(CATIADrawingDimensions *& oDimensions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDimensions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dimensions(oDimensions); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDimensions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Factory2D(CATIAFactory2D *& oFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Factory2D(oFactory); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Pictures(CATIADrawingPictures *& oPictures) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oPictures); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Pictures(oPictures); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oPictures); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Arrows(CATIADrawingArrows *& oArrows) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oArrows); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Arrows(oArrows); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oArrows); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_x(double & oXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oXPosition); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_x(double iXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(iXPosition); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_y(double & oYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oYPosition); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_y(double iYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iYPosition); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_ViewScale(double & oViewScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oViewScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewScale(oViewScale); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oViewScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_ViewScale(double iViewScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iViewScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewScale(iViewScale); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iViewScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oFrameVisualization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FrameVisualization(oFrameVisualization); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oFrameVisualization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iFrameVisualization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FrameVisualization(iFrameVisualization); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iFrameVisualization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_ReferenceView(CATIALayout2DView *& oRefView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oRefView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceView(oRefView); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oRefView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_ReferenceView(CATIALayout2DView * iRefView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iRefView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceView(iRefView); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iRefView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_LockStatus(CAT_VARIANT_BOOL & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LockStatus(oStatus); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_LockStatus(CAT_VARIANT_BOOL iStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LockStatus(iStatus); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::AlignedWithReferenceView() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AlignedWithReferenceView(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::UnAlignedWithReferenceView() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnAlignedWithReferenceView(); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::Size(CATSafeArrayVariant & oValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Size(oValues); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::SaveEdition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveEdition(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_VisuIn3D(CatVisuIn3DMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuIn3D(oMode); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_VisuIn3D(CatVisuIn3DMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuIn3D(iMode); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_VisuBackground(CatVisuBackgroundMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuBackground(oMode); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_VisuBackground(CatVisuBackgroundMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuBackground(iMode); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::get_Visu2DMode(CatView2DModeVisu & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Visu2DMode(oMode); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DView##classe::put_Visu2DMode(CatView2DModeVisu iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Visu2DMode(iMode); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DView##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DView##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DView##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DView##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DView##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALayout2DView(classe) \
 \
 \
declare_TIE_CATIALayout2DView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DView,"CATIALayout2DView",CATIALayout2DView::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALayout2DView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DView##classe(classe::MetaObject(),CATIALayout2DView::MetaObject(),(void *)CreateTIECATIALayout2DView##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALayout2DView(classe) \
 \
 \
declare_TIE_CATIALayout2DView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DView,"CATIALayout2DView",CATIALayout2DView::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALayout2DView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DView##classe(classe::MetaObject(),CATIALayout2DView::MetaObject(),(void *)CreateTIECATIALayout2DView##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALayout2DView(classe) TIE_CATIALayout2DView(classe)
#else
#define BOA_CATIALayout2DView(classe) CATImplementBOA(CATIALayout2DView, classe)
#endif

#endif
