#ifndef __TIE_CATIAManufacturingPattern
#define __TIE_CATIAManufacturingPattern

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingPattern.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingPattern */
#define declare_TIE_CATIAManufacturingPattern(classe) \
 \
 \
class TIECATIAManufacturingPattern##classe : public CATIAManufacturingPattern \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingPattern, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetItemToCopy(CATIABase * iItem); \
      virtual HRESULT __stdcall AddPosition(CATIABase * iPosition, CATIAProduct * iProduct, short iNotify); \
      virtual HRESULT __stdcall GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall DeactivatePoint(short iPointNumber); \
      virtual HRESULT __stdcall ActivatePoint(short iPointNumber); \
      virtual HRESULT __stdcall AddPartSurface(CATIABase * iPartSurface, CATIAProduct * iProduct, short iNotify); \
      virtual HRESULT __stdcall RemovePartSurfaces(); \
      virtual HRESULT __stdcall GetNumbers(CATSafeArrayVariant *& oNumbers); \
      virtual HRESULT __stdcall StartPoint(short iPointNumber); \
      virtual HRESULT __stdcall Reverse(); \
      virtual HRESULT __stdcall SetLocalToolAxis(short iPointNumber, double iX, double iY, double iZ); \
      virtual HRESULT __stdcall GetLocalToolAxis(short iPointNumber, double & oX, double & oY, double & oZ); \
      virtual HRESULT __stdcall get_ToolAxisStrategy(CATBSTR & oToolAxisStrategy); \
      virtual HRESULT __stdcall put_ToolAxisStrategy(const CATBSTR & iToolAxisStrategy); \
      virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetItemToCopy(CATIABase * iItem); \
