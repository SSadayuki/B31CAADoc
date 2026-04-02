#ifndef __TIE_CATIARenderingEnvironment
#define __TIE_CATIARenderingEnvironment

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARenderingEnvironment.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARenderingEnvironment */
#define declare_TIE_CATIARenderingEnvironment(classe) \
 \
 \
class TIECATIARenderingEnvironment##classe : public CATIARenderingEnvironment \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARenderingEnvironment, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetType(short & oType); \
      virtual HRESULT __stdcall GetWall(short iType, CATIARenderingEnvironmentWall *& oWall); \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
      virtual HRESULT __stdcall GetVerticalAxis(CATSafeArrayVariant & oAxis); \
      virtual HRESULT __stdcall PutVerticalAxis(const CATSafeArrayVariant & iAxis); \
      virtual HRESULT __stdcall get_ActiveStatus(short & oActiveStatus); \
      virtual HRESULT __stdcall put_ActiveStatus(short iActiveStatus); \
      virtual HRESULT __stdcall get_Radius(double & oRadius); \
      virtual HRESULT __stdcall put_Radius(double iRadius); \
      virtual HRESULT __stdcall get_Height(double & oHeight); \
      virtual HRESULT __stdcall put_Height(double iHeight); \
      virtual HRESULT __stdcall get_Length(double & oLength); \
      virtual HRESULT __stdcall put_Length(double iLength); \
      virtual HRESULT __stdcall get_Width(double & oWidth); \
      virtual HRESULT __stdcall put_Width(double iWidth); \
      virtual HRESULT __stdcall get_FaceNumber(short & oNumber); \
      virtual HRESULT __stdcall put_FaceNumber(short iNumber); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARenderingEnvironment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetType(short & oType); \
virtual HRESULT __stdcall GetWall(short iType, CATIARenderingEnvironmentWall *& oWall); \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
virtual HRESULT __stdcall GetVerticalAxis(CATSafeArrayVariant & oAxis); \
virtual HRESULT __stdcall PutVerticalAxis(const CATSafeArrayVariant & iAxis); \
virtual HRESULT __stdcall get_ActiveStatus(short & oActiveStatus); \
virtual HRESULT __stdcall put_ActiveStatus(short iActiveStatus); \
virtual HRESULT __stdcall get_Radius(double & oRadius); \
virtual HRESULT __stdcall put_Radius(double iRadius); \
virtual HRESULT __stdcall get_Height(double & oHeight); \
virtual HRESULT __stdcall put_Height(double iHeight); \
virtual HRESULT __stdcall get_Length(double & oLength); \
virtual HRESULT __stdcall put_Length(double iLength); \
virtual HRESULT __stdcall get_Width(double & oWidth); \
virtual HRESULT __stdcall put_Width(double iWidth); \
virtual HRESULT __stdcall get_FaceNumber(short & oNumber); \
virtual HRESULT __stdcall put_FaceNumber(short iNumber); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARenderingEnvironment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetType(short & oType) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)GetType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::GetWall(short iType, CATIARenderingEnvironmentWall *& oWall) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)GetWall(iType,oWall)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)PutOrigin(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetVerticalAxis(CATSafeArrayVariant & oAxis) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)GetVerticalAxis(oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutVerticalAxis(const CATSafeArrayVariant & iAxis) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)PutVerticalAxis(iAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveStatus(short & oActiveStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_ActiveStatus(oActiveStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveStatus(short iActiveStatus) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)put_ActiveStatus(iActiveStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(double & oRadius) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_Radius(double iRadius) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)put_Radius(iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(double & oHeight) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_Height(double iHeight) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)put_Height(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(double & oLength) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Length(oLength)); \
} \
HRESULT __stdcall  ENVTIEName::put_Length(double iLength) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)put_Length(iLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_Width(double & oWidth) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_Width(double iWidth) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)put_Width(iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_FaceNumber(short & oNumber) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_FaceNumber(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_FaceNumber(short iNumber) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)put_FaceNumber(iNumber)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARenderingEnvironment,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARenderingEnvironment(classe)    TIECATIARenderingEnvironment##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARenderingEnvironment(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARenderingEnvironment, classe) \
 \
 \
CATImplementTIEMethods(CATIARenderingEnvironment, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARenderingEnvironment, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARenderingEnvironment, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARenderingEnvironment, classe) \
 \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::GetType(short & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::GetWall(short iType, CATIARenderingEnvironmentWall *& oWall) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType,&oWall); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWall(iType,oWall); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType,&oWall); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(iOrigin); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::GetVerticalAxis(CATSafeArrayVariant & oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVerticalAxis(oAxis); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::PutVerticalAxis(const CATSafeArrayVariant & iAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutVerticalAxis(iAxis); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::get_ActiveStatus(short & oActiveStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oActiveStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveStatus(oActiveStatus); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oActiveStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::put_ActiveStatus(short iActiveStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iActiveStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveStatus(iActiveStatus); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iActiveStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::get_Radius(double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::put_Radius(double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Radius(iRadius); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::get_Height(double & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::put_Height(double iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Height(iHeight); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::get_Length(double & oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(oLength); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::put_Length(double iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Length(iLength); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::get_Width(double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Width(oWidth); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::put_Width(double iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Width(iWidth); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::get_FaceNumber(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FaceNumber(oNumber); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingEnvironment##classe::put_FaceNumber(short iNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FaceNumber(iNumber); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNumber); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironment##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironment##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironment##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironment##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingEnvironment##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARenderingEnvironment(classe) \
 \
 \
declare_TIE_CATIARenderingEnvironment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingEnvironment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingEnvironment,"CATIARenderingEnvironment",CATIARenderingEnvironment::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingEnvironment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARenderingEnvironment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingEnvironment##classe(classe::MetaObject(),CATIARenderingEnvironment::MetaObject(),(void *)CreateTIECATIARenderingEnvironment##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARenderingEnvironment(classe) \
 \
 \
declare_TIE_CATIARenderingEnvironment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingEnvironment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingEnvironment,"CATIARenderingEnvironment",CATIARenderingEnvironment::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingEnvironment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARenderingEnvironment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingEnvironment##classe(classe::MetaObject(),CATIARenderingEnvironment::MetaObject(),(void *)CreateTIECATIARenderingEnvironment##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARenderingEnvironment(classe) TIE_CATIARenderingEnvironment(classe)
#else
#define BOA_CATIARenderingEnvironment(classe) CATImplementBOA(CATIARenderingEnvironment, classe)
#endif

#endif
