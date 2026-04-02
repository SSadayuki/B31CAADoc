#ifndef __TIE_CATIAHybridShapeDirection
#define __TIE_CATIAHybridShapeDirection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeDirection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeDirection */
#define declare_TIE_CATIAHybridShapeDirection(classe) \
 \
 \
class TIECATIAHybridShapeDirection##classe : public CATIAHybridShapeDirection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeDirection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetX(CATIARealParam *& oCoordinates); \
      virtual HRESULT __stdcall GetY(CATIARealParam *& oCoordinates); \
      virtual HRESULT __stdcall GetZ(CATIARealParam *& oCoordinates); \
      virtual HRESULT __stdcall GetXVal(double & oX); \
      virtual HRESULT __stdcall GetYVal(double & oY); \
      virtual HRESULT __stdcall GetZVal(double & oZ); \
      virtual HRESULT __stdcall get_Object(CATIAReference *& oObject); \
      virtual HRESULT __stdcall put_Object(CATIAReference * iObject); \
      virtual HRESULT __stdcall get_Type(CATLONG & oType); \
      virtual HRESULT __stdcall DirectionSpecification(CATLONG & oDir); \
      virtual HRESULT __stdcall get_RefAxisSystem(CATIAReference *& oRefAxis); \
      virtual HRESULT __stdcall put_RefAxisSystem(CATIAReference * iRefAxis); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeDirection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetX(CATIARealParam *& oCoordinates); \
virtual HRESULT __stdcall GetY(CATIARealParam *& oCoordinates); \
virtual HRESULT __stdcall GetZ(CATIARealParam *& oCoordinates); \
virtual HRESULT __stdcall GetXVal(double & oX); \
virtual HRESULT __stdcall GetYVal(double & oY); \
virtual HRESULT __stdcall GetZVal(double & oZ); \
virtual HRESULT __stdcall get_Object(CATIAReference *& oObject); \
virtual HRESULT __stdcall put_Object(CATIAReference * iObject); \
virtual HRESULT __stdcall get_Type(CATLONG & oType); \
virtual HRESULT __stdcall DirectionSpecification(CATLONG & oDir); \
virtual HRESULT __stdcall get_RefAxisSystem(CATIAReference *& oRefAxis); \
virtual HRESULT __stdcall put_RefAxisSystem(CATIAReference * iRefAxis); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeDirection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetX(CATIARealParam *& oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)GetX(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetY(CATIARealParam *& oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)GetY(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetZ(CATIARealParam *& oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)GetZ(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetXVal(double & oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)GetXVal(oX)); \
} \
HRESULT __stdcall  ENVTIEName::GetYVal(double & oY) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)GetYVal(oY)); \
} \
HRESULT __stdcall  ENVTIEName::GetZVal(double & oZ) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)GetZVal(oZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_Object(CATIAReference *& oObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)get_Object(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::put_Object(CATIAReference * iObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)put_Object(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::DirectionSpecification(CATLONG & oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)DirectionSpecification(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefAxisSystem(CATIAReference *& oRefAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)get_RefAxisSystem(oRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefAxisSystem(CATIAReference * iRefAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)put_RefAxisSystem(iRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeDirection,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeDirection(classe)    TIECATIAHybridShapeDirection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeDirection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeDirection, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeDirection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeDirection, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeDirection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeDirection, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::GetX(CATIARealParam *& oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetX(oCoordinates); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::GetY(CATIARealParam *& oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetY(oCoordinates); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::GetZ(CATIARealParam *& oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetZ(oCoordinates); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::GetXVal(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetXVal(oX); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::GetYVal(double & oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetYVal(oY); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::GetZVal(double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetZVal(oZ); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::get_Object(CATIAReference *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Object(oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::put_Object(CATIAReference * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Object(iObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::get_Type(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::DirectionSpecification(CATLONG & oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DirectionSpecification(oDir); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::get_RefAxisSystem(CATIAReference *& oRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefAxisSystem(oRefAxis); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::put_RefAxisSystem(CATIAReference * iRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefAxisSystem(iRefAxis); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeDirection##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDirection##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDirection##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDirection##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDirection##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeDirection##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeDirection(classe) \
 \
 \
declare_TIE_CATIAHybridShapeDirection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeDirection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeDirection,"CATIAHybridShapeDirection",CATIAHybridShapeDirection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeDirection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeDirection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeDirection##classe(classe::MetaObject(),CATIAHybridShapeDirection::MetaObject(),(void *)CreateTIECATIAHybridShapeDirection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeDirection(classe) \
 \
 \
declare_TIE_CATIAHybridShapeDirection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeDirection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeDirection,"CATIAHybridShapeDirection",CATIAHybridShapeDirection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeDirection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeDirection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeDirection##classe(classe::MetaObject(),CATIAHybridShapeDirection::MetaObject(),(void *)CreateTIECATIAHybridShapeDirection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeDirection(classe) TIE_CATIAHybridShapeDirection(classe)
#else
#define BOA_CATIAHybridShapeDirection(classe) CATImplementBOA(CATIAHybridShapeDirection, classe)
#endif

#endif
