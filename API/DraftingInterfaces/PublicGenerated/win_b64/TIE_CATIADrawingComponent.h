#ifndef __TIE_CATIADrawingComponent
#define __TIE_CATIADrawingComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingComponent */
#define declare_TIE_CATIADrawingComponent(classe) \
 \
 \
class TIECATIADrawingComponent##classe : public CATIADrawingComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CompRef(CATIADrawingView *& oComponentRef); \
      virtual HRESULT __stdcall GetMatrix(CATSafeArrayVariant & ioMatrix); \
      virtual HRESULT __stdcall SetMatrix(const CATSafeArrayVariant & iMatrix); \
      virtual HRESULT __stdcall get_x(double & oXPosition); \
      virtual HRESULT __stdcall put_x(double iXPosition); \
      virtual HRESULT __stdcall get_y(double & oYPosition); \
      virtual HRESULT __stdcall put_y(double iYPosition); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_Scale2(double & oComponentScale); \
      virtual HRESULT __stdcall put_Scale2(double iComponentScale); \
      virtual HRESULT __stdcall GetFlip(CAT_VARIANT_BOOL & oComponentFlip); \
      virtual HRESULT __stdcall Flip(); \
      virtual HRESULT __stdcall Explode(); \
      virtual HRESULT __stdcall GetModifiableObjectsCount(CATLONG & oCount); \
      virtual HRESULT __stdcall GetModifiableObject(const CATVariant & iIndex, CATIABase *& oObject); \
      virtual HRESULT __stdcall ExposeCompRef(); \
      virtual HRESULT __stdcall ExposeCompRefInSheet(CATIADrawingSheet * iSheet); \
      virtual HRESULT __stdcall ExplodeAndSelect(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CompRef(CATIADrawingView *& oComponentRef); \
virtual HRESULT __stdcall GetMatrix(CATSafeArrayVariant & ioMatrix); \
virtual HRESULT __stdcall SetMatrix(const CATSafeArrayVariant & iMatrix); \
virtual HRESULT __stdcall get_x(double & oXPosition); \
virtual HRESULT __stdcall put_x(double iXPosition); \
virtual HRESULT __stdcall get_y(double & oYPosition); \
virtual HRESULT __stdcall put_y(double iYPosition); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_Scale2(double & oComponentScale); \
virtual HRESULT __stdcall put_Scale2(double iComponentScale); \
virtual HRESULT __stdcall GetFlip(CAT_VARIANT_BOOL & oComponentFlip); \
virtual HRESULT __stdcall Flip(); \
virtual HRESULT __stdcall Explode(); \
virtual HRESULT __stdcall GetModifiableObjectsCount(CATLONG & oCount); \
virtual HRESULT __stdcall GetModifiableObject(const CATVariant & iIndex, CATIABase *& oObject); \
virtual HRESULT __stdcall ExposeCompRef(); \
virtual HRESULT __stdcall ExposeCompRefInSheet(CATIADrawingSheet * iSheet); \
virtual HRESULT __stdcall ExplodeAndSelect(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CompRef(CATIADrawingView *& oComponentRef) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_CompRef(oComponentRef)); \
} \
HRESULT __stdcall  ENVTIEName::GetMatrix(CATSafeArrayVariant & ioMatrix) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)GetMatrix(ioMatrix)); \
} \
HRESULT __stdcall  ENVTIEName::SetMatrix(const CATSafeArrayVariant & iMatrix) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)SetMatrix(iMatrix)); \
} \
HRESULT __stdcall  ENVTIEName::get_x(double & oXPosition) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_x(oXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double iXPosition) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)put_x(iXPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oYPosition) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_y(oYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iYPosition) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)put_y(iYPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scale2(double & oComponentScale) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_Scale2(oComponentScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scale2(double iComponentScale) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)put_Scale2(iComponentScale)); \
} \
HRESULT __stdcall  ENVTIEName::GetFlip(CAT_VARIANT_BOOL & oComponentFlip) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)GetFlip(oComponentFlip)); \
} \
HRESULT __stdcall  ENVTIEName::Flip() \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)Flip()); \
} \
HRESULT __stdcall  ENVTIEName::Explode() \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)Explode()); \
} \
HRESULT __stdcall  ENVTIEName::GetModifiableObjectsCount(CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)GetModifiableObjectsCount(oCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetModifiableObject(const CATVariant & iIndex, CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)GetModifiableObject(iIndex,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::ExposeCompRef() \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)ExposeCompRef()); \
} \
HRESULT __stdcall  ENVTIEName::ExposeCompRefInSheet(CATIADrawingSheet * iSheet) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)ExposeCompRefInSheet(iSheet)); \
} \
HRESULT __stdcall  ENVTIEName::ExplodeAndSelect() \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)ExplodeAndSelect()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingComponent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingComponent(classe)    TIECATIADrawingComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingComponent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingComponent, classe) \
 \
HRESULT __stdcall  TIECATIADrawingComponent##classe::get_CompRef(CATIADrawingView *& oComponentRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oComponentRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CompRef(oComponentRef); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oComponentRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::GetMatrix(CATSafeArrayVariant & ioMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ioMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMatrix(ioMatrix); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ioMatrix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::SetMatrix(const CATSafeArrayVariant & iMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMatrix(iMatrix); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iMatrix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::get_x(double & oXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oXPosition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::put_x(double iXPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iXPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(iXPosition); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iXPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::get_y(double & oYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oYPosition); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::put_y(double iYPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iYPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iYPosition); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iYPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::get_Scale2(double & oComponentScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oComponentScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scale2(oComponentScale); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oComponentScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::put_Scale2(double iComponentScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iComponentScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scale2(iComponentScale); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iComponentScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::GetFlip(CAT_VARIANT_BOOL & oComponentFlip) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oComponentFlip); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlip(oComponentFlip); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oComponentFlip); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::Flip() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Flip(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::Explode() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Explode(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::GetModifiableObjectsCount(CATLONG & oCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModifiableObjectsCount(oCount); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::GetModifiableObject(const CATVariant & iIndex, CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iIndex,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModifiableObject(iIndex,oObject); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iIndex,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::ExposeCompRef() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExposeCompRef(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::ExposeCompRefInSheet(CATIADrawingSheet * iSheet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iSheet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExposeCompRefInSheet(iSheet); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iSheet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingComponent##classe::ExplodeAndSelect() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExplodeAndSelect(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingComponent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingComponent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingComponent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingComponent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingComponent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingComponent(classe) \
 \
 \
declare_TIE_CATIADrawingComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingComponent,"CATIADrawingComponent",CATIADrawingComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingComponent##classe(classe::MetaObject(),CATIADrawingComponent::MetaObject(),(void *)CreateTIECATIADrawingComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingComponent(classe) \
 \
 \
declare_TIE_CATIADrawingComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingComponent,"CATIADrawingComponent",CATIADrawingComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingComponent##classe(classe::MetaObject(),CATIADrawingComponent::MetaObject(),(void *)CreateTIECATIADrawingComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingComponent(classe) TIE_CATIADrawingComponent(classe)
#else
#define BOA_CATIADrawingComponent(classe) CATImplementBOA(CATIADrawingComponent, classe)
#endif

#endif
