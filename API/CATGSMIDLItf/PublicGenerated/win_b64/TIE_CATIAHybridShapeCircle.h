#ifndef __TIE_CATIAHybridShapeCircle
#define __TIE_CATIAHybridShapeCircle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCircle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCircle */
#define declare_TIE_CATIAHybridShapeCircle(classe) \
 \
 \
class TIECATIAHybridShapeCircle##classe : public CATIAHybridShapeCircle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCircle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetFreeRadius(double & oRadius); \
      virtual HRESULT __stdcall GetFreeCenter(CATSafeArrayVariant & ioCenter); \
      virtual HRESULT __stdcall SetLimitation(CATLONG iLimitation); \
      virtual HRESULT __stdcall get_StartAngle(CATIAAngle *& oStartAngle); \
      virtual HRESULT __stdcall get_EndAngle(CATIAAngle *& oEndAngle); \
      virtual HRESULT __stdcall get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation); \
      virtual HRESULT __stdcall put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation); \
      virtual HRESULT __stdcall get_AxisDirection(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_AxisDirection(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall GetAxis(CATLONG iPosition, CATIAReference *& oAxis); \
      virtual HRESULT __stdcall GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ); \
      virtual HRESULT __stdcall GetLimitation(CATLONG & oLimit); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetFreeRadius(double & oRadius); \
virtual HRESULT __stdcall GetFreeCenter(CATSafeArrayVariant & ioCenter); \
virtual HRESULT __stdcall SetLimitation(CATLONG iLimitation); \
virtual HRESULT __stdcall get_StartAngle(CATIAAngle *& oStartAngle); \
virtual HRESULT __stdcall get_EndAngle(CATIAAngle *& oEndAngle); \
virtual HRESULT __stdcall get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation); \
virtual HRESULT __stdcall put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation); \
virtual HRESULT __stdcall get_AxisDirection(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_AxisDirection(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall GetAxis(CATLONG iPosition, CATIAReference *& oAxis); \
virtual HRESULT __stdcall GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ); \
virtual HRESULT __stdcall GetLimitation(CATLONG & oLimit); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetFreeRadius(double & oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)GetFreeRadius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)GetFreeCenter(ioCenter)); \
} \
HRESULT __stdcall  ENVTIEName::SetLimitation(CATLONG iLimitation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)SetLimitation(iLimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_StartAngle(oStartAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_EndAngle(oEndAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_AxisComputation(oAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)put_AxisComputation(iAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_AxisDirection(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)put_AxisDirection(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)GetAxis(iPosition,oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCenterX,oCenterY,oCenterZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetLimitation(CATLONG & oLimit) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)GetLimitation(oLimit)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircle,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCircle(classe)    TIECATIAHybridShapeCircle##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCircle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCircle, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCircle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircle, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCircle, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::GetFreeRadius(double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeRadius(oRadius); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ioCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeCenter(ioCenter); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ioCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::SetLimitation(CATLONG iLimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLimitation(iLimitation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oStartAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartAngle(oStartAngle); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oStartAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oEndAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndAngle(oEndAngle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oEndAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisComputation(oAxisComputation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisComputation(iAxisComputation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisDirection(oDir); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisDirection(iDir); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPosition,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxis(iPosition,oAxis); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPosition,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oCenterX,&oCenterY,&oCenterZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCenterX,oCenterY,oCenterZ); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oCenterX,&oCenterY,&oCenterZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::GetLimitation(CATLONG & oLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLimitation(oLimit); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircle##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircle##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircle##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircle##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircle##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircle##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCircle(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircle,"CATIAHybridShapeCircle",CATIAHybridShapeCircle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircle##classe(classe::MetaObject(),CATIAHybridShapeCircle::MetaObject(),(void *)CreateTIECATIAHybridShapeCircle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCircle(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircle,"CATIAHybridShapeCircle",CATIAHybridShapeCircle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircle##classe(classe::MetaObject(),CATIAHybridShapeCircle::MetaObject(),(void *)CreateTIECATIAHybridShapeCircle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCircle(classe) TIE_CATIAHybridShapeCircle(classe)
#else
#define BOA_CATIAHybridShapeCircle(classe) CATImplementBOA(CATIAHybridShapeCircle, classe)
#endif

#endif
