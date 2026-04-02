#ifndef __TIE_CATIASimplifications
#define __TIE_CATIASimplifications

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASimplifications.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASimplifications */
#define declare_TIE_CATIASimplifications(classe) \
 \
 \
class TIECATIASimplifications##classe : public CATIASimplifications \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASimplifications, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeSimplification(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, CATIADocument *& SimplificationDocument); \
      virtual HRESULT __stdcall ComputeSimplificationWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CATIADocument *& SimplificationDocument); \
      virtual HRESULT __stdcall SimplificationShapeName(CATBSTR *& Name); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIASimplifications(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeSimplification(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, CATIADocument *& SimplificationDocument); \
virtual HRESULT __stdcall ComputeSimplificationWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CATIADocument *& SimplificationDocument); \
virtual HRESULT __stdcall SimplificationShapeName(CATBSTR *& Name); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIASimplifications(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeSimplification(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, CATIADocument *& SimplificationDocument) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)ComputeSimplification(GroupOfSelectedProducts,iAccuracy,SimplificationDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeSimplificationWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CATIADocument *& SimplificationDocument) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)ComputeSimplificationWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iAccuracy,SimplificationDocument)); \
} \
HRESULT __stdcall  ENVTIEName::SimplificationShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)SimplificationShapeName(Name)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIASimplifications,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASimplifications(classe)    TIECATIASimplifications##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASimplifications(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASimplifications, classe) \
 \
 \
CATImplementTIEMethods(CATIASimplifications, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASimplifications, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASimplifications, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASimplifications, classe) \
 \
HRESULT __stdcall  TIECATIASimplifications##classe::ComputeSimplification(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, CATIADocument *& SimplificationDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&iAccuracy,&SimplificationDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeSimplification(GroupOfSelectedProducts,iAccuracy,SimplificationDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iAccuracy,&SimplificationDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASimplifications##classe::ComputeSimplificationWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CATIADocument *& SimplificationDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iAccuracy,&SimplificationDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeSimplificationWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iAccuracy,SimplificationDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iAccuracy,&SimplificationDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASimplifications##classe::SimplificationShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SimplificationShapeName(Name); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimplifications##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimplifications##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimplifications##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimplifications##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimplifications##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASimplifications##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASimplifications(classe) \
 \
 \
declare_TIE_CATIASimplifications(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASimplifications##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASimplifications,"CATIASimplifications",CATIASimplifications::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASimplifications(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASimplifications, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASimplifications##classe(classe::MetaObject(),CATIASimplifications::MetaObject(),(void *)CreateTIECATIASimplifications##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASimplifications(classe) \
 \
 \
declare_TIE_CATIASimplifications(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASimplifications##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASimplifications,"CATIASimplifications",CATIASimplifications::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASimplifications(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASimplifications, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASimplifications##classe(classe::MetaObject(),CATIASimplifications::MetaObject(),(void *)CreateTIECATIASimplifications##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASimplifications(classe) TIE_CATIASimplifications(classe)
#else
#define BOA_CATIASimplifications(classe) CATImplementBOA(CATIASimplifications, classe)
#endif

#endif
