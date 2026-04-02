#ifndef __TIE_CATIAPoint2D
#define __TIE_CATIAPoint2D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPoint2D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPoint2D */
#define declare_TIE_CATIAPoint2D(classe) \
 \
 \
class TIECATIAPoint2D##classe : public CATIAPoint2D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPoint2D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
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



#define ENVTIEdeclare_CATIAPoint2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIAPoint2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetData(double iX, double iY) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)SetData(iX,iY)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & oPoint) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportName(CATLONG & oReportName) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)get_ReportName(oReportName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportName(CATLONG iReportName) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)put_ReportName(iReportName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Construction(oConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)put_Construction(iConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeometricType(CatGeometricType & oType) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)get_GeometricType(oType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPoint2D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPoint2D(classe)    TIECATIAPoint2D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPoint2D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPoint2D, classe) \
 \
 \
CATImplementTIEMethods(CATIAPoint2D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPoint2D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPoint2D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPoint2D, classe) \
 \
HRESULT __stdcall  TIECATIAPoint2D##classe::SetData(double iX, double iY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iX,&iY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetData(iX,iY); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iX,&iY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPoint2D##classe::GetCoordinates(CATSafeArrayVariant & oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(oPoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPoint2D##classe::get_ReportName(CATLONG & oReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportName(oReportName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPoint2D##classe::put_ReportName(CATLONG iReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportName(iReportName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPoint2D##classe::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Construction(oConstruction); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPoint2D##classe::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Construction(iConstruction); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPoint2D##classe::get_GeometricType(CatGeometricType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricType(oType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPoint2D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPoint2D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPoint2D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPoint2D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPoint2D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPoint2D(classe) \
 \
 \
declare_TIE_CATIAPoint2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPoint2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPoint2D,"CATIAPoint2D",CATIAPoint2D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPoint2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPoint2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPoint2D##classe(classe::MetaObject(),CATIAPoint2D::MetaObject(),(void *)CreateTIECATIAPoint2D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPoint2D(classe) \
 \
 \
declare_TIE_CATIAPoint2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPoint2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPoint2D,"CATIAPoint2D",CATIAPoint2D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPoint2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPoint2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPoint2D##classe(classe::MetaObject(),CATIAPoint2D::MetaObject(),(void *)CreateTIECATIAPoint2D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPoint2D(classe) TIE_CATIAPoint2D(classe)
#else
#define BOA_CATIAPoint2D(classe) CATImplementBOA(CATIAPoint2D, classe)
#endif

#endif
