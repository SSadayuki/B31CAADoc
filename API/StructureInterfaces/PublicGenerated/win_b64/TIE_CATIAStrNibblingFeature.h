#ifndef __TIE_CATIAStrNibblingFeature
#define __TIE_CATIAStrNibblingFeature

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrNibblingFeature.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrNibblingFeature */
#define declare_TIE_CATIAStrNibblingFeature(classe) \
 \
 \
class TIECATIAStrNibblingFeature##classe : public CATIAStrNibblingFeature \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrNibblingFeature, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oNibblingType); \
      virtual HRESULT __stdcall put_Type(const CATBSTR & iNibblingType); \
      virtual HRESULT __stdcall get_SubType(CATBSTR & oNibblingSubType); \
      virtual HRESULT __stdcall put_SubType(const CATBSTR & iNibblingSubType); \
      virtual HRESULT __stdcall GetOffsetForExtrapolate(const CATBSTR & iOffsetForExtrapolate); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrNibblingFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oNibblingType); \
virtual HRESULT __stdcall put_Type(const CATBSTR & iNibblingType); \
virtual HRESULT __stdcall get_SubType(CATBSTR & oNibblingSubType); \
virtual HRESULT __stdcall put_SubType(const CATBSTR & iNibblingSubType); \
virtual HRESULT __stdcall GetOffsetForExtrapolate(const CATBSTR & iOffsetForExtrapolate); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrNibblingFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oNibblingType) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)get_Type(oNibblingType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(const CATBSTR & iNibblingType) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)put_Type(iNibblingType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SubType(CATBSTR & oNibblingSubType) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)get_SubType(oNibblingSubType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SubType(const CATBSTR & iNibblingSubType) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)put_SubType(iNibblingSubType)); \
} \
HRESULT __stdcall  ENVTIEName::GetOffsetForExtrapolate(const CATBSTR & iOffsetForExtrapolate) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)GetOffsetForExtrapolate(iOffsetForExtrapolate)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrNibblingFeature,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrNibblingFeature(classe)    TIECATIAStrNibblingFeature##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrNibblingFeature(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrNibblingFeature, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrNibblingFeature, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrNibblingFeature, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrNibblingFeature, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrNibblingFeature, classe) \
 \
HRESULT __stdcall  TIECATIAStrNibblingFeature##classe::get_Type(CATBSTR & oNibblingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNibblingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oNibblingType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNibblingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrNibblingFeature##classe::put_Type(const CATBSTR & iNibblingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iNibblingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iNibblingType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iNibblingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrNibblingFeature##classe::get_SubType(CATBSTR & oNibblingSubType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNibblingSubType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SubType(oNibblingSubType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNibblingSubType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrNibblingFeature##classe::put_SubType(const CATBSTR & iNibblingSubType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iNibblingSubType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SubType(iNibblingSubType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iNibblingSubType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrNibblingFeature##classe::GetOffsetForExtrapolate(const CATBSTR & iOffsetForExtrapolate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iOffsetForExtrapolate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOffsetForExtrapolate(iOffsetForExtrapolate); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iOffsetForExtrapolate); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrNibblingFeature##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrNibblingFeature##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrNibblingFeature##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrNibblingFeature##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrNibblingFeature##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrNibblingFeature(classe) \
 \
 \
declare_TIE_CATIAStrNibblingFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrNibblingFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrNibblingFeature,"CATIAStrNibblingFeature",CATIAStrNibblingFeature::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrNibblingFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrNibblingFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrNibblingFeature##classe(classe::MetaObject(),CATIAStrNibblingFeature::MetaObject(),(void *)CreateTIECATIAStrNibblingFeature##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrNibblingFeature(classe) \
 \
 \
declare_TIE_CATIAStrNibblingFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrNibblingFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrNibblingFeature,"CATIAStrNibblingFeature",CATIAStrNibblingFeature::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrNibblingFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrNibblingFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrNibblingFeature##classe(classe::MetaObject(),CATIAStrNibblingFeature::MetaObject(),(void *)CreateTIECATIAStrNibblingFeature##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrNibblingFeature(classe) TIE_CATIAStrNibblingFeature(classe)
#else
#define BOA_CATIAStrNibblingFeature(classe) CATImplementBOA(CATIAStrNibblingFeature, classe)
#endif

#endif
