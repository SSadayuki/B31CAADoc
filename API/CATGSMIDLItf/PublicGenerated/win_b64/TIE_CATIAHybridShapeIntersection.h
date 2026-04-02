#ifndef __TIE_CATIAHybridShapeIntersection
#define __TIE_CATIAHybridShapeIntersection

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeIntersection.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeIntersection */
#define declare_TIE_CATIAHybridShapeIntersection(classe) \
 \
 \
class TIECATIAHybridShapeIntersection##classe : public CATIAHybridShapeIntersection \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeIntersection, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Element1(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Element1(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Element2(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Element2(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_ExtrapolateMode(CAT_VARIANT_BOOL & oExtrapolateMode); \
      virtual HRESULT __stdcall put_ExtrapolateMode(CAT_VARIANT_BOOL iExtrapolateMode); \
      virtual HRESULT __stdcall get_IntersectMode(CAT_VARIANT_BOOL & oIntersectMode); \
      virtual HRESULT __stdcall put_IntersectMode(CAT_VARIANT_BOOL iIntersectMode); \
      virtual HRESULT __stdcall get_PointType(CATLONG & oPointType); \
      virtual HRESULT __stdcall put_PointType(CATLONG iPointType); \
      virtual HRESULT __stdcall get_SolidMode(CAT_VARIANT_BOOL & oSolidMode); \
      virtual HRESULT __stdcall put_SolidMode(CAT_VARIANT_BOOL iSolidMode); \
      virtual HRESULT __stdcall get_ExtendMode(CATLONG & oExtendMode); \
      virtual HRESULT __stdcall put_ExtendMode(CATLONG iExtendMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeIntersection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Element1(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Element1(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Element2(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Element2(CATIAReference * iElem); \
virtual HRESULT __stdcall get_ExtrapolateMode(CAT_VARIANT_BOOL & oExtrapolateMode); \
virtual HRESULT __stdcall put_ExtrapolateMode(CAT_VARIANT_BOOL iExtrapolateMode); \
virtual HRESULT __stdcall get_IntersectMode(CAT_VARIANT_BOOL & oIntersectMode); \
virtual HRESULT __stdcall put_IntersectMode(CAT_VARIANT_BOOL iIntersectMode); \
virtual HRESULT __stdcall get_PointType(CATLONG & oPointType); \
virtual HRESULT __stdcall put_PointType(CATLONG iPointType); \
virtual HRESULT __stdcall get_SolidMode(CAT_VARIANT_BOOL & oSolidMode); \
virtual HRESULT __stdcall put_SolidMode(CAT_VARIANT_BOOL iSolidMode); \
virtual HRESULT __stdcall get_ExtendMode(CATLONG & oExtendMode); \
virtual HRESULT __stdcall put_ExtendMode(CATLONG iExtendMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeIntersection(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Element1(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_Element1(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Element1(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_Element1(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Element2(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_Element2(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Element2(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_Element2(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtrapolateMode(CAT_VARIANT_BOOL & oExtrapolateMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_ExtrapolateMode(oExtrapolateMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtrapolateMode(CAT_VARIANT_BOOL iExtrapolateMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_ExtrapolateMode(iExtrapolateMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_IntersectMode(CAT_VARIANT_BOOL & oIntersectMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_IntersectMode(oIntersectMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_IntersectMode(CAT_VARIANT_BOOL iIntersectMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_IntersectMode(iIntersectMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_PointType(CATLONG & oPointType) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_PointType(oPointType)); \
} \
HRESULT __stdcall  ENVTIEName::put_PointType(CATLONG iPointType) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_PointType(iPointType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolidMode(CAT_VARIANT_BOOL & oSolidMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_SolidMode(oSolidMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolidMode(CAT_VARIANT_BOOL iSolidMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_SolidMode(iSolidMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtendMode(CATLONG & oExtendMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_ExtendMode(oExtendMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtendMode(CATLONG iExtendMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_ExtendMode(iExtendMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntersection,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeIntersection(classe)    TIECATIAHybridShapeIntersection##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeIntersection(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeIntersection, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeIntersection, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeIntersection, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeIntersection, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeIntersection, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_Element1(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Element1(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::put_Element1(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Element1(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_Element2(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Element2(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::put_Element2(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Element2(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_ExtrapolateMode(CAT_VARIANT_BOOL & oExtrapolateMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oExtrapolateMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtrapolateMode(oExtrapolateMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oExtrapolateMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::put_ExtrapolateMode(CAT_VARIANT_BOOL iExtrapolateMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iExtrapolateMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtrapolateMode(iExtrapolateMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iExtrapolateMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_IntersectMode(CAT_VARIANT_BOOL & oIntersectMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oIntersectMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IntersectMode(oIntersectMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oIntersectMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::put_IntersectMode(CAT_VARIANT_BOOL iIntersectMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIntersectMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IntersectMode(iIntersectMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIntersectMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_PointType(CATLONG & oPointType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPointType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PointType(oPointType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPointType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::put_PointType(CATLONG iPointType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPointType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PointType(iPointType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPointType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_SolidMode(CAT_VARIANT_BOOL & oSolidMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSolidMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolidMode(oSolidMode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSolidMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::put_SolidMode(CAT_VARIANT_BOOL iSolidMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSolidMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolidMode(iSolidMode); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSolidMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_ExtendMode(CATLONG & oExtendMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oExtendMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtendMode(oExtendMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oExtendMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::put_ExtendMode(CATLONG iExtendMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iExtendMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtendMode(iExtendMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iExtendMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntersection##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntersection##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntersection##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntersection##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntersection##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntersection##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeIntersection(classe) \
 \
 \
declare_TIE_CATIAHybridShapeIntersection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeIntersection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeIntersection,"CATIAHybridShapeIntersection",CATIAHybridShapeIntersection::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeIntersection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeIntersection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeIntersection##classe(classe::MetaObject(),CATIAHybridShapeIntersection::MetaObject(),(void *)CreateTIECATIAHybridShapeIntersection##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeIntersection(classe) \
 \
 \
declare_TIE_CATIAHybridShapeIntersection(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeIntersection##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeIntersection,"CATIAHybridShapeIntersection",CATIAHybridShapeIntersection::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeIntersection(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeIntersection, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeIntersection##classe(classe::MetaObject(),CATIAHybridShapeIntersection::MetaObject(),(void *)CreateTIECATIAHybridShapeIntersection##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeIntersection(classe) TIE_CATIAHybridShapeIntersection(classe)
#else
#define BOA_CATIAHybridShapeIntersection(classe) CATImplementBOA(CATIAHybridShapeIntersection, classe)
#endif

#endif
