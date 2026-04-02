#ifndef __TIE_CATIAViewpoint2D
#define __TIE_CATIAViewpoint2D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAViewpoint2D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAViewpoint2D */
#define declare_TIE_CATIAViewpoint2D(classe) \
 \
 \
class TIECATIAViewpoint2D##classe : public CATIAViewpoint2D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAViewpoint2D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall get_Zoom(double & oZoom); \
      virtual HRESULT __stdcall put_Zoom(double iZoom); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAViewpoint2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall get_Zoom(double & oZoom); \
virtual HRESULT __stdcall put_Zoom(double iZoom); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAViewpoint2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)PutOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::get_Zoom(double & oZoom) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)get_Zoom(oZoom)); \
} \
HRESULT __stdcall  ENVTIEName::put_Zoom(double iZoom) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)put_Zoom(iZoom)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAViewpoint2D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAViewpoint2D(classe)    TIECATIAViewpoint2D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAViewpoint2D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAViewpoint2D, classe) \
 \
 \
CATImplementTIEMethods(CATIAViewpoint2D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAViewpoint2D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAViewpoint2D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAViewpoint2D, classe) \
 \
HRESULT __stdcall  TIECATIAViewpoint2D##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint2D##classe::PutOrigin(const CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(oOrigin); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint2D##classe::get_Zoom(double & oZoom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oZoom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Zoom(oZoom); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oZoom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAViewpoint2D##classe::put_Zoom(double iZoom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iZoom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Zoom(iZoom); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iZoom); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint2D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint2D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint2D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint2D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAViewpoint2D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAViewpoint2D(classe) \
 \
 \
declare_TIE_CATIAViewpoint2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAViewpoint2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAViewpoint2D,"CATIAViewpoint2D",CATIAViewpoint2D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAViewpoint2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAViewpoint2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAViewpoint2D##classe(classe::MetaObject(),CATIAViewpoint2D::MetaObject(),(void *)CreateTIECATIAViewpoint2D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAViewpoint2D(classe) \
 \
 \
declare_TIE_CATIAViewpoint2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAViewpoint2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAViewpoint2D,"CATIAViewpoint2D",CATIAViewpoint2D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAViewpoint2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAViewpoint2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAViewpoint2D##classe(classe::MetaObject(),CATIAViewpoint2D::MetaObject(),(void *)CreateTIECATIAViewpoint2D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAViewpoint2D(classe) TIE_CATIAViewpoint2D(classe)
#else
#define BOA_CATIAViewpoint2D(classe) CATImplementBOA(CATIAViewpoint2D, classe)
#endif

#endif
