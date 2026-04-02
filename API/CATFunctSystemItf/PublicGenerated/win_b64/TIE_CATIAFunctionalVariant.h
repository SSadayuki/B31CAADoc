#ifndef __TIE_CATIAFunctionalVariant
#define __TIE_CATIAFunctionalVariant

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalVariant.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalVariant */
#define declare_TIE_CATIAFunctionalVariant(classe) \
 \
 \
class TIECATIAFunctionalVariant##classe : public CATIAFunctionalVariant \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalVariant, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_OriginalDescription(CATIAFunctionalDescription *& oDesc); \
      virtual HRESULT __stdcall get_Objects(CATIAFunctionalObjects *& oObjects); \
      virtual HRESULT __stdcall get_Actions(CATIAFunctionalActions *& oActions); \
      virtual HRESULT __stdcall get_ActionsGroups(CATIAFunctActionsGroups *& oActionsGroups); \
      virtual HRESULT __stdcall get_Variants(CATIAFunctionalVariants *& oVariants); \
      virtual HRESULT __stdcall CreatePosition(double iX, double iY, CATIAFunctionalPosition *& oPos); \
      virtual HRESULT __stdcall Unlock(); \
      virtual HRESULT __stdcall GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
      virtual HRESULT __stdcall get_Document(CATIAFunctionalDocument *& oDocument); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctionalVariant(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_OriginalDescription(CATIAFunctionalDescription *& oDesc); \
virtual HRESULT __stdcall get_Objects(CATIAFunctionalObjects *& oObjects); \
virtual HRESULT __stdcall get_Actions(CATIAFunctionalActions *& oActions); \
virtual HRESULT __stdcall get_ActionsGroups(CATIAFunctActionsGroups *& oActionsGroups); \
virtual HRESULT __stdcall get_Variants(CATIAFunctionalVariants *& oVariants); \
virtual HRESULT __stdcall CreatePosition(double iX, double iY, CATIAFunctionalPosition *& oPos); \
virtual HRESULT __stdcall Unlock(); \
virtual HRESULT __stdcall GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet); \
virtual HRESULT __stdcall get_Document(CATIAFunctionalDocument *& oDocument); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctionalVariant(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_OriginalDescription(CATIAFunctionalDescription *& oDesc) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_OriginalDescription(oDesc)); \
} \
HRESULT __stdcall  ENVTIEName::get_Objects(CATIAFunctionalObjects *& oObjects) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Objects(oObjects)); \
} \
HRESULT __stdcall  ENVTIEName::get_Actions(CATIAFunctionalActions *& oActions) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Actions(oActions)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActionsGroups(CATIAFunctActionsGroups *& oActionsGroups) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_ActionsGroups(oActionsGroups)); \
} \
HRESULT __stdcall  ENVTIEName::get_Variants(CATIAFunctionalVariants *& oVariants) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Variants(oVariants)); \
} \
HRESULT __stdcall  ENVTIEName::CreatePosition(double iX, double iY, CATIAFunctionalPosition *& oPos) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)CreatePosition(iX,iY,oPos)); \
} \
HRESULT __stdcall  ENVTIEName::Unlock() \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)Unlock()); \
} \
HRESULT __stdcall  ENVTIEName::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)GetFacet(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)GetFacetByName(iFM,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)SearchFacet(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)SearchFacetByName(iFM,iCreateIfNecessary,oFacet)); \
} \
HRESULT __stdcall  ENVTIEName::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Document(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctionalVariant,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalVariant(classe)    TIECATIAFunctionalVariant##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalVariant(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalVariant, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalVariant, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalVariant, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalVariant, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalVariant, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::get_OriginalDescription(CATIAFunctionalDescription *& oDesc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDesc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OriginalDescription(oDesc); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDesc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::get_Objects(CATIAFunctionalObjects *& oObjects) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oObjects); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Objects(oObjects); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oObjects); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::get_Actions(CATIAFunctionalActions *& oActions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oActions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Actions(oActions); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oActions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::get_ActionsGroups(CATIAFunctActionsGroups *& oActionsGroups) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oActionsGroups); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActionsGroups(oActionsGroups); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oActionsGroups); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::get_Variants(CATIAFunctionalVariants *& oVariants) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oVariants); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Variants(oVariants); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oVariants); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::CreatePosition(double iX, double iY, CATIAFunctionalPosition *& oPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iX,&iY,&oPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreatePosition(iX,iY,oPos); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iX,&iY,&oPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::Unlock() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Unlock(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::GetFacet(CATIAFunctionalFacetMgr * iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacet(iFM,oFacet); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::GetFacetByName(const CATBSTR & iFM, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iFM,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFacetByName(iFM,oFacet); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iFM,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::SearchFacet(CATIAFunctionalFacetMgr * iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacet(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::SearchFacetByName(const CATBSTR & iFM, CAT_VARIANT_BOOL iCreateIfNecessary, CATIAFunctionalFacet *& oFacet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iFM,&iCreateIfNecessary,&oFacet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SearchFacetByName(iFM,iCreateIfNecessary,oFacet); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iFM,&iCreateIfNecessary,&oFacet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::get_Document(CATIAFunctionalDocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Document(oDocument); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariant##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariant##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariant##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariant##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariant##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariant##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalVariant(classe) \
 \
 \
declare_TIE_CATIAFunctionalVariant(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalVariant##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalVariant,"CATIAFunctionalVariant",CATIAFunctionalVariant::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalVariant(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalVariant, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalVariant##classe(classe::MetaObject(),CATIAFunctionalVariant::MetaObject(),(void *)CreateTIECATIAFunctionalVariant##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalVariant(classe) \
 \
 \
declare_TIE_CATIAFunctionalVariant(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalVariant##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalVariant,"CATIAFunctionalVariant",CATIAFunctionalVariant::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalVariant(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalVariant, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalVariant##classe(classe::MetaObject(),CATIAFunctionalVariant::MetaObject(),(void *)CreateTIECATIAFunctionalVariant##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalVariant(classe) TIE_CATIAFunctionalVariant(classe)
#else
#define BOA_CATIAFunctionalVariant(classe) CATImplementBOA(CATIAFunctionalVariant, classe)
#endif

#endif
