#ifndef __TIE_CATIASchComponent
#define __TIE_CATIASchComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchComponent */
#define declare_TIE_CATIASchComponent(classe) \
 \
 \
class TIECATIASchComponent##classe : public CATIASchComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchComponent *& oSchComp); \
      virtual HRESULT __stdcall QueryConnectAbility(CATIASchGRRComp * iGRR, CATIABase *& oPlaceInfo); \
      virtual HRESULT __stdcall IsInserted(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall IsAReference(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent); \
      virtual HRESULT __stdcall CreateComponentInst(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent); \
      virtual HRESULT __stdcall PlaceOnComponentWithInfo(CATIABase * iPlaceInfo, CATIASchComponent *& oNewComponent); \
      virtual HRESULT __stdcall InsertIntoRouteWithInfo(CATIABase * iInsertInfo, CATIASchComponent *& oNewComponent, CATIASchRoute *& oNewRoute); \
      virtual HRESULT __stdcall PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIASchComponent *& oNewComponent); \
      virtual HRESULT __stdcall Slide(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2PtToSlideTo); \
      virtual HRESULT __stdcall FlipConnected(CATIASchGRRComp * iGRR); \
      virtual HRESULT __stdcall FlipOnLine(CATIASchGRRComp * iGRR); \
      virtual HRESULT __stdcall FlipHorizontal(CATIASchGRRComp * iGRR); \
      virtual HRESULT __stdcall FlipVertical(CATIASchGRRComp * iGRR); \
      virtual HRESULT __stdcall Uninsert(CATIASchGRRComp * iGRR); \
      virtual HRESULT __stdcall OKToSlide(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToPlaceInSpace(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToFlipConnected(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToFlipOnLine(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes, CATIASchListOfDoubles *& oDb2LinePt, CATIASchListOfDoubles *& oDb2LineVec); \
      virtual HRESULT __stdcall OKToFlipHorizontal(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToFlipVertical(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToUninsert(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall OKToScale(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchComponent *& oSchComp); \
virtual HRESULT __stdcall QueryConnectAbility(CATIASchGRRComp * iGRR, CATIABase *& oPlaceInfo); \
virtual HRESULT __stdcall IsInserted(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall IsAReference(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent); \
virtual HRESULT __stdcall CreateComponentInst(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent); \
virtual HRESULT __stdcall PlaceOnComponentWithInfo(CATIABase * iPlaceInfo, CATIASchComponent *& oNewComponent); \
virtual HRESULT __stdcall InsertIntoRouteWithInfo(CATIABase * iInsertInfo, CATIASchComponent *& oNewComponent, CATIASchRoute *& oNewRoute); \
virtual HRESULT __stdcall PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIASchComponent *& oNewComponent); \
virtual HRESULT __stdcall Slide(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2PtToSlideTo); \
virtual HRESULT __stdcall FlipConnected(CATIASchGRRComp * iGRR); \
virtual HRESULT __stdcall FlipOnLine(CATIASchGRRComp * iGRR); \
virtual HRESULT __stdcall FlipHorizontal(CATIASchGRRComp * iGRR); \
virtual HRESULT __stdcall FlipVertical(CATIASchGRRComp * iGRR); \
virtual HRESULT __stdcall Uninsert(CATIASchGRRComp * iGRR); \
virtual HRESULT __stdcall OKToSlide(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToPlaceInSpace(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToFlipConnected(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToFlipOnLine(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes, CATIASchListOfDoubles *& oDb2LinePt, CATIASchListOfDoubles *& oDb2LineVec); \
virtual HRESULT __stdcall OKToFlipHorizontal(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToFlipVertical(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToUninsert(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall OKToScale(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchComponent *& oSchComp) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)CreateLocalReference(iDocumentToPutCopyIn,oSchComp)); \
} \
HRESULT __stdcall  ENVTIEName::QueryConnectAbility(CATIASchGRRComp * iGRR, CATIABase *& oPlaceInfo) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)QueryConnectAbility(iGRR,oPlaceInfo)); \
} \
HRESULT __stdcall  ENVTIEName::IsInserted(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)IsInserted(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::IsAReference(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)IsAReference(oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)PlaceInSpace(iGRR,iDb6Axis,oNewComponent)); \
} \
HRESULT __stdcall  ENVTIEName::CreateComponentInst(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)CreateComponentInst(iGRR,iDb6Axis,oNewComponent)); \
} \
HRESULT __stdcall  ENVTIEName::PlaceOnComponentWithInfo(CATIABase * iPlaceInfo, CATIASchComponent *& oNewComponent) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)PlaceOnComponentWithInfo(iPlaceInfo,oNewComponent)); \
} \
HRESULT __stdcall  ENVTIEName::InsertIntoRouteWithInfo(CATIABase * iInsertInfo, CATIASchComponent *& oNewComponent, CATIASchRoute *& oNewRoute) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)InsertIntoRouteWithInfo(iInsertInfo,oNewComponent,oNewRoute)); \
} \
HRESULT __stdcall  ENVTIEName::PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIASchComponent *& oNewComponent) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)PlaceOnObject(iGRR,iDb6Axis,iObjectToConnect,oNewComponent)); \
} \
HRESULT __stdcall  ENVTIEName::Slide(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2PtToSlideTo) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)Slide(iGRR,iDb2PtToSlideTo)); \
} \
HRESULT __stdcall  ENVTIEName::FlipConnected(CATIASchGRRComp * iGRR) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)FlipConnected(iGRR)); \
} \
HRESULT __stdcall  ENVTIEName::FlipOnLine(CATIASchGRRComp * iGRR) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)FlipOnLine(iGRR)); \
} \
HRESULT __stdcall  ENVTIEName::FlipHorizontal(CATIASchGRRComp * iGRR) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)FlipHorizontal(iGRR)); \
} \
HRESULT __stdcall  ENVTIEName::FlipVertical(CATIASchGRRComp * iGRR) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)FlipVertical(iGRR)); \
} \
HRESULT __stdcall  ENVTIEName::Uninsert(CATIASchGRRComp * iGRR) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)Uninsert(iGRR)); \
} \
HRESULT __stdcall  ENVTIEName::OKToSlide(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToSlide(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToPlaceInSpace(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToPlaceInSpace(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToFlipConnected(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToFlipConnected(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToFlipOnLine(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes, CATIASchListOfDoubles *& oDb2LinePt, CATIASchListOfDoubles *& oDb2LineVec) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToFlipOnLine(iGRR,oBYes,oDb2LinePt,oDb2LineVec)); \
} \
HRESULT __stdcall  ENVTIEName::OKToFlipHorizontal(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToFlipHorizontal(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToFlipVertical(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToFlipVertical(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToUninsert(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToUninsert(iGRR,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::OKToScale(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)OKToScale(iGRR,oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchComponent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchComponent(classe)    TIECATIASchComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIASchComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchComponent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchComponent, classe) \
 \
HRESULT __stdcall  TIECATIASchComponent##classe::CreateLocalReference(CATIADocument * iDocumentToPutCopyIn, CATIASchComponent *& oSchComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDocumentToPutCopyIn,&oSchComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLocalReference(iDocumentToPutCopyIn,oSchComp); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDocumentToPutCopyIn,&oSchComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::QueryConnectAbility(CATIASchGRRComp * iGRR, CATIABase *& oPlaceInfo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRR,&oPlaceInfo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->QueryConnectAbility(iGRR,oPlaceInfo); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRR,&oPlaceInfo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::IsInserted(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInserted(iGRR,oBYes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::IsAReference(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAReference(oBYes); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::PlaceInSpace(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iGRR,&iDb6Axis,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlaceInSpace(iGRR,iDb6Axis,oNewComponent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iGRR,&iDb6Axis,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::CreateComponentInst(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchComponent *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGRR,&iDb6Axis,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateComponentInst(iGRR,iDb6Axis,oNewComponent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGRR,&iDb6Axis,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::PlaceOnComponentWithInfo(CATIABase * iPlaceInfo, CATIASchComponent *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPlaceInfo,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlaceOnComponentWithInfo(iPlaceInfo,oNewComponent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPlaceInfo,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::InsertIntoRouteWithInfo(CATIABase * iInsertInfo, CATIASchComponent *& oNewComponent, CATIASchRoute *& oNewRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iInsertInfo,&oNewComponent,&oNewRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertIntoRouteWithInfo(iInsertInfo,oNewComponent,oNewRoute); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iInsertInfo,&oNewComponent,&oNewRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::PlaceOnObject(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb6Axis, CATIASchAppConnectable * iObjectToConnect, CATIASchComponent *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iGRR,&iDb6Axis,&iObjectToConnect,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlaceOnObject(iGRR,iDb6Axis,iObjectToConnect,oNewComponent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iGRR,&iDb6Axis,&iObjectToConnect,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::Slide(CATIASchGRRComp * iGRR, const CATSafeArrayVariant & iDb2PtToSlideTo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGRR,&iDb2PtToSlideTo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Slide(iGRR,iDb2PtToSlideTo); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGRR,&iDb2PtToSlideTo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::FlipConnected(CATIASchGRRComp * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipConnected(iGRR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::FlipOnLine(CATIASchGRRComp * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipOnLine(iGRR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::FlipHorizontal(CATIASchGRRComp * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipHorizontal(iGRR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::FlipVertical(CATIASchGRRComp * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipVertical(iGRR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::Uninsert(CATIASchGRRComp * iGRR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iGRR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Uninsert(iGRR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iGRR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToSlide(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToSlide(iGRR,oBYes); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToPlaceInSpace(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToPlaceInSpace(iGRR,oBYes); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToFlipConnected(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToFlipConnected(iGRR,oBYes); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToFlipOnLine(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes, CATIASchListOfDoubles *& oDb2LinePt, CATIASchListOfDoubles *& oDb2LineVec) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iGRR,&oBYes,&oDb2LinePt,&oDb2LineVec); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToFlipOnLine(iGRR,oBYes,oDb2LinePt,oDb2LineVec); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iGRR,&oBYes,&oDb2LinePt,&oDb2LineVec); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToFlipHorizontal(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToFlipHorizontal(iGRR,oBYes); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToFlipVertical(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToFlipVertical(iGRR,oBYes); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToUninsert(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToUninsert(iGRR,oBYes); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponent##classe::OKToScale(CATIASchGRRComp * iGRR, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iGRR,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToScale(iGRR,oBYes); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iGRR,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchComponent(classe) \
 \
 \
declare_TIE_CATIASchComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchComponent,"CATIASchComponent",CATIASchComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchComponent##classe(classe::MetaObject(),CATIASchComponent::MetaObject(),(void *)CreateTIECATIASchComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchComponent(classe) \
 \
 \
declare_TIE_CATIASchComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchComponent,"CATIASchComponent",CATIASchComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchComponent##classe(classe::MetaObject(),CATIASchComponent::MetaObject(),(void *)CreateTIECATIASchComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchComponent(classe) TIE_CATIASchComponent(classe)
#else
#define BOA_CATIASchComponent(classe) CATImplementBOA(CATIASchComponent, classe)
#endif

#endif
