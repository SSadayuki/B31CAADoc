#ifndef __TIE_CATIAControlPoint2D
#define __TIE_CATIAControlPoint2D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAControlPoint2D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAControlPoint2D */
#define declare_TIE_CATIAControlPoint2D(classe) \
 \
 \
class TIECATIAControlPoint2D##classe : public CATIAControlPoint2D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAControlPoint2D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Curvature(double & oCurvature); \
      virtual HRESULT __stdcall put_Curvature(double iCurvature); \
      virtual HRESULT __stdcall SetTangent(double iTangentX, double iTangentY); \
      virtual HRESULT __stdcall UnsetTangent(); \
      virtual HRESULT __stdcall UnsetCurvature(); \
      virtual HRESULT __stdcall GetTangent(CATSafeArrayVariant & oTangent); \
      virtual HRESULT __stdcall SetData(double iX, double iY); \
      virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oPoint); \
      virtual HRESULT __stdcall get_ReportName(CATLONG & oReportName); \
      virtual HRESULT __stdcall put_ReportName(CATLONG iReportName); \
      virtual HRESULT __stdcall get_Construction(CAT_VARIANT_BOOL & oConstruction); \
      virtual HRESULT __stdcall put_Construction(CAT_VARIANT_BOOL iConstruction); \
      virtual HRESULT __stdcall get_GeometricType(CatGeometricType & oType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAControlPoint2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Curvature(double & oCurvature); \
virtual HRESULT __stdcall put_Curvature(double iCurvature); \
virtual HRESULT __stdcall SetTangent(double iTangentX, double iTangentY); \
virtual HRESULT __stdcall UnsetTangent(); \
virtual HRESULT __stdcall UnsetCurvature(); \
virtual HRESULT __stdcall GetTangent(CATSafeArrayVariant & oTangent); \
virtual HRESULT __stdcall SetData(double iX, double iY); \
virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oPoint); \
virtual HRESULT __stdcall get_ReportName(CATLONG & oReportName); \
virtual HRESULT __stdcall put_ReportName(CATLONG iReportName); \
virtual HRESULT __stdcall get_Construction(CAT_VARIANT_BOOL & oConstruction); \
virtual HRESULT __stdcall put_Construction(CAT_VARIANT_BOOL iConstruction); \
virtual HRESULT __stdcall get_GeometricType(CatGeometricType & oType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAControlPoint2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Curvature(double & oCurvature) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Curvature(oCurvature)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curvature(double iCurvature) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)put_Curvature(iCurvature)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangent(double iTangentX, double iTangentY) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)SetTangent(iTangentX,iTangentY)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetTangent() \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)UnsetTangent()); \
} \
HRESULT __stdcall  ENVTIEName::UnsetCurvature() \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)UnsetCurvature()); \
} \
HRESULT __stdcall  ENVTIEName::GetTangent(CATSafeArrayVariant & oTangent) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)GetTangent(oTangent)); \
} \
HRESULT __stdcall  ENVTIEName::SetData(double iX, double iY) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)SetData(iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & oPoint) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportName(CATLONG & oReportName) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)get_ReportName(oReportName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportName(CATLONG iReportName) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)put_ReportName(iReportName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Construction(oConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)put_Construction(iConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeometricType(CatGeometricType & oType) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)get_GeometricType(oType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAControlPoint2D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAControlPoint2D(classe)    TIECATIAControlPoint2D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAControlPoint2D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAControlPoint2D, classe) \
 \
 \
CATImplementTIEMethods(CATIAControlPoint2D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAControlPoint2D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAControlPoint2D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAControlPoint2D, classe) \
 \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::get_Curvature(double & oCurvature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCurvature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curvature(oCurvature); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCurvature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::put_Curvature(double iCurvature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCurvature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curvature(iCurvature); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCurvature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::SetTangent(double iTangentX, double iTangentY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iTangentX,&iTangentY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangent(iTangentX,iTangentY); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iTangentX,&iTangentY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::UnsetTangent() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetTangent(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::UnsetCurvature() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetCurvature(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::GetTangent(CATSafeArrayVariant & oTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangent(oTangent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::SetData(double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetData(iX,iY); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::GetCoordinates(CATSafeArrayVariant & oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(oPoint); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::get_ReportName(CATLONG & oReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportName(oReportName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::put_ReportName(CATLONG iReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportName(iReportName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Construction(oConstruction); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Construction(iConstruction); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAControlPoint2D##classe::get_GeometricType(CatGeometricType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricType(oType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAControlPoint2D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAControlPoint2D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAControlPoint2D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAControlPoint2D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAControlPoint2D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAControlPoint2D(classe) \
 \
 \
declare_TIE_CATIAControlPoint2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAControlPoint2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAControlPoint2D,"CATIAControlPoint2D",CATIAControlPoint2D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAControlPoint2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAControlPoint2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAControlPoint2D##classe(classe::MetaObject(),CATIAControlPoint2D::MetaObject(),(void *)CreateTIECATIAControlPoint2D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAControlPoint2D(classe) \
 \
 \
declare_TIE_CATIAControlPoint2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAControlPoint2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAControlPoint2D,"CATIAControlPoint2D",CATIAControlPoint2D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAControlPoint2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAControlPoint2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAControlPoint2D##classe(classe::MetaObject(),CATIAControlPoint2D::MetaObject(),(void *)CreateTIECATIAControlPoint2D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAControlPoint2D(classe) TIE_CATIAControlPoint2D(classe)
#else
#define BOA_CATIAControlPoint2D(classe) CATImplementBOA(CATIAControlPoint2D, classe)
#endif

#endif
