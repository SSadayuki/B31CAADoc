#ifndef __TIE_CATIATPSParallelOnScreen
#define __TIE_CATIATPSParallelOnScreen

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIATPSParallelOnScreen.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATPSParallelOnScreen */
#define declare_TIE_CATIATPSParallelOnScreen(classe) \
 \
 \
class TIECATIATPSParallelOnScreen##classe : public CATIATPSParallelOnScreen \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATPSParallelOnScreen, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ParallelOnScreen(CAT_VARIANT_BOOL & obParallel); \
      virtual HRESULT __stdcall put_ParallelOnScreen(CAT_VARIANT_BOOL ibParallel); \
      virtual HRESULT __stdcall get_Zoomable(CAT_VARIANT_BOOL & obZoomable); \
      virtual HRESULT __stdcall put_Zoomable(CAT_VARIANT_BOOL ibZoomable); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATPSParallelOnScreen(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ParallelOnScreen(CAT_VARIANT_BOOL & obParallel); \
virtual HRESULT __stdcall put_ParallelOnScreen(CAT_VARIANT_BOOL ibParallel); \
virtual HRESULT __stdcall get_Zoomable(CAT_VARIANT_BOOL & obZoomable); \
virtual HRESULT __stdcall put_Zoomable(CAT_VARIANT_BOOL ibZoomable); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATPSParallelOnScreen(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ParallelOnScreen(CAT_VARIANT_BOOL & obParallel) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)get_ParallelOnScreen(obParallel)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParallelOnScreen(CAT_VARIANT_BOOL ibParallel) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)put_ParallelOnScreen(ibParallel)); \
} \
HRESULT __stdcall  ENVTIEName::get_Zoomable(CAT_VARIANT_BOOL & obZoomable) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)get_Zoomable(obZoomable)); \
} \
HRESULT __stdcall  ENVTIEName::put_Zoomable(CAT_VARIANT_BOOL ibZoomable) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)put_Zoomable(ibZoomable)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATPSParallelOnScreen,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATPSParallelOnScreen(classe)    TIECATIATPSParallelOnScreen##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATPSParallelOnScreen(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATPSParallelOnScreen, classe) \
 \
 \
CATImplementTIEMethods(CATIATPSParallelOnScreen, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATPSParallelOnScreen, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATPSParallelOnScreen, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATPSParallelOnScreen, classe) \
 \
HRESULT __stdcall  TIECATIATPSParallelOnScreen##classe::get_ParallelOnScreen(CAT_VARIANT_BOOL & obParallel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParallelOnScreen(obParallel)); \
} \
HRESULT __stdcall  TIECATIATPSParallelOnScreen##classe::put_ParallelOnScreen(CAT_VARIANT_BOOL ibParallel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParallelOnScreen(ibParallel)); \
} \
HRESULT __stdcall  TIECATIATPSParallelOnScreen##classe::get_Zoomable(CAT_VARIANT_BOOL & obZoomable) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Zoomable(obZoomable)); \
} \
HRESULT __stdcall  TIECATIATPSParallelOnScreen##classe::put_Zoomable(CAT_VARIANT_BOOL ibZoomable) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Zoomable(ibZoomable)); \
} \
HRESULT  __stdcall  TIECATIATPSParallelOnScreen##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIATPSParallelOnScreen##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIATPSParallelOnScreen##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATPSParallelOnScreen##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATPSParallelOnScreen##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATPSParallelOnScreen(classe) \
 \
 \
declare_TIE_CATIATPSParallelOnScreen(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSParallelOnScreen##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSParallelOnScreen,"CATIATPSParallelOnScreen",CATIATPSParallelOnScreen::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSParallelOnScreen(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATPSParallelOnScreen, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSParallelOnScreen##classe(classe::MetaObject(),CATIATPSParallelOnScreen::MetaObject(),(void *)CreateTIECATIATPSParallelOnScreen##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATPSParallelOnScreen(classe) \
 \
 \
declare_TIE_CATIATPSParallelOnScreen(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATPSParallelOnScreen##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATPSParallelOnScreen,"CATIATPSParallelOnScreen",CATIATPSParallelOnScreen::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATPSParallelOnScreen(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATPSParallelOnScreen, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATPSParallelOnScreen##classe(classe::MetaObject(),CATIATPSParallelOnScreen::MetaObject(),(void *)CreateTIECATIATPSParallelOnScreen##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATPSParallelOnScreen(classe) TIE_CATIATPSParallelOnScreen(classe)
#else
#define BOA_CATIATPSParallelOnScreen(classe) CATImplementBOA(CATIATPSParallelOnScreen, classe)
#endif

#endif
