#ifndef __TIE_CATIASceneProduct
#define __TIE_CATIASceneProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASceneProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASceneProduct */
#define declare_TIE_CATIASceneProduct(classe) \
 \
 \
class TIECATIASceneProduct##classe : public CATIASceneProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASceneProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
      virtual HRESULT __stdcall get_Position(CATIAPosition *& oPosition); \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_Activation(CAT_VARIANT_BOOL & oActive); \
      virtual HRESULT __stdcall put_Activation(CAT_VARIANT_BOOL iActive); \
      virtual HRESULT __stdcall SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance); \
      virtual HRESULT __stdcall GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CATLONG & oInheritance); \
      virtual HRESULT __stdcall SetRealTransparency(CATLONG iTransparency, CATLONG iInheritance); \
      virtual HRESULT __stdcall GetRealTransparency(CATLONG & oTransparency, CATLONG & oInheritance); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASceneProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
virtual HRESULT __stdcall get_Position(CATIAPosition *& oPosition); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_Activation(CAT_VARIANT_BOOL & oActive); \
virtual HRESULT __stdcall put_Activation(CAT_VARIANT_BOOL iActive); \
virtual HRESULT __stdcall SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance); \
virtual HRESULT __stdcall GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CATLONG & oInheritance); \
virtual HRESULT __stdcall SetRealTransparency(CATLONG iTransparency, CATLONG iInheritance); \
virtual HRESULT __stdcall GetRealTransparency(CATLONG & oTransparency, CATLONG & oInheritance); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASceneProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Move(CATIAMove *& oMove) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)get_Move(oMove)); \
} \
HRESULT __stdcall  ENVTIEName::get_Position(CATIAPosition *& oPosition) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)get_Position(oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activation(CAT_VARIANT_BOOL & oActive) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)get_Activation(oActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Activation(CAT_VARIANT_BOOL iActive) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)put_Activation(iActive)); \
} \
HRESULT __stdcall  ENVTIEName::SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)SetRealColor(iRed,iGreen,iBlue,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CATLONG & oInheritance) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)GetRealColor(oRed,oGreen,oBlue,oInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::SetRealTransparency(CATLONG iTransparency, CATLONG iInheritance) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)SetRealTransparency(iTransparency,iInheritance)); \
} \
HRESULT __stdcall  ENVTIEName::GetRealTransparency(CATLONG & oTransparency, CATLONG & oInheritance) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)GetRealTransparency(oTransparency,oInheritance)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASceneProduct,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASceneProduct(classe)    TIECATIASceneProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASceneProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASceneProduct, classe) \
 \
 \
CATImplementTIEMethods(CATIASceneProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASceneProduct, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASceneProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASceneProduct, classe) \
 \
HRESULT __stdcall  TIECATIASceneProduct##classe::get_Move(CATIAMove *& oMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Move(oMove); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::get_Position(CATIAPosition *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Position(oPosition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::get_Activation(CAT_VARIANT_BOOL & oActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activation(oActive); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::put_Activation(CAT_VARIANT_BOOL iActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Activation(iActive); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::SetRealColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iRed,&iGreen,&iBlue,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRealColor(iRed,iGreen,iBlue,iInheritance); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::GetRealColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue, CATLONG & oInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oRed,&oGreen,&oBlue,&oInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRealColor(oRed,oGreen,oBlue,oInheritance); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue,&oInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::SetRealTransparency(CATLONG iTransparency, CATLONG iInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iTransparency,&iInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRealTransparency(iTransparency,iInheritance); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iTransparency,&iInheritance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASceneProduct##classe::GetRealTransparency(CATLONG & oTransparency, CATLONG & oInheritance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oTransparency,&oInheritance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRealTransparency(oTransparency,oInheritance); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oTransparency,&oInheritance); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASceneProduct##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASceneProduct##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASceneProduct##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASceneProduct##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASceneProduct##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASceneProduct(classe) \
 \
 \
declare_TIE_CATIASceneProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASceneProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASceneProduct,"CATIASceneProduct",CATIASceneProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASceneProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASceneProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASceneProduct##classe(classe::MetaObject(),CATIASceneProduct::MetaObject(),(void *)CreateTIECATIASceneProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASceneProduct(classe) \
 \
 \
declare_TIE_CATIASceneProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASceneProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASceneProduct,"CATIASceneProduct",CATIASceneProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASceneProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASceneProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASceneProduct##classe(classe::MetaObject(),CATIASceneProduct::MetaObject(),(void *)CreateTIECATIASceneProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASceneProduct(classe) TIE_CATIASceneProduct(classe)
#else
#define BOA_CATIASceneProduct(classe) CATImplementBOA(CATIASceneProduct, classe)
#endif

#endif
