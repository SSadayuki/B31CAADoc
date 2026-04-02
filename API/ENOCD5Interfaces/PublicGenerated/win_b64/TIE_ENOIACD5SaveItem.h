#ifndef __TIE_ENOIACD5SaveItem
#define __TIE_ENOIACD5SaveItem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "ENOIACD5SaveItem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIACD5SaveItem */
#define declare_TIE_ENOIACD5SaveItem(classe) \
 \
 \
class TIEENOIACD5SaveItem##classe : public ENOIACD5SaveItem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIACD5SaveItem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ObjectName(CATBSTR & oNameBSTR); \
      virtual HRESULT __stdcall put_ObjectName(const CATBSTR & iNameBSTR); \
      virtual HRESULT __stdcall get_Status(CD5SaveItem_Status & oStatus); \
      virtual HRESULT __stdcall get_Included(CAT_VARIANT_BOOL & oIncluded); \
      virtual HRESULT __stdcall put_Included(CAT_VARIANT_BOOL iIncluded); \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall put_Type(const CATBSTR & iType); \
      virtual HRESULT __stdcall get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes); \
      virtual HRESULT __stdcall get_CD5ID(ENOIACD5ID *& oValue); \
      virtual HRESULT __stdcall get_PossibleDerivedOutputs(CATSafeArrayVariant *& oPossibleDerivedOutputs); \
      virtual HRESULT __stdcall put_DerivedOutputs(const CATSafeArrayVariant & DerivedOutputs); \
      virtual HRESULT __stdcall get_DerivedOutputs(CATSafeArrayVariant *& oDerivedOutputs); \
      virtual HRESULT __stdcall get_Revision(CATBSTR & oRevision); \
      virtual HRESULT __stdcall put_Revision(const CATBSTR & iRevision); \
      virtual HRESULT __stdcall get_NextRevision(CATBSTR & oNextRevision); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_ENOIACD5SaveItem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ObjectName(CATBSTR & oNameBSTR); \
virtual HRESULT __stdcall put_ObjectName(const CATBSTR & iNameBSTR); \
virtual HRESULT __stdcall get_Status(CD5SaveItem_Status & oStatus); \
virtual HRESULT __stdcall get_Included(CAT_VARIANT_BOOL & oIncluded); \
virtual HRESULT __stdcall put_Included(CAT_VARIANT_BOOL iIncluded); \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall put_Type(const CATBSTR & iType); \
virtual HRESULT __stdcall get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes); \
virtual HRESULT __stdcall get_CD5ID(ENOIACD5ID *& oValue); \
virtual HRESULT __stdcall get_PossibleDerivedOutputs(CATSafeArrayVariant *& oPossibleDerivedOutputs); \
virtual HRESULT __stdcall put_DerivedOutputs(const CATSafeArrayVariant & DerivedOutputs); \
virtual HRESULT __stdcall get_DerivedOutputs(CATSafeArrayVariant *& oDerivedOutputs); \
virtual HRESULT __stdcall get_Revision(CATBSTR & oRevision); \
virtual HRESULT __stdcall put_Revision(const CATBSTR & iRevision); \
virtual HRESULT __stdcall get_NextRevision(CATBSTR & oNextRevision); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_ENOIACD5SaveItem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ObjectName(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_ObjectName(oNameBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_ObjectName(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)put_ObjectName(iNameBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Status(CD5SaveItem_Status & oStatus) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_Status(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Included(CAT_VARIANT_BOOL & oIncluded) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_Included(oIncluded)); \
} \
HRESULT __stdcall  ENVTIEName::put_Included(CAT_VARIANT_BOOL iIncluded) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)put_Included(iIncluded)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(const CATBSTR & iType) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_PossibleTypes(oPossibleTypes)); \
} \
HRESULT __stdcall  ENVTIEName::get_CD5ID(ENOIACD5ID *& oValue) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_CD5ID(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_PossibleDerivedOutputs(CATSafeArrayVariant *& oPossibleDerivedOutputs) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_PossibleDerivedOutputs(oPossibleDerivedOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::put_DerivedOutputs(const CATSafeArrayVariant & DerivedOutputs) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)put_DerivedOutputs(DerivedOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_DerivedOutputs(CATSafeArrayVariant *& oDerivedOutputs) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_DerivedOutputs(oDerivedOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_Revision(CATBSTR & oRevision) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_Revision(oRevision)); \
} \
HRESULT __stdcall  ENVTIEName::put_Revision(const CATBSTR & iRevision) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)put_Revision(iRevision)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextRevision(CATBSTR & oNextRevision) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_NextRevision(oNextRevision)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(ENOIACD5SaveItem,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIACD5SaveItem(classe)    TIEENOIACD5SaveItem##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIACD5SaveItem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIACD5SaveItem, classe) \
 \
 \
CATImplementTIEMethods(ENOIACD5SaveItem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIACD5SaveItem, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIACD5SaveItem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIACD5SaveItem, classe) \
 \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_ObjectName(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNameBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ObjectName(oNameBSTR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::put_ObjectName(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iNameBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ObjectName(iNameBSTR); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_Status(CD5SaveItem_Status & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Status(oStatus); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_Included(CAT_VARIANT_BOOL & oIncluded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oIncluded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Included(oIncluded); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oIncluded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::put_Included(CAT_VARIANT_BOOL iIncluded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIncluded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Included(iIncluded); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIncluded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::put_Type(const CATBSTR & iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_PossibleTypes(CATSafeArrayVariant *& oPossibleTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oPossibleTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PossibleTypes(oPossibleTypes); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oPossibleTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_CD5ID(ENOIACD5ID *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CD5ID(oValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_PossibleDerivedOutputs(CATSafeArrayVariant *& oPossibleDerivedOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oPossibleDerivedOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PossibleDerivedOutputs(oPossibleDerivedOutputs); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oPossibleDerivedOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::put_DerivedOutputs(const CATSafeArrayVariant & DerivedOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&DerivedOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DerivedOutputs(DerivedOutputs); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&DerivedOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_DerivedOutputs(CATSafeArrayVariant *& oDerivedOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oDerivedOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DerivedOutputs(oDerivedOutputs); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oDerivedOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_Revision(CATBSTR & oRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Revision(oRevision); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oRevision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::put_Revision(const CATBSTR & iRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Revision(iRevision); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iRevision); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEENOIACD5SaveItem##classe::get_NextRevision(CATBSTR & oNextRevision) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNextRevision); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextRevision(oNextRevision); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNextRevision); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItem##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItem##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItem##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItem##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItem##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIACD5SaveItem(classe) \
 \
 \
declare_TIE_ENOIACD5SaveItem(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5SaveItem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5SaveItem,"ENOIACD5SaveItem",ENOIACD5SaveItem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5SaveItem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIACD5SaveItem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5SaveItem##classe(classe::MetaObject(),ENOIACD5SaveItem::MetaObject(),(void *)CreateTIEENOIACD5SaveItem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIACD5SaveItem(classe) \
 \
 \
declare_TIE_ENOIACD5SaveItem(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5SaveItem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5SaveItem,"ENOIACD5SaveItem",ENOIACD5SaveItem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5SaveItem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIACD5SaveItem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5SaveItem##classe(classe::MetaObject(),ENOIACD5SaveItem::MetaObject(),(void *)CreateTIEENOIACD5SaveItem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIACD5SaveItem(classe) TIE_ENOIACD5SaveItem(classe)
#else
#define BOA_ENOIACD5SaveItem(classe) CATImplementBOA(ENOIACD5SaveItem, classe)
#endif

#endif
