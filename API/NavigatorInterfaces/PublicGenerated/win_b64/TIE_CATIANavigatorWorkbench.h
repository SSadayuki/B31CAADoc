#ifndef __TIE_CATIANavigatorWorkbench
#define __TIE_CATIANavigatorWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIANavigatorWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIANavigatorWorkbench */
#define declare_TIE_CATIANavigatorWorkbench(classe) \
 \
 \
class TIECATIANavigatorWorkbench##classe : public CATIANavigatorWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIANavigatorWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Groups(CATIAGroups *& oGroups); \
      virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
      virtual HRESULT __stdcall View(CATIAAnnotatedView * iAnnotatedView); \
      virtual HRESULT __stdcall AdvancedView(CATIAAnnotatedView * iAnnotatedView, short iViewOption); \
      virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
      virtual HRESULT __stdcall DMUStart(const CATBSTR & iName); \
      virtual HRESULT __stdcall DMUStop(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_DMUDataFlow(CATIADMUDataFlow *& oDMUDataFlow); \
      virtual HRESULT __stdcall GetOrder(CATBaseDispatch * iObject, CATLONG & oCurrentRank); \
      virtual HRESULT __stdcall SetOrder(CATBaseDispatch * iObject, CATLONG iNewRank); \
      virtual HRESULT __stdcall get_Hyperlinks(CATIAHyperlinks *& oHyperlinks); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIANavigatorWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Groups(CATIAGroups *& oGroups); \
virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
virtual HRESULT __stdcall View(CATIAAnnotatedView * iAnnotatedView); \
virtual HRESULT __stdcall AdvancedView(CATIAAnnotatedView * iAnnotatedView, short iViewOption); \
virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
virtual HRESULT __stdcall DMUStart(const CATBSTR & iName); \
virtual HRESULT __stdcall DMUStop(const CATBSTR & iName); \
virtual HRESULT __stdcall get_DMUDataFlow(CATIADMUDataFlow *& oDMUDataFlow); \
virtual HRESULT __stdcall GetOrder(CATBaseDispatch * iObject, CATLONG & oCurrentRank); \
virtual HRESULT __stdcall SetOrder(CATBaseDispatch * iObject, CATLONG iNewRank); \
virtual HRESULT __stdcall get_Hyperlinks(CATIAHyperlinks *& oHyperlinks); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIANavigatorWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Groups(CATIAGroups *& oGroups) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Groups(oGroups)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_AnnotatedViews(oAnnotatedViews)); \
} \
HRESULT __stdcall  ENVTIEName::View(CATIAAnnotatedView * iAnnotatedView) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)View(iAnnotatedView)); \
} \
HRESULT __stdcall  ENVTIEName::AdvancedView(CATIAAnnotatedView * iAnnotatedView, short iViewOption) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)AdvancedView(iAnnotatedView,iViewOption)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Marker3Ds(oMarker3Ds)); \
} \
HRESULT __stdcall  ENVTIEName::DMUStart(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)DMUStart(iName)); \
} \
HRESULT __stdcall  ENVTIEName::DMUStop(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)DMUStop(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUDataFlow(CATIADMUDataFlow *& oDMUDataFlow) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_DMUDataFlow(oDMUDataFlow)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrder(CATBaseDispatch * iObject, CATLONG & oCurrentRank) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)GetOrder(iObject,oCurrentRank)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrder(CATBaseDispatch * iObject, CATLONG iNewRank) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)SetOrder(iObject,iNewRank)); \
} \
HRESULT __stdcall  ENVTIEName::get_Hyperlinks(CATIAHyperlinks *& oHyperlinks) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Hyperlinks(oHyperlinks)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIANavigatorWorkbench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIANavigatorWorkbench(classe)    TIECATIANavigatorWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIANavigatorWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIANavigatorWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIANavigatorWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIANavigatorWorkbench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIANavigatorWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIANavigatorWorkbench, classe) \
 \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::get_Groups(CATIAGroups *& oGroups) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGroups); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Groups(oGroups); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGroups); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAnnotatedViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotatedViews(oAnnotatedViews); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAnnotatedViews); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::View(CATIAAnnotatedView * iAnnotatedView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAnnotatedView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->View(iAnnotatedView); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAnnotatedView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::AdvancedView(CATIAAnnotatedView * iAnnotatedView, short iViewOption) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAnnotatedView,&iViewOption); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AdvancedView(iAnnotatedView,iViewOption); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAnnotatedView,&iViewOption); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMarker3Ds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker3Ds(oMarker3Ds); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMarker3Ds); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::DMUStart(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DMUStart(iName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::DMUStop(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DMUStop(iName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::get_DMUDataFlow(CATIADMUDataFlow *& oDMUDataFlow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oDMUDataFlow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUDataFlow(oDMUDataFlow); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oDMUDataFlow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::GetOrder(CATBaseDispatch * iObject, CATLONG & oCurrentRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iObject,&oCurrentRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrder(iObject,oCurrentRank); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iObject,&oCurrentRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::SetOrder(CATBaseDispatch * iObject, CATLONG iNewRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iObject,&iNewRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrder(iObject,iNewRank); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iObject,&iNewRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIANavigatorWorkbench##classe::get_Hyperlinks(CATIAHyperlinks *& oHyperlinks) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oHyperlinks); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hyperlinks(oHyperlinks); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oHyperlinks); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIANavigatorWorkbench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIANavigatorWorkbench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIANavigatorWorkbench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIANavigatorWorkbench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIANavigatorWorkbench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIANavigatorWorkbench(classe) \
 \
 \
declare_TIE_CATIANavigatorWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANavigatorWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANavigatorWorkbench,"CATIANavigatorWorkbench",CATIANavigatorWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANavigatorWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIANavigatorWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANavigatorWorkbench##classe(classe::MetaObject(),CATIANavigatorWorkbench::MetaObject(),(void *)CreateTIECATIANavigatorWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIANavigatorWorkbench(classe) \
 \
 \
declare_TIE_CATIANavigatorWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANavigatorWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANavigatorWorkbench,"CATIANavigatorWorkbench",CATIANavigatorWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANavigatorWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIANavigatorWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANavigatorWorkbench##classe(classe::MetaObject(),CATIANavigatorWorkbench::MetaObject(),(void *)CreateTIECATIANavigatorWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIANavigatorWorkbench(classe) TIE_CATIANavigatorWorkbench(classe)
#else
#define BOA_CATIANavigatorWorkbench(classe) CATImplementBOA(CATIANavigatorWorkbench, classe)
#endif

#endif
