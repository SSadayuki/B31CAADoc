#ifndef __TIE_CATIASpecsViewer
#define __TIE_CATIASpecsViewer

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASpecsViewer.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASpecsViewer */
#define declare_TIE_CATIASpecsViewer(classe) \
 \
 \
class TIECATIASpecsViewer##classe : public CATIASpecsViewer \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASpecsViewer, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Layout(CatSpecsLayout & oLayout); \
      virtual HRESULT __stdcall put_Layout(CatSpecsLayout iLayout); \
      virtual HRESULT __stdcall get_Viewpoint2D(CATIAViewpoint2D *& oViewpoint); \
      virtual HRESULT __stdcall put_Viewpoint2D(CATIAViewpoint2D * oViewpoint); \
      virtual HRESULT __stdcall get_FullScreen(CAT_VARIANT_BOOL & oFullScreen); \
      virtual HRESULT __stdcall put_FullScreen(CAT_VARIANT_BOOL iFullScreen); \
      virtual HRESULT __stdcall GetBackgroundColor(CATSafeArrayVariant & color); \
      virtual HRESULT __stdcall PutBackgroundColor(const CATSafeArrayVariant & color); \
      virtual HRESULT __stdcall get_Width(CATLONG & oWidth); \
      virtual HRESULT __stdcall get_Height(CATLONG & oHeight); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall Reframe(); \
      virtual HRESULT __stdcall ZoomIn(); \
      virtual HRESULT __stdcall ZoomOut(); \
      virtual HRESULT __stdcall CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile); \
      virtual HRESULT __stdcall NewCamera(CATIACamera *& oCamera); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASpecsViewer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Layout(CatSpecsLayout & oLayout); \
virtual HRESULT __stdcall put_Layout(CatSpecsLayout iLayout); \
virtual HRESULT __stdcall get_Viewpoint2D(CATIAViewpoint2D *& oViewpoint); \
virtual HRESULT __stdcall put_Viewpoint2D(CATIAViewpoint2D * oViewpoint); \
virtual HRESULT __stdcall get_FullScreen(CAT_VARIANT_BOOL & oFullScreen); \
virtual HRESULT __stdcall put_FullScreen(CAT_VARIANT_BOOL iFullScreen); \
virtual HRESULT __stdcall GetBackgroundColor(CATSafeArrayVariant & color); \
virtual HRESULT __stdcall PutBackgroundColor(const CATSafeArrayVariant & color); \
virtual HRESULT __stdcall get_Width(CATLONG & oWidth); \
virtual HRESULT __stdcall get_Height(CATLONG & oHeight); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall Reframe(); \
virtual HRESULT __stdcall ZoomIn(); \
virtual HRESULT __stdcall ZoomOut(); \
virtual HRESULT __stdcall CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile); \
virtual HRESULT __stdcall NewCamera(CATIACamera *& oCamera); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASpecsViewer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Layout(CatSpecsLayout & oLayout) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_Layout(oLayout)); \
} \
HRESULT __stdcall  ENVTIEName::put_Layout(CatSpecsLayout iLayout) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)put_Layout(iLayout)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viewpoint2D(CATIAViewpoint2D *& oViewpoint) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_Viewpoint2D(oViewpoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viewpoint2D(CATIAViewpoint2D * oViewpoint) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)put_Viewpoint2D(oViewpoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullScreen(CAT_VARIANT_BOOL & oFullScreen) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_FullScreen(oFullScreen)); \
} \
HRESULT __stdcall  ENVTIEName::put_FullScreen(CAT_VARIANT_BOOL iFullScreen) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)put_FullScreen(iFullScreen)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackgroundColor(CATSafeArrayVariant & color) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)GetBackgroundColor(color)); \
} \
HRESULT __stdcall  ENVTIEName::PutBackgroundColor(const CATSafeArrayVariant & color) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)PutBackgroundColor(color)); \
} \
HRESULT __stdcall  ENVTIEName::get_Width(CATLONG & oWidth) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_Width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(CATLONG & oHeight) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::Reframe() \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)Reframe()); \
} \
HRESULT __stdcall  ENVTIEName::ZoomIn() \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)ZoomIn()); \
} \
HRESULT __stdcall  ENVTIEName::ZoomOut() \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)ZoomOut()); \
} \
HRESULT __stdcall  ENVTIEName::CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)CaptureToFile(iFormat,iFile)); \
} \
HRESULT __stdcall  ENVTIEName::NewCamera(CATIACamera *& oCamera) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)NewCamera(oCamera)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASpecsViewer,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASpecsViewer(classe)    TIECATIASpecsViewer##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASpecsViewer(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASpecsViewer, classe) \
 \
 \
CATImplementTIEMethods(CATIASpecsViewer, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASpecsViewer, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASpecsViewer, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASpecsViewer, classe) \
 \
HRESULT __stdcall  TIECATIASpecsViewer##classe::get_Layout(CatSpecsLayout & oLayout) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLayout); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Layout(oLayout); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLayout); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::put_Layout(CatSpecsLayout iLayout) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLayout); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Layout(iLayout); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLayout); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::get_Viewpoint2D(CATIAViewpoint2D *& oViewpoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oViewpoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viewpoint2D(oViewpoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oViewpoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::put_Viewpoint2D(CATIAViewpoint2D * oViewpoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oViewpoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viewpoint2D(oViewpoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oViewpoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::get_FullScreen(CAT_VARIANT_BOOL & oFullScreen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oFullScreen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullScreen(oFullScreen); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oFullScreen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::put_FullScreen(CAT_VARIANT_BOOL iFullScreen) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFullScreen); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FullScreen(iFullScreen); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFullScreen); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::GetBackgroundColor(CATSafeArrayVariant & color) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&color); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundColor(color); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&color); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::PutBackgroundColor(const CATSafeArrayVariant & color) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&color); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutBackgroundColor(color); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&color); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::get_Width(CATLONG & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Width(oWidth); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::get_Height(CATLONG & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::Reframe() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reframe(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::ZoomIn() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ZoomIn(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::ZoomOut() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ZoomOut(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::CaptureToFile(CatCaptureFormat iFormat, const CATBSTR & iFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iFormat,&iFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CaptureToFile(iFormat,iFile); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iFormat,&iFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::NewCamera(CATIACamera *& oCamera) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oCamera); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewCamera(oCamera); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oCamera); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecsViewer##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecsViewer##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecsViewer##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecsViewer##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecsViewer##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecsViewer##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASpecsViewer(classe) \
 \
 \
declare_TIE_CATIASpecsViewer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASpecsViewer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASpecsViewer,"CATIASpecsViewer",CATIASpecsViewer::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASpecsViewer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASpecsViewer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASpecsViewer##classe(classe::MetaObject(),CATIASpecsViewer::MetaObject(),(void *)CreateTIECATIASpecsViewer##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASpecsViewer(classe) \
 \
 \
declare_TIE_CATIASpecsViewer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASpecsViewer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASpecsViewer,"CATIASpecsViewer",CATIASpecsViewer::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASpecsViewer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASpecsViewer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASpecsViewer##classe(classe::MetaObject(),CATIASpecsViewer::MetaObject(),(void *)CreateTIECATIASpecsViewer##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASpecsViewer(classe) TIE_CATIASpecsViewer(classe)
#else
#define BOA_CATIASpecsViewer(classe) CATImplementBOA(CATIASpecsViewer, classe)
#endif

#endif
