#ifndef __TIE_CATIAJoint
#define __TIE_CATIAJoint

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAJoint.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAJoint */
#define declare_TIE_CATIAJoint(classe) \
 \
 \
class TIECATIAJoint##classe : public CATIAJoint \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAJoint, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_CurrentValue1(double & oCurrentValue); \
      virtual HRESULT __stdcall get_CurrentValue2(double & oCurrentValue); \
      virtual HRESULT __stdcall get_LowerLimit1(double & oLimitValue); \
      virtual HRESULT __stdcall put_LowerLimit1(double iLimitValue); \
      virtual HRESULT __stdcall UnsetLowerLimit1(); \
      virtual HRESULT __stdcall get_LowerLimit2(double & oLimitValue); \
      virtual HRESULT __stdcall put_LowerLimit2(double iLimitValue); \
      virtual HRESULT __stdcall UnsetLowerLimit2(); \
      virtual HRESULT __stdcall get_UpperLimit1(double & oLimitValue); \
      virtual HRESULT __stdcall put_UpperLimit1(double iLimitValue); \
      virtual HRESULT __stdcall UnsetUpperLimit1(); \
      virtual HRESULT __stdcall get_UpperLimit2(double & oLimitValue); \
      virtual HRESULT __stdcall put_UpperLimit2(double iLimitValue); \
      virtual HRESULT __stdcall UnsetUpperLimit2(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAJoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_CurrentValue1(double & oCurrentValue); \
virtual HRESULT __stdcall get_CurrentValue2(double & oCurrentValue); \
virtual HRESULT __stdcall get_LowerLimit1(double & oLimitValue); \
virtual HRESULT __stdcall put_LowerLimit1(double iLimitValue); \
virtual HRESULT __stdcall UnsetLowerLimit1(); \
virtual HRESULT __stdcall get_LowerLimit2(double & oLimitValue); \
virtual HRESULT __stdcall put_LowerLimit2(double iLimitValue); \
virtual HRESULT __stdcall UnsetLowerLimit2(); \
virtual HRESULT __stdcall get_UpperLimit1(double & oLimitValue); \
virtual HRESULT __stdcall put_UpperLimit1(double iLimitValue); \
virtual HRESULT __stdcall UnsetUpperLimit1(); \
virtual HRESULT __stdcall get_UpperLimit2(double & oLimitValue); \
virtual HRESULT __stdcall put_UpperLimit2(double iLimitValue); \
virtual HRESULT __stdcall UnsetUpperLimit2(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAJoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurrentValue1(double & oCurrentValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_CurrentValue1(oCurrentValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurrentValue2(double & oCurrentValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_CurrentValue2(oCurrentValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_LowerLimit1(double & oLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_LowerLimit1(oLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_LowerLimit1(double iLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)put_LowerLimit1(iLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetLowerLimit1() \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)UnsetLowerLimit1()); \
} \
HRESULT __stdcall  ENVTIEName::get_LowerLimit2(double & oLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_LowerLimit2(oLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_LowerLimit2(double iLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)put_LowerLimit2(iLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetLowerLimit2() \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)UnsetLowerLimit2()); \
} \
HRESULT __stdcall  ENVTIEName::get_UpperLimit1(double & oLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_UpperLimit1(oLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpperLimit1(double iLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)put_UpperLimit1(iLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetUpperLimit1() \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)UnsetUpperLimit1()); \
} \
HRESULT __stdcall  ENVTIEName::get_UpperLimit2(double & oLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_UpperLimit2(oLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpperLimit2(double iLimitValue) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)put_UpperLimit2(iLimitValue)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetUpperLimit2() \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)UnsetUpperLimit2()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAJoint,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAJoint(classe)    TIECATIAJoint##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAJoint(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAJoint, classe) \
 \
 \
CATImplementTIEMethods(CATIAJoint, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAJoint, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAJoint, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAJoint, classe) \
 \
HRESULT __stdcall  TIECATIAJoint##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::get_CurrentValue1(double & oCurrentValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCurrentValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentValue1(oCurrentValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCurrentValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::get_CurrentValue2(double & oCurrentValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCurrentValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentValue2(oCurrentValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCurrentValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::get_LowerLimit1(double & oLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LowerLimit1(oLimitValue); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::put_LowerLimit1(double iLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LowerLimit1(iLimitValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::UnsetLowerLimit1() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetLowerLimit1(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::get_LowerLimit2(double & oLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LowerLimit2(oLimitValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::put_LowerLimit2(double iLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LowerLimit2(iLimitValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::UnsetLowerLimit2() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetLowerLimit2(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::get_UpperLimit1(double & oLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpperLimit1(oLimitValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::put_UpperLimit1(double iLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpperLimit1(iLimitValue); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::UnsetUpperLimit1() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetUpperLimit1(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::get_UpperLimit2(double & oLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpperLimit2(oLimitValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::put_UpperLimit2(double iLimitValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iLimitValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpperLimit2(iLimitValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iLimitValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAJoint##classe::UnsetUpperLimit2() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetUpperLimit2(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAJoint##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAJoint##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAJoint##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAJoint##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAJoint##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAJoint(classe) \
 \
 \
declare_TIE_CATIAJoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAJoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAJoint,"CATIAJoint",CATIAJoint::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAJoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAJoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAJoint##classe(classe::MetaObject(),CATIAJoint::MetaObject(),(void *)CreateTIECATIAJoint##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAJoint(classe) \
 \
 \
declare_TIE_CATIAJoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAJoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAJoint,"CATIAJoint",CATIAJoint::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAJoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAJoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAJoint##classe(classe::MetaObject(),CATIAJoint::MetaObject(),(void *)CreateTIECATIAJoint##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAJoint(classe) TIE_CATIAJoint(classe)
#else
#define BOA_CATIAJoint(classe) CATImplementBOA(CATIAJoint, classe)
#endif

#endif
