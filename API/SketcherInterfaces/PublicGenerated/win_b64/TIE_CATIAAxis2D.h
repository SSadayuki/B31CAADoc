#ifndef __TIE_CATIAAxis2D
#define __TIE_CATIAAxis2D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAxis2D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAxis2D */
#define declare_TIE_CATIAAxis2D(classe) \
 \
 \
class TIECATIAAxis2D##classe : public CATIAAxis2D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAxis2D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_HorizontalReference(CATIALine2D *& oHorizontal); \
      virtual HRESULT __stdcall get_VerticalReference(CATIALine2D *& oVertical); \
      virtual HRESULT __stdcall get_Origin(CATIAPoint2D *& oOrigin); \
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



#define ENVTIEdeclare_CATIAAxis2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_HorizontalReference(CATIALine2D *& oHorizontal); \
virtual HRESULT __stdcall get_VerticalReference(CATIALine2D *& oVertical); \
virtual HRESULT __stdcall get_Origin(CATIAPoint2D *& oOrigin); \
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


#define ENVTIEdefine_CATIAAxis2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_HorizontalReference(CATIALine2D *& oHorizontal) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_HorizontalReference(oHorizontal)); \
} \
HRESULT __stdcall  ENVTIEName::get_VerticalReference(CATIALine2D *& oVertical) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_VerticalReference(oVertical)); \
} \
HRESULT __stdcall  ENVTIEName::get_Origin(CATIAPoint2D *& oOrigin) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_Origin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportName(CATLONG & oReportName) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_ReportName(oReportName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportName(CATLONG iReportName) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)put_ReportName(iReportName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_Construction(oConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)put_Construction(iConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeometricType(CatGeometricType & oType) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_GeometricType(oType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAxis2D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAxis2D(classe)    TIECATIAAxis2D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAxis2D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAxis2D, classe) \
 \
 \
CATImplementTIEMethods(CATIAAxis2D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAxis2D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAxis2D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAxis2D, classe) \
 \
HRESULT __stdcall  TIECATIAAxis2D##classe::get_HorizontalReference(CATIALine2D *& oHorizontal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oHorizontal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HorizontalReference(oHorizontal); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oHorizontal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxis2D##classe::get_VerticalReference(CATIALine2D *& oVertical) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oVertical); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VerticalReference(oVertical); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oVertical); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxis2D##classe::get_Origin(CATIAPoint2D *& oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Origin(oOrigin); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxis2D##classe::get_ReportName(CATLONG & oReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportName(oReportName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxis2D##classe::put_ReportName(CATLONG iReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportName(iReportName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxis2D##classe::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Construction(oConstruction); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxis2D##classe::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Construction(iConstruction); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAxis2D##classe::get_GeometricType(CatGeometricType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricType(oType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxis2D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxis2D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxis2D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxis2D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxis2D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAxis2D(classe) \
 \
 \
declare_TIE_CATIAAxis2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAxis2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAxis2D,"CATIAAxis2D",CATIAAxis2D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAxis2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAxis2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAxis2D##classe(classe::MetaObject(),CATIAAxis2D::MetaObject(),(void *)CreateTIECATIAAxis2D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAxis2D(classe) \
 \
 \
declare_TIE_CATIAAxis2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAxis2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAxis2D,"CATIAAxis2D",CATIAAxis2D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAxis2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAxis2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAxis2D##classe(classe::MetaObject(),CATIAAxis2D::MetaObject(),(void *)CreateTIECATIAAxis2D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAxis2D(classe) TIE_CATIAAxis2D(classe)
#else
#define BOA_CATIAAxis2D(classe) CATImplementBOA(CATIAAxis2D, classe)
#endif

#endif