virtual HRESULT __stdcall AddPosition(CATIABase * iPosition, CATIAProduct * iProduct, short iNotify); \
virtual HRESULT __stdcall GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall DeactivatePoint(short iPointNumber); \
virtual HRESULT __stdcall ActivatePoint(short iPointNumber); \
virtual HRESULT __stdcall AddPartSurface(CATIABase * iPartSurface, CATIAProduct * iProduct, short iNotify); \
virtual HRESULT __stdcall RemovePartSurfaces(); \
virtual HRESULT __stdcall GetNumbers(CATSafeArrayVariant *& oNumbers); \
virtual HRESULT __stdcall StartPoint(short iPointNumber); \
virtual HRESULT __stdcall Reverse(); \
virtual HRESULT __stdcall SetLocalToolAxis(short iPointNumber, double iX, double iY, double iZ); \
virtual HRESULT __stdcall GetLocalToolAxis(short iPointNumber, double & oX, double & oY, double & oZ); \
virtual HRESULT __stdcall get_ToolAxisStrategy(CATBSTR & oToolAxisStrategy); \
virtual HRESULT __stdcall put_ToolAxisStrategy(const CATBSTR & iToolAxisStrategy); \
virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingPattern(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetItemToCopy(CATIABase * iItem) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)SetItemToCopy(iItem)); \
} \
HRESULT __stdcall  ENVTIEName::AddPosition(CATIABase * iPosition, CATIAProduct * iProduct, short iNotify) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)AddPosition(iPosition,iProduct,iNotify)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)GetAnAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::DeactivatePoint(short iPointNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)DeactivatePoint(iPointNumber)); \
} \
HRESULT __stdcall  ENVTIEName::ActivatePoint(short iPointNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)ActivatePoint(iPointNumber)); \
} \
HRESULT __stdcall  ENVTIEName::AddPartSurface(CATIABase * iPartSurface, CATIAProduct * iProduct, short iNotify) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)AddPartSurface(iPartSurface,iProduct,iNotify)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePartSurfaces() \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)RemovePartSurfaces()); \
} \
HRESULT __stdcall  ENVTIEName::GetNumbers(CATSafeArrayVariant *& oNumbers) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)GetNumbers(oNumbers)); \
} \
HRESULT __stdcall  ENVTIEName::StartPoint(short iPointNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)StartPoint(iPointNumber)); \
} \
HRESULT __stdcall  ENVTIEName::Reverse() \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)Reverse()); \
} \
HRESULT __stdcall  ENVTIEName::SetLocalToolAxis(short iPointNumber, double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)SetLocalToolAxis(iPointNumber,iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetLocalToolAxis(short iPointNumber, double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)GetLocalToolAxis(iPointNumber,oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_ToolAxisStrategy(CATBSTR & oToolAxisStrategy) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)get_ToolAxisStrategy(oToolAxisStrategy)); \
} \
HRESULT __stdcall  ENVTIEName::put_ToolAxisStrategy(const CATBSTR & iToolAxisStrategy) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)put_ToolAxisStrategy(iToolAxisStrategy)); \
} \
HRESULT __stdcall  ENVTIEName::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)GetAGeometricAttribute(iAttribut,oAttributCke)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingPattern,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingPattern(classe)    TIECATIAManufacturingPattern##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingPattern(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingPattern, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingPattern, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingPattern, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingPattern, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingPattern, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::SetItemToCopy(CATIABase * iItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetItemToCopy(iItem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::AddPosition(CATIABase * iPosition, CATIAProduct * iProduct, short iNotify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPosition,&iProduct,&iNotify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPosition(iPosition,iProduct,iNotify); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPosition,&iProduct,&iNotify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::DeactivatePoint(short iPointNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPointNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeactivatePoint(iPointNumber); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPointNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::ActivatePoint(short iPointNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPointNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivatePoint(iPointNumber); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPointNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::AddPartSurface(CATIABase * iPartSurface, CATIAProduct * iProduct, short iNotify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPartSurface,&iProduct,&iNotify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPartSurface(iPartSurface,iProduct,iNotify); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPartSurface,&iProduct,&iNotify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::RemovePartSurfaces() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePartSurfaces(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::GetNumbers(CATSafeArrayVariant *& oNumbers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNumbers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumbers(oNumbers); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNumbers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::StartPoint(short iPointNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPointNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartPoint(iPointNumber); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPointNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::Reverse() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reverse(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::SetLocalToolAxis(short iPointNumber, double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iPointNumber,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLocalToolAxis(iPointNumber,iX,iY,iZ); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iPointNumber,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::GetLocalToolAxis(short iPointNumber, double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iPointNumber,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLocalToolAxis(iPointNumber,oX,oY,oZ); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iPointNumber,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::get_ToolAxisStrategy(CATBSTR & oToolAxisStrategy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oToolAxisStrategy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToolAxisStrategy(oToolAxisStrategy); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oToolAxisStrategy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::put_ToolAxisStrategy(const CATBSTR & iToolAxisStrategy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iToolAxisStrategy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ToolAxisStrategy(iToolAxisStrategy); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iToolAxisStrategy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPattern##classe::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAGeometricAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPattern##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPattern##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPattern##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPattern##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPattern##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingPattern(classe) \
 \
 \
declare_TIE_CATIAManufacturingPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPattern,"CATIAManufacturingPattern",CATIAManufacturingPattern::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPattern##classe(classe::MetaObject(),CATIAManufacturingPattern::MetaObject(),(void *)CreateTIECATIAManufacturingPattern##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingPattern(classe) \
 \
 \
declare_TIE_CATIAManufacturingPattern(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPattern##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPattern,"CATIAManufacturingPattern",CATIAManufacturingPattern::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPattern(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingPattern, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPattern##classe(classe::MetaObject(),CATIAManufacturingPattern::MetaObject(),(void *)CreateTIECATIAManufacturingPattern##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingPattern(classe) TIE_CATIAManufacturingPattern(classe)
#else
#define BOA_CATIAManufacturingPattern(classe) CATImplementBOA(CATIAManufacturingPattern, classe)
#endif

#endif
