#ifndef __TIE_CATIASplit
#define __TIE_CATIASplit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASplit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASplit */
#define declare_TIE_CATIASplit(classe) \
 \
 \
class TIECATIASplit##classe : public CATIASplit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASplit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SplittingSide(CatSplitSide & oSplittingSide); \
      virtual HRESULT __stdcall put_SplittingSide(CatSplitSide iSplittingSide); \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASplit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SplittingSide(CatSplitSide & oSplittingSide); \
virtual HRESULT __stdcall put_SplittingSide(CatSplitSide iSplittingSide); \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASplit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SplittingSide(CatSplitSide & oSplittingSide) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)get_SplittingSide(oSplittingSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_SplittingSide(CatSplitSide iSplittingSide) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)put_SplittingSide(iSplittingSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASplit,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASplit(classe)    TIECATIASplit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASplit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASplit, classe) \
 \
 \
CATImplementTIEMethods(CATIASplit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASplit, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASplit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASplit, classe) \
 \
HRESULT __stdcall  TIECATIASplit##classe::get_SplittingSide(CatSplitSide & oSplittingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSplittingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplittingSide(oSplittingSide); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSplittingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASplit##classe::put_SplittingSide(CatSplitSide iSplittingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSplittingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SplittingSide(iSplittingSide); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSplittingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASplit##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASplit##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASplit##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASplit##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASplit##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASplit##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASplit##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASplit(classe) \
 \
 \
declare_TIE_CATIASplit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASplit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASplit,"CATIASplit",CATIASplit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASplit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASplit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASplit##classe(classe::MetaObject(),CATIASplit::MetaObject(),(void *)CreateTIECATIASplit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASplit(classe) \
 \
 \
declare_TIE_CATIASplit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASplit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASplit,"CATIASplit",CATIASplit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASplit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASplit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASplit##classe(classe::MetaObject(),CATIASplit::MetaObject(),(void *)CreateTIECATIASplit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASplit(classe) TIE_CATIASplit(classe)
#else
#define BOA_CATIASplit(classe) CATImplementBOA(CATIASplit, classe)
#endif

#endif
