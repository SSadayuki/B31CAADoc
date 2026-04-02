#ifndef __TIE_CATIAHybridShapeRollingOffset
#define __TIE_CATIAHybridShapeRollingOffset

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeRollingOffset.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeRollingOffset */
#define declare_TIE_CATIAHybridShapeRollingOffset(classe) \
 \
 \
class TIECATIAHybridShapeRollingOffset##classe : public CATIAHybridShapeRollingOffset \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeRollingOffset, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Offset(CATIALength *& oOffset); \
      virtual HRESULT __stdcall getOffset(double & oOffset); \
      virtual HRESULT __stdcall putOffset(double iOffset); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall getNbCurve(CATLONG & CurvesNb); \
      virtual HRESULT __stdcall getCurve(CATLONG iPos, CATIAReference *& oCurve); \
      virtual HRESULT __stdcall putCurve(CATIAReference * iCurve); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeRollingOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Offset(CATIALength *& oOffset); \
virtual HRESULT __stdcall getOffset(double & oOffset); \
virtual HRESULT __stdcall putOffset(double iOffset); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall getNbCurve(CATLONG & CurvesNb); \
virtual HRESULT __stdcall getCurve(CATLONG iPos, CATIAReference *& oCurve); \
virtual HRESULT __stdcall putCurve(CATIAReference * iCurve); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeRollingOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Offset(CATIALength *& oOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)get_Offset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::getOffset(double & oOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)getOffset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::putOffset(double iOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)putOffset(iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::getNbCurve(CATLONG & CurvesNb) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)getNbCurve(CurvesNb)); \
} \
HRESULT __stdcall  ENVTIEName::getCurve(CATLONG iPos, CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)getCurve(iPos,oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::putCurve(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)putCurve(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeRollingOffset,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeRollingOffset(classe)    TIECATIAHybridShapeRollingOffset##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeRollingOffset(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeRollingOffset, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeRollingOffset, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeRollingOffset, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeRollingOffset, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeRollingOffset, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::get_Offset(CATIALength *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oOffset); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::getOffset(double & oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getOffset(oOffset); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::putOffset(double iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->putOffset(iOffset); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::getNbCurve(CATLONG & CurvesNb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&CurvesNb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getNbCurve(CurvesNb); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&CurvesNb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::getCurve(CATLONG iPos, CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPos,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getCurve(iPos,oCurve); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPos,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::putCurve(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->putCurve(iCurve); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRollingOffset##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRollingOffset##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRollingOffset##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRollingOffset##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRollingOffset##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRollingOffset##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeRollingOffset(classe) \
 \
 \
declare_TIE_CATIAHybridShapeRollingOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeRollingOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeRollingOffset,"CATIAHybridShapeRollingOffset",CATIAHybridShapeRollingOffset::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeRollingOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeRollingOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeRollingOffset##classe(classe::MetaObject(),CATIAHybridShapeRollingOffset::MetaObject(),(void *)CreateTIECATIAHybridShapeRollingOffset##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeRollingOffset(classe) \
 \
 \
declare_TIE_CATIAHybridShapeRollingOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeRollingOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeRollingOffset,"CATIAHybridShapeRollingOffset",CATIAHybridShapeRollingOffset::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeRollingOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeRollingOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeRollingOffset##classe(classe::MetaObject(),CATIAHybridShapeRollingOffset::MetaObject(),(void *)CreateTIECATIAHybridShapeRollingOffset##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeRollingOffset(classe) TIE_CATIAHybridShapeRollingOffset(classe)
#else
#define BOA_CATIAHybridShapeRollingOffset(classe) CATImplementBOA(CATIAHybridShapeRollingOffset, classe)
#endif

#endif
