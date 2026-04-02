#ifndef __TIE_CATIAHybridShapeAxisLine
#define __TIE_CATIAHybridShapeAxisLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeAxisLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeAxisLine */
#define declare_TIE_CATIAHybridShapeAxisLine(classe) \
 \
 \
class TIECATIAHybridShapeAxisLine##classe : public CATIAHybridShapeAxisLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeAxisLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Element(CATIAReference *& ohElem); \
      virtual HRESULT __stdcall put_Element(CATIAReference * ihElem); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& ohDir); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * ihDir); \
      virtual HRESULT __stdcall get_AxisLineType(CATLONG & oType); \
      virtual HRESULT __stdcall put_AxisLineType(CATLONG iType); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeAxisLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Element(CATIAReference *& ohElem); \
virtual HRESULT __stdcall put_Element(CATIAReference * ihElem); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& ohDir); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * ihDir); \
virtual HRESULT __stdcall get_AxisLineType(CATLONG & oType); \
virtual HRESULT __stdcall put_AxisLineType(CATLONG iType); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeAxisLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Element(CATIAReference *& ohElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)get_Element(ohElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Element(CATIAReference * ihElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)put_Element(ihElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& ohDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)get_Direction(ohDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * ihDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)put_Direction(ihDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisLineType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)get_AxisLineType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisLineType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)put_AxisLineType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeAxisLine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeAxisLine(classe)    TIECATIAHybridShapeAxisLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeAxisLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeAxisLine, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeAxisLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeAxisLine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeAxisLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeAxisLine, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::get_Element(CATIAReference *& ohElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&ohElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Element(ohElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&ohElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::put_Element(CATIAReference * ihElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ihElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Element(ihElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ihElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::get_Direction(CATIAHybridShapeDirection *& ohDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ohDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(ohDir); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ohDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::put_Direction(CATIAHybridShapeDirection * ihDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&ihDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(ihDir); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&ihDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::get_AxisLineType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisLineType(oType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::put_AxisLineType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisLineType(iType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAxisLine##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAxisLine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAxisLine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAxisLine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAxisLine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAxisLine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeAxisLine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeAxisLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeAxisLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeAxisLine,"CATIAHybridShapeAxisLine",CATIAHybridShapeAxisLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeAxisLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeAxisLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeAxisLine##classe(classe::MetaObject(),CATIAHybridShapeAxisLine::MetaObject(),(void *)CreateTIECATIAHybridShapeAxisLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeAxisLine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeAxisLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeAxisLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeAxisLine,"CATIAHybridShapeAxisLine",CATIAHybridShapeAxisLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeAxisLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeAxisLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeAxisLine##classe(classe::MetaObject(),CATIAHybridShapeAxisLine::MetaObject(),(void *)CreateTIECATIAHybridShapeAxisLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeAxisLine(classe) TIE_CATIAHybridShapeAxisLine(classe)
#else
#define BOA_CATIAHybridShapeAxisLine(classe) CATImplementBOA(CATIAHybridShapeAxisLine, classe)
#endif

#endif
