#ifndef __TIE_CATIASchListOfLongs
#define __TIE_CATIASchListOfLongs

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchListOfLongs.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchListOfLongs */
#define declare_TIE_CATIASchListOfLongs(classe) \
 \
 \
class TIECATIASchListOfLongs##classe : public CATIASchListOfLongs \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchListOfLongs, classe) \
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



#define ENVTIEdeclare_CATIASchListOfLongs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT __stdcall Item(CATLONG iIndex, CATLONG & oLong); \
virtual HRESULT __stdcall Append(CATLONG iLong); \
virtual HRESULT __stdcall RemoveByIndex(CATLONG iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchListOfLongs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::Item(CATLONG iIndex, CATLONG & oLong) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oLong)); \
} \
HRESULT __stdcall  ENVTIEName::Append(CATLONG iLong) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)Append(iLong)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveByIndex(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)RemoveByIndex(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchListOfLongs,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchListOfLongs(classe)    TIECATIASchListOfLongs##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchListOfLongs(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchListOfLongs, classe) \
 \
 \
CATImplementTIEMethods(CATIASchListOfLongs, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchListOfLongs, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchListOfLongs, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchListOfLongs, classe) \
 \
HRESULT __stdcall  TIECATIASchListOfLongs##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchListOfLongs##classe::Item(CATLONG iIndex, CATLONG & oLong) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oLong); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oLong); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oLong); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchListOfLongs##classe::Append(CATLONG iLong) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLong); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append(iLong); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLong); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchListOfLongs##classe::RemoveByIndex(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveByIndex(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfLongs##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfLongs##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfLongs##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfLongs##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchListOfLongs##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchListOfLongs(classe) \
 \
 \
declare_TIE_CATIASchListOfLongs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchListOfLongs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchListOfLongs,"CATIASchListOfLongs",CATIASchListOfLongs::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchListOfLongs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchListOfLongs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchListOfLongs##classe(classe::MetaObject(),CATIASchListOfLongs::MetaObject(),(void *)CreateTIECATIASchListOfLongs##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchListOfLongs(classe) \
 \
 \
declare_TIE_CATIASchListOfLongs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchListOfLongs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchListOfLongs,"CATIASchListOfLongs",CATIASchListOfLongs::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchListOfLongs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchListOfLongs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchListOfLongs##classe(classe::MetaObject(),CATIASchListOfLongs::MetaObject(),(void *)CreateTIECATIASchListOfLongs##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchListOfLongs(classe) TIE_CATIASchListOfLongs(classe)
#else
#define BOA_CATIASchListOfLongs(classe) CATImplementBOA(CATIASchListOfLongs, classe)
#endif

#endif
