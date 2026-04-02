#ifndef __TIE_CATIARotate
#define __TIE_CATIARotate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARotate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARotate */
#define declare_TIE_CATIARotate(classe) \
 \
 \
class TIECATIARotate##classe : public CATIARotate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARotate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToRotate(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_ElemToRotate(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Axis(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_Axis(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Angle(CATIAAngle *& oProp); \
      virtual HRESULT __stdcall get_AngleValue(double & oX); \
      virtual HRESULT __stdcall put_AngleValue(double iX); \
      virtual HRESULT __stdcall get_HybridShape(CATIAHybridShape *& oHybridShapeRotate); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARotate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToRotate(CATIAReference *& oX); \
virtual HRESULT __stdcall put_ElemToRotate(CATIAReference * iX); \
virtual HRESULT __stdcall get_Axis(CATIAReference *& oX); \
virtual HRESULT __stdcall put_Axis(CATIAReference * iX); \
virtual HRESULT __stdcall get_Angle(CATIAAngle *& oProp); \
virtual HRESULT __stdcall get_AngleValue(double & oX); \
virtual HRESULT __stdcall put_AngleValue(double iX); \
virtual HRESULT __stdcall get_HybridShape(CATIAHybridShape *& oHybridShapeRotate); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARotate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToRotate(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_ElemToRotate(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToRotate(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)put_ElemToRotate(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Axis(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_Axis(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_Axis(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)put_Axis(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(CATIAAngle *& oProp) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_Angle(oProp)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleValue(double & oX) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_AngleValue(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleValue(double iX) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)put_AngleValue(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridShape(CATIAHybridShape *& oHybridShapeRotate) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_HybridShape(oHybridShapeRotate)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARotate,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARotate(classe)    TIECATIARotate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARotate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARotate, classe) \
 \
 \
CATImplementTIEMethods(CATIARotate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARotate, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARotate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARotate, classe) \
 \
HRESULT __stdcall  TIECATIARotate##classe::get_ElemToRotate(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToRotate(oX); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARotate##classe::put_ElemToRotate(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToRotate(iX); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARotate##classe::get_Axis(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Axis(oX); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARotate##classe::put_Axis(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Axis(iX); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARotate##classe::get_Angle(CATIAAngle *& oProp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oProp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oProp); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oProp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARotate##classe::get_AngleValue(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleValue(oX); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARotate##classe::put_AngleValue(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleValue(iX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARotate##classe::get_HybridShape(CATIAHybridShape *& oHybridShapeRotate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oHybridShapeRotate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridShape(oHybridShapeRotate); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oHybridShapeRotate); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARotate##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARotate##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARotate##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARotate##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARotate##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARotate(classe) \
 \
 \
declare_TIE_CATIARotate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARotate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARotate,"CATIARotate",CATIARotate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARotate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARotate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARotate##classe(classe::MetaObject(),CATIARotate::MetaObject(),(void *)CreateTIECATIARotate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARotate(classe) \
 \
 \
declare_TIE_CATIARotate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARotate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARotate,"CATIARotate",CATIARotate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARotate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARotate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARotate##classe(classe::MetaObject(),CATIARotate::MetaObject(),(void *)CreateTIECATIARotate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARotate(classe) TIE_CATIARotate(classe)
#else
#define BOA_CATIARotate(classe) CATImplementBOA(CATIARotate, classe)
#endif

#endif
