#ifndef __TIE_CATIAPCBHoleAndPattern
#define __TIE_CATIAPCBHoleAndPattern

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPCBHoleAndPattern.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPCBHoleAndPattern */
#define declare_TIE_CATIAPCBHoleAndPattern(classe) \
 \
 \
class TIECATIAPCBHoleAndPattern##classe : public CATIAPCBHoleAndPattern \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPCBHoleAndPattern, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PlatingStyle(CATBSTR *& oPlatingStyle); \
      virtual HRESULT __stdcall put_PlatingStyle(const CATBSTR & iPlatingStyle); \
      virtual HRESULT __stdcall get_AssociatedPartName(CATBSTR *& oAssociatedPartName); \
      virtual HRESULT __stdcall put_AssociatedPartName(const CATBSTR & iAssociatedPartName); \
      virtual HRESULT __stdcall get_HoleType(CATBSTR *& oHoleType); \
      virtual HRESULT __stdcall put_HoleType(const CATBSTR & iHoleType); \
      virtual HRESULT __stdcall get_HoleOwner(CATBSTR *& oHoleOwner); \
      virtual HRESULT __stdcall put_HoleOwner(const CATBSTR & iHoleOwner); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPCBHoleAndPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PlatingStyle(CATBSTR *& oPlatingStyle); \
virtual HRESULT __stdcall put_PlatingStyle(const CATBSTR & iPlatingStyle); \
virtual HRESULT __stdcall get_AssociatedPartName(CATBSTR *& oAssociatedPartName); \
virtual HRESULT __stdcall put_AssociatedPartName(const CATBSTR & iAssociatedPartName); \
virtual HRESULT __stdcall get_HoleType(CATBSTR *& oHoleType); \
virtual HRESULT __stdcall put_HoleType(const CATBSTR & iHoleType); \
virtual HRESULT __stdcall get_HoleOwner(CATBSTR *& oHoleOwner); \
virtual HRESULT __stdcall put_HoleOwner(const CATBSTR & iHoleOwner); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPCBHoleAndPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PlatingStyle(CATBSTR *& oPlatingStyle) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)get_PlatingStyle(oPlatingStyle)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlatingStyle(const CATBSTR & iPlatingStyle) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)put_PlatingStyle(iPlatingStyle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AssociatedPartName(CATBSTR *& oAssociatedPartName) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)get_AssociatedPartName(oAssociatedPartName)); \
} \
HRESULT __stdcall  ENVTIEName::put_AssociatedPartName(const CATBSTR & iAssociatedPartName) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)put_AssociatedPartName(iAssociatedPartName)); \
} \
HRESULT __stdcall  ENVTIEName::get_HoleType(CATBSTR *& oHoleType) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)get_HoleType(oHoleType)); \
} \
HRESULT __stdcall  ENVTIEName::put_HoleType(const CATBSTR & iHoleType) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)put_HoleType(iHoleType)); \
} \
HRESULT __stdcall  ENVTIEName::get_HoleOwner(CATBSTR *& oHoleOwner) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)get_HoleOwner(oHoleOwner)); \
} \
HRESULT __stdcall  ENVTIEName::put_HoleOwner(const CATBSTR & iHoleOwner) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)put_HoleOwner(iHoleOwner)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPCBHoleAndPattern,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPCBHoleAndPattern(classe)    TIECATIAPCBHoleAndPattern##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPCBHoleAndPattern(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPCBHoleAndPattern, classe) \
 \
 \
CATImplementTIEMethods(CATIAPCBHoleAndPattern, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPCBHoleAndPattern, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPCBHoleAndPattern, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPCBHoleAndPattern, classe) \
 \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::get_PlatingStyle(CATBSTR *& oPlatingStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPlatingStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlatingStyle(oPlatingStyle); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPlatingStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::put_PlatingStyle(const CATBSTR & iPlatingStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPlatingStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlatingStyle(iPlatingStyle); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPlatingStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::get_AssociatedPartName(CATBSTR *& oAssociatedPartName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAssociatedPartName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AssociatedPartName(oAssociatedPartName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAssociatedPartName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::put_AssociatedPartName(const CATBSTR & iAssociatedPartName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAssociatedPartName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AssociatedPartName(iAssociatedPartName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAssociatedPartName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::get_HoleType(CATBSTR *& oHoleType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oHoleType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HoleType(oHoleType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oHoleType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::put_HoleType(const CATBSTR & iHoleType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iHoleType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HoleType(iHoleType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iHoleType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::get_HoleOwner(CATBSTR *& oHoleOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oHoleOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HoleOwner(oHoleOwner); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oHoleOwner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBHoleAndPattern##classe::put_HoleOwner(const CATBSTR & iHoleOwner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iHoleOwner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HoleOwner(iHoleOwner); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iHoleOwner); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBHoleAndPattern##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBHoleAndPattern##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBHoleAndPattern##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBHoleAndPattern##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBHoleAndPattern##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPCBHoleAndPattern(classe) \
 \
 \
declare_TIE_CATIAPCBHoleAndPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBHoleAndPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBHoleAndPattern,"CATIAPCBHoleAndPattern",CATIAPCBHoleAndPattern::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBHoleAndPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPCBHoleAndPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBHoleAndPattern##classe(classe::MetaObject(),CATIAPCBHoleAndPattern::MetaObject(),(void *)CreateTIECATIAPCBHoleAndPattern##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPCBHoleAndPattern(classe) \
 \
 \
declare_TIE_CATIAPCBHoleAndPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBHoleAndPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBHoleAndPattern,"CATIAPCBHoleAndPattern",CATIAPCBHoleAndPattern::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBHoleAndPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPCBHoleAndPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBHoleAndPattern##classe(classe::MetaObject(),CATIAPCBHoleAndPattern::MetaObject(),(void *)CreateTIECATIAPCBHoleAndPattern##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPCBHoleAndPattern(classe) TIE_CATIAPCBHoleAndPattern(classe)
#else
#define BOA_CATIAPCBHoleAndPattern(classe) CATImplementBOA(CATIAPCBHoleAndPattern, classe)
#endif

#endif
