#ifndef __TIE_CATIAStrAnchorPoint
#define __TIE_CATIAStrAnchorPoint

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrAnchorPoint.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrAnchorPoint */
#define declare_TIE_CATIAStrAnchorPoint(classe) \
 \
 \
class TIECATIAStrAnchorPoint##classe : public CATIAStrAnchorPoint \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrAnchorPoint, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoord); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrAnchorPoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoord); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrAnchorPoint(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & oCoord) \
{ \
return (ENVTIECALL(CATIAStrAnchorPoint,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(oCoord)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrAnchorPoint,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrAnchorPoint,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrAnchorPoint,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrAnchorPoint,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrAnchorPoint,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrAnchorPoint(classe)    TIECATIAStrAnchorPoint##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrAnchorPoint(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrAnchorPoint, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrAnchorPoint, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrAnchorPoint, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrAnchorPoint, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrAnchorPoint, classe) \
 \
HRESULT __stdcall  TIECATIAStrAnchorPoint##classe::GetCoordinates(CATSafeArrayVariant & oCoord) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCoord); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(oCoord); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCoord); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrAnchorPoint##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrAnchorPoint##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrAnchorPoint##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrAnchorPoint##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrAnchorPoint##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrAnchorPoint(classe) \
 \
 \
declare_TIE_CATIAStrAnchorPoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrAnchorPoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrAnchorPoint,"CATIAStrAnchorPoint",CATIAStrAnchorPoint::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrAnchorPoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrAnchorPoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrAnchorPoint##classe(classe::MetaObject(),CATIAStrAnchorPoint::MetaObject(),(void *)CreateTIECATIAStrAnchorPoint##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrAnchorPoint(classe) \
 \
 \
declare_TIE_CATIAStrAnchorPoint(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrAnchorPoint##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrAnchorPoint,"CATIAStrAnchorPoint",CATIAStrAnchorPoint::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrAnchorPoint(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrAnchorPoint, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrAnchorPoint##classe(classe::MetaObject(),CATIAStrAnchorPoint::MetaObject(),(void *)CreateTIECATIAStrAnchorPoint##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrAnchorPoint(classe) TIE_CATIAStrAnchorPoint(classe)
#else
#define BOA_CATIAStrAnchorPoint(classe) CATImplementBOA(CATIAStrAnchorPoint, classe)
#endif

#endif
