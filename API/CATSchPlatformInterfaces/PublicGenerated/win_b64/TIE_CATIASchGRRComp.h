#ifndef __TIE_CATIASchGRRComp
#define __TIE_CATIASchGRRComp

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRRComp.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRRComp */
#define declare_TIE_CATIASchGRRComp(classe) \
 \
 \
class TIECATIASchGRRComp##classe : public CATIASchGRRComp \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRRComp, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetTransformation2D(CATIASchListOfDoubles *& oDb6TransMatrix); \
      virtual HRESULT __stdcall SetTransformation2D(const CATSafeArrayVariant & iDb6TransMatrix); \
      virtual HRESULT __stdcall GetScale(double & oDb1ScaleFactor); \
      virtual HRESULT __stdcall SetScale(double iDb1ScaleFactor); \
      virtual HRESULT __stdcall GetPosition(CATIASchListOfDoubles *& oDb2Position); \
      virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & oDb2Position); \
      virtual HRESULT __stdcall GetRotationAngle(double & oDb1RotationAngleInRad); \
      virtual HRESULT __stdcall SetRotationAngle(double iDb1RotationAngleInRad); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRRComp(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetTransformation2D(CATIASchListOfDoubles *& oDb6TransMatrix); \
virtual HRESULT __stdcall SetTransformation2D(const CATSafeArrayVariant & iDb6TransMatrix); \
virtual HRESULT __stdcall GetScale(double & oDb1ScaleFactor); \
virtual HRESULT __stdcall SetScale(double iDb1ScaleFactor); \
virtual HRESULT __stdcall GetPosition(CATIASchListOfDoubles *& oDb2Position); \
virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & oDb2Position); \
virtual HRESULT __stdcall GetRotationAngle(double & oDb1RotationAngleInRad); \
virtual HRESULT __stdcall SetRotationAngle(double iDb1RotationAngleInRad); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRRComp(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetTransformation2D(CATIASchListOfDoubles *& oDb6TransMatrix) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)GetTransformation2D(oDb6TransMatrix)); \
} \
HRESULT __stdcall  ENVTIEName::SetTransformation2D(const CATSafeArrayVariant & iDb6TransMatrix) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)SetTransformation2D(iDb6TransMatrix)); \
} \
HRESULT __stdcall  ENVTIEName::GetScale(double & oDb1ScaleFactor) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)GetScale(oDb1ScaleFactor)); \
} \
HRESULT __stdcall  ENVTIEName::SetScale(double iDb1ScaleFactor) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)SetScale(iDb1ScaleFactor)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(CATIASchListOfDoubles *& oDb2Position) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)GetPosition(oDb2Position)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(const CATSafeArrayVariant & oDb2Position) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)SetPosition(oDb2Position)); \
} \
HRESULT __stdcall  ENVTIEName::GetRotationAngle(double & oDb1RotationAngleInRad) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)GetRotationAngle(oDb1RotationAngleInRad)); \
} \
HRESULT __stdcall  ENVTIEName::SetRotationAngle(double iDb1RotationAngleInRad) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)SetRotationAngle(iDb1RotationAngleInRad)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRRComp,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRRComp(classe)    TIECATIASchGRRComp##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRRComp(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRRComp, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRRComp, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRRComp, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRRComp, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRRComp, classe) \
 \
HRESULT __stdcall  TIECATIASchGRRComp##classe::GetTransformation2D(CATIASchListOfDoubles *& oDb6TransMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDb6TransMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransformation2D(oDb6TransMatrix); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDb6TransMatrix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRComp##classe::SetTransformation2D(const CATSafeArrayVariant & iDb6TransMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDb6TransMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTransformation2D(iDb6TransMatrix); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDb6TransMatrix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRComp##classe::GetScale(double & oDb1ScaleFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDb1ScaleFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetScale(oDb1ScaleFactor); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDb1ScaleFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRComp##classe::SetScale(double iDb1ScaleFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDb1ScaleFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetScale(iDb1ScaleFactor); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDb1ScaleFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRComp##classe::GetPosition(CATIASchListOfDoubles *& oDb2Position) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDb2Position); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oDb2Position); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDb2Position); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRComp##classe::SetPosition(const CATSafeArrayVariant & oDb2Position) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oDb2Position); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(oDb2Position); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oDb2Position); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRComp##classe::GetRotationAngle(double & oDb1RotationAngleInRad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDb1RotationAngleInRad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRotationAngle(oDb1RotationAngleInRad); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDb1RotationAngleInRad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRComp##classe::SetRotationAngle(double iDb1RotationAngleInRad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDb1RotationAngleInRad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRotationAngle(iDb1RotationAngleInRad); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDb1RotationAngleInRad); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRComp##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRComp##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRComp##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRComp##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRComp##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRRComp(classe) \
 \
 \
declare_TIE_CATIASchGRRComp(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRComp##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRComp,"CATIASchGRRComp",CATIASchGRRComp::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRComp(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRRComp, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRComp##classe(classe::MetaObject(),CATIASchGRRComp::MetaObject(),(void *)CreateTIECATIASchGRRComp##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRRComp(classe) \
 \
 \
declare_TIE_CATIASchGRRComp(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRComp##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRComp,"CATIASchGRRComp",CATIASchGRRComp::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRComp(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRRComp, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRComp##classe(classe::MetaObject(),CATIASchGRRComp::MetaObject(),(void *)CreateTIECATIASchGRRComp##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRRComp(classe) TIE_CATIASchGRRComp(classe)
#else
#define BOA_CATIASchGRRComp(classe) CATImplementBOA(CATIASchGRRComp, classe)
#endif

#endif
