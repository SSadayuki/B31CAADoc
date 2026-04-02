#ifndef __TIE_CATIAGroup
#define __TIE_CATIAGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAGroup */
#define declare_TIE_CATIAGroup(classe) \
 \
 \
class TIECATIAGroup##classe : public CATIAGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddExplicit(CATBaseDispatch * iProduct); \
      virtual HRESULT __stdcall CountExplicit(CATLONG & oNbItems); \
      virtual HRESULT __stdcall ItemExplicit(const CATVariant & iIndex, CATBaseDispatch *& oProduct); \
      virtual HRESULT __stdcall RemoveExplicit(const CATVariant & iIndex); \
      virtual HRESULT __stdcall get_ExtractMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_ExtractMode(CATLONG iMode); \
      virtual HRESULT __stdcall CountExtract(CATLONG & oNbItems); \
      virtual HRESULT __stdcall ItemExtract(const CATVariant & iIndex, CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall FillSelWithExtract(); \
      virtual HRESULT __stdcall CountInvert(CATLONG & oNbItems); \
      virtual HRESULT __stdcall ItemInvert(const CATVariant & iIndex, CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall FillSelWithInvert(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddExplicit(CATBaseDispatch * iProduct); \
virtual HRESULT __stdcall CountExplicit(CATLONG & oNbItems); \
virtual HRESULT __stdcall ItemExplicit(const CATVariant & iIndex, CATBaseDispatch *& oProduct); \
virtual HRESULT __stdcall RemoveExplicit(const CATVariant & iIndex); \
virtual HRESULT __stdcall get_ExtractMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_ExtractMode(CATLONG iMode); \
virtual HRESULT __stdcall CountExtract(CATLONG & oNbItems); \
virtual HRESULT __stdcall ItemExtract(const CATVariant & iIndex, CATIAProduct *& oProduct); \
virtual HRESULT __stdcall FillSelWithExtract(); \
virtual HRESULT __stdcall CountInvert(CATLONG & oNbItems); \
virtual HRESULT __stdcall ItemInvert(const CATVariant & iIndex, CATIAProduct *& oProduct); \
virtual HRESULT __stdcall FillSelWithInvert(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddExplicit(CATBaseDispatch * iProduct) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)AddExplicit(iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::CountExplicit(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)CountExplicit(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::ItemExplicit(const CATVariant & iIndex, CATBaseDispatch *& oProduct) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)ItemExplicit(iIndex,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveExplicit(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)RemoveExplicit(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtractMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)get_ExtractMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtractMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)put_ExtractMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::CountExtract(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)CountExtract(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::ItemExtract(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)ItemExtract(iIndex,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::FillSelWithExtract() \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)FillSelWithExtract()); \
} \
HRESULT __stdcall  ENVTIEName::CountInvert(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)CountInvert(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::ItemInvert(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)ItemInvert(iIndex,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::FillSelWithInvert() \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)FillSelWithInvert()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAGroup,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAGroup(classe)    TIECATIAGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAGroup, classe) \
 \
 \
CATImplementTIEMethods(CATIAGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAGroup, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAGroup, classe) \
 \
HRESULT __stdcall  TIECATIAGroup##classe::AddExplicit(CATBaseDispatch * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddExplicit(iProduct); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::CountExplicit(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CountExplicit(oNbItems); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::ItemExplicit(const CATVariant & iIndex, CATBaseDispatch *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ItemExplicit(iIndex,oProduct); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::RemoveExplicit(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveExplicit(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::get_ExtractMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtractMode(oMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::put_ExtractMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtractMode(iMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::CountExtract(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CountExtract(oNbItems); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::ItemExtract(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndex,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ItemExtract(iIndex,oProduct); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndex,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::FillSelWithExtract() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FillSelWithExtract(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::CountInvert(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CountInvert(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::ItemInvert(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIndex,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ItemInvert(iIndex,oProduct); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIndex,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroup##classe::FillSelWithInvert() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FillSelWithInvert(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroup##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroup##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroup##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroup##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroup##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAGroup(classe) \
 \
 \
declare_TIE_CATIAGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGroup,"CATIAGroup",CATIAGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGroup##classe(classe::MetaObject(),CATIAGroup::MetaObject(),(void *)CreateTIECATIAGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAGroup(classe) \
 \
 \
declare_TIE_CATIAGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGroup,"CATIAGroup",CATIAGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGroup##classe(classe::MetaObject(),CATIAGroup::MetaObject(),(void *)CreateTIECATIAGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAGroup(classe) TIE_CATIAGroup(classe)
#else
#define BOA_CATIAGroup(classe) CATImplementBOA(CATIAGroup, classe)
#endif

#endif
