#ifndef __TIE_CATIAManufacturingMachinableFeat
#define __TIE_CATIAManufacturingMachinableFeat

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingMachinableFeat.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingMachinableFeat */
#define declare_TIE_CATIAManufacturingMachinableFeat(classe) \
 \
 \
class TIECATIAManufacturingMachinableFeat##classe : public CATIAManufacturingMachinableFeat \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingMachinableFeat, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FeatType(CATBSTR & oFeatType); \
      virtual HRESULT __stdcall put_FeatType(const CATBSTR & iFeatType); \
      virtual HRESULT __stdcall get_FeatRemark(CATBSTR & oFeatRemark); \
      virtual HRESULT __stdcall put_FeatRemark(const CATBSTR & iFeatRemark); \
      virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingMachinableFeat(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FeatType(CATBSTR & oFeatType); \
virtual HRESULT __stdcall put_FeatType(const CATBSTR & iFeatType); \
virtual HRESULT __stdcall get_FeatRemark(CATBSTR & oFeatRemark); \
virtual HRESULT __stdcall put_FeatRemark(const CATBSTR & iFeatRemark); \
virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingMachinableFeat(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FeatType(CATBSTR & oFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)get_FeatType(oFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatType(const CATBSTR & iFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)put_FeatType(iFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)get_FeatRemark(oFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)put_FeatRemark(iFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)GetAGeometricAttribute(iAttribut,oAttributCke)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingMachinableFeat,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingMachinableFeat(classe)    TIECATIAManufacturingMachinableFeat##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingMachinableFeat(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingMachinableFeat, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingMachinableFeat, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingMachinableFeat, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingMachinableFeat, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingMachinableFeat, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingMachinableFeat##classe::get_FeatType(CATBSTR & oFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatType(oFeatType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableFeat##classe::put_FeatType(const CATBSTR & iFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatType(iFeatType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableFeat##classe::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatRemark(oFeatRemark); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableFeat##classe::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatRemark(iFeatRemark); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachinableFeat##classe::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAGeometricAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableFeat##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableFeat##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableFeat##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableFeat##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachinableFeat##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingMachinableFeat(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachinableFeat(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachinableFeat##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachinableFeat,"CATIAManufacturingMachinableFeat",CATIAManufacturingMachinableFeat::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachinableFeat(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingMachinableFeat, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachinableFeat##classe(classe::MetaObject(),CATIAManufacturingMachinableFeat::MetaObject(),(void *)CreateTIECATIAManufacturingMachinableFeat##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingMachinableFeat(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachinableFeat(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachinableFeat##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachinableFeat,"CATIAManufacturingMachinableFeat",CATIAManufacturingMachinableFeat::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachinableFeat(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingMachinableFeat, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachinableFeat##classe(classe::MetaObject(),CATIAManufacturingMachinableFeat::MetaObject(),(void *)CreateTIECATIAManufacturingMachinableFeat##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingMachinableFeat(classe) TIE_CATIAManufacturingMachinableFeat(classe)
#else
#define BOA_CATIAManufacturingMachinableFeat(classe) CATImplementBOA(CATIAManufacturingMachinableFeat, classe)
#endif

#endif
