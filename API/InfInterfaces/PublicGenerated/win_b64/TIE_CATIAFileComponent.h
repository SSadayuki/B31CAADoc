#ifndef __TIE_CATIAFileComponent
#define __TIE_CATIAFileComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFileComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFileComponent */
#define declare_TIE_CATIAFileComponent(classe) \
 \
 \
class TIECATIAFileComponent##classe : public CATIAFileComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFileComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Path(CATBSTR & oPath); \
      virtual HRESULT __stdcall get_ParentFolder(CATIAFolder *& oParentFolder); \
      virtual HRESULT __stdcall put_ParentFolder(CATIAFolder * iParentFolder); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFileComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Path(CATBSTR & oPath); \
virtual HRESULT __stdcall get_ParentFolder(CATIAFolder *& oParentFolder); \
virtual HRESULT __stdcall put_ParentFolder(CATIAFolder * iParentFolder); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFileComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Path(CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)get_Path(oPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParentFolder(CATIAFolder *& oParentFolder) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)get_ParentFolder(oParentFolder)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParentFolder(CATIAFolder * iParentFolder) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)put_ParentFolder(iParentFolder)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFileComponent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFileComponent(classe)    TIECATIAFileComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFileComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFileComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIAFileComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFileComponent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFileComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFileComponent, classe) \
 \
HRESULT __stdcall  TIECATIAFileComponent##classe::get_Path(CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Path(oPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileComponent##classe::get_ParentFolder(CATIAFolder *& oParentFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oParentFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParentFolder(oParentFolder); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oParentFolder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileComponent##classe::put_ParentFolder(CATIAFolder * iParentFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iParentFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParentFolder(iParentFolder); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iParentFolder); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileComponent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileComponent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileComponent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileComponent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileComponent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFileComponent(classe) \
 \
 \
declare_TIE_CATIAFileComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFileComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFileComponent,"CATIAFileComponent",CATIAFileComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFileComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFileComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFileComponent##classe(classe::MetaObject(),CATIAFileComponent::MetaObject(),(void *)CreateTIECATIAFileComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFileComponent(classe) \
 \
 \
declare_TIE_CATIAFileComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFileComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFileComponent,"CATIAFileComponent",CATIAFileComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFileComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFileComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFileComponent##classe(classe::MetaObject(),CATIAFileComponent::MetaObject(),(void *)CreateTIECATIAFileComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFileComponent(classe) TIE_CATIAFileComponent(classe)
#else
#define BOA_CATIAFileComponent(classe) CATImplementBOA(CATIAFileComponent, classe)
#endif

#endif
