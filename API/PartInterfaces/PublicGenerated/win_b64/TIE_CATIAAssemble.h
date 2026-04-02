#ifndef __TIE_CATIAAssemble
#define __TIE_CATIAAssemble

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAssemble.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemble */
#define declare_TIE_CATIAAssemble(classe) \
 \
 \
class TIECATIAAssemble##classe : public CATIAAssemble \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemble, classe) \
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



#define ENVTIEdeclare_CATIAAssemble(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
virtual HRESULT __stdcall SetOperatedObject(CATIAReference * iReferenceObject); \
virtual HRESULT __stdcall SetOperatingVolume(CATIAReference * iReferenceObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAssemble(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Body(CATIABody *& oBody) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)get_Body(oBody)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)SetOperatedObject(iReferenceObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)SetOperatingVolume(iReferenceObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAssemble,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemble(classe)    TIECATIAAssemble##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemble(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemble, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemble, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemble, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemble, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemble, classe) \
 \
HRESULT __stdcall  TIECATIAAssemble##classe::get_Body(CATIABody *& oBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(oBody); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemble##classe::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatedObject(iReferenceObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemble##classe::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatingVolume(iReferenceObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemble##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemble##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemble##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemble##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemble##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemble(classe) \
 \
 \
declare_TIE_CATIAAssemble(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemble##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemble,"CATIAAssemble",CATIAAssemble::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemble(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemble, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemble##classe(classe::MetaObject(),CATIAAssemble::MetaObject(),(void *)CreateTIECATIAAssemble##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemble(classe) \
 \
 \
declare_TIE_CATIAAssemble(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemble##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemble,"CATIAAssemble",CATIAAssemble::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemble(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemble, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemble##classe(classe::MetaObject(),CATIAAssemble::MetaObject(),(void *)CreateTIECATIAAssemble##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemble(classe) TIE_CATIAAssemble(classe)
#else
#define BOA_CATIAAssemble(classe) CATImplementBOA(CATIAAssemble, classe)
#endif

#endif
