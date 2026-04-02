#ifndef __TIE_CATIASchGRRRouteEllipse
#define __TIE_CATIASchGRRRouteEllipse

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGRRRouteEllipse.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGRRRouteEllipse */
#define declare_TIE_CATIASchGRRRouteEllipse(classe) \
 \
 \
class TIECATIASchGRRRouteEllipse##classe : public CATIASchGRRRouteEllipse \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGRRRouteEllipse, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetSeedPoint(CATIASchListOfDoubles *& oDb2XY); \
      virtual HRESULT __stdcall SetSeedPoint(const CATSafeArrayVariant & iDb2XY); \
      virtual HRESULT __stdcall HasSeedPoint(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGRRRouteEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetSeedPoint(CATIASchListOfDoubles *& oDb2XY); \
virtual HRESULT __stdcall SetSeedPoint(const CATSafeArrayVariant & iDb2XY); \
virtual HRESULT __stdcall HasSeedPoint(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGRRRouteEllipse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetSeedPoint(CATIASchListOfDoubles *& oDb2XY) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)GetSeedPoint(oDb2XY)); \
} \
HRESULT __stdcall  ENVTIEName::SetSeedPoint(const CATSafeArrayVariant & iDb2XY) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)SetSeedPoint(iDb2XY)); \
} \
HRESULT __stdcall  ENVTIEName::HasSeedPoint(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)HasSeedPoint(oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGRRRouteEllipse,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGRRRouteEllipse(classe)    TIECATIASchGRRRouteEllipse##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGRRRouteEllipse(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGRRRouteEllipse, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGRRRouteEllipse, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGRRRouteEllipse, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGRRRouteEllipse, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGRRRouteEllipse, classe) \
 \
HRESULT __stdcall  TIECATIASchGRRRouteEllipse##classe::GetSeedPoint(CATIASchListOfDoubles *& oDb2XY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDb2XY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSeedPoint(oDb2XY); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDb2XY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRouteEllipse##classe::SetSeedPoint(const CATSafeArrayVariant & iDb2XY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDb2XY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSeedPoint(iDb2XY); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDb2XY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGRRRouteEllipse##classe::HasSeedPoint(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasSeedPoint(oBYes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRouteEllipse##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRouteEllipse##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRouteEllipse##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRouteEllipse##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGRRRouteEllipse##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGRRRouteEllipse(classe) \
 \
 \
declare_TIE_CATIASchGRRRouteEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRRouteEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRRouteEllipse,"CATIASchGRRRouteEllipse",CATIASchGRRRouteEllipse::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRRouteEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGRRRouteEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRRouteEllipse##classe(classe::MetaObject(),CATIASchGRRRouteEllipse::MetaObject(),(void *)CreateTIECATIASchGRRRouteEllipse##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGRRRouteEllipse(classe) \
 \
 \
declare_TIE_CATIASchGRRRouteEllipse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGRRRouteEllipse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGRRRouteEllipse,"CATIASchGRRRouteEllipse",CATIASchGRRRouteEllipse::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGRRRouteEllipse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGRRRouteEllipse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGRRRouteEllipse##classe(classe::MetaObject(),CATIASchGRRRouteEllipse::MetaObject(),(void *)CreateTIECATIASchGRRRouteEllipse##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGRRRouteEllipse(classe) TIE_CATIASchGRRRouteEllipse(classe)
#else
#define BOA_CATIASchGRRRouteEllipse(classe) CATImplementBOA(CATIASchGRRRouteEllipse, classe)
#endif

#endif
