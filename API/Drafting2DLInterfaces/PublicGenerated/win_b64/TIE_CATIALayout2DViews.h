#ifndef __TIE_CATIALayout2DViews
#define __TIE_CATIALayout2DViews

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALayout2DViews.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALayout2DViews */
#define declare_TIE_CATIALayout2DViews(classe) \
 \
 \
class TIECATIALayout2DViews##classe : public CATIALayout2DViews \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALayout2DViews, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddPrimary(double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
      virtual HRESULT __stdcall AddRelated(CATIALayout2DView * iReferenceView, CatViewSide iSide, double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
      virtual HRESULT __stdcall AddAuxiliary(CATIALayout2DView * iReferenceView, const CATSafeArrayVariant & iBCSegment, double iXorient, double iYorient, CatViewType iSectionType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
      virtual HRESULT __stdcall AddFrom3DPlane(const CATSafeArrayVariant & iPlane, CatViewType iViewType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
      virtual HRESULT __stdcall get_ActiveView(CATIALayout2DView *& oView); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIALayout2DView *& oItem); \
      virtual HRESULT __stdcall AddDetail(const CATBSTR & iDetailName, CATIALayout2DView *& oView); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIALayout2DViews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddPrimary(double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
virtual HRESULT __stdcall AddRelated(CATIALayout2DView * iReferenceView, CatViewSide iSide, double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
virtual HRESULT __stdcall AddAuxiliary(CATIALayout2DView * iReferenceView, const CATSafeArrayVariant & iBCSegment, double iXorient, double iYorient, CatViewType iSectionType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
virtual HRESULT __stdcall AddFrom3DPlane(const CATSafeArrayVariant & iPlane, CatViewType iViewType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView); \
virtual HRESULT __stdcall get_ActiveView(CATIALayout2DView *& oView); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIALayout2DView *& oItem); \
virtual HRESULT __stdcall AddDetail(const CATBSTR & iDetailName, CATIALayout2DView *& oView); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIALayout2DViews(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddPrimary(double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)AddPrimary(iX,iY,oNewLayout2DView)); \
} \
HRESULT __stdcall  ENVTIEName::AddRelated(CATIALayout2DView * iReferenceView, CatViewSide iSide, double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)AddRelated(iReferenceView,iSide,iX,iY,oNewLayout2DView)); \
} \
HRESULT __stdcall  ENVTIEName::AddAuxiliary(CATIALayout2DView * iReferenceView, const CATSafeArrayVariant & iBCSegment, double iXorient, double iYorient, CatViewType iSectionType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)AddAuxiliary(iReferenceView,iBCSegment,iXorient,iYorient,iSectionType,iX,iY,oNewLayout2DView)); \
} \
HRESULT __stdcall  ENVTIEName::AddFrom3DPlane(const CATSafeArrayVariant & iPlane, CatViewType iViewType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)AddFrom3DPlane(iPlane,iViewType,iX,iY,oNewLayout2DView)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveView(CATIALayout2DView *& oView) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)get_ActiveView(oView)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIALayout2DView *& oItem) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oItem)); \
} \
HRESULT __stdcall  ENVTIEName::AddDetail(const CATBSTR & iDetailName, CATIALayout2DView *& oView) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)AddDetail(iDetailName,oView)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIALayout2DViews,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALayout2DViews(classe)    TIECATIALayout2DViews##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALayout2DViews(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALayout2DViews, classe) \
 \
 \
CATImplementTIEMethods(CATIALayout2DViews, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALayout2DViews, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALayout2DViews, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALayout2DViews, classe) \
 \
HRESULT __stdcall  TIECATIALayout2DViews##classe::AddPrimary(double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iX,&iY,&oNewLayout2DView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPrimary(iX,iY,oNewLayout2DView); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iX,&iY,&oNewLayout2DView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DViews##classe::AddRelated(CATIALayout2DView * iReferenceView, CatViewSide iSide, double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iReferenceView,&iSide,&iX,&iY,&oNewLayout2DView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRelated(iReferenceView,iSide,iX,iY,oNewLayout2DView); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iReferenceView,&iSide,&iX,&iY,&oNewLayout2DView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DViews##classe::AddAuxiliary(CATIALayout2DView * iReferenceView, const CATSafeArrayVariant & iBCSegment, double iXorient, double iYorient, CatViewType iSectionType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iReferenceView,&iBCSegment,&iXorient,&iYorient,&iSectionType,&iX,&iY,&oNewLayout2DView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAuxiliary(iReferenceView,iBCSegment,iXorient,iYorient,iSectionType,iX,iY,oNewLayout2DView); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iReferenceView,&iBCSegment,&iXorient,&iYorient,&iSectionType,&iX,&iY,&oNewLayout2DView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DViews##classe::AddFrom3DPlane(const CATSafeArrayVariant & iPlane, CatViewType iViewType, double iX, double iY, CATIALayout2DView *& oNewLayout2DView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPlane,&iViewType,&iX,&iY,&oNewLayout2DView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFrom3DPlane(iPlane,iViewType,iX,iY,oNewLayout2DView); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPlane,&iViewType,&iX,&iY,&oNewLayout2DView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DViews##classe::get_ActiveView(CATIALayout2DView *& oView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveView(oView); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DViews##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DViews##classe::Item(const CATVariant & iIndex, CATIALayout2DView *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oItem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DViews##classe::AddDetail(const CATBSTR & iDetailName, CATIALayout2DView *& oView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDetailName,&oView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDetail(iDetailName,oView); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDetailName,&oView); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DViews##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DViews##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DViews##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DViews##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DViews##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DViews##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALayout2DViews(classe) \
 \
 \
declare_TIE_CATIALayout2DViews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DViews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DViews,"CATIALayout2DViews",CATIALayout2DViews::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DViews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALayout2DViews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DViews##classe(classe::MetaObject(),CATIALayout2DViews::MetaObject(),(void *)CreateTIECATIALayout2DViews##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALayout2DViews(classe) \
 \
 \
declare_TIE_CATIALayout2DViews(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DViews##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DViews,"CATIALayout2DViews",CATIALayout2DViews::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DViews(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALayout2DViews, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DViews##classe(classe::MetaObject(),CATIALayout2DViews::MetaObject(),(void *)CreateTIECATIALayout2DViews##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALayout2DViews(classe) TIE_CATIALayout2DViews(classe)
#else
#define BOA_CATIALayout2DViews(classe) CATImplementBOA(CATIALayout2DViews, classe)
#endif

#endif
