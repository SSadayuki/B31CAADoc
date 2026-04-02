#ifndef __TIE_CATIASewing
#define __TIE_CATIASewing

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASewing.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASewing */
#define declare_TIE_CATIASewing(classe) \
 \
 \
class TIECATIASewing##classe : public CATIASewing \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASewing, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SewingSide(CatSplitSide & oSewingSide); \
      virtual HRESULT __stdcall put_SewingSide(CatSplitSide iSewingSide); \
      virtual HRESULT __stdcall get_SewingIntersectionMode(CatSewingIntersectionMode & oSewingIntersectionMode); \
      virtual HRESULT __stdcall put_SewingIntersectionMode(CatSewingIntersectionMode iSewingIntersectionMode); \
      virtual HRESULT __stdcall get_DeviationMode(CATLONG & oDeviationMode); \
      virtual HRESULT __stdcall put_DeviationMode(CATLONG iDeviationMode); \
      virtual HRESULT __stdcall get_Deviation(double & oDevValue); \
      virtual HRESULT __stdcall put_Deviation(double iDevValue); \
      virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolume); \
      virtual HRESULT __stdcall SetSurfaceSupport(CATIAReference * iSupportSurface); \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASewing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SewingSide(CatSplitSide & oSewingSide); \
virtual HRESULT __stdcall put_SewingSide(CatSplitSide iSewingSide); \
virtual HRESULT __stdcall get_SewingIntersectionMode(CatSewingIntersectionMode & oSewingIntersectionMode); \
virtual HRESULT __stdcall put_SewingIntersectionMode(CatSewingIntersectionMode iSewingIntersectionMode); \
virtual HRESULT __stdcall get_DeviationMode(CATLONG & oDeviationMode); \
virtual HRESULT __stdcall put_DeviationMode(CATLONG iDeviationMode); \
virtual HRESULT __stdcall get_Deviation(double & oDevValue); \
virtual HRESULT __stdcall put_Deviation(double iDevValue); \
virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolume); \
virtual HRESULT __stdcall SetSurfaceSupport(CATIAReference * iSupportSurface); \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASewing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SewingSide(CatSplitSide & oSewingSide) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_SewingSide(oSewingSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_SewingSide(CatSplitSide iSewingSide) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)put_SewingSide(iSewingSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_SewingIntersectionMode(CatSewingIntersectionMode & oSewingIntersectionMode) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_SewingIntersectionMode(oSewingIntersectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_SewingIntersectionMode(CatSewingIntersectionMode iSewingIntersectionMode) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)put_SewingIntersectionMode(iSewingIntersectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeviationMode(CATLONG & oDeviationMode) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_DeviationMode(oDeviationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeviationMode(CATLONG iDeviationMode) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)put_DeviationMode(iDeviationMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Deviation(double & oDevValue) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_Deviation(oDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Deviation(double iDevValue) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)put_Deviation(iDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetVolumeSupport(CATIAReference * iVolume) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)SetVolumeSupport(iVolume)); \
} \
HRESULT __stdcall  ENVTIEName::SetSurfaceSupport(CATIAReference * iSupportSurface) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)SetSurfaceSupport(iSupportSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASewing,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASewing(classe)    TIECATIASewing##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASewing(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASewing, classe) \
 \
 \
CATImplementTIEMethods(CATIASewing, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASewing, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASewing, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASewing, classe) \
 \
HRESULT __stdcall  TIECATIASewing##classe::get_SewingSide(CatSplitSide & oSewingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSewingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SewingSide(oSewingSide); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSewingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::put_SewingSide(CatSplitSide iSewingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSewingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SewingSide(iSewingSide); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSewingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::get_SewingIntersectionMode(CatSewingIntersectionMode & oSewingIntersectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSewingIntersectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SewingIntersectionMode(oSewingIntersectionMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSewingIntersectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::put_SewingIntersectionMode(CatSewingIntersectionMode iSewingIntersectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSewingIntersectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SewingIntersectionMode(iSewingIntersectionMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSewingIntersectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::get_DeviationMode(CATLONG & oDeviationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDeviationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeviationMode(oDeviationMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDeviationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::put_DeviationMode(CATLONG iDeviationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDeviationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeviationMode(iDeviationMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDeviationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::get_Deviation(double & oDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Deviation(oDevValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::put_Deviation(double iDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Deviation(iDevValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::SetVolumeSupport(CATIAReference * iVolume) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iVolume); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVolumeSupport(iVolume); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iVolume); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::SetSurfaceSupport(CATIAReference * iSupportSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSupportSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSurfaceSupport(iSupportSurface); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSupportSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASewing##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASewing##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASewing##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASewing##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASewing##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASewing##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASewing(classe) \
 \
 \
declare_TIE_CATIASewing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASewing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASewing,"CATIASewing",CATIASewing::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASewing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASewing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASewing##classe(classe::MetaObject(),CATIASewing::MetaObject(),(void *)CreateTIECATIASewing##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASewing(classe) \
 \
 \
declare_TIE_CATIASewing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASewing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASewing,"CATIASewing",CATIASewing::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASewing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASewing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASewing##classe(classe::MetaObject(),CATIASewing::MetaObject(),(void *)CreateTIECATIASewing##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASewing(classe) TIE_CATIASewing(classe)
#else
#define BOA_CATIASewing(classe) CATImplementBOA(CATIASewing, classe)
#endif

#endif
