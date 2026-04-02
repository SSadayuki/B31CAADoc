#ifndef __TIE_CATIAPspListOfDoubles
#define __TIE_CATIAPspListOfDoubles

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspListOfDoubles.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspListOfDoubles */
#define declare_TIE_CATIAPspListOfDoubles(classe) \
 \
 \
class TIECATIAPspListOfDoubles##classe : public CATIAPspListOfDoubles \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspListOfDoubles, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT __stdcall Item(CATLONG iIndex, double & oDouble); \
      virtual HRESULT __stdcall Append(double iDouble); \
      virtual HRESULT __stdcall RemoveByIndex(CATLONG iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspListOfDoubles(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT __stdcall Item(CATLONG iIndex, double & oDouble); \
virtual HRESULT __stdcall Append(double iDouble); \
virtual HRESULT __stdcall RemoveByIndex(CATLONG iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspListOfDoubles(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, double & oDouble) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oDouble)); \
} \
HRESULT __stdcall  ENVTIEName::Append(double iDouble) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)Append(iDouble)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveByIndex(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)RemoveByIndex(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspListOfDoubles,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspListOfDoubles(classe)    TIECATIAPspListOfDoubles##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspListOfDoubles(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspListOfDoubles, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspListOfDoubles, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspListOfDoubles, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspListOfDoubles, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspListOfDoubles, classe) \
 \
HRESULT __stdcall  TIECATIAPspListOfDoubles##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspListOfDoubles##classe::Item(CATLONG iIndex, double & oDouble) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oDouble); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oDouble); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oDouble); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspListOfDoubles##classe::Append(double iDouble) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iDouble); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append(iDouble); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iDouble); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspListOfDoubles##classe::RemoveByIndex(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveByIndex(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfDoubles##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfDoubles##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfDoubles##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfDoubles##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfDoubles##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspListOfDoubles(classe) \
 \
 \
declare_TIE_CATIAPspListOfDoubles(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspListOfDoubles##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspListOfDoubles,"CATIAPspListOfDoubles",CATIAPspListOfDoubles::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspListOfDoubles(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspListOfDoubles, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspListOfDoubles##classe(classe::MetaObject(),CATIAPspListOfDoubles::MetaObject(),(void *)CreateTIECATIAPspListOfDoubles##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspListOfDoubles(classe) \
 \
 \
declare_TIE_CATIAPspListOfDoubles(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspListOfDoubles##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspListOfDoubles,"CATIAPspListOfDoubles",CATIAPspListOfDoubles::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspListOfDoubles(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspListOfDoubles, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspListOfDoubles##classe(classe::MetaObject(),CATIAPspListOfDoubles::MetaObject(),(void *)CreateTIECATIAPspListOfDoubles##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspListOfDoubles(classe) TIE_CATIAPspListOfDoubles(classe)
#else
#define BOA_CATIAPspListOfDoubles(classe) CATImplementBOA(CATIAPspListOfDoubles, classe)
#endif

#endif
