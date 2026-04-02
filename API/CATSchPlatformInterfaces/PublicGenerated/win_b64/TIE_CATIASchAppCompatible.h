#ifndef __TIE_CATIASchAppCompatible
#define __TIE_CATIASchAppCompatible

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppCompatible.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppCompatible */
#define declare_TIE_CATIASchAppCompatible(classe) \
 \
 \
class TIECATIASchAppCompatible##classe : public CATIASchAppCompatible \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppCompatible, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppIsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppIsTargetOKForPlace(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLTargetCntrs, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppIsTargetOKForInsert(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLSourceCntrs, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppCompatible(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppIsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppIsTargetOKForPlace(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLTargetCntrs, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppIsTargetOKForInsert(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLSourceCntrs, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppCompatible(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppIsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)AppIsTargetOKForRoute(iRouteCntrClassType,oLOKCntrs,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppIsTargetOKForPlace(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLTargetCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)AppIsTargetOKForPlace(iLCompSourceCntrs,oLTargetCntrs,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppIsTargetOKForInsert(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLSourceCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)AppIsTargetOKForInsert(iLCompSourceCntrs,oLSourceCntrs,oBYes)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppCompatible,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppCompatible(classe)    TIECATIASchAppCompatible##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppCompatible(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppCompatible, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppCompatible, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppCompatible, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppCompatible, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppCompatible, classe) \
 \
HRESULT __stdcall  TIECATIASchAppCompatible##classe::AppIsTargetOKForRoute(const CATBSTR & iRouteCntrClassType, CATIASchListOfObjects *& oLOKCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRouteCntrClassType,&oLOKCntrs,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsTargetOKForRoute(iRouteCntrClassType,oLOKCntrs,oBYes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRouteCntrClassType,&oLOKCntrs,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCompatible##classe::AppIsTargetOKForPlace(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLTargetCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLCompSourceCntrs,&oLTargetCntrs,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsTargetOKForPlace(iLCompSourceCntrs,oLTargetCntrs,oBYes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLCompSourceCntrs,&oLTargetCntrs,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCompatible##classe::AppIsTargetOKForInsert(CATIASchListOfObjects * iLCompSourceCntrs, CATIASchListOfObjects *& oLSourceCntrs, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLCompSourceCntrs,&oLSourceCntrs,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsTargetOKForInsert(iLCompSourceCntrs,oLSourceCntrs,oBYes); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLCompSourceCntrs,&oLSourceCntrs,&oBYes); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCompatible##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCompatible##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCompatible##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCompatible##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCompatible##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppCompatible(classe) \
 \
 \
declare_TIE_CATIASchAppCompatible(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCompatible##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCompatible,"CATIASchAppCompatible",CATIASchAppCompatible::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCompatible(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppCompatible, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCompatible##classe(classe::MetaObject(),CATIASchAppCompatible::MetaObject(),(void *)CreateTIECATIASchAppCompatible##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppCompatible(classe) \
 \
 \
declare_TIE_CATIASchAppCompatible(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCompatible##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCompatible,"CATIASchAppCompatible",CATIASchAppCompatible::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCompatible(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppCompatible, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCompatible##classe(classe::MetaObject(),CATIASchAppCompatible::MetaObject(),(void *)CreateTIECATIASchAppCompatible##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppCompatible(classe) TIE_CATIASchAppCompatible(classe)
#else
#define BOA_CATIASchAppCompatible(classe) CATImplementBOA(CATIASchAppCompatible, classe)
#endif

#endif
