#ifndef __TIE_CATIAHybridShapePointOnSurface
#define __TIE_CATIAHybridShapePointOnSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePointOnSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePointOnSurface */
#define declare_TIE_CATIAHybridShapePointOnSurface(classe) \
 \
 \
class TIECATIAHybridShapePointOnSurface##classe : public CATIAHybridShapePointOnSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePointOnSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT __stdcall get_Point(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDirection); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDirection); \
      virtual HRESULT __stdcall get_Offset(CATIALength *& oX); \
      virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall SetCoordinates(const CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapePointOnSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oX); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT __stdcall get_Point(CATIAReference *& oX); \
virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDirection); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDirection); \
virtual HRESULT __stdcall get_Offset(CATIALength *& oX); \
virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall SetCoordinates(const CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapePointOnSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Surface(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_Point(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Point(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_Point(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)put_Point(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_Offset(CATIALength *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Offset(oX)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::SetCoordinates(const CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)SetCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnSurface,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePointOnSurface(classe)    TIECATIAHybridShapePointOnSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePointOnSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePointOnSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePointOnSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePointOnSurface, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePointOnSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePointOnSurface, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Surface(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oX); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Point(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oX); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::put_Point(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Point(iPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Direction(CATIAHybridShapeDirection *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDirection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::put_Direction(CATIAHybridShapeDirection * iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDirection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Offset(CATIALength *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(oCoordinates); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::SetCoordinates(const CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCoordinates(oCoordinates); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnSurface##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnSurface##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnSurface##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePointOnSurface(classe) \
 \
 \
declare_TIE_CATIAHybridShapePointOnSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePointOnSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePointOnSurface,"CATIAHybridShapePointOnSurface",CATIAHybridShapePointOnSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePointOnSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePointOnSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePointOnSurface##classe(classe::MetaObject(),CATIAHybridShapePointOnSurface::MetaObject(),(void *)CreateTIECATIAHybridShapePointOnSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePointOnSurface(classe) \
 \
 \
declare_TIE_CATIAHybridShapePointOnSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePointOnSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePointOnSurface,"CATIAHybridShapePointOnSurface",CATIAHybridShapePointOnSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePointOnSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePointOnSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePointOnSurface##classe(classe::MetaObject(),CATIAHybridShapePointOnSurface::MetaObject(),(void *)CreateTIECATIAHybridShapePointOnSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePointOnSurface(classe) TIE_CATIAHybridShapePointOnSurface(classe)
#else
#define BOA_CATIAHybridShapePointOnSurface(classe) CATImplementBOA(CATIAHybridShapePointOnSurface, classe)
#endif

#endif
