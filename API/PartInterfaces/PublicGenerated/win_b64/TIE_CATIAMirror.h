#ifndef __TIE_CATIAMirror
#define __TIE_CATIAMirror

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMirror.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMirror */
#define declare_TIE_CATIAMirror(classe) \
 \
 \
class TIECATIAMirror##classe : public CATIAMirror \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMirror, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_MirroringPlane(CATIAReference *& oReferenceMirroringPlane); \
      virtual HRESULT __stdcall put_MirroringPlane(CATIAReference * iMirroringPlane); \
      virtual HRESULT __stdcall get_MirroringObject(CATIABase *& oObject); \
      virtual HRESULT __stdcall AddObjectToMirror(CATIABase * iObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMirror(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_MirroringPlane(CATIAReference *& oReferenceMirroringPlane); \
virtual HRESULT __stdcall put_MirroringPlane(CATIAReference * iMirroringPlane); \
virtual HRESULT __stdcall get_MirroringObject(CATIABase *& oObject); \
virtual HRESULT __stdcall AddObjectToMirror(CATIABase * iObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMirror(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_MirroringPlane(CATIAReference *& oReferenceMirroringPlane) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)get_MirroringPlane(oReferenceMirroringPlane)); \
} \
HRESULT __stdcall  ENVTIEName::put_MirroringPlane(CATIAReference * iMirroringPlane) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)put_MirroringPlane(iMirroringPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_MirroringObject(CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)get_MirroringObject(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddObjectToMirror(CATIABase * iObject) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)AddObjectToMirror(iObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMirror,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMirror(classe)    TIECATIAMirror##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMirror(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMirror, classe) \
 \
 \
CATImplementTIEMethods(CATIAMirror, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMirror, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMirror, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMirror, classe) \
 \
HRESULT __stdcall  TIECATIAMirror##classe::get_MirroringPlane(CATIAReference *& oReferenceMirroringPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oReferenceMirroringPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MirroringPlane(oReferenceMirroringPlane); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oReferenceMirroringPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMirror##classe::put_MirroringPlane(CATIAReference * iMirroringPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMirroringPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MirroringPlane(iMirroringPlane); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMirroringPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMirror##classe::get_MirroringObject(CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MirroringObject(oObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMirror##classe::AddObjectToMirror(CATIABase * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObjectToMirror(iObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMirror##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMirror##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMirror##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMirror##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMirror##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMirror(classe) \
 \
 \
declare_TIE_CATIAMirror(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMirror##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMirror,"CATIAMirror",CATIAMirror::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMirror(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMirror, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMirror##classe(classe::MetaObject(),CATIAMirror::MetaObject(),(void *)CreateTIECATIAMirror##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMirror(classe) \
 \
 \
declare_TIE_CATIAMirror(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMirror##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMirror,"CATIAMirror",CATIAMirror::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMirror(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMirror, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMirror##classe(classe::MetaObject(),CATIAMirror::MetaObject(),(void *)CreateTIECATIAMirror##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMirror(classe) TIE_CATIAMirror(classe)
#else
#define BOA_CATIAMirror(classe) CATImplementBOA(CATIAMirror, classe)
#endif

#endif
