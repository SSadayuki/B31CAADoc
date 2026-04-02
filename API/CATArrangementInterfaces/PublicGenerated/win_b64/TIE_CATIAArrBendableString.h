#ifndef __TIE_CATIAArrBendableString
#define __TIE_CATIAArrBendableString

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrBendableString.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrBendableString */
#define declare_TIE_CATIAArrBendableString(classe) \
 \
 \
class TIECATIAArrBendableString##classe : public CATIAArrBendableString \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrBendableString, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall InstanceName(CATBSTR & oInstanceName); \
      virtual HRESULT __stdcall GetNumOfSegments(CATLONG & oNumOfSegments); \
      virtual HRESULT __stdcall GetNumOfSegmentsLocalAxis(CATLONG & oNumOfSegments); \
      virtual HRESULT __stdcall GetSegmentData(CATLONG iIndex, CATSafeArrayVariant & oSegmentData); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrBendableString(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall InstanceName(CATBSTR & oInstanceName); \
virtual HRESULT __stdcall GetNumOfSegments(CATLONG & oNumOfSegments); \
virtual HRESULT __stdcall GetNumOfSegmentsLocalAxis(CATLONG & oNumOfSegments); \
virtual HRESULT __stdcall GetSegmentData(CATLONG iIndex, CATSafeArrayVariant & oSegmentData); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrBendableString(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::InstanceName(CATBSTR & oInstanceName) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)InstanceName(oInstanceName)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumOfSegments(CATLONG & oNumOfSegments) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)GetNumOfSegments(oNumOfSegments)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumOfSegmentsLocalAxis(CATLONG & oNumOfSegments) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)GetNumOfSegmentsLocalAxis(oNumOfSegments)); \
} \
HRESULT __stdcall  ENVTIEName::GetSegmentData(CATLONG iIndex, CATSafeArrayVariant & oSegmentData) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)GetSegmentData(iIndex,oSegmentData)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrBendableString,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrBendableString(classe)    TIECATIAArrBendableString##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrBendableString(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrBendableString, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrBendableString, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrBendableString, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrBendableString, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrBendableString, classe) \
 \
HRESULT __stdcall  TIECATIAArrBendableString##classe::InstanceName(CATBSTR & oInstanceName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oInstanceName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InstanceName(oInstanceName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oInstanceName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrBendableString##classe::GetNumOfSegments(CATLONG & oNumOfSegments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNumOfSegments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumOfSegments(oNumOfSegments); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNumOfSegments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrBendableString##classe::GetNumOfSegmentsLocalAxis(CATLONG & oNumOfSegments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNumOfSegments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumOfSegmentsLocalAxis(oNumOfSegments); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNumOfSegments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrBendableString##classe::GetSegmentData(CATLONG iIndex, CATSafeArrayVariant & oSegmentData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oSegmentData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSegmentData(iIndex,oSegmentData); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oSegmentData); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBendableString##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBendableString##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBendableString##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBendableString##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBendableString##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrBendableString(classe) \
 \
 \
declare_TIE_CATIAArrBendableString(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrBendableString##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrBendableString,"CATIAArrBendableString",CATIAArrBendableString::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrBendableString(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrBendableString, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrBendableString##classe(classe::MetaObject(),CATIAArrBendableString::MetaObject(),(void *)CreateTIECATIAArrBendableString##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrBendableString(classe) \
 \
 \
declare_TIE_CATIAArrBendableString(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrBendableString##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrBendableString,"CATIAArrBendableString",CATIAArrBendableString::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrBendableString(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrBendableString, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrBendableString##classe(classe::MetaObject(),CATIAArrBendableString::MetaObject(),(void *)CreateTIECATIAArrBendableString##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrBendableString(classe) TIE_CATIAArrBendableString(classe)
#else
#define BOA_CATIAArrBendableString(classe) CATImplementBOA(CATIAArrBendableString, classe)
#endif

#endif
