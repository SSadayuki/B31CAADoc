#ifndef __TIE_CATIAPspListOfLongs
#define __TIE_CATIAPspListOfLongs

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspListOfLongs.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspListOfLongs */
#define declare_TIE_CATIAPspListOfLongs(classe) \
 \
 \
class TIECATIAPspListOfLongs##classe : public CATIAPspListOfLongs \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspListOfLongs, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT __stdcall Item(CATLONG iIndex, CATLONG & oLong); \
      virtual HRESULT __stdcall Append(CATLONG iLong); \
      virtual HRESULT __stdcall RemoveByIndex(CATLONG iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspListOfLongs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT __stdcall Item(CATLONG iIndex, CATLONG & oLong); \
virtual HRESULT __stdcall Append(CATLONG iLong); \
virtual HRESULT __stdcall RemoveByIndex(CATLONG iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspListOfLongs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, CATLONG & oLong) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oLong)); \
} \
HRESULT __stdcall  ENVTIEName::Append(CATLONG iLong) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)Append(iLong)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveByIndex(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)RemoveByIndex(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspListOfLongs,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspListOfLongs(classe)    TIECATIAPspListOfLongs##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspListOfLongs(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspListOfLongs, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspListOfLongs, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspListOfLongs, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspListOfLongs, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspListOfLongs, classe) \
 \
HRESULT __stdcall  TIECATIAPspListOfLongs##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspListOfLongs##classe::Item(CATLONG iIndex, CATLONG & oLong) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oLong); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oLong); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oLong); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspListOfLongs##classe::Append(CATLONG iLong) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLong); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append(iLong); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLong); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspListOfLongs##classe::RemoveByIndex(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveByIndex(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfLongs##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfLongs##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfLongs##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfLongs##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspListOfLongs##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspListOfLongs(classe) \
 \
 \
declare_TIE_CATIAPspListOfLongs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspListOfLongs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspListOfLongs,"CATIAPspListOfLongs",CATIAPspListOfLongs::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspListOfLongs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspListOfLongs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspListOfLongs##classe(classe::MetaObject(),CATIAPspListOfLongs::MetaObject(),(void *)CreateTIECATIAPspListOfLongs##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspListOfLongs(classe) \
 \
 \
declare_TIE_CATIAPspListOfLongs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspListOfLongs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspListOfLongs,"CATIAPspListOfLongs",CATIAPspListOfLongs::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspListOfLongs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspListOfLongs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspListOfLongs##classe(classe::MetaObject(),CATIAPspListOfLongs::MetaObject(),(void *)CreateTIECATIAPspListOfLongs##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspListOfLongs(classe) TIE_CATIAPspListOfLongs(classe)
#else
#define BOA_CATIAPspListOfLongs(classe) CATImplementBOA(CATIAPspListOfLongs, classe)
#endif

#endif
