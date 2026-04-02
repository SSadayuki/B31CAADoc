#ifndef __TIE_CATIAStrMemberExtremity
#define __TIE_CATIAStrMemberExtremity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrMemberExtremity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrMemberExtremity */
#define declare_TIE_CATIAStrMemberExtremity(classe) \
 \
 \
class TIECATIAStrMemberExtremity##classe : public CATIAStrMemberExtremity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrMemberExtremity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Point(CATIAHybridShapePoint *& oPoint); \
      virtual HRESULT __stdcall get_Input(CATIAReference *& oOutput); \
      virtual HRESULT __stdcall put_Input(CATIAReference * iInput); \
      virtual HRESULT __stdcall get_Cutback(CATIAStrCutback *& oOutput); \
      virtual HRESULT __stdcall get_Offset(CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall AddOffset(double iOffset); \
      virtual HRESULT __stdcall ResetCutback(); \
      virtual HRESULT __stdcall SetExtremityFromCoordinates(const CATSafeArrayVariant & iCoordinates); \
      virtual HRESULT __stdcall get_AngleCut(double & oAngleCut); \
      virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrMemberExtremity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Point(CATIAHybridShapePoint *& oPoint); \
virtual HRESULT __stdcall get_Input(CATIAReference *& oOutput); \
virtual HRESULT __stdcall put_Input(CATIAReference * iInput); \
virtual HRESULT __stdcall get_Cutback(CATIAStrCutback *& oOutput); \
virtual HRESULT __stdcall get_Offset(CATIAParameter *& oParameter); \
virtual HRESULT __stdcall AddOffset(double iOffset); \
virtual HRESULT __stdcall ResetCutback(); \
virtual HRESULT __stdcall SetExtremityFromCoordinates(const CATSafeArrayVariant & iCoordinates); \
virtual HRESULT __stdcall get_AngleCut(double & oAngleCut); \
virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrMemberExtremity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Point(CATIAHybridShapePoint *& oPoint) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_Point(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Input(CATIAReference *& oOutput) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_Input(oOutput)); \
} \
HRESULT __stdcall  ENVTIEName::put_Input(CATIAReference * iInput) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)put_Input(iInput)); \
} \
HRESULT __stdcall  ENVTIEName::get_Cutback(CATIAStrCutback *& oOutput) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_Cutback(oOutput)); \
} \
HRESULT __stdcall  ENVTIEName::get_Offset(CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_Offset(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::AddOffset(double iOffset) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)AddOffset(iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::ResetCutback() \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)ResetCutback()); \
} \
HRESULT __stdcall  ENVTIEName::SetExtremityFromCoordinates(const CATSafeArrayVariant & iCoordinates) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)SetExtremityFromCoordinates(iCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleCut(double & oAngleCut) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_AngleCut(oAngleCut)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(oCoordinates)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrMemberExtremity,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrMemberExtremity(classe)    TIECATIAStrMemberExtremity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrMemberExtremity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrMemberExtremity, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrMemberExtremity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrMemberExtremity, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrMemberExtremity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrMemberExtremity, classe) \
 \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::get_Point(CATIAHybridShapePoint *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::get_Input(CATIAReference *& oOutput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oOutput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Input(oOutput); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oOutput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::put_Input(CATIAReference * iInput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iInput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Input(iInput); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iInput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::get_Cutback(CATIAStrCutback *& oOutput) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oOutput); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Cutback(oOutput); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oOutput); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::get_Offset(CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oParameter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::AddOffset(double iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddOffset(iOffset); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::ResetCutback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetCutback(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::SetExtremityFromCoordinates(const CATSafeArrayVariant & iCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExtremityFromCoordinates(iCoordinates); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::get_AngleCut(double & oAngleCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oAngleCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleCut(oAngleCut); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oAngleCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrMemberExtremity##classe::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(oCoordinates); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMemberExtremity##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMemberExtremity##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMemberExtremity##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMemberExtremity##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrMemberExtremity##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrMemberExtremity(classe) \
 \
 \
declare_TIE_CATIAStrMemberExtremity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrMemberExtremity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrMemberExtremity,"CATIAStrMemberExtremity",CATIAStrMemberExtremity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrMemberExtremity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrMemberExtremity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrMemberExtremity##classe(classe::MetaObject(),CATIAStrMemberExtremity::MetaObject(),(void *)CreateTIECATIAStrMemberExtremity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrMemberExtremity(classe) \
 \
 \
declare_TIE_CATIAStrMemberExtremity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrMemberExtremity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrMemberExtremity,"CATIAStrMemberExtremity",CATIAStrMemberExtremity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrMemberExtremity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrMemberExtremity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrMemberExtremity##classe(classe::MetaObject(),CATIAStrMemberExtremity::MetaObject(),(void *)CreateTIECATIAStrMemberExtremity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrMemberExtremity(classe) TIE_CATIAStrMemberExtremity(classe)
#else
#define BOA_CATIAStrMemberExtremity(classe) CATImplementBOA(CATIAStrMemberExtremity, classe)
#endif

#endif
