#ifndef __TIE_CATIARectilinearTriDimFeatEdge
#define __TIE_CATIARectilinearTriDimFeatEdge

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARectilinearTriDimFeatEdge.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARectilinearTriDimFeatEdge */
#define declare_TIE_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
class TIECATIARectilinearTriDimFeatEdge##classe : public CATIARectilinearTriDimFeatEdge \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARectilinearTriDimFeatEdge, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
      virtual HRESULT __stdcall get_DisplayName(CATBSTR & oName); \
      virtual HRESULT __stdcall ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARectilinearTriDimFeatEdge(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
virtual HRESULT __stdcall get_DisplayName(CATBSTR & oName); \
virtual HRESULT __stdcall ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARectilinearTriDimFeatEdge(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)get_DisplayName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)ComposeWith(iReference,oComposedReference)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARectilinearTriDimFeatEdge,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARectilinearTriDimFeatEdge(classe)    TIECATIARectilinearTriDimFeatEdge##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARectilinearTriDimFeatEdge, classe) \
 \
 \
CATImplementTIEMethods(CATIARectilinearTriDimFeatEdge, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARectilinearTriDimFeatEdge, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARectilinearTriDimFeatEdge, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARectilinearTriDimFeatEdge, classe) \
 \
HRESULT __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::get_DisplayName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayName(oName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::ComposeWith(CATIAReference * iReference, CATIAReference *& oComposedReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iReference,&oComposedReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComposeWith(iReference,oComposedReference); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iReference,&oComposedReference); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARectilinearTriDimFeatEdge##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
declare_TIE_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARectilinearTriDimFeatEdge##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARectilinearTriDimFeatEdge,"CATIARectilinearTriDimFeatEdge",CATIARectilinearTriDimFeatEdge::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARectilinearTriDimFeatEdge, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARectilinearTriDimFeatEdge##classe(classe::MetaObject(),CATIARectilinearTriDimFeatEdge::MetaObject(),(void *)CreateTIECATIARectilinearTriDimFeatEdge##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
declare_TIE_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARectilinearTriDimFeatEdge##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARectilinearTriDimFeatEdge,"CATIARectilinearTriDimFeatEdge",CATIARectilinearTriDimFeatEdge::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARectilinearTriDimFeatEdge(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARectilinearTriDimFeatEdge, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARectilinearTriDimFeatEdge##classe(classe::MetaObject(),CATIARectilinearTriDimFeatEdge::MetaObject(),(void *)CreateTIECATIARectilinearTriDimFeatEdge##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARectilinearTriDimFeatEdge(classe) TIE_CATIARectilinearTriDimFeatEdge(classe)
#else
#define BOA_CATIARectilinearTriDimFeatEdge(classe) CATImplementBOA(CATIARectilinearTriDimFeatEdge, classe)
#endif

#endif
