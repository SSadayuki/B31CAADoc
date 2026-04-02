#ifndef __TIE_CATIAAnalysisMeshLocalSpecification
#define __TIE_CATIAAnalysisMeshLocalSpecification

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisMeshLocalSpecification.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisMeshLocalSpecification */
#define declare_TIE_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
class TIECATIAAnalysisMeshLocalSpecification##classe : public CATIAAnalysisMeshLocalSpecification \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisMeshLocalSpecification, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall SetAttribute(const CATBSTR & iName, const CATVariant & iValue); \
      virtual HRESULT __stdcall AddSupportFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddSupportFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisMeshLocalSpecification(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall SetAttribute(const CATBSTR & iName, const CATVariant & iValue); \
virtual HRESULT __stdcall AddSupportFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport); \
virtual HRESULT __stdcall AddSupportFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisMeshLocalSpecification(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttribute(const CATBSTR & iName, const CATVariant & iValue) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)SetAttribute(iName,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)AddSupportFromReference(iName,iProduct,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)AddSupportFromPublication(iName,iProduct,iSupport)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshLocalSpecification,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisMeshLocalSpecification(classe)    TIECATIAAnalysisMeshLocalSpecification##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisMeshLocalSpecification, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisMeshLocalSpecification, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisMeshLocalSpecification, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisMeshLocalSpecification, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisMeshLocalSpecification, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::SetAttribute(const CATBSTR & iName, const CATVariant & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttribute(iName,iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::AddSupportFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName,&iProduct,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromReference(iName,iProduct,iSupport); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName,&iProduct,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::AddSupportFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iName,&iProduct,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromPublication(iName,iProduct,iSupport); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iName,&iProduct,&iSupport); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshLocalSpecification##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
declare_TIE_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisMeshLocalSpecification##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisMeshLocalSpecification,"CATIAAnalysisMeshLocalSpecification",CATIAAnalysisMeshLocalSpecification::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisMeshLocalSpecification, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisMeshLocalSpecification##classe(classe::MetaObject(),CATIAAnalysisMeshLocalSpecification::MetaObject(),(void *)CreateTIECATIAAnalysisMeshLocalSpecification##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
declare_TIE_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisMeshLocalSpecification##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisMeshLocalSpecification,"CATIAAnalysisMeshLocalSpecification",CATIAAnalysisMeshLocalSpecification::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisMeshLocalSpecification(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisMeshLocalSpecification, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisMeshLocalSpecification##classe(classe::MetaObject(),CATIAAnalysisMeshLocalSpecification::MetaObject(),(void *)CreateTIECATIAAnalysisMeshLocalSpecification##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisMeshLocalSpecification(classe) TIE_CATIAAnalysisMeshLocalSpecification(classe)
#else
#define BOA_CATIAAnalysisMeshLocalSpecification(classe) CATImplementBOA(CATIAAnalysisMeshLocalSpecification, classe)
#endif

#endif
