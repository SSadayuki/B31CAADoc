#ifndef __TIE_CATIAArrangementRun
#define __TIE_CATIAArrangementRun

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementRun.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementRun */
#define declare_TIE_CATIAArrangementRun(classe) \
 \
 \
class TIECATIAArrangementRun##classe : public CATIAArrangementRun \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementRun, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_VisuMode(CATArrangementRouteVisuMode & oVisuMode); \
      virtual HRESULT __stdcall put_VisuMode(CATArrangementRouteVisuMode iVisuMode); \
      virtual HRESULT __stdcall get_SectionType(CATArrangementRouteSection & oRouteSection); \
      virtual HRESULT __stdcall put_SectionType(CATArrangementRouteSection iRouteSection); \
      virtual HRESULT __stdcall get_SectionDiameter(double & oSectionDiameter); \
      virtual HRESULT __stdcall put_SectionDiameter(double iSectionDiameter); \
      virtual HRESULT __stdcall get_SectionWidth(double & oSectionWidth); \
      virtual HRESULT __stdcall put_SectionWidth(double iSectionWidth); \
      virtual HRESULT __stdcall get_SectionHeight(double & oSectionHeight); \
      virtual HRESULT __stdcall put_SectionHeight(double iSectionHeight); \
      virtual HRESULT __stdcall get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes); \
      virtual HRESULT __stdcall get_Length(double & oRunLength); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrangementRun(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_VisuMode(CATArrangementRouteVisuMode & oVisuMode); \
virtual HRESULT __stdcall put_VisuMode(CATArrangementRouteVisuMode iVisuMode); \
virtual HRESULT __stdcall get_SectionType(CATArrangementRouteSection & oRouteSection); \
virtual HRESULT __stdcall put_SectionType(CATArrangementRouteSection iRouteSection); \
virtual HRESULT __stdcall get_SectionDiameter(double & oSectionDiameter); \
virtual HRESULT __stdcall put_SectionDiameter(double iSectionDiameter); \
virtual HRESULT __stdcall get_SectionWidth(double & oSectionWidth); \
virtual HRESULT __stdcall put_SectionWidth(double iSectionWidth); \
virtual HRESULT __stdcall get_SectionHeight(double & oSectionHeight); \
virtual HRESULT __stdcall put_SectionHeight(double iSectionHeight); \
virtual HRESULT __stdcall get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes); \
virtual HRESULT __stdcall get_Length(double & oRunLength); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrangementRun(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_VisuMode(CATArrangementRouteVisuMode & oVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_VisuMode(oVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuMode(CATArrangementRouteVisuMode iVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)put_VisuMode(iVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionType(CATArrangementRouteSection & oRouteSection) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_SectionType(oRouteSection)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionType(CATArrangementRouteSection iRouteSection) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)put_SectionType(iRouteSection)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionDiameter(double & oSectionDiameter) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_SectionDiameter(oSectionDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionDiameter(double iSectionDiameter) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)put_SectionDiameter(iSectionDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionWidth(double & oSectionWidth) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_SectionWidth(oSectionWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionWidth(double iSectionWidth) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)put_SectionWidth(iSectionWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionHeight(double & oSectionHeight) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_SectionHeight(oSectionHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionHeight(double iSectionHeight) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)put_SectionHeight(iSectionHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_ArrangementNodes(oArrNodes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(double & oRunLength) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_Length(oRunLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrangementRun,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementRun(classe)    TIECATIAArrangementRun##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementRun(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementRun, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementRun, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementRun, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementRun, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementRun, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementRun##classe::get_VisuMode(CATArrangementRouteVisuMode & oVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuMode(oVisuMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::put_VisuMode(CATArrangementRouteVisuMode iVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuMode(iVisuMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::get_SectionType(CATArrangementRouteSection & oRouteSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRouteSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionType(oRouteSection); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRouteSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::put_SectionType(CATArrangementRouteSection iRouteSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRouteSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionType(iRouteSection); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRouteSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::get_SectionDiameter(double & oSectionDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSectionDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionDiameter(oSectionDiameter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSectionDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::put_SectionDiameter(double iSectionDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSectionDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionDiameter(iSectionDiameter); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSectionDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::get_SectionWidth(double & oSectionWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSectionWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionWidth(oSectionWidth); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSectionWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::put_SectionWidth(double iSectionWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSectionWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionWidth(iSectionWidth); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSectionWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::get_SectionHeight(double & oSectionHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSectionHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionHeight(oSectionHeight); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSectionHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::put_SectionHeight(double iSectionHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSectionHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionHeight(iSectionHeight); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSectionHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::get_ArrangementNodes(CATIAArrangementNodes *& oArrNodes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oArrNodes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementNodes(oArrNodes); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oArrNodes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::get_Length(double & oRunLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oRunLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(oRunLength); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oRunLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRun##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRun##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRun##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRun##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRun##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRun##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementRun(classe) \
 \
 \
declare_TIE_CATIAArrangementRun(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementRun##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementRun,"CATIAArrangementRun",CATIAArrangementRun::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementRun(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementRun, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementRun##classe(classe::MetaObject(),CATIAArrangementRun::MetaObject(),(void *)CreateTIECATIAArrangementRun##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementRun(classe) \
 \
 \
declare_TIE_CATIAArrangementRun(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementRun##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementRun,"CATIAArrangementRun",CATIAArrangementRun::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementRun(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementRun, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementRun##classe(classe::MetaObject(),CATIAArrangementRun::MetaObject(),(void *)CreateTIECATIAArrangementRun##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementRun(classe) TIE_CATIAArrangementRun(classe)
#else
#define BOA_CATIAArrangementRun(classe) CATImplementBOA(CATIAArrangementRun, classe)
#endif

#endif
