#ifndef __TIE_CATIAFunctionalAction
#define __TIE_CATIAFunctionalAction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalAction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalAction */
#define declare_TIE_CATIAFunctionalAction(classe) \
 \
 \
class TIECATIAFunctionalAction##classe : public CATIAFunctionalAction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalAction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_From(CATIAFunctionalPosition *& oFrom); \
      virtual HRESULT __stdcall put_From(CATIAFunctionalPosition * iFrom); \
      virtual HRESULT __stdcall get_To(CATIAFunctionalPosition *& oTo); \
      virtual HRESULT __stdcall put_To(CATIAFunctionalPosition * iTo); \
      virtual HRESULT __stdcall get_OrientationDirection(CATFunctOrientationDirection & oOD); \
      virtual HRESULT __stdcall put_OrientationDirection(CATFunctOrientationDirection iOD); \
      virtual HRESULT __stdcall get_Group(CATIAFunctActionsGroup *& oGrp); \
      virtual HRESULT __stdcall InvertDirection(); \
      virtual HRESULT __stdcall GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall get_Document(CATIAFunctionalDocument *& oDocument); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctionalAction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_From(CATIAFunctionalPosition *& oFrom); \
virtual HRESULT __stdcall put_From(CATIAFunctionalPosition * iFrom); \
virtual HRESULT __stdcall get_To(CATIAFunctionalPosition *& oTo); \
virtual HRESULT __stdcall put_To(CATIAFunctionalPosition * iTo); \
virtual HRESULT __stdcall get_OrientationDirection(CATFunctOrientationDirection & oOD); \
virtual HRESULT __stdcall put_OrientationDirection(CATFunctOrientationDirection iOD); \
virtual HRESULT __stdcall get_Group(CATIAFunctActionsGroup *& oGrp); \
virtual HRESULT __stdcall InvertDirection(); \
virtual HRESULT __stdcall GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall get_Document(CATIAFunctionalDocument *& oDocument); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctionalAction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_From(CATIAFunctionalPosition *& oFrom) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_From(oFrom)); \
} \
HRESULT __stdcall  ENVTIEName::put_From(CATIAFunctionalPosition * iFrom) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)put_From(iFrom)); \
} \
HRESULT __stdcall  ENVTIEName::get_To(CATIAFunctionalPosition *& oTo) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_To(oTo)); \
} \
HRESULT __stdcall  ENVTIEName::put_To(CATIAFunctionalPosition * iTo) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)put_To(iTo)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrientationDirection(CATFunctOrientationDirection & oOD) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_OrientationDirection(oOD)); \
} \
HRESULT __stdcall  ENVTIEName::put_OrientationDirection(CATFunctOrientationDirection iOD) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)put_OrientationDirection(iOD)); \
} \
HRESULT __stdcall  ENVTIEName::get_Group(CATIAFunctActionsGroup *& oGrp) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_Group(oGrp)); \
} \
HRESULT __stdcall  ENVTIEName::InvertDirection() \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)InvertDirection()); \
} \
HRESULT __stdcall  ENVTIEName::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)GetFacet(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)GetFacetByName(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)SearchFacet(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)SearchFacetByName(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_Document(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctionalAction,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalAction(classe)    TIECATIAFunctionalAction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalAction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalAction, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalAction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalAction, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalAction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalAction, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::get_From(CATIAFunctionalPosition *& oFrom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFrom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_From(oFrom); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFrom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::put_From(CATIAFunctionalPosition * iFrom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFrom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_From(iFrom); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFrom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::get_To(CATIAFunctionalPosition *& oTo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oTo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_To(oTo); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oTo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::put_To(CATIAFunctionalPosition * iTo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iTo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_To(iTo); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iTo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::get_OrientationDirection(CATFunctOrientationDirection & oOD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrientationDirection(oOD); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::put_OrientationDirection(CATFunctOrientationDirection iOD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OrientationDirection(iOD); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::get_Group(CATIAFunctActionsGroup *& oGrp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oGrp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Group(oGrp); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oGrp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::InvertDirection() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertDirection(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacet(iFM,oFacet); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacetByName(iFM,oFacet); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacet(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacetByName(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Document(oDocument); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalAction##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalAction##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalAction##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalAction##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalAction##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalAction##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalAction(classe) \
 \
 \
declare_TIE_CATIAFunctionalAction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalAction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalAction,"CATIAFunctionalAction",CATIAFunctionalAction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalAction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalAction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalAction##classe(classe::MetaObject(),CATIAFunctionalAction::MetaObject(),(void *)CreateTIECATIAFunctionalAction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalAction(classe) \
 \
 \
declare_TIE_CATIAFunctionalAction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalAction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalAction,"CATIAFunctionalAction",CATIAFunctionalAction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalAction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalAction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalAction##classe(classe::MetaObject(),CATIAFunctionalAction::MetaObject(),(void *)CreateTIECATIAFunctionalAction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalAction(classe) TIE_CATIAFunctionalAction(classe)
#else
#define BOA_CATIAFunctionalAction(classe) CATImplementBOA(CATIAFunctionalAction, classe)
#endif

#endif
