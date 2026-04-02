#ifndef __TIE_CATIAExpertReportObject
#define __TIE_CATIAExpertReportObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertReportObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertReportObject */
#define declare_TIE_CATIAExpertReportObject(classe) \
 \
 \
class TIECATIAExpertReportObject##classe : public CATIAExpertReportObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertReportObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Validity(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall getTuple(CATSafeArrayVariant & oSafeArray); \
      virtual HRESULT __stdcall getTupleSize(CATLONG & tupleSize); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAExpertReportObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Validity(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall getTuple(CATSafeArrayVariant & oSafeArray); \
virtual HRESULT __stdcall getTupleSize(CATLONG & tupleSize); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAExpertReportObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Validity(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)get_Validity(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::getTuple(CATSafeArrayVariant & oSafeArray) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)getTuple(oSafeArray)); \
} \
HRESULT __stdcall  ENVTIEName::getTupleSize(CATLONG & tupleSize) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)getTupleSize(tupleSize)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExpertReportObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertReportObject(classe)    TIECATIAExpertReportObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertReportObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertReportObject, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertReportObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertReportObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertReportObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertReportObject, classe) \
 \
HRESULT __stdcall  TIECATIAExpertReportObject##classe::get_Validity(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Validity(oActivated); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertReportObject##classe::getTuple(CATSafeArrayVariant & oSafeArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSafeArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getTuple(oSafeArray); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSafeArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertReportObject##classe::getTupleSize(CATLONG & tupleSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&tupleSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getTupleSize(tupleSize); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&tupleSize); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertReportObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertReportObject(classe) \
 \
 \
declare_TIE_CATIAExpertReportObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertReportObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertReportObject,"CATIAExpertReportObject",CATIAExpertReportObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertReportObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertReportObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertReportObject##classe(classe::MetaObject(),CATIAExpertReportObject::MetaObject(),(void *)CreateTIECATIAExpertReportObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertReportObject(classe) \
 \
 \
declare_TIE_CATIAExpertReportObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertReportObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertReportObject,"CATIAExpertReportObject",CATIAExpertReportObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertReportObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertReportObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertReportObject##classe(classe::MetaObject(),CATIAExpertReportObject::MetaObject(),(void *)CreateTIECATIAExpertReportObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertReportObject(classe) TIE_CATIAExpertReportObject(classe)
#else
#define BOA_CATIAExpertReportObject(classe) CATImplementBOA(CATIAExpertReportObject, classe)
#endif

#endif
