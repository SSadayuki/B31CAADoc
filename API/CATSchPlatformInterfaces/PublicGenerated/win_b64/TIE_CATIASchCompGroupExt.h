#ifndef __TIE_CATIASchCompGroupExt
#define __TIE_CATIASchCompGroupExt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCompGroupExt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCompGroupExt */
#define declare_TIE_CATIASchCompGroupExt(classe) \
 \
 \
class TIECATIASchCompGroupExt##classe : public CATIASchCompGroupExt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCompGroupExt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetPlacementAxis(CATIASchListOfDoubles *& oDb6PlaceMatrix); \
      virtual HRESULT __stdcall SetPlacementAxis(const CATSafeArrayVariant & oDb6PlaceMatrix); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCompGroupExt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetPlacementAxis(CATIASchListOfDoubles *& oDb6PlaceMatrix); \
virtual HRESULT __stdcall SetPlacementAxis(const CATSafeArrayVariant & oDb6PlaceMatrix); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCompGroupExt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetPlacementAxis(CATIASchListOfDoubles *& oDb6PlaceMatrix) \
{ \
return (ENVTIECALL(CATIASchCompGroupExt,ENVTIETypeLetter,ENVTIELetter)GetPlacementAxis(oDb6PlaceMatrix)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlacementAxis(const CATSafeArrayVariant & oDb6PlaceMatrix) \
{ \
return (ENVTIECALL(CATIASchCompGroupExt,ENVTIETypeLetter,ENVTIELetter)SetPlacementAxis(oDb6PlaceMatrix)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCompGroupExt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCompGroupExt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompGroupExt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompGroupExt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCompGroupExt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCompGroupExt(classe)    TIECATIASchCompGroupExt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCompGroupExt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCompGroupExt, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCompGroupExt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCompGroupExt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCompGroupExt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCompGroupExt, classe) \
 \
HRESULT __stdcall  TIECATIASchCompGroupExt##classe::GetPlacementAxis(CATIASchListOfDoubles *& oDb6PlaceMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDb6PlaceMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlacementAxis(oDb6PlaceMatrix); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDb6PlaceMatrix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompGroupExt##classe::SetPlacementAxis(const CATSafeArrayVariant & oDb6PlaceMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDb6PlaceMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlacementAxis(oDb6PlaceMatrix); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDb6PlaceMatrix); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGroupExt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGroupExt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGroupExt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGroupExt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompGroupExt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCompGroupExt(classe) \
 \
 \
declare_TIE_CATIASchCompGroupExt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompGroupExt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompGroupExt,"CATIASchCompGroupExt",CATIASchCompGroupExt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompGroupExt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCompGroupExt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompGroupExt##classe(classe::MetaObject(),CATIASchCompGroupExt::MetaObject(),(void *)CreateTIECATIASchCompGroupExt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCompGroupExt(classe) \
 \
 \
declare_TIE_CATIASchCompGroupExt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompGroupExt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompGroupExt,"CATIASchCompGroupExt",CATIASchCompGroupExt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompGroupExt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCompGroupExt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompGroupExt##classe(classe::MetaObject(),CATIASchCompGroupExt::MetaObject(),(void *)CreateTIECATIASchCompGroupExt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCompGroupExt(classe) TIE_CATIASchCompGroupExt(classe)
#else
#define BOA_CATIASchCompGroupExt(classe) CATImplementBOA(CATIASchCompGroupExt, classe)
#endif

#endif
