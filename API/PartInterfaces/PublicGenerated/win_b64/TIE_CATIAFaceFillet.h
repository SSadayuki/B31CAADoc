#ifndef __TIE_CATIAFaceFillet
#define __TIE_CATIAFaceFillet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFaceFillet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFaceFillet */
#define declare_TIE_CATIAFaceFillet(classe) \
 \
 \
class TIECATIAFaceFillet##classe : public CATIAFaceFillet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFaceFillet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall get_FirstFace(CATIAReference *& oFirstFace); \
      virtual HRESULT __stdcall put_FirstFace(CATIAReference * iFirstFace); \
      virtual HRESULT __stdcall get_SecondFace(CATIAReference *& oSecondFace); \
      virtual HRESULT __stdcall put_SecondFace(CATIAReference * iSecondFace); \
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



#define ENVTIEdeclare_CATIAFaceFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
virtual HRESULT __stdcall get_FirstFace(CATIAReference *& oFirstFace); \
virtual HRESULT __stdcall put_FirstFace(CATIAReference * iFirstFace); \
virtual HRESULT __stdcall get_SecondFace(CATIAReference *& oSecondFace); \
virtual HRESULT __stdcall put_SecondFace(CATIAReference * iSecondFace); \
virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFaceFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstFace(CATIAReference *& oFirstFace) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_FirstFace(oFirstFace)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstFace(CATIAReference * iFirstFace) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)put_FirstFace(iFirstFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondFace(CATIAReference *& oSecondFace) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_SecondFace(oSecondFace)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondFace(CATIAReference * iSecondFace) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)put_SecondFace(iSecondFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletBoundaryRelimitation(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletBoundaryRelimitation(iRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletTrimSupport(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletTrimSupport(iRelimitation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFaceFillet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFaceFillet(classe)    TIECATIAFaceFillet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFaceFillet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFaceFillet, classe) \
 \
 \
CATImplementTIEMethods(CATIAFaceFillet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFaceFillet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFaceFillet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFaceFillet, classe) \
 \
HRESULT __stdcall  TIECATIAFaceFillet##classe::get_Radius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::get_FirstFace(CATIAReference *& oFirstFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oFirstFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstFace(oFirstFace); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oFirstFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::put_FirstFace(CATIAReference * iFirstFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFirstFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstFace(iFirstFace); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFirstFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::get_SecondFace(CATIAReference *& oSecondFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSecondFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondFace(oSecondFace); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSecondFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::put_SecondFace(CATIAReference * iSecondFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSecondFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondFace(iSecondFace); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSecondFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletBoundaryRelimitation(oRelimitation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletBoundaryRelimitation(iRelimitation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletTrimSupport(oRelimitation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFaceFillet##classe::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletTrimSupport(iRelimitation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFaceFillet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFaceFillet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFaceFillet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFaceFillet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFaceFillet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFaceFillet(classe) \
 \
 \
declare_TIE_CATIAFaceFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFaceFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFaceFillet,"CATIAFaceFillet",CATIAFaceFillet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFaceFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFaceFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFaceFillet##classe(classe::MetaObject(),CATIAFaceFillet::MetaObject(),(void *)CreateTIECATIAFaceFillet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFaceFillet(classe) \
 \
 \
declare_TIE_CATIAFaceFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFaceFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFaceFillet,"CATIAFaceFillet",CATIAFaceFillet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFaceFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFaceFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFaceFillet##classe(classe::MetaObject(),CATIAFaceFillet::MetaObject(),(void *)CreateTIECATIAFaceFillet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFaceFillet(classe) TIE_CATIAFaceFillet(classe)
#else
#define BOA_CATIAFaceFillet(classe) CATImplementBOA(CATIAFaceFillet, classe)
#endif

#endif
