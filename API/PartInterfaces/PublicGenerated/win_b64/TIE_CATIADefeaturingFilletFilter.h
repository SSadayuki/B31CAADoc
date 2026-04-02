#ifndef __TIE_CATIADefeaturingFilletFilter
#define __TIE_CATIADefeaturingFilletFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADefeaturingFilletFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADefeaturingFilletFilter */
#define declare_TIE_CATIADefeaturingFilletFilter(classe) \
 \
 \
class TIECATIADefeaturingFilletFilter##classe : public CATIADefeaturingFilletFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADefeaturingFilletFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall getMinimumValue(const CATBSTR & iRangeId, double & oValue); \
      virtual HRESULT __stdcall getMinimumLength(const CATBSTR & iRangeId, CATIALength *& oValue); \
      virtual HRESULT __stdcall getMinimumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue); \
      virtual HRESULT __stdcall getMaximumValue(const CATBSTR & iRangeId, double & oValue); \
      virtual HRESULT __stdcall getMaximumLength(const CATBSTR & iRangeId, CATIALength *& oValue); \
      virtual HRESULT __stdcall getMaximumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue); \
      virtual HRESULT __stdcall setMinimumValue(const CATBSTR & iRangeId, double iValue); \
      virtual HRESULT __stdcall setMaximumValue(const CATBSTR & iRangeId, double iValue); \
      virtual HRESULT __stdcall getMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity); \
      virtual HRESULT __stdcall getMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity); \
      virtual HRESULT __stdcall setMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall setMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADefeaturingFilletFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall getMinimumValue(const CATBSTR & iRangeId, double & oValue); \
virtual HRESULT __stdcall getMinimumLength(const CATBSTR & iRangeId, CATIALength *& oValue); \
virtual HRESULT __stdcall getMinimumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue); \
virtual HRESULT __stdcall getMaximumValue(const CATBSTR & iRangeId, double & oValue); \
virtual HRESULT __stdcall getMaximumLength(const CATBSTR & iRangeId, CATIALength *& oValue); \
virtual HRESULT __stdcall getMaximumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue); \
virtual HRESULT __stdcall setMinimumValue(const CATBSTR & iRangeId, double iValue); \
virtual HRESULT __stdcall setMaximumValue(const CATBSTR & iRangeId, double iValue); \
virtual HRESULT __stdcall getMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity); \
virtual HRESULT __stdcall getMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity); \
virtual HRESULT __stdcall setMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall setMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADefeaturingFilletFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::getMinimumValue(const CATBSTR & iRangeId, double & oValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMinimumValue(iRangeId,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::getMinimumLength(const CATBSTR & iRangeId, CATIALength *& oValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMinimumLength(iRangeId,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::getMinimumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMinimumAngle(iRangeId,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::getMaximumValue(const CATBSTR & iRangeId, double & oValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMaximumValue(iRangeId,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::getMaximumLength(const CATBSTR & iRangeId, CATIALength *& oValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMaximumLength(iRangeId,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::getMaximumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMaximumAngle(iRangeId,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::setMinimumValue(const CATBSTR & iRangeId, double iValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)setMinimumValue(iRangeId,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::setMaximumValue(const CATBSTR & iRangeId, double iValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)setMaximumValue(iRangeId,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::getMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMinimumActivity(iRangeId,oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::getMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)getMaximumActivity(iRangeId,oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::setMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)setMinimumActivity(iRangeId,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::setMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)setMaximumActivity(iRangeId,iValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADefeaturingFilletFilter,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADefeaturingFilletFilter(classe)    TIECATIADefeaturingFilletFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADefeaturingFilletFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADefeaturingFilletFilter, classe) \
 \
 \
CATImplementTIEMethods(CATIADefeaturingFilletFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADefeaturingFilletFilter, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADefeaturingFilletFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADefeaturingFilletFilter, classe) \
 \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMinimumValue(const CATBSTR & iRangeId, double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRangeId,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMinimumValue(iRangeId,oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRangeId,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMinimumLength(const CATBSTR & iRangeId, CATIALength *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRangeId,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMinimumLength(iRangeId,oValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRangeId,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMinimumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iRangeId,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMinimumAngle(iRangeId,oValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iRangeId,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMaximumValue(const CATBSTR & iRangeId, double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRangeId,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMaximumValue(iRangeId,oValue); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRangeId,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMaximumLength(const CATBSTR & iRangeId, CATIALength *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iRangeId,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMaximumLength(iRangeId,oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iRangeId,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMaximumAngle(const CATBSTR & iRangeId, CATIAAngle *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iRangeId,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMaximumAngle(iRangeId,oValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iRangeId,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::setMinimumValue(const CATBSTR & iRangeId, double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iRangeId,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->setMinimumValue(iRangeId,iValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iRangeId,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::setMaximumValue(const CATBSTR & iRangeId, double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iRangeId,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->setMaximumValue(iRangeId,iValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iRangeId,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iRangeId,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMinimumActivity(iRangeId,oActivity); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iRangeId,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::getMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iRangeId,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getMaximumActivity(iRangeId,oActivity); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iRangeId,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::setMinimumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRangeId,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->setMinimumActivity(iRangeId,iValue); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRangeId,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilletFilter##classe::setMaximumActivity(const CATBSTR & iRangeId, CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRangeId,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->setMaximumActivity(iRangeId,iValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRangeId,&iValue); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilletFilter##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilletFilter##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilletFilter##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilletFilter##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilletFilter##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADefeaturingFilletFilter(classe) \
 \
 \
declare_TIE_CATIADefeaturingFilletFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADefeaturingFilletFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADefeaturingFilletFilter,"CATIADefeaturingFilletFilter",CATIADefeaturingFilletFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADefeaturingFilletFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADefeaturingFilletFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADefeaturingFilletFilter##classe(classe::MetaObject(),CATIADefeaturingFilletFilter::MetaObject(),(void *)CreateTIECATIADefeaturingFilletFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADefeaturingFilletFilter(classe) \
 \
 \
declare_TIE_CATIADefeaturingFilletFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADefeaturingFilletFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADefeaturingFilletFilter,"CATIADefeaturingFilletFilter",CATIADefeaturingFilletFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADefeaturingFilletFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADefeaturingFilletFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADefeaturingFilletFilter##classe(classe::MetaObject(),CATIADefeaturingFilletFilter::MetaObject(),(void *)CreateTIECATIADefeaturingFilletFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADefeaturingFilletFilter(classe) TIE_CATIADefeaturingFilletFilter(classe)
#else
#define BOA_CATIADefeaturingFilletFilter(classe) CATImplementBOA(CATIADefeaturingFilletFilter, classe)
#endif

#endif
