#ifndef __TIE_CATIAThickSurface
#define __TIE_CATIAThickSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAThickSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAThickSurface */
#define declare_TIE_CATIAThickSurface(classe) \
 \
 \
class TIECATIAThickSurface##classe : public CATIAThickSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAThickSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_TopOffset(CATIALength *& oTopOffset); \
      virtual HRESULT __stdcall get_BotOffset(CATIALength *& oBotOffset); \
      virtual HRESULT __stdcall get_OffsetSide(CATLONG & oOffsetSide); \
      virtual HRESULT __stdcall swap_OffsetSide(); \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAThickSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_TopOffset(CATIALength *& oTopOffset); \
virtual HRESULT __stdcall get_BotOffset(CATIALength *& oBotOffset); \
virtual HRESULT __stdcall get_OffsetSide(CATLONG & oOffsetSide); \
virtual HRESULT __stdcall swap_OffsetSide(); \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAThickSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_TopOffset(CATIALength *& oTopOffset) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)get_TopOffset(oTopOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_BotOffset(CATIALength *& oBotOffset) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)get_BotOffset(oBotOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_OffsetSide(CATLONG & oOffsetSide) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)get_OffsetSide(oOffsetSide)); \
} \
HRESULT __stdcall  ENVTIEName::swap_OffsetSide() \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)swap_OffsetSide()); \
} \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAThickSurface,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAThickSurface(classe)    TIECATIAThickSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAThickSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAThickSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIAThickSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAThickSurface, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAThickSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAThickSurface, classe) \
 \
HRESULT __stdcall  TIECATIAThickSurface##classe::get_TopOffset(CATIALength *& oTopOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oTopOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TopOffset(oTopOffset); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oTopOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickSurface##classe::get_BotOffset(CATIALength *& oBotOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oBotOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BotOffset(oBotOffset); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oBotOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickSurface##classe::get_OffsetSide(CATLONG & oOffsetSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOffsetSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OffsetSide(oOffsetSide); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOffsetSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickSurface##classe::swap_OffsetSide() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->swap_OffsetSide(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickSurface##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickSurface##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickSurface##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickSurface##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickSurface##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickSurface##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickSurface##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAThickSurface(classe) \
 \
 \
declare_TIE_CATIAThickSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAThickSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAThickSurface,"CATIAThickSurface",CATIAThickSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAThickSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAThickSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAThickSurface##classe(classe::MetaObject(),CATIAThickSurface::MetaObject(),(void *)CreateTIECATIAThickSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAThickSurface(classe) \
 \
 \
declare_TIE_CATIAThickSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAThickSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAThickSurface,"CATIAThickSurface",CATIAThickSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAThickSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAThickSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAThickSurface##classe(classe::MetaObject(),CATIAThickSurface::MetaObject(),(void *)CreateTIECATIAThickSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAThickSurface(classe) TIE_CATIAThickSurface(classe)
#else
#define BOA_CATIAThickSurface(classe) CATImplementBOA(CATIAThickSurface, classe)
#endif

#endif
