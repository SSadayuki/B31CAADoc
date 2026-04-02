#ifndef __TIE_CATIAThickness
#define __TIE_CATIAThickness

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAThickness.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAThickness */
#define declare_TIE_CATIAThickness(classe) \
 \
 \
class TIECATIAThickness##classe : public CATIAThickness \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAThickness, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Offset(CATIALength *& oOffset); \
      virtual HRESULT __stdcall get_FacesToThicken(CATIAReferences *& oFacesToThicken); \
      virtual HRESULT __stdcall AddFaceToThicken(CATIAReference * iFaceToThicken); \
      virtual HRESULT __stdcall WithdrawFaceToThicken(CATIAReference * iFaceToWithdraw); \
      virtual HRESULT __stdcall AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken); \
      virtual HRESULT __stdcall RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove); \
      virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolumeSupport); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAThickness(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Offset(CATIALength *& oOffset); \
virtual HRESULT __stdcall get_FacesToThicken(CATIAReferences *& oFacesToThicken); \
virtual HRESULT __stdcall AddFaceToThicken(CATIAReference * iFaceToThicken); \
virtual HRESULT __stdcall WithdrawFaceToThicken(CATIAReference * iFaceToWithdraw); \
virtual HRESULT __stdcall AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken); \
virtual HRESULT __stdcall RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove); \
virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolumeSupport); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAThickness(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Offset(CATIALength *& oOffset) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)get_Offset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_FacesToThicken(CATIAReferences *& oFacesToThicken) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)get_FacesToThicken(oFacesToThicken)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceToThicken(CATIAReference * iFaceToThicken) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)AddFaceToThicken(iFaceToThicken)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawFaceToThicken(CATIAReference * iFaceToWithdraw) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)WithdrawFaceToThicken(iFaceToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)AddFaceWithDifferentThickness(iFaceToThicken)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)RemoveFaceWithDifferentThickness(iFaceToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::SetVolumeSupport(CATIAReference * iVolumeSupport) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)SetVolumeSupport(iVolumeSupport)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAThickness,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAThickness(classe)    TIECATIAThickness##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAThickness(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAThickness, classe) \
 \
 \
CATImplementTIEMethods(CATIAThickness, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAThickness, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAThickness, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAThickness, classe) \
 \
HRESULT __stdcall  TIECATIAThickness##classe::get_Offset(CATIALength *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oOffset); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickness##classe::get_FacesToThicken(CATIAReferences *& oFacesToThicken) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oFacesToThicken); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FacesToThicken(oFacesToThicken); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oFacesToThicken); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickness##classe::AddFaceToThicken(CATIAReference * iFaceToThicken) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFaceToThicken); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceToThicken(iFaceToThicken); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFaceToThicken); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickness##classe::WithdrawFaceToThicken(CATIAReference * iFaceToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFaceToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawFaceToThicken(iFaceToWithdraw); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFaceToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickness##classe::AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFaceToThicken); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceWithDifferentThickness(iFaceToThicken); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFaceToThicken); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickness##classe::RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFaceToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFaceWithDifferentThickness(iFaceToRemove); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFaceToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAThickness##classe::SetVolumeSupport(CATIAReference * iVolumeSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iVolumeSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVolumeSupport(iVolumeSupport); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iVolumeSupport); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickness##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickness##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickness##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickness##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAThickness##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAThickness(classe) \
 \
 \
declare_TIE_CATIAThickness(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAThickness##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAThickness,"CATIAThickness",CATIAThickness::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAThickness(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAThickness, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAThickness##classe(classe::MetaObject(),CATIAThickness::MetaObject(),(void *)CreateTIECATIAThickness##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAThickness(classe) \
 \
 \
declare_TIE_CATIAThickness(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAThickness##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAThickness,"CATIAThickness",CATIAThickness::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAThickness(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAThickness, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAThickness##classe(classe::MetaObject(),CATIAThickness::MetaObject(),(void *)CreateTIECATIAThickness##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAThickness(classe) TIE_CATIAThickness(classe)
#else
#define BOA_CATIAThickness(classe) CATImplementBOA(CATIAThickness, classe)
#endif

#endif
