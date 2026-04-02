#ifndef __TIE_CATIAManufacturingToolMotion
#define __TIE_CATIAManufacturingToolMotion

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingToolMotion.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingToolMotion */
#define declare_TIE_CATIAManufacturingToolMotion(classe) \
 \
 \
class TIECATIAManufacturingToolMotion##classe : public CATIAManufacturingToolMotion \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingToolMotion, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
      virtual HRESULT __stdcall GetType(CATBSTR & oType); \
      virtual HRESULT __stdcall SetPPWord(const CATBSTR & iMessage); \
      virtual HRESULT __stdcall GetPPWord(CATBSTR & oMessage); \
      virtual HRESULT __stdcall SetGotoPtPointCoordinates(double iX, double iY, double iZ); \
      virtual HRESULT __stdcall GetGotoPtPointCoordinates(double & oX, double & oY, double & oZ); \
      virtual HRESULT __stdcall SetFeedrate(double iFeedrate, const CATBSTR & iFeedrateType); \
      virtual HRESULT __stdcall GetFeedrate(double & oFeedrate, CATBSTR & oFeedrateType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingToolMotion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
virtual HRESULT __stdcall GetType(CATBSTR & oType); \
virtual HRESULT __stdcall SetPPWord(const CATBSTR & iMessage); \
virtual HRESULT __stdcall GetPPWord(CATBSTR & oMessage); \
virtual HRESULT __stdcall SetGotoPtPointCoordinates(double iX, double iY, double iZ); \
virtual HRESULT __stdcall GetGotoPtPointCoordinates(double & oX, double & oY, double & oZ); \
virtual HRESULT __stdcall SetFeedrate(double iFeedrate, const CATBSTR & iFeedrateType); \
virtual HRESULT __stdcall GetFeedrate(double & oFeedrate, CATBSTR & oFeedrateType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingToolMotion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)SetGeometry(iGeometryType,iReference,iProduct,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetType(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)GetType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::SetPPWord(const CATBSTR & iMessage) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)SetPPWord(iMessage)); \
} \
HRESULT __stdcall  ENVTIEName::GetPPWord(CATBSTR & oMessage) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)GetPPWord(oMessage)); \
} \
HRESULT __stdcall  ENVTIEName::SetGotoPtPointCoordinates(double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)SetGotoPtPointCoordinates(iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetGotoPtPointCoordinates(double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)GetGotoPtPointCoordinates(oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetFeedrate(double iFeedrate, const CATBSTR & iFeedrateType) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)SetFeedrate(iFeedrate,iFeedrateType)); \
} \
HRESULT __stdcall  ENVTIEName::GetFeedrate(double & oFeedrate, CATBSTR & oFeedrateType) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)GetFeedrate(oFeedrate,oFeedrateType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingToolMotion,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingToolMotion(classe)    TIECATIAManufacturingToolMotion##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingToolMotion(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingToolMotion, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingToolMotion, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingToolMotion, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingToolMotion, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingToolMotion, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGeometryType,&iReference,&iProduct,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeometry(iGeometryType,iReference,iProduct,iPosition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGeometryType,&iReference,&iProduct,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::GetType(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(oType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::SetPPWord(const CATBSTR & iMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPPWord(iMessage); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iMessage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::GetPPWord(CATBSTR & oMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPPWord(oMessage); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMessage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::SetGotoPtPointCoordinates(double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGotoPtPointCoordinates(iX,iY,iZ); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::GetGotoPtPointCoordinates(double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGotoPtPointCoordinates(oX,oY,oZ); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::SetFeedrate(double iFeedrate, const CATBSTR & iFeedrateType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iFeedrate,&iFeedrateType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFeedrate(iFeedrate,iFeedrateType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iFeedrate,&iFeedrateType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolMotion##classe::GetFeedrate(double & oFeedrate, CATBSTR & oFeedrateType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oFeedrate,&oFeedrateType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeedrate(oFeedrate,oFeedrateType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oFeedrate,&oFeedrateType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolMotion##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolMotion##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolMotion##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolMotion##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolMotion##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingToolMotion(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolMotion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolMotion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolMotion,"CATIAManufacturingToolMotion",CATIAManufacturingToolMotion::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolMotion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingToolMotion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolMotion##classe(classe::MetaObject(),CATIAManufacturingToolMotion::MetaObject(),(void *)CreateTIECATIAManufacturingToolMotion##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingToolMotion(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolMotion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolMotion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolMotion,"CATIAManufacturingToolMotion",CATIAManufacturingToolMotion::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolMotion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingToolMotion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolMotion##classe(classe::MetaObject(),CATIAManufacturingToolMotion::MetaObject(),(void *)CreateTIECATIAManufacturingToolMotion##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingToolMotion(classe) TIE_CATIAManufacturingToolMotion(classe)
#else
#define BOA_CATIAManufacturingToolMotion(classe) CATImplementBOA(CATIAManufacturingToolMotion, classe)
#endif

#endif
