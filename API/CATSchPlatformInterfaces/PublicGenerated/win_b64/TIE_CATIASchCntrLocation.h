#ifndef __TIE_CATIASchCntrLocation
#define __TIE_CATIASchCntrLocation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCntrLocation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCntrLocation */
#define declare_TIE_CATIASchCntrLocation(classe) \
 \
 \
class TIECATIASchCntrLocation##classe : public CATIASchCntrLocation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCntrLocation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetPosition(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2Position); \
      virtual HRESULT __stdcall SetPosition(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2Position); \
      virtual HRESULT __stdcall GetRelativePosition(CATIASchListOfDoubles *& oDb2RelativePosition); \
      virtual HRESULT __stdcall SetRelativePosition(const CATSafeArrayVariant & iDb2RelativePosition); \
      virtual HRESULT __stdcall GetAlignVector(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2AlignVector); \
      virtual HRESULT __stdcall SetAlignVector(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2AlignVector); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCntrLocation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetPosition(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2Position); \
virtual HRESULT __stdcall SetPosition(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2Position); \
virtual HRESULT __stdcall GetRelativePosition(CATIASchListOfDoubles *& oDb2RelativePosition); \
virtual HRESULT __stdcall SetRelativePosition(const CATSafeArrayVariant & iDb2RelativePosition); \
virtual HRESULT __stdcall GetAlignVector(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2AlignVector); \
virtual HRESULT __stdcall SetAlignVector(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2AlignVector); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCntrLocation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetPosition(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2Position) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)GetPosition(iGRR,oDb2Position)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2Position) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)SetPosition(iGRR,iDb2Position)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelativePosition(CATIASchListOfDoubles *& oDb2RelativePosition) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)GetRelativePosition(oDb2RelativePosition)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelativePosition(const CATSafeArrayVariant & iDb2RelativePosition) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)SetRelativePosition(iDb2RelativePosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetAlignVector(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2AlignVector) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)GetAlignVector(iGRR,oDb2AlignVector)); \
} \
HRESULT __stdcall  ENVTIEName::SetAlignVector(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2AlignVector) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)SetAlignVector(iGRR,iDb2AlignVector)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCntrLocation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCntrLocation(classe)    TIECATIASchCntrLocation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCntrLocation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCntrLocation, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCntrLocation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCntrLocation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCntrLocation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCntrLocation, classe) \
 \
HRESULT __stdcall  TIECATIASchCntrLocation##classe::GetPosition(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2Position) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRR,&oDb2Position); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(iGRR,oDb2Position); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRR,&oDb2Position); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrLocation##classe::SetPosition(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2Position) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRR,&iDb2Position); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iGRR,iDb2Position); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRR,&iDb2Position); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrLocation##classe::GetRelativePosition(CATIASchListOfDoubles *& oDb2RelativePosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDb2RelativePosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelativePosition(oDb2RelativePosition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDb2RelativePosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrLocation##classe::SetRelativePosition(const CATSafeArrayVariant & iDb2RelativePosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDb2RelativePosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelativePosition(iDb2RelativePosition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDb2RelativePosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrLocation##classe::GetAlignVector(CATIASchGRR * iGRR, CATIASchListOfDoubles *& oDb2AlignVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iGRR,&oDb2AlignVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlignVector(iGRR,oDb2AlignVector); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iGRR,&oDb2AlignVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCntrLocation##classe::SetAlignVector(CATIASchGRR * iGRR, const CATSafeArrayVariant & iDb2AlignVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGRR,&iDb2AlignVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAlignVector(iGRR,iDb2AlignVector); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGRR,&iDb2AlignVector); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrLocation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrLocation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrLocation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrLocation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCntrLocation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCntrLocation(classe) \
 \
 \
declare_TIE_CATIASchCntrLocation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrLocation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrLocation,"CATIASchCntrLocation",CATIASchCntrLocation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrLocation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCntrLocation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrLocation##classe(classe::MetaObject(),CATIASchCntrLocation::MetaObject(),(void *)CreateTIECATIASchCntrLocation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCntrLocation(classe) \
 \
 \
declare_TIE_CATIASchCntrLocation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCntrLocation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCntrLocation,"CATIASchCntrLocation",CATIASchCntrLocation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCntrLocation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCntrLocation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCntrLocation##classe(classe::MetaObject(),CATIASchCntrLocation::MetaObject(),(void *)CreateTIECATIASchCntrLocation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCntrLocation(classe) TIE_CATIASchCntrLocation(classe)
#else
#define BOA_CATIASchCntrLocation(classe) CATImplementBOA(CATIASchCntrLocation, classe)
#endif

#endif
