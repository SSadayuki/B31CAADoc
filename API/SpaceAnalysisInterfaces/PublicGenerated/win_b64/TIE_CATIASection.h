#ifndef __TIE_CATIASection
#define __TIE_CATIASection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASection */
#define declare_TIE_CATIASection(classe) \
 \
 \
class TIECATIASection##classe : public CATIASection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetPosition(CATSafeArrayVariant & oComponents); \
      virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & iComponents); \
      virtual HRESULT __stdcall get_Height(double & oHeight); \
      virtual HRESULT __stdcall put_Height(double iHeight); \
      virtual HRESULT __stdcall get_Width(double & oWidth); \
      virtual HRESULT __stdcall put_Width(double iWidth); \
      virtual HRESULT __stdcall get_Thickness(double & oThickness); \
      virtual HRESULT __stdcall put_Thickness(double iThickness); \
      virtual HRESULT __stdcall get_CutMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_CutMode(CATLONG iMode); \
      virtual HRESULT __stdcall get_Type(CatSectionType & oType); \
      virtual HRESULT __stdcall put_Type(CatSectionType iType); \
      virtual HRESULT __stdcall get_Group(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall put_Group(CATIAGroup * iGroup); \
      virtual HRESULT __stdcall IsEmpty(CATLONG & oIndicator); \
      virtual HRESULT __stdcall Export(CATIADocument *& oDocument); \
      virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
      virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
      virtual HRESULT __stdcall get_Behavior(CatSectionBehavior & oBehavior); \
      virtual HRESULT __stdcall put_Behavior(CatSectionBehavior iBehavior); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetPosition(CATSafeArrayVariant & oComponents); \
virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & iComponents); \
virtual HRESULT __stdcall get_Height(double & oHeight); \
virtual HRESULT __stdcall put_Height(double iHeight); \
virtual HRESULT __stdcall get_Width(double & oWidth); \
virtual HRESULT __stdcall put_Width(double iWidth); \
virtual HRESULT __stdcall get_Thickness(double & oThickness); \
virtual HRESULT __stdcall put_Thickness(double iThickness); \
virtual HRESULT __stdcall get_CutMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_CutMode(CATLONG iMode); \
virtual HRESULT __stdcall get_Type(CatSectionType & oType); \
virtual HRESULT __stdcall put_Type(CatSectionType iType); \
virtual HRESULT __stdcall get_Group(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall put_Group(CATIAGroup * iGroup); \
virtual HRESULT __stdcall IsEmpty(CATLONG & oIndicator); \
virtual HRESULT __stdcall Export(CATIADocument *& oDocument); \
virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
virtual HRESULT __stdcall get_Behavior(CatSectionBehavior & oBehavior); \
virtual HRESULT __stdcall put_Behavior(CatSectionBehavior iBehavior); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetPosition(CATSafeArrayVariant & oComponents) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)GetPosition(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(const CATSafeArrayVariant & iComponents) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)SetPosition(iComponents)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(double & oHeight) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_Height(double iHeight) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_Height(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Width(double & oWidth) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_Width(double iWidth) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_Width(iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(double & oThickness) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT __stdcall  ENVTIEName::put_Thickness(double iThickness) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_Thickness(iThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_CutMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_CutMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_CutMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_CutMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CatSectionType & oType) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CatSectionType iType) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Group(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Group(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_Group(CATIAGroup * iGroup) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_Group(iGroup)); \
} \
HRESULT __stdcall  ENVTIEName::IsEmpty(CATLONG & oIndicator) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)IsEmpty(oIndicator)); \
} \
HRESULT __stdcall  ENVTIEName::Export(CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)Export(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_AnnotatedViews(oAnnotatedViews)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Marker3Ds(oMarker3Ds)); \
} \
HRESULT __stdcall  ENVTIEName::get_Behavior(CatSectionBehavior & oBehavior) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Behavior(oBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::put_Behavior(CatSectionBehavior iBehavior) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_Behavior(iBehavior)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASection,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASection(classe)    TIECATIASection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASection, classe) \
 \
 \
CATImplementTIEMethods(CATIASection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASection, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASection, classe) \
 \
HRESULT __stdcall  TIECATIASection##classe::GetPosition(CATSafeArrayVariant & oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oComponents); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::SetPosition(const CATSafeArrayVariant & iComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iComponents); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_Height(double & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::put_Height(double iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Height(iHeight); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_Width(double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Width(oWidth); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::put_Width(double iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Width(iWidth); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_Thickness(double & oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::put_Thickness(double iThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Thickness(iThickness); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_CutMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CutMode(oMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::put_CutMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CutMode(iMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_Type(CatSectionType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::put_Type(CatSectionType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_Group(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Group(oGroup); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::put_Group(CATIAGroup * iGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Group(iGroup); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::IsEmpty(CATLONG & oIndicator) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oIndicator); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsEmpty(oIndicator); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oIndicator); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::Export(CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Export(oDocument); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAnnotatedViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotatedViews(oAnnotatedViews); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAnnotatedViews); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oMarker3Ds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker3Ds(oMarker3Ds); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oMarker3Ds); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::get_Behavior(CatSectionBehavior & oBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Behavior(oBehavior); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASection##classe::put_Behavior(CatSectionBehavior iBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Behavior(iBehavior); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iBehavior); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASection##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASection##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASection##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASection##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASection##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASection(classe) \
 \
 \
declare_TIE_CATIASection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASection,"CATIASection",CATIASection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASection##classe(classe::MetaObject(),CATIASection::MetaObject(),(void *)CreateTIECATIASection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASection(classe) \
 \
 \
declare_TIE_CATIASection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASection,"CATIASection",CATIASection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASection##classe(classe::MetaObject(),CATIASection::MetaObject(),(void *)CreateTIECATIASection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASection(classe) TIE_CATIASection(classe)
#else
#define BOA_CATIASection(classe) CATImplementBOA(CATIASection, classe)
#endif

#endif
