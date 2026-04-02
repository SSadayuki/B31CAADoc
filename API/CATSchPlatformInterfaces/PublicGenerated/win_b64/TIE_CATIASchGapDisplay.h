#ifndef __TIE_CATIASchGapDisplay
#define __TIE_CATIASchGapDisplay

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchGapDisplay.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchGapDisplay */
#define declare_TIE_CATIASchGapDisplay(classe) \
 \
 \
class TIECATIASchGapDisplay##classe : public CATIASchGapDisplay \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchGapDisplay, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetGap(CATIASchListOfObjects * iLUKRoutes); \
      virtual HRESULT __stdcall UnsetGap(CATIASchListOfObjects * iLUKRoutes); \
      virtual HRESULT __stdcall IsGapShown(CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchGapDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetGap(CATIASchListOfObjects * iLUKRoutes); \
virtual HRESULT __stdcall UnsetGap(CATIASchListOfObjects * iLUKRoutes); \
virtual HRESULT __stdcall IsGapShown(CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchGapDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetGap(CATIASchListOfObjects * iLUKRoutes) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)SetGap(iLUKRoutes)); \
} \
HRESULT __stdcall  ENVTIEName::UnsetGap(CATIASchListOfObjects * iLUKRoutes) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)UnsetGap(iLUKRoutes)); \
} \
HRESULT __stdcall  ENVTIEName::IsGapShown(CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)IsGapShown(oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchGapDisplay,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchGapDisplay(classe)    TIECATIASchGapDisplay##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchGapDisplay(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchGapDisplay, classe) \
 \
 \
CATImplementTIEMethods(CATIASchGapDisplay, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchGapDisplay, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchGapDisplay, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchGapDisplay, classe) \
 \
HRESULT __stdcall  TIECATIASchGapDisplay##classe::SetGap(CATIASchListOfObjects * iLUKRoutes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLUKRoutes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGap(iLUKRoutes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLUKRoutes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGapDisplay##classe::UnsetGap(CATIASchListOfObjects * iLUKRoutes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLUKRoutes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetGap(iLUKRoutes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLUKRoutes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchGapDisplay##classe::IsGapShown(CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGapShown(oBYes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGapDisplay##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGapDisplay##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGapDisplay##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGapDisplay##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchGapDisplay##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchGapDisplay(classe) \
 \
 \
declare_TIE_CATIASchGapDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGapDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGapDisplay,"CATIASchGapDisplay",CATIASchGapDisplay::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGapDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchGapDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGapDisplay##classe(classe::MetaObject(),CATIASchGapDisplay::MetaObject(),(void *)CreateTIECATIASchGapDisplay##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchGapDisplay(classe) \
 \
 \
declare_TIE_CATIASchGapDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchGapDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchGapDisplay,"CATIASchGapDisplay",CATIASchGapDisplay::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchGapDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchGapDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchGapDisplay##classe(classe::MetaObject(),CATIASchGapDisplay::MetaObject(),(void *)CreateTIECATIASchGapDisplay##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchGapDisplay(classe) TIE_CATIASchGapDisplay(classe)
#else
#define BOA_CATIASchGapDisplay(classe) CATImplementBOA(CATIASchGapDisplay, classe)
#endif

#endif
