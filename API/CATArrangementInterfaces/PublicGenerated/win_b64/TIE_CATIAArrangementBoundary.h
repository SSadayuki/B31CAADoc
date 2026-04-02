#ifndef __TIE_CATIAArrangementBoundary
#define __TIE_CATIAArrangementBoundary

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementBoundary.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementBoundary */
#define declare_TIE_CATIAArrangementBoundary(classe) \
 \
 \
class TIECATIAArrangementBoundary##classe : public CATIAArrangementBoundary \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementBoundary, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_VisuMode(CATArrangementRouteVisuMode & oVisuMode); \
      virtual HRESULT __stdcall put_VisuMode(CATArrangementRouteVisuMode iVisuMode); \
      virtual HRESULT __stdcall get_SectionType(CATArrangementRouteSection & oRouteSection); \
      virtual HRESULT __stdcall put_SectionType(CATArrangementRouteSection iRouteSection); \
      virtual HRESULT __stdcall get_SectionWidth(double & oSectionWidth); \
      virtual HRESULT __stdcall put_SectionWidth(double iSectionWidth); \
      virtual HRESULT __stdcall get_SectionHeight(double & oSectionHeight); \
      virtual HRESULT __stdcall put_SectionHeight(double iSectionHeight); \
      virtual HRESULT __stdcall get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes); \
      virtual HRESULT __stdcall get_Length(double & oBoundaryLength); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrangementBoundary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_VisuMode(CATArrangementRouteVisuMode & oVisuMode); \
virtual HRESULT __stdcall put_VisuMode(CATArrangementRouteVisuMode iVisuMode); \
virtual HRESULT __stdcall get_SectionType(CATArrangementRouteSection & oRouteSection); \
virtual HRESULT __stdcall put_SectionType(CATArrangementRouteSection iRouteSection); \
virtual HRESULT __stdcall get_SectionWidth(double & oSectionWidth); \
virtual HRESULT __stdcall put_SectionWidth(double iSectionWidth); \
virtual HRESULT __stdcall get_SectionHeight(double & oSectionHeight); \
virtual HRESULT __stdcall put_SectionHeight(double iSectionHeight); \
virtual HRESULT __stdcall get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes); \
virtual HRESULT __stdcall get_Length(double & oBoundaryLength); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrangementBoundary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_VisuMode(CATArrangementRouteVisuMode & oVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_VisuMode(oVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuMode(CATArrangementRouteVisuMode iVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)put_VisuMode(iVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionType(CATArrangementRouteSection & oRouteSection) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_SectionType(oRouteSection)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionType(CATArrangementRouteSection iRouteSection) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)put_SectionType(iRouteSection)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionWidth(double & oSectionWidth) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_SectionWidth(oSectionWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionWidth(double iSectionWidth) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)put_SectionWidth(iSectionWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionHeight(double & oSectionHeight) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_SectionHeight(oSectionHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionHeight(double iSectionHeight) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)put_SectionHeight(iSectionHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_ArrangementNodes(oArrNodes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(double & oBoundaryLength) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_Length(oBoundaryLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrangementBoundary,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementBoundary(classe)    TIECATIAArrangementBoundary##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementBoundary(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementBoundary, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementBoundary, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementBoundary, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementBoundary, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementBoundary, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::get_VisuMode(CATArrangementRouteVisuMode & oVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuMode(oVisuMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::put_VisuMode(CATArrangementRouteVisuMode iVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuMode(iVisuMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::get_SectionType(CATArrangementRouteSection & oRouteSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRouteSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionType(oRouteSection); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRouteSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::put_SectionType(CATArrangementRouteSection iRouteSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRouteSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionType(iRouteSection); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRouteSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::get_SectionWidth(double & oSectionWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSectionWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionWidth(oSectionWidth); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSectionWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::put_SectionWidth(double iSectionWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSectionWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionWidth(iSectionWidth); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSectionWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::get_SectionHeight(double & oSectionHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSectionHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionHeight(oSectionHeight); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSectionHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::put_SectionHeight(double iSectionHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSectionHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionHeight(iSectionHeight); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSectionHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oArrNodes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementNodes(oArrNodes); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oArrNodes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::get_Length(double & oBoundaryLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oBoundaryLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(oBoundaryLength); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oBoundaryLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementBoundary##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundary##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundary##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundary##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundary##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementBoundary##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementBoundary(classe) \
 \
 \
declare_TIE_CATIAArrangementBoundary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementBoundary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementBoundary,"CATIAArrangementBoundary",CATIAArrangementBoundary::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementBoundary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementBoundary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementBoundary##classe(classe::MetaObject(),CATIAArrangementBoundary::MetaObject(),(void *)CreateTIECATIAArrangementBoundary##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementBoundary(classe) \
 \
 \
declare_TIE_CATIAArrangementBoundary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementBoundary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementBoundary,"CATIAArrangementBoundary",CATIAArrangementBoundary::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementBoundary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementBoundary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementBoundary##classe(classe::MetaObject(),CATIAArrangementBoundary::MetaObject(),(void *)CreateTIECATIAArrangementBoundary##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementBoundary(classe) TIE_CATIAArrangementBoundary(classe)
#else
#define BOA_CATIAArrangementBoundary(classe) CATImplementBOA(CATIAArrangementBoundary, classe)
#endif

#endif
