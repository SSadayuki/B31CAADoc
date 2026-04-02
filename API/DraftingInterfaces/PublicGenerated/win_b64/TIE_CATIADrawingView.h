#ifndef __TIE_CATIADrawingView
#define __TIE_CATIADrawingView

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingView.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingView */
#define declare_TIE_CATIADrawingView(classe) \
 \
 \
class TIECATIADrawingView##classe : public CATIADrawingView \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingView, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Texts(CATIADrawingTexts *& oTexts); \
      virtual HRESULT __stdcall get_Weldings(CATIADrawingWeldings *& oWeldings); \
      virtual HRESULT __stdcall get_GDTs(CATIADrawingGDTs *& oGDTs); \
      virtual HRESULT __stdcall get_CoordDims(CATIADrawingCoordDims *& oCoordDims); \
      virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeomElements); \
      virtual HRESULT __stdcall get_xAxisData(double & oXPosition); \
      virtual HRESULT __stdcall put_xAxisData(double iXPosition); \
      virtual HRESULT __stdcall get_yAxisData(double & oYPosition); \
      virtual HRESULT __stdcall put_yAxisData(double iYPosition); \
      virtual HRESULT __stdcall get_x(double & oXPosition); \
      virtual HRESULT __stdcall put_x(double iXPosition); \
      virtual HRESULT __stdcall get_y(double & oYPosition); \
      virtual HRESULT __stdcall put_y(double iYPosition); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_Scale(double & oViewScale); \
      virtual HRESULT __stdcall put_Scale(double iViewScale); \
      virtual HRESULT __stdcall get_Scale2(double & oViewScale); \
      virtual HRESULT __stdcall put_Scale2(double iViewScale); \
      virtual HRESULT __stdcall get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization); \
      virtual HRESULT __stdcall put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization); \
      virtual HRESULT __stdcall get_GenerativeBehavior(CATIAGenerativeViewBehavior *& oGenerativeBehavior); \
      virtual HRESULT __stdcall get_ReferenceView(CATIADrawingView *& oRefView); \
      virtual HRESULT __stdcall put_ReferenceView(CATIADrawingView * iRefView); \
      virtual HRESULT __stdcall get_Factory2D(CATIAFactory2D *& oFactory); \
      virtual HRESULT __stdcall AlignedWithReferenceView(); \
      virtual HRESULT __stdcall UnAlignedWithReferenceView(); \
      virtual HRESULT __stdcall IsGenerative(CAT_VARIANT_BOOL & oGenerative); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall get_GenerativeLinks(CATIAGenerativeViewLinks *& oGenerativeLinks); \
      virtual HRESULT __stdcall GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix); \
      virtual HRESULT __stdcall SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix); \
      virtual HRESULT __stdcall get_Components(CATIADrawingComponents *& oComponents); \
      virtual HRESULT __stdcall get_Tables(CATIADrawingTables *& oTables); \
      virtual HRESULT __stdcall get_LockStatus(CAT_VARIANT_BOOL & oStatus); \
      virtual HRESULT __stdcall put_LockStatus(CAT_VARIANT_BOOL iStatus); \
      virtual HRESULT __stdcall Size(CATSafeArrayVariant & oValues); \
      virtual HRESULT __stdcall get_Pictures(CATIADrawingPictures *& oPictures); \
      virtual HRESULT __stdcall get_Arrows(CATIADrawingArrows *& oArrows); \
      virtual HRESULT __stdcall get_Dimensions(CATIADrawingDimensions *& oDimensions); \
      virtual HRESULT __stdcall Isolate(); \
      virtual HRESULT __stdcall SaveEdition(); \
      virtual HRESULT __stdcall get_Threads(CATIADrawingThreads *& oThreads); \
      virtual HRESULT __stdcall get_ViewType(CatDrawingViewType & oViewType); \
      virtual HRESULT __stdcall InsertViewScale(CATLONG iFirst, CATIADrawingText *& ioText); \
      virtual HRESULT __stdcall InsertViewAngle(CATLONG iFirst, CATIADrawingText *& ioText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Texts(CATIADrawingTexts *& oTexts); \
virtual HRESULT __stdcall get_Weldings(CATIADrawingWeldings *& oWeldings); \
virtual HRESULT __stdcall get_GDTs(CATIADrawingGDTs *& oGDTs); \
virtual HRESULT __stdcall get_CoordDims(CATIADrawingCoordDims *& oCoordDims); \
virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeomElements); \
virtual HRESULT __stdcall get_xAxisData(double & oXPosition); \
virtual HRESULT __stdcall put_xAxisData(double iXPosition); \
virtual HRESULT __stdcall get_yAxisData(double & oYPosition); \
virtual HRESULT __stdcall put_yAxisData(double iYPosition); \
virtual HRESULT __stdcall get_x(double & oXPosition); \
virtual HRESULT __stdcall put_x(double iXPosition); \
virtual HRESULT __stdcall get_y(double & oYPosition); \
virtual HRESULT __stdcall put_y(double iYPosition); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_Scale(double & oViewScale); \
virtual HRESULT __stdcall put_Scale(double iViewScale); \
virtual HRESULT __stdcall get_Scale2(double & oViewScale); \
virtual HRESULT __stdcall put_Scale2(double iViewScale); \
virtual HRESULT __stdcall get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization); \
virtual HRESULT __stdcall put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization); \
virtual HRESULT __stdcall get_GenerativeBehavior(CATIAGenerativeViewBehavior *& oGenerativeBehavior); \
virtual HRESULT __stdcall get_ReferenceView(CATIADrawingView *& oRefView); \
virtual HRESULT __stdcall put_ReferenceView(CATIADrawingView * iRefView); \
virtual HRESULT __stdcall get_Factory2D(CATIAFactory2D *& oFactory); \
virtual HRESULT __stdcall AlignedWithReferenceView(); \
virtual HRESULT __stdcall UnAlignedWithReferenceView(); \
virtual HRESULT __stdcall IsGenerative(CAT_VARIANT_BOOL & oGenerative); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall get_GenerativeLinks(CATIAGenerativeViewLinks *& oGenerativeLinks); \
virtual HRESULT __stdcall GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix); \
virtual HRESULT __stdcall SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix); \
virtual HRESULT __stdcall get_Components(CATIADrawingComponents *& oComponents); \
virtual HRESULT __stdcall get_Tables(CATIADrawingTables *& oTables); \
virtual HRESULT __stdcall get_LockStatus(CAT_VARIANT_BOOL & oStatus); \
virtual HRESULT __stdcall put_LockStatus(CAT_VARIANT_BOOL iStatus); \
virtual HRESULT __stdcall Size(CATSafeArrayVariant & oValues); \
virtual HRESULT __stdcall get_Pictures(CATIADrawingPictures *& oPictures); \
virtual HRESULT __stdcall get_Arrows(CATIADrawingArrows *& oArrows); \
virtual HRESULT __stdcall get_Dimensions(CATIADrawingDimensions *& oDimensions); \
virtual HRESULT __stdcall Isolate(); \
virtual HRESULT __stdcall SaveEdition(); \
virtual HRESULT __stdcall get_Threads(CATIADrawingThreads *& oThreads); \
virtual HRESULT __stdcall get_ViewType(CatDrawingViewType & oViewType); \
virtual HRESULT __stdcall InsertViewScale(CATLONG iFirst, CATIADrawingText *& ioText); \
virtual HRESULT __stdcall InsertViewAngle(CATLONG iFirst, CATIADrawingText *& ioText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Texts(CATIADrawingTexts *& oTexts) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Texts(oTexts)); \
} \
HRESULT __stdcall  ENVTIEName::get_Weldings(CATIADrawingWeldings *& oWeldings) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Weldings(oWeldings)); \
} \
HRESULT __stdcall  ENVTIEName::get_GDTs(CATIADrawingGDTs *& oGDTs) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_GDTs(oGDTs)); \
} \
HRESULT __stdcall  ENVTIEName::get_CoordDims(CATIADrawingCoordDims *& oCoordDims) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_CoordDims(oCoordDims)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeometricElements(CATIAGeometricElements *& oGeomElements) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_GeometricElements(oGeomElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_xAxisData(double & oXPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_xAxisData(oXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_xAxisData(double iXPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_xAxisData(iXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_yAxisData(double & oYPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_yAxisData(oYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_yAxisData(double iYPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_yAxisData(iYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_x(double & oXPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_x(oXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double iXPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_x(iXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oYPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_y(oYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iYPosition) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_y(iYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scale(double & oViewScale) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Scale(oViewScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scale(double iViewScale) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_Scale(iViewScale)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scale2(double & oViewScale) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Scale2(oViewScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scale2(double iViewScale) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_Scale2(iViewScale)); \
} \
HRESULT __stdcall  ENVTIEName::get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_FrameVisualization(oFrameVisualization)); \
} \
HRESULT __stdcall  ENVTIEName::put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_FrameVisualization(iFrameVisualization)); \
} \
HRESULT __stdcall  ENVTIEName::get_GenerativeBehavior(CATIAGenerativeViewBehavior *& oGenerativeBehavior) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_GenerativeBehavior(oGenerativeBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceView(CATIADrawingView *& oRefView) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_ReferenceView(oRefView)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceView(CATIADrawingView * iRefView) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_ReferenceView(iRefView)); \
} \
HRESULT __stdcall  ENVTIEName::get_Factory2D(CATIAFactory2D *& oFactory) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Factory2D(oFactory)); \
} \
HRESULT __stdcall  ENVTIEName::AlignedWithReferenceView() \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)AlignedWithReferenceView()); \
} \
HRESULT __stdcall  ENVTIEName::UnAlignedWithReferenceView() \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)UnAlignedWithReferenceView()); \
} \
HRESULT __stdcall  ENVTIEName::IsGenerative(CAT_VARIANT_BOOL & oGenerative) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)IsGenerative(oGenerative)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::get_GenerativeLinks(CATIAGenerativeViewLinks *& oGenerativeLinks) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_GenerativeLinks(oGenerativeLinks)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)GetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)SetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix)); \
} \
HRESULT __stdcall  ENVTIEName::get_Components(CATIADrawingComponents *& oComponents) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Components(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::get_Tables(CATIADrawingTables *& oTables) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Tables(oTables)); \
} \
HRESULT __stdcall  ENVTIEName::get_LockStatus(CAT_VARIANT_BOOL & oStatus) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_LockStatus(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_LockStatus(CAT_VARIANT_BOOL iStatus) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_LockStatus(iStatus)); \
} \
HRESULT __stdcall  ENVTIEName::Size(CATSafeArrayVariant & oValues) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)Size(oValues)); \
} \
HRESULT __stdcall  ENVTIEName::get_Pictures(CATIADrawingPictures *& oPictures) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Pictures(oPictures)); \
} \
HRESULT __stdcall  ENVTIEName::get_Arrows(CATIADrawingArrows *& oArrows) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Arrows(oArrows)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dimensions(CATIADrawingDimensions *& oDimensions) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Dimensions(oDimensions)); \
} \
HRESULT __stdcall  ENVTIEName::Isolate() \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)Isolate()); \
} \
HRESULT __stdcall  ENVTIEName::SaveEdition() \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)SaveEdition()); \
} \
HRESULT __stdcall  ENVTIEName::get_Threads(CATIADrawingThreads *& oThreads) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Threads(oThreads)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewType(CatDrawingViewType & oViewType) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_ViewType(oViewType)); \
} \
HRESULT __stdcall  ENVTIEName::InsertViewScale(CATLONG iFirst, CATIADrawingText *& ioText) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)InsertViewScale(iFirst,ioText)); \
} \
HRESULT __stdcall  ENVTIEName::InsertViewAngle(CATLONG iFirst, CATIADrawingText *& ioText) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)InsertViewAngle(iFirst,ioText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingView,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingView(classe)    TIECATIADrawingView##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingView(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingView, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingView, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingView, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingView, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingView, classe) \
 \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Texts(CATIADrawingTexts *& oTexts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oTexts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Texts(oTexts); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oTexts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Weldings(CATIADrawingWeldings *& oWeldings) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oWeldings); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Weldings(oWeldings); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oWeldings); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_GDTs(CATIADrawingGDTs *& oGDTs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oGDTs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GDTs(oGDTs); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oGDTs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_CoordDims(CATIADrawingCoordDims *& oCoordDims) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oCoordDims); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoordDims(oCoordDims); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oCoordDims); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_GeometricElements(CATIAGeometricElements *& oGeomElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oGeomElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricElements(oGeomElements); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oGeomElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_xAxisData(double & oXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_xAxisData(oXPosition); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_xAxisData(double iXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_xAxisData(iXPosition); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_yAxisData(double & oYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_yAxisData(oYPosition); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_yAxisData(double iYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_yAxisData(iYPosition); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_x(double & oXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oXPosition); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_x(double iXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(iXPosition); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_y(double & oYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oYPosition); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_y(double iYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iYPosition); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Scale(double & oViewScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oViewScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scale(oViewScale); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oViewScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_Scale(double iViewScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iViewScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scale(iViewScale); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iViewScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Scale2(double & oViewScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oViewScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scale2(oViewScale); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oViewScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_Scale2(double iViewScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iViewScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scale2(iViewScale); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iViewScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_FrameVisualization(CAT_VARIANT_BOOL & oFrameVisualization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oFrameVisualization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FrameVisualization(oFrameVisualization); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oFrameVisualization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_FrameVisualization(CAT_VARIANT_BOOL iFrameVisualization) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iFrameVisualization); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FrameVisualization(iFrameVisualization); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iFrameVisualization); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_GenerativeBehavior(CATIAGenerativeViewBehavior *& oGenerativeBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oGenerativeBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GenerativeBehavior(oGenerativeBehavior); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oGenerativeBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_ReferenceView(CATIADrawingView *& oRefView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oRefView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceView(oRefView); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oRefView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_ReferenceView(CATIADrawingView * iRefView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iRefView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceView(iRefView); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iRefView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Factory2D(CATIAFactory2D *& oFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Factory2D(oFactory); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::AlignedWithReferenceView() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AlignedWithReferenceView(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::UnAlignedWithReferenceView() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnAlignedWithReferenceView(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::IsGenerative(CAT_VARIANT_BOOL & oGenerative) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oGenerative); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGenerative(oGenerative); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oGenerative); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_GenerativeLinks(CATIAGenerativeViewLinks *& oGenerativeLinks) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oGenerativeLinks); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GenerativeLinks(oGenerativeLinks); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oGenerativeLinks); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::GetViewName(CATBSTR & iViewNamePrefix, CATBSTR & iViewNameIdent, CATBSTR & iViewNameSuffix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::SetViewName(const CATBSTR & iViewNamePrefix, const CATBSTR & iViewNameIdent, const CATBSTR & iViewNameSuffix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewName(iViewNamePrefix,iViewNameIdent,iViewNameSuffix); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iViewNamePrefix,&iViewNameIdent,&iViewNameSuffix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Components(CATIADrawingComponents *& oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Components(oComponents); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Tables(CATIADrawingTables *& oTables) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oTables); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Tables(oTables); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oTables); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_LockStatus(CAT_VARIANT_BOOL & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LockStatus(oStatus); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::put_LockStatus(CAT_VARIANT_BOOL iStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LockStatus(iStatus); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::Size(CATSafeArrayVariant & oValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Size(oValues); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Pictures(CATIADrawingPictures *& oPictures) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oPictures); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Pictures(oPictures); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oPictures); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Arrows(CATIADrawingArrows *& oArrows) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oArrows); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Arrows(oArrows); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oArrows); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Dimensions(CATIADrawingDimensions *& oDimensions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oDimensions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dimensions(oDimensions); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oDimensions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::Isolate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isolate(); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::SaveEdition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveEdition(); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_Threads(CATIADrawingThreads *& oThreads) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oThreads); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Threads(oThreads); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oThreads); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::get_ViewType(CatDrawingViewType & oViewType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oViewType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewType(oViewType); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oViewType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::InsertViewScale(CATLONG iFirst, CATIADrawingText *& ioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iFirst,&ioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertViewScale(iFirst,ioText); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iFirst,&ioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingView##classe::InsertViewAngle(CATLONG iFirst, CATIADrawingText *& ioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iFirst,&ioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertViewAngle(iFirst,ioText); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iFirst,&ioText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingView##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingView##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingView##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingView##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingView##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingView(classe) \
 \
 \
declare_TIE_CATIADrawingView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingView,"CATIADrawingView",CATIADrawingView::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingView##classe(classe::MetaObject(),CATIADrawingView::MetaObject(),(void *)CreateTIECATIADrawingView##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingView(classe) \
 \
 \
declare_TIE_CATIADrawingView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingView,"CATIADrawingView",CATIADrawingView::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingView##classe(classe::MetaObject(),CATIADrawingView::MetaObject(),(void *)CreateTIECATIADrawingView##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingView(classe) TIE_CATIADrawingView(classe)
#else
#define BOA_CATIADrawingView(classe) CATImplementBOA(CATIADrawingView, classe)
#endif

#endif
