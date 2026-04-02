#ifndef __TIE_CATIAAdd
#define __TIE_CATIAAdd

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAdd.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAdd */
#define declare_TIE_CATIAAdd(classe) \
 \
 \
class TIECATIAAdd##classe : public CATIAAdd \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAdd, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
      virtual HRESULT __stdcall SetOperatedObject(CATIAReference * iReferenceObject); \
      virtual HRESULT __stdcall SetOperatingVolume(CATIAReference * iReferenceObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAdd(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
virtual HRESULT __stdcall SetOperatedObject(CATIAReference * iReferenceObject); \
virtual HRESULT __stdcall SetOperatingVolume(CATIAReference * iReferenceObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAdd(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Body(CATIABody *& oBody) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)get_Body(oBody)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)SetOperatedObject(iReferenceObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)SetOperatingVolume(iReferenceObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAdd,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAdd(classe)    TIECATIAAdd##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAdd(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAdd, classe) \
 \
 \
CATImplementTIEMethods(CATIAAdd, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAdd, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAdd, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAdd, classe) \
 \
HRESULT __stdcall  TIECATIAAdd##classe::get_Body(CATIABody *& oBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(oBody); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAdd##classe::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatedObject(iReferenceObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAdd##classe::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatingVolume(iReferenceObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAdd##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAdd##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAdd##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAdd##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAdd##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAdd(classe) \
 \
 \
declare_TIE_CATIAAdd(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAdd##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAdd,"CATIAAdd",CATIAAdd::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAdd(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAdd, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAdd##classe(classe::MetaObject(),CATIAAdd::MetaObject(),(void *)CreateTIECATIAAdd##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAdd(classe) \
 \
 \
declare_TIE_CATIAAdd(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAdd##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAdd,"CATIAAdd",CATIAAdd::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAdd(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAdd, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAdd##classe(classe::MetaObject(),CATIAAdd::MetaObject(),(void *)CreateTIECATIAAdd##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAdd(classe) TIE_CATIAAdd(classe)
#else
#define BOA_CATIAAdd(classe) CATImplementBOA(CATIAAdd, classe)
#endif

#endif
