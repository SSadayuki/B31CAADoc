#ifndef __TIE_CATIATritangentFillet
#define __TIE_CATIATritangentFillet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATritangentFillet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATritangentFillet */
#define declare_TIE_CATIATritangentFillet(classe) \
 \
 \
class TIECATIATritangentFillet##classe : public CATIATritangentFillet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATritangentFillet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstFace(CATIAReference *& oFirstFace); \
      virtual HRESULT __stdcall put_FirstFace(CATIAReference * iFirstFace); \
      virtual HRESULT __stdcall get_SecondFace(CATIAReference *& oSecondFace); \
      virtual HRESULT __stdcall put_SecondFace(CATIAReference * iSecondFace); \
      virtual HRESULT __stdcall get_FaceToRemove(CATIAReference *& oFaceToRemove); \
      virtual HRESULT __stdcall put_FaceToRemove(CATIAReference * iFaceToRemove); \
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



#define ENVTIEdeclare_CATIATritangentFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstFace(CATIAReference *& oFirstFace); \
virtual HRESULT __stdcall put_FirstFace(CATIAReference * iFirstFace); \
virtual HRESULT __stdcall get_SecondFace(CATIAReference *& oSecondFace); \
virtual HRESULT __stdcall put_SecondFace(CATIAReference * iSecondFace); \
virtual HRESULT __stdcall get_FaceToRemove(CATIAReference *& oFaceToRemove); \
virtual HRESULT __stdcall put_FaceToRemove(CATIAReference * iFaceToRemove); \
virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATritangentFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstFace(CATIAReference *& oFirstFace) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_FirstFace(oFirstFace)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstFace(CATIAReference * iFirstFace) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)put_FirstFace(iFirstFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondFace(CATIAReference *& oSecondFace) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_SecondFace(oSecondFace)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondFace(CATIAReference * iSecondFace) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)put_SecondFace(iSecondFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_FaceToRemove(CATIAReference *& oFaceToRemove) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_FaceToRemove(oFaceToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::put_FaceToRemove(CATIAReference * iFaceToRemove) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)put_FaceToRemove(iFaceToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletBoundaryRelimitation(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletBoundaryRelimitation(iRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletTrimSupport(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletTrimSupport(iRelimitation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATritangentFillet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATritangentFillet(classe)    TIECATIATritangentFillet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATritangentFillet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATritangentFillet, classe) \
 \
 \
CATImplementTIEMethods(CATIATritangentFillet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATritangentFillet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATritangentFillet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATritangentFillet, classe) \
 \
HRESULT __stdcall  TIECATIATritangentFillet##classe::get_FirstFace(CATIAReference *& oFirstFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFirstFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstFace(oFirstFace); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFirstFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::put_FirstFace(CATIAReference * iFirstFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFirstFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstFace(iFirstFace); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFirstFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::get_SecondFace(CATIAReference *& oSecondFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSecondFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondFace(oSecondFace); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSecondFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::put_SecondFace(CATIAReference * iSecondFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSecondFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondFace(iSecondFace); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSecondFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::get_FaceToRemove(CATIAReference *& oFaceToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oFaceToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FaceToRemove(oFaceToRemove); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oFaceToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::put_FaceToRemove(CATIAReference * iFaceToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFaceToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FaceToRemove(iFaceToRemove); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFaceToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletBoundaryRelimitation(oRelimitation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletBoundaryRelimitation(iRelimitation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletTrimSupport(oRelimitation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATritangentFillet##classe::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletTrimSupport(iRelimitation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATritangentFillet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATritangentFillet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATritangentFillet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATritangentFillet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATritangentFillet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATritangentFillet(classe) \
 \
 \
declare_TIE_CATIATritangentFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATritangentFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATritangentFillet,"CATIATritangentFillet",CATIATritangentFillet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATritangentFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATritangentFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATritangentFillet##classe(classe::MetaObject(),CATIATritangentFillet::MetaObject(),(void *)CreateTIECATIATritangentFillet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATritangentFillet(classe) \
 \
 \
declare_TIE_CATIATritangentFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATritangentFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATritangentFillet,"CATIATritangentFillet",CATIATritangentFillet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATritangentFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATritangentFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATritangentFillet##classe(classe::MetaObject(),CATIATritangentFillet::MetaObject(),(void *)CreateTIECATIATritangentFillet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATritangentFillet(classe) TIE_CATIATritangentFillet(classe)
#else
#define BOA_CATIATritangentFillet(classe) CATImplementBOA(CATIATritangentFillet, classe)
#endif

#endif
