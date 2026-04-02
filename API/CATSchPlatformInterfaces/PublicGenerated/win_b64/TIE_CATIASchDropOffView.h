#ifndef __TIE_CATIASchDropOffView
#define __TIE_CATIASchDropOffView

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchDropOffView.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchDropOffView */
#define declare_TIE_CATIASchDropOffView(classe) \
 \
 \
class TIECATIASchDropOffView##classe : public CATIASchDropOffView \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchDropOffView, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddDropOffView(CATIADrawingView * iView, CATIADrawingView *& oView, const CATSafeArrayVariant & iDb2PosXY, double iDb1Scale, double iDb1Angl); \
      virtual HRESULT __stdcall RemoveDropOffView(CATIADrawingView * iViewToRemove); \
      virtual HRESULT __stdcall ListDropOffViews(CATIASchListOfObjects *& oLDropOffViews); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchDropOffView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddDropOffView(CATIADrawingView * iView, CATIADrawingView *& oView, const CATSafeArrayVariant & iDb2PosXY, double iDb1Scale, double iDb1Angl); \
virtual HRESULT __stdcall RemoveDropOffView(CATIADrawingView * iViewToRemove); \
virtual HRESULT __stdcall ListDropOffViews(CATIASchListOfObjects *& oLDropOffViews); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchDropOffView(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddDropOffView(CATIADrawingView * iView, CATIADrawingView *& oView, const CATSafeArrayVariant & iDb2PosXY, double iDb1Scale, double iDb1Angl) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)AddDropOffView(iView,oView,iDb2PosXY,iDb1Scale,iDb1Angl)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveDropOffView(CATIADrawingView * iViewToRemove) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)RemoveDropOffView(iViewToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListDropOffViews(CATIASchListOfObjects *& oLDropOffViews) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)ListDropOffViews(oLDropOffViews)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchDropOffView,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchDropOffView(classe)    TIECATIASchDropOffView##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchDropOffView(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchDropOffView, classe) \
 \
 \
CATImplementTIEMethods(CATIASchDropOffView, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchDropOffView, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchDropOffView, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchDropOffView, classe) \
 \
HRESULT __stdcall  TIECATIASchDropOffView##classe::AddDropOffView(CATIADrawingView * iView, CATIADrawingView *& oView, const CATSafeArrayVariant & iDb2PosXY, double iDb1Scale, double iDb1Angl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iView,&oView,&iDb2PosXY,&iDb1Scale,&iDb1Angl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDropOffView(iView,oView,iDb2PosXY,iDb1Scale,iDb1Angl); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iView,&oView,&iDb2PosXY,&iDb1Scale,&iDb1Angl); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchDropOffView##classe::RemoveDropOffView(CATIADrawingView * iViewToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iViewToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveDropOffView(iViewToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iViewToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchDropOffView##classe::ListDropOffViews(CATIASchListOfObjects *& oLDropOffViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLDropOffViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListDropOffViews(oLDropOffViews); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLDropOffViews); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchDropOffView##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchDropOffView##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchDropOffView##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchDropOffView##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchDropOffView##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchDropOffView(classe) \
 \
 \
declare_TIE_CATIASchDropOffView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchDropOffView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchDropOffView,"CATIASchDropOffView",CATIASchDropOffView::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchDropOffView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchDropOffView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchDropOffView##classe(classe::MetaObject(),CATIASchDropOffView::MetaObject(),(void *)CreateTIECATIASchDropOffView##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchDropOffView(classe) \
 \
 \
declare_TIE_CATIASchDropOffView(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchDropOffView##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchDropOffView,"CATIASchDropOffView",CATIASchDropOffView::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchDropOffView(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchDropOffView, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchDropOffView##classe(classe::MetaObject(),CATIASchDropOffView::MetaObject(),(void *)CreateTIECATIASchDropOffView##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchDropOffView(classe) TIE_CATIASchDropOffView(classe)
#else
#define BOA_CATIASchDropOffView(classe) CATImplementBOA(CATIASchDropOffView, classe)
#endif

#endif
