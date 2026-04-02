#ifndef __TIE_CATIASketch
#define __TIE_CATIASketch

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASketch.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASketch */
#define declare_TIE_CATIASketch(classe) \
 \
 \
class TIECATIASketch##classe : public CATIASketch \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASketch, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeometricElements); \
      virtual HRESULT __stdcall get_Constraints(CATIAConstraints *& oConstraints); \
      virtual HRESULT __stdcall get_Factory2D(CATIAFactory2D *& oFactory); \
      virtual HRESULT __stdcall get_CenterLine(CATIALine2D *& oLine); \
      virtual HRESULT __stdcall put_CenterLine(CATIALine2D * iLine); \
      virtual HRESULT __stdcall get_AbsoluteAxis(CATIAAxis2D *& oAxis); \
      virtual HRESULT __stdcall GetAbsoluteAxisData(CATSafeArrayVariant & oAxisData); \
      virtual HRESULT __stdcall SetAbsoluteAxisData(const CATSafeArrayVariant & iAxisData); \
      virtual HRESULT __stdcall OpenEdition(CATIAFactory2D *& oFactory); \
      virtual HRESULT __stdcall CloseEdition(); \
      virtual HRESULT __stdcall InverseOrientation(); \
      virtual HRESULT __stdcall Evaluate(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASketch(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeometricElements); \
virtual HRESULT __stdcall get_Constraints(CATIAConstraints *& oConstraints); \
virtual HRESULT __stdcall get_Factory2D(CATIAFactory2D *& oFactory); \
virtual HRESULT __stdcall get_CenterLine(CATIALine2D *& oLine); \
virtual HRESULT __stdcall put_CenterLine(CATIALine2D * iLine); \
virtual HRESULT __stdcall get_AbsoluteAxis(CATIAAxis2D *& oAxis); \
virtual HRESULT __stdcall GetAbsoluteAxisData(CATSafeArrayVariant & oAxisData); \
virtual HRESULT __stdcall SetAbsoluteAxisData(const CATSafeArrayVariant & iAxisData); \
virtual HRESULT __stdcall OpenEdition(CATIAFactory2D *& oFactory); \
virtual HRESULT __stdcall CloseEdition(); \
virtual HRESULT __stdcall InverseOrientation(); \
virtual HRESULT __stdcall Evaluate(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASketch(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_GeometricElements(CATIAGeometricElements *& oGeometricElements) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_GeometricElements(oGeometricElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_Constraints(CATIAConstraints *& oConstraints) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_Constraints(oConstraints)); \
} \
HRESULT __stdcall  ENVTIEName::get_Factory2D(CATIAFactory2D *& oFactory) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_Factory2D(oFactory)); \
} \
HRESULT __stdcall  ENVTIEName::get_CenterLine(CATIALine2D *& oLine) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_CenterLine(oLine)); \
} \
HRESULT __stdcall  ENVTIEName::put_CenterLine(CATIALine2D * iLine) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)put_CenterLine(iLine)); \
} \
HRESULT __stdcall  ENVTIEName::get_AbsoluteAxis(CATIAAxis2D *& oAxis) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_AbsoluteAxis(oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetAbsoluteAxisData(CATSafeArrayVariant & oAxisData) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)GetAbsoluteAxisData(oAxisData)); \
} \
HRESULT __stdcall  ENVTIEName::SetAbsoluteAxisData(const CATSafeArrayVariant & iAxisData) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)SetAbsoluteAxisData(iAxisData)); \
} \
HRESULT __stdcall  ENVTIEName::OpenEdition(CATIAFactory2D *& oFactory) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)OpenEdition(oFactory)); \
} \
HRESULT __stdcall  ENVTIEName::CloseEdition() \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)CloseEdition()); \
} \
HRESULT __stdcall  ENVTIEName::InverseOrientation() \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)InverseOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::Evaluate() \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)Evaluate()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASketch,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASketch(classe)    TIECATIASketch##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASketch(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASketch, classe) \
 \
 \
CATImplementTIEMethods(CATIASketch, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASketch, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASketch, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASketch, classe) \
 \
HRESULT __stdcall  TIECATIASketch##classe::get_GeometricElements(CATIAGeometricElements *& oGeometricElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGeometricElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricElements(oGeometricElements); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGeometricElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::get_Constraints(CATIAConstraints *& oConstraints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oConstraints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Constraints(oConstraints); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oConstraints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::get_Factory2D(CATIAFactory2D *& oFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Factory2D(oFactory); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::get_CenterLine(CATIALine2D *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterLine(oLine); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::put_CenterLine(CATIALine2D * iLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CenterLine(iLine); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::get_AbsoluteAxis(CATIAAxis2D *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AbsoluteAxis(oAxis); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::GetAbsoluteAxisData(CATSafeArrayVariant & oAxisData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAxisData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAbsoluteAxisData(oAxisData); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAxisData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::SetAbsoluteAxisData(const CATSafeArrayVariant & iAxisData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAxisData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAbsoluteAxisData(iAxisData); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAxisData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::OpenEdition(CATIAFactory2D *& oFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenEdition(oFactory); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oFactory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::CloseEdition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CloseEdition(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::InverseOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InverseOrientation(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASketch##classe::Evaluate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Evaluate(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketch##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketch##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketch##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketch##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASketch##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASketch(classe) \
 \
 \
declare_TIE_CATIASketch(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASketch##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASketch,"CATIASketch",CATIASketch::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASketch(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASketch, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASketch##classe(classe::MetaObject(),CATIASketch::MetaObject(),(void *)CreateTIECATIASketch##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASketch(classe) \
 \
 \
declare_TIE_CATIASketch(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASketch##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASketch,"CATIASketch",CATIASketch::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASketch(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASketch, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASketch##classe(classe::MetaObject(),CATIASketch::MetaObject(),(void *)CreateTIECATIASketch##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASketch(classe) TIE_CATIASketch(classe)
#else
#define BOA_CATIASketch(classe) CATImplementBOA(CATIASketch, classe)
#endif

#endif
