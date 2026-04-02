#ifndef __TIE_CATIAIntersect
#define __TIE_CATIAIntersect

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAIntersect.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAIntersect */
#define declare_TIE_CATIAIntersect(classe) \
 \
 \
class TIECATIAIntersect##classe : public CATIAIntersect \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAIntersect, classe) \
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



#define ENVTIEdeclare_CATIAIntersect(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
virtual HRESULT __stdcall SetOperatedObject(CATIAReference * iReferenceObject); \
virtual HRESULT __stdcall SetOperatingVolume(CATIAReference * iReferenceObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAIntersect(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Body(CATIABody *& oBody) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)get_Body(oBody)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)SetOperatedObject(iReferenceObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)SetOperatingVolume(iReferenceObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAIntersect,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAIntersect(classe)    TIECATIAIntersect##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAIntersect(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAIntersect, classe) \
 \
 \
CATImplementTIEMethods(CATIAIntersect, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAIntersect, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAIntersect, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAIntersect, classe) \
 \
HRESULT __stdcall  TIECATIAIntersect##classe::get_Body(CATIABody *& oBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(oBody); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntersect##classe::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatedObject(iReferenceObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAIntersect##classe::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatingVolume(iReferenceObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntersect##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntersect##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntersect##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntersect##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAIntersect##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAIntersect(classe) \
 \
 \
declare_TIE_CATIAIntersect(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAIntersect##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAIntersect,"CATIAIntersect",CATIAIntersect::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAIntersect(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAIntersect, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAIntersect##classe(classe::MetaObject(),CATIAIntersect::MetaObject(),(void *)CreateTIECATIAIntersect##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAIntersect(classe) \
 \
 \
declare_TIE_CATIAIntersect(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAIntersect##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAIntersect,"CATIAIntersect",CATIAIntersect::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAIntersect(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAIntersect, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAIntersect##classe(classe::MetaObject(),CATIAIntersect::MetaObject(),(void *)CreateTIECATIAIntersect##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAIntersect(classe) TIE_CATIAIntersect(classe)
#else
#define BOA_CATIAIntersect(classe) CATImplementBOA(CATIAIntersect, classe)
#endif

#endif
