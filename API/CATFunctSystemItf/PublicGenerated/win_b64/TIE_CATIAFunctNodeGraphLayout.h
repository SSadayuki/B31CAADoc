#ifndef __TIE_CATIAFunctNodeGraphLayout
#define __TIE_CATIAFunctNodeGraphLayout

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctNodeGraphLayout.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctNodeGraphLayout */
#define declare_TIE_CATIAFunctNodeGraphLayout(classe) \
 \
 \
class TIECATIAFunctNodeGraphLayout##classe : public CATIAFunctNodeGraphLayout \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctNodeGraphLayout, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Height(double & oHeight); \
      virtual HRESULT __stdcall get_Width(double & oWidth); \
      virtual HRESULT __stdcall SetHeightAndWidth(double iHeight, double iWidth); \
      virtual HRESULT __stdcall Init(); \
      virtual HRESULT __stdcall Free(); \
      virtual HRESULT __stdcall get_FunctionalElement(CATIAFunctionalElement *& oElem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctNodeGraphLayout(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Height(double & oHeight); \
virtual HRESULT __stdcall get_Width(double & oWidth); \
virtual HRESULT __stdcall SetHeightAndWidth(double iHeight, double iWidth); \
virtual HRESULT __stdcall Init(); \
virtual HRESULT __stdcall Free(); \
virtual HRESULT __stdcall get_FunctionalElement(CATIAFunctionalElement *& oElem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctNodeGraphLayout(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Height(double & oHeight) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Width(double & oWidth) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)get_Width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::SetHeightAndWidth(double iHeight, double iWidth) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)SetHeightAndWidth(iHeight,iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::Init() \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)Init()); \
} \
HRESULT __stdcall  ENVTIEName::Free() \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)Free()); \
} \
HRESULT __stdcall  ENVTIEName::get_FunctionalElement(CATIAFunctionalElement *& oElem) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)get_FunctionalElement(oElem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctNodeGraphLayout,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctNodeGraphLayout(classe)    TIECATIAFunctNodeGraphLayout##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctNodeGraphLayout(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctNodeGraphLayout, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctNodeGraphLayout, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctNodeGraphLayout, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctNodeGraphLayout, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctNodeGraphLayout, classe) \
 \
HRESULT __stdcall  TIECATIAFunctNodeGraphLayout##classe::get_Height(double & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctNodeGraphLayout##classe::get_Width(double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Width(oWidth); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctNodeGraphLayout##classe::SetHeightAndWidth(double iHeight, double iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iHeight,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHeightAndWidth(iHeight,iWidth); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iHeight,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctNodeGraphLayout##classe::Init() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctNodeGraphLayout##classe::Free() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Free(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctNodeGraphLayout##classe::get_FunctionalElement(CATIAFunctionalElement *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FunctionalElement(oElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctNodeGraphLayout##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctNodeGraphLayout##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctNodeGraphLayout##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctNodeGraphLayout##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctNodeGraphLayout##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctNodeGraphLayout(classe) \
 \
 \
declare_TIE_CATIAFunctNodeGraphLayout(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctNodeGraphLayout##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctNodeGraphLayout,"CATIAFunctNodeGraphLayout",CATIAFunctNodeGraphLayout::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctNodeGraphLayout(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctNodeGraphLayout, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctNodeGraphLayout##classe(classe::MetaObject(),CATIAFunctNodeGraphLayout::MetaObject(),(void *)CreateTIECATIAFunctNodeGraphLayout##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctNodeGraphLayout(classe) \
 \
 \
declare_TIE_CATIAFunctNodeGraphLayout(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctNodeGraphLayout##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctNodeGraphLayout,"CATIAFunctNodeGraphLayout",CATIAFunctNodeGraphLayout::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctNodeGraphLayout(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctNodeGraphLayout, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctNodeGraphLayout##classe(classe::MetaObject(),CATIAFunctNodeGraphLayout::MetaObject(),(void *)CreateTIECATIAFunctNodeGraphLayout##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctNodeGraphLayout(classe) TIE_CATIAFunctNodeGraphLayout(classe)
#else
#define BOA_CATIAFunctNodeGraphLayout(classe) CATImplementBOA(CATIAFunctNodeGraphLayout, classe)
#endif

#endif
