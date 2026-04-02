#ifndef __TIE_CATIAArrangementItemReservation
#define __TIE_CATIAArrangementItemReservation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementItemReservation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementItemReservation */
#define declare_TIE_CATIAArrangementItemReservation(classe) \
 \
 \
class TIECATIAArrangementItemReservation##classe : public CATIAArrangementItemReservation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementItemReservation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_XLength(double & oXLength); \
      virtual HRESULT __stdcall put_XLength(double iXLength); \
      virtual HRESULT __stdcall get_YLength(double & oWidth); \
      virtual HRESULT __stdcall put_YLength(double iWidth); \
      virtual HRESULT __stdcall get_Height(double & oHeight); \
      virtual HRESULT __stdcall put_Height(double iHeight); \
      virtual HRESULT __stdcall get_VisuMode(CATArrangementItemResVisuMode & oVisuMode); \
      virtual HRESULT __stdcall put_VisuMode(CATArrangementItemResVisuMode iVisuMode); \
      virtual HRESULT __stdcall GetDimension(CATSafeArrayVariant & ioItemResDimensions); \
      virtual HRESULT __stdcall SetDimension(const CATSafeArrayVariant & iItemResDimensions); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrangementItemReservation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_XLength(double & oXLength); \
virtual HRESULT __stdcall put_XLength(double iXLength); \
virtual HRESULT __stdcall get_YLength(double & oWidth); \
virtual HRESULT __stdcall put_YLength(double iWidth); \
virtual HRESULT __stdcall get_Height(double & oHeight); \
virtual HRESULT __stdcall put_Height(double iHeight); \
virtual HRESULT __stdcall get_VisuMode(CATArrangementItemResVisuMode & oVisuMode); \
virtual HRESULT __stdcall put_VisuMode(CATArrangementItemResVisuMode iVisuMode); \
virtual HRESULT __stdcall GetDimension(CATSafeArrayVariant & ioItemResDimensions); \
virtual HRESULT __stdcall SetDimension(const CATSafeArrayVariant & iItemResDimensions); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrangementItemReservation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_XLength(double & oXLength) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)get_XLength(oXLength)); \
} \
HRESULT __stdcall  ENVTIEName::put_XLength(double iXLength) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)put_XLength(iXLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_YLength(double & oWidth) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)get_YLength(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_YLength(double iWidth) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)put_YLength(iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(double & oHeight) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_Height(double iHeight) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)put_Height(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_VisuMode(CATArrangementItemResVisuMode & oVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)get_VisuMode(oVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuMode(CATArrangementItemResVisuMode iVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)put_VisuMode(iVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimension(CATSafeArrayVariant & ioItemResDimensions) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)GetDimension(ioItemResDimensions)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimension(const CATSafeArrayVariant & iItemResDimensions) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)SetDimension(iItemResDimensions)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrangementItemReservation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementItemReservation(classe)    TIECATIAArrangementItemReservation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementItemReservation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementItemReservation, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementItemReservation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementItemReservation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementItemReservation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementItemReservation, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::get_XLength(double & oXLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oXLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_XLength(oXLength); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oXLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::put_XLength(double iXLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iXLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_XLength(iXLength); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iXLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::get_YLength(double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_YLength(oWidth); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::put_YLength(double iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_YLength(iWidth); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::get_Height(double & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::put_Height(double iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Height(iHeight); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::get_VisuMode(CATArrangementItemResVisuMode & oVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuMode(oVisuMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::put_VisuMode(CATArrangementItemResVisuMode iVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuMode(iVisuMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::GetDimension(CATSafeArrayVariant & ioItemResDimensions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ioItemResDimensions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimension(ioItemResDimensions); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ioItemResDimensions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::SetDimension(const CATSafeArrayVariant & iItemResDimensions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iItemResDimensions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimension(iItemResDimensions); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iItemResDimensions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementItemReservation##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementItemReservation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementItemReservation(classe) \
 \
 \
declare_TIE_CATIAArrangementItemReservation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementItemReservation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementItemReservation,"CATIAArrangementItemReservation",CATIAArrangementItemReservation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementItemReservation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementItemReservation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementItemReservation##classe(classe::MetaObject(),CATIAArrangementItemReservation::MetaObject(),(void *)CreateTIECATIAArrangementItemReservation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementItemReservation(classe) \
 \
 \
declare_TIE_CATIAArrangementItemReservation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementItemReservation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementItemReservation,"CATIAArrangementItemReservation",CATIAArrangementItemReservation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementItemReservation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementItemReservation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementItemReservation##classe(classe::MetaObject(),CATIAArrangementItemReservation::MetaObject(),(void *)CreateTIECATIAArrangementItemReservation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementItemReservation(classe) TIE_CATIAArrangementItemReservation(classe)
#else
#define BOA_CATIAArrangementItemReservation(classe) CATImplementBOA(CATIAArrangementItemReservation, classe)
#endif

#endif
