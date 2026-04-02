#ifndef __TIE_CATIAFillet
#define __TIE_CATIAFillet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFillet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFillet */
#define declare_TIE_CATIAFillet(classe) \
 \
 \
class TIECATIAFillet##classe : public CATIAFillet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFillet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
      virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
      virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
      virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletBoundaryRelimitation(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletBoundaryRelimitation(iRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletTrimSupport(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletTrimSupport(iRelimitation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFillet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFillet(classe)    TIECATIAFillet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFillet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFillet, classe) \
 \
 \
CATImplementTIEMethods(CATIAFillet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFillet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFillet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFillet, classe) \
 \
HRESULT __stdcall  TIECATIAFillet##classe::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletBoundaryRelimitation(oRelimitation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFillet##classe::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletBoundaryRelimitation(iRelimitation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFillet##classe::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletTrimSupport(oRelimitation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFillet##classe::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletTrimSupport(iRelimitation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFillet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFillet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFillet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFillet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFillet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFillet(classe) \
 \
 \
declare_TIE_CATIAFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFillet,"CATIAFillet",CATIAFillet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFillet##classe(classe::MetaObject(),CATIAFillet::MetaObject(),(void *)CreateTIECATIAFillet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFillet(classe) \
 \
 \
declare_TIE_CATIAFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFillet,"CATIAFillet",CATIAFillet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFillet##classe(classe::MetaObject(),CATIAFillet::MetaObject(),(void *)CreateTIECATIAFillet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFillet(classe) TIE_CATIAFillet(classe)
#else
#define BOA_CATIAFillet(classe) CATImplementBOA(CATIAFillet, classe)
#endif

#endif
