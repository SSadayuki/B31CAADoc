#ifndef __TIE_CATIAShuttle
#define __TIE_CATIAShuttle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAShuttle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAShuttle */
#define declare_TIE_CATIAShuttle(classe) \
 \
 \
class TIECATIAShuttle##classe : public CATIAShuttle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAShuttle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Group(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall put_Group(CATIAGroup * iGroup); \
      virtual HRESULT __stdcall get_Reference(CATBaseDispatch *& oReference); \
      virtual HRESULT __stdcall put_Reference(CATBaseDispatch * iReference); \
      virtual HRESULT __stdcall get_SubShuttles(CATIAShuttles *& oSubShuttles); \
      virtual HRESULT __stdcall get_AngleValidation(CAT_VARIANT_BOOL & oValidation); \
      virtual HRESULT __stdcall put_AngleValidation(CAT_VARIANT_BOOL iValidation); \
      virtual HRESULT __stdcall get_AngleLimit(double & oAngle); \
      virtual HRESULT __stdcall put_AngleLimit(double iAngle); \
      virtual HRESULT __stdcall get_Vector(CatShuttleVector & oVector); \
      virtual HRESULT __stdcall put_Vector(CatShuttleVector iVector); \
      virtual HRESULT __stdcall get_MoveMode(CatShuttleMoveMode & oMoveMode); \
      virtual HRESULT __stdcall put_MoveMode(CatShuttleMoveMode iMoveMode); \
      virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
      virtual HRESULT __stdcall get_Position(CATIAPosition *& oPosition); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAShuttle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Group(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall put_Group(CATIAGroup * iGroup); \
virtual HRESULT __stdcall get_Reference(CATBaseDispatch *& oReference); \
virtual HRESULT __stdcall put_Reference(CATBaseDispatch * iReference); \
virtual HRESULT __stdcall get_SubShuttles(CATIAShuttles *& oSubShuttles); \
virtual HRESULT __stdcall get_AngleValidation(CAT_VARIANT_BOOL & oValidation); \
virtual HRESULT __stdcall put_AngleValidation(CAT_VARIANT_BOOL iValidation); \
virtual HRESULT __stdcall get_AngleLimit(double & oAngle); \
virtual HRESULT __stdcall put_AngleLimit(double iAngle); \
virtual HRESULT __stdcall get_Vector(CatShuttleVector & oVector); \
virtual HRESULT __stdcall put_Vector(CatShuttleVector iVector); \
virtual HRESULT __stdcall get_MoveMode(CatShuttleMoveMode & oMoveMode); \
virtual HRESULT __stdcall put_MoveMode(CatShuttleMoveMode iMoveMode); \
virtual HRESULT __stdcall get_Move(CATIAMove *& oMove); \
virtual HRESULT __stdcall get_Position(CATIAPosition *& oPosition); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAShuttle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Group(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Group(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_Group(CATIAGroup * iGroup) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)put_Group(iGroup)); \
} \
HRESULT __stdcall  ENVTIEName::get_Reference(CATBaseDispatch *& oReference) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Reference(oReference)); \
} \
HRESULT __stdcall  ENVTIEName::put_Reference(CATBaseDispatch * iReference) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)put_Reference(iReference)); \
} \
HRESULT __stdcall  ENVTIEName::get_SubShuttles(CATIAShuttles *& oSubShuttles) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_SubShuttles(oSubShuttles)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleValidation(CAT_VARIANT_BOOL & oValidation) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_AngleValidation(oValidation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleValidation(CAT_VARIANT_BOOL iValidation) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)put_AngleValidation(iValidation)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleLimit(double & oAngle) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_AngleLimit(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLimit(double iAngle) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)put_AngleLimit(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_Vector(CatShuttleVector & oVector) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Vector(oVector)); \
} \
HRESULT __stdcall  ENVTIEName::put_Vector(CatShuttleVector iVector) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)put_Vector(iVector)); \
} \
HRESULT __stdcall  ENVTIEName::get_MoveMode(CatShuttleMoveMode & oMoveMode) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_MoveMode(oMoveMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_MoveMode(CatShuttleMoveMode iMoveMode) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)put_MoveMode(iMoveMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Move(CATIAMove *& oMove) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Move(oMove)); \
} \
HRESULT __stdcall  ENVTIEName::get_Position(CATIAPosition *& oPosition) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Position(oPosition)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAShuttle,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAShuttle(classe)    TIECATIAShuttle##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAShuttle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAShuttle, classe) \
 \
 \
CATImplementTIEMethods(CATIAShuttle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAShuttle, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAShuttle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAShuttle, classe) \
 \
HRESULT __stdcall  TIECATIAShuttle##classe::get_Group(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Group(oGroup); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::put_Group(CATIAGroup * iGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Group(iGroup); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_Reference(CATBaseDispatch *& oReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Reference(oReference); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oReference); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::put_Reference(CATBaseDispatch * iReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Reference(iReference); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iReference); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_SubShuttles(CATIAShuttles *& oSubShuttles) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSubShuttles); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SubShuttles(oSubShuttles); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSubShuttles); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_AngleValidation(CAT_VARIANT_BOOL & oValidation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oValidation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleValidation(oValidation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oValidation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::put_AngleValidation(CAT_VARIANT_BOOL iValidation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iValidation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleValidation(iValidation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iValidation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_AngleLimit(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLimit(oAngle); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::put_AngleLimit(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLimit(iAngle); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_Vector(CatShuttleVector & oVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Vector(oVector); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::put_Vector(CatShuttleVector iVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Vector(iVector); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_MoveMode(CatShuttleMoveMode & oMoveMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oMoveMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MoveMode(oMoveMode); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oMoveMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::put_MoveMode(CatShuttleMoveMode iMoveMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iMoveMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MoveMode(iMoveMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iMoveMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_Move(CATIAMove *& oMove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oMove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Move(oMove); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oMove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttle##classe::get_Position(CATIAPosition *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Position(oPosition); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oPosition); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttle##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttle##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttle##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttle##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttle##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAShuttle(classe) \
 \
 \
declare_TIE_CATIAShuttle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShuttle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShuttle,"CATIAShuttle",CATIAShuttle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShuttle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAShuttle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShuttle##classe(classe::MetaObject(),CATIAShuttle::MetaObject(),(void *)CreateTIECATIAShuttle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAShuttle(classe) \
 \
 \
declare_TIE_CATIAShuttle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShuttle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShuttle,"CATIAShuttle",CATIAShuttle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShuttle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAShuttle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShuttle##classe(classe::MetaObject(),CATIAShuttle::MetaObject(),(void *)CreateTIECATIAShuttle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAShuttle(classe) TIE_CATIAShuttle(classe)
#else
#define BOA_CATIAShuttle(classe) CATImplementBOA(CATIAShuttle, classe)
#endif

#endif
