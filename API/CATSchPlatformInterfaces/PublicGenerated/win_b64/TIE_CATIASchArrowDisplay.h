#ifndef __TIE_CATIASchArrowDisplay
#define __TIE_CATIASchArrowDisplay

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchArrowDisplay.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchArrowDisplay */
#define declare_TIE_CATIASchArrowDisplay(classe) \
 \
 \
class TIECATIASchArrowDisplay##classe : public CATIASchArrowDisplay \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchArrowDisplay, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum); \
      virtual HRESULT __stdcall UnsetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum); \
      virtual HRESULT __stdcall IsArrowShown(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchArrowDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum); \
virtual HRESULT __stdcall UnsetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum); \
virtual HRESULT __stdcall IsArrowShown(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchArrowDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)SetArrow(iGRR,iSegNum)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)UnsetArrow(iGRR,iSegNum)); \
} \
HRESULT __stdcall  ENVTIEName::IsArrowShown(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)IsArrowShown(oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchArrowDisplay,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchArrowDisplay(classe)    TIECATIASchArrowDisplay##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchArrowDisplay(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchArrowDisplay, classe) \
 \
 \
CATImplementTIEMethods(CATIASchArrowDisplay, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchArrowDisplay, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchArrowDisplay, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchArrowDisplay, classe) \
 \
HRESULT __stdcall  TIECATIASchArrowDisplay##classe::SetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGRR,&iSegNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetArrow(iGRR,iSegNum); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGRR,&iSegNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchArrowDisplay##classe::UnsetArrow(CATIASchGRRRoute * iGRR, CATLONG iSegNum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGRR,&iSegNum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetArrow(iGRR,iSegNum); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGRR,&iSegNum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchArrowDisplay##classe::IsArrowShown(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsArrowShown(oBYes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchArrowDisplay##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchArrowDisplay##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchArrowDisplay##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchArrowDisplay##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchArrowDisplay##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchArrowDisplay(classe) \
 \
 \
declare_TIE_CATIASchArrowDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchArrowDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchArrowDisplay,"CATIASchArrowDisplay",CATIASchArrowDisplay::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchArrowDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchArrowDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchArrowDisplay##classe(classe::MetaObject(),CATIASchArrowDisplay::MetaObject(),(void *)CreateTIECATIASchArrowDisplay##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchArrowDisplay(classe) \
 \
 \
declare_TIE_CATIASchArrowDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchArrowDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchArrowDisplay,"CATIASchArrowDisplay",CATIASchArrowDisplay::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchArrowDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchArrowDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchArrowDisplay##classe(classe::MetaObject(),CATIASchArrowDisplay::MetaObject(),(void *)CreateTIECATIASchArrowDisplay##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchArrowDisplay(classe) TIE_CATIASchArrowDisplay(classe)
#else
#define BOA_CATIASchArrowDisplay(classe) CATImplementBOA(CATIASchArrowDisplay, classe)
#endif

#endif
