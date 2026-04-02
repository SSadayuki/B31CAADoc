#ifndef __TIE_CATIAMerges
#define __TIE_CATIAMerges

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMerges.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMerges */
#define declare_TIE_CATIAMerges(classe) \
 \
 \
class TIECATIAMerges##classe : public CATIAMerges \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMerges, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeMerge(CATIAGroup * GroupOfSelectedProducts, double iAccuracyForSimplification, CATLONG iKeepEdges, CATLONG iDecoration, CATIADocument *& MergeDocument); \
      virtual HRESULT __stdcall MergeShapeName(CATBSTR *& Name); \
      virtual HRESULT __stdcall CleanUp(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAMerges(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeMerge(CATIAGroup * GroupOfSelectedProducts, double iAccuracyForSimplification, CATLONG iKeepEdges, CATLONG iDecoration, CATIADocument *& MergeDocument); \
virtual HRESULT __stdcall MergeShapeName(CATBSTR *& Name); \
virtual HRESULT __stdcall CleanUp(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAMerges(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeMerge(CATIAGroup * GroupOfSelectedProducts, double iAccuracyForSimplification, CATLONG iKeepEdges, CATLONG iDecoration, CATIADocument *& MergeDocument) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)ComputeMerge(GroupOfSelectedProducts,iAccuracyForSimplification,iKeepEdges,iDecoration,MergeDocument)); \
} \
HRESULT __stdcall  ENVTIEName::MergeShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)MergeShapeName(Name)); \
} \
HRESULT __stdcall  ENVTIEName::CleanUp() \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)CleanUp()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAMerges,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMerges(classe)    TIECATIAMerges##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMerges(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMerges, classe) \
 \
 \
CATImplementTIEMethods(CATIAMerges, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMerges, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMerges, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMerges, classe) \
 \
HRESULT __stdcall  TIECATIAMerges##classe::ComputeMerge(CATIAGroup * GroupOfSelectedProducts, double iAccuracyForSimplification, CATLONG iKeepEdges, CATLONG iDecoration, CATIADocument *& MergeDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&iAccuracyForSimplification,&iKeepEdges,&iDecoration,&MergeDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeMerge(GroupOfSelectedProducts,iAccuracyForSimplification,iKeepEdges,iDecoration,MergeDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iAccuracyForSimplification,&iKeepEdges,&iDecoration,&MergeDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMerges##classe::MergeShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MergeShapeName(Name); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMerges##classe::CleanUp() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanUp(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMerges##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMerges##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMerges##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMerges##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMerges##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMerges##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMerges(classe) \
 \
 \
declare_TIE_CATIAMerges(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMerges##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMerges,"CATIAMerges",CATIAMerges::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMerges(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMerges, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMerges##classe(classe::MetaObject(),CATIAMerges::MetaObject(),(void *)CreateTIECATIAMerges##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMerges(classe) \
 \
 \
declare_TIE_CATIAMerges(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMerges##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMerges,"CATIAMerges",CATIAMerges::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMerges(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMerges, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMerges##classe(classe::MetaObject(),CATIAMerges::MetaObject(),(void *)CreateTIECATIAMerges##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMerges(classe) TIE_CATIAMerges(classe)
#else
#define BOA_CATIAMerges(classe) CATImplementBOA(CATIAMerges, classe)
#endif

#endif
