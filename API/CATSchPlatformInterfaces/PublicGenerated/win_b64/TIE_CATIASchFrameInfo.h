#ifndef __TIE_CATIASchFrameInfo
#define __TIE_CATIASchFrameInfo

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchFrameInfo.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchFrameInfo */
#define declare_TIE_CATIASchFrameInfo(classe) \
 \
 \
class TIECATIASchFrameInfo##classe : public CATIASchFrameInfo \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchFrameInfo, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetOriginCornerCode(CATBSTR & oOriginCorner); \
      virtual HRESULT __stdcall SetOriginCornerCode(const CATBSTR & iOriginCorner); \
      virtual HRESULT __stdcall GetSpacingCode(CATBSTR & oSpacing, CAT_VARIANT_BOOL iBHoriz); \
      virtual HRESULT __stdcall SetSpacingCode(const CATBSTR & iSpacing, CAT_VARIANT_BOOL iBHoriz); \
      virtual HRESULT __stdcall GetLabelCode(CATBSTR & oLabel, CAT_VARIANT_BOOL iBHoriz); \
      virtual HRESULT __stdcall SetLabelCode(const CATBSTR & iLabel, CAT_VARIANT_BOOL iBHoriz); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchFrameInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetOriginCornerCode(CATBSTR & oOriginCorner); \
virtual HRESULT __stdcall SetOriginCornerCode(const CATBSTR & iOriginCorner); \
virtual HRESULT __stdcall GetSpacingCode(CATBSTR & oSpacing, CAT_VARIANT_BOOL iBHoriz); \
virtual HRESULT __stdcall SetSpacingCode(const CATBSTR & iSpacing, CAT_VARIANT_BOOL iBHoriz); \
virtual HRESULT __stdcall GetLabelCode(CATBSTR & oLabel, CAT_VARIANT_BOOL iBHoriz); \
virtual HRESULT __stdcall SetLabelCode(const CATBSTR & iLabel, CAT_VARIANT_BOOL iBHoriz); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchFrameInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetOriginCornerCode(CATBSTR & oOriginCorner) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)GetOriginCornerCode(oOriginCorner)); \
} \
HRESULT __stdcall  ENVTIEName::SetOriginCornerCode(const CATBSTR & iOriginCorner) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)SetOriginCornerCode(iOriginCorner)); \
} \
HRESULT __stdcall  ENVTIEName::GetSpacingCode(CATBSTR & oSpacing, CAT_VARIANT_BOOL iBHoriz) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)GetSpacingCode(oSpacing,iBHoriz)); \
} \
HRESULT __stdcall  ENVTIEName::SetSpacingCode(const CATBSTR & iSpacing, CAT_VARIANT_BOOL iBHoriz) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)SetSpacingCode(iSpacing,iBHoriz)); \
} \
HRESULT __stdcall  ENVTIEName::GetLabelCode(CATBSTR & oLabel, CAT_VARIANT_BOOL iBHoriz) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)GetLabelCode(oLabel,iBHoriz)); \
} \
HRESULT __stdcall  ENVTIEName::SetLabelCode(const CATBSTR & iLabel, CAT_VARIANT_BOOL iBHoriz) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)SetLabelCode(iLabel,iBHoriz)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchFrameInfo,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchFrameInfo(classe)    TIECATIASchFrameInfo##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchFrameInfo(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchFrameInfo, classe) \
 \
 \
CATImplementTIEMethods(CATIASchFrameInfo, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchFrameInfo, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchFrameInfo, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchFrameInfo, classe) \
 \
HRESULT __stdcall  TIECATIASchFrameInfo##classe::GetOriginCornerCode(CATBSTR & oOriginCorner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOriginCorner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOriginCornerCode(oOriginCorner); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOriginCorner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchFrameInfo##classe::SetOriginCornerCode(const CATBSTR & iOriginCorner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iOriginCorner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOriginCornerCode(iOriginCorner); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iOriginCorner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchFrameInfo##classe::GetSpacingCode(CATBSTR & oSpacing, CAT_VARIANT_BOOL iBHoriz) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSpacing,&iBHoriz); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpacingCode(oSpacing,iBHoriz); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSpacing,&iBHoriz); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchFrameInfo##classe::SetSpacingCode(const CATBSTR & iSpacing, CAT_VARIANT_BOOL iBHoriz) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSpacing,&iBHoriz); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSpacingCode(iSpacing,iBHoriz); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSpacing,&iBHoriz); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchFrameInfo##classe::GetLabelCode(CATBSTR & oLabel, CAT_VARIANT_BOOL iBHoriz) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLabel,&iBHoriz); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLabelCode(oLabel,iBHoriz); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLabel,&iBHoriz); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchFrameInfo##classe::SetLabelCode(const CATBSTR & iLabel, CAT_VARIANT_BOOL iBHoriz) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLabel,&iBHoriz); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLabelCode(iLabel,iBHoriz); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLabel,&iBHoriz); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchFrameInfo##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchFrameInfo##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchFrameInfo##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchFrameInfo##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchFrameInfo##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchFrameInfo(classe) \
 \
 \
declare_TIE_CATIASchFrameInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchFrameInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchFrameInfo,"CATIASchFrameInfo",CATIASchFrameInfo::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchFrameInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchFrameInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchFrameInfo##classe(classe::MetaObject(),CATIASchFrameInfo::MetaObject(),(void *)CreateTIECATIASchFrameInfo##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchFrameInfo(classe) \
 \
 \
declare_TIE_CATIASchFrameInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchFrameInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchFrameInfo,"CATIASchFrameInfo",CATIASchFrameInfo::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchFrameInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchFrameInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchFrameInfo##classe(classe::MetaObject(),CATIASchFrameInfo::MetaObject(),(void *)CreateTIECATIASchFrameInfo##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchFrameInfo(classe) TIE_CATIASchFrameInfo(classe)
#else
#define BOA_CATIASchFrameInfo(classe) CATImplementBOA(CATIASchFrameInfo, classe)
#endif

#endif
