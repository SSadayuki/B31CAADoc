#ifndef __TIE_CATIAMechanismCommand
#define __TIE_CATIAMechanismCommand

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMechanismCommand.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMechanismCommand */
#define declare_TIE_CATIAMechanismCommand(classe) \
 \
 \
class TIECATIAMechanismCommand##classe : public CATIAMechanismCommand \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMechanismCommand, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_CurrentValue(double & oCurrentValue); \
      virtual HRESULT __stdcall get_Orientation(short & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(short iOrientation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMechanismCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_CurrentValue(double & oCurrentValue); \
virtual HRESULT __stdcall get_Orientation(short & oOrientation); \
virtual HRESULT __stdcall put_Orientation(short iOrientation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMechanismCommand(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurrentValue(double & oCurrentValue) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)get_CurrentValue(oCurrentValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(short & oOrientation) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(short iOrientation) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMechanismCommand,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMechanismCommand(classe)    TIECATIAMechanismCommand##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMechanismCommand(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMechanismCommand, classe) \
 \
 \
CATImplementTIEMethods(CATIAMechanismCommand, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMechanismCommand, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMechanismCommand, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMechanismCommand, classe) \
 \
HRESULT __stdcall  TIECATIAMechanismCommand##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanismCommand##classe::get_CurrentValue(double & oCurrentValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCurrentValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentValue(oCurrentValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCurrentValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanismCommand##classe::get_Orientation(short & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMechanismCommand##classe::put_Orientation(short iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanismCommand##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanismCommand##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanismCommand##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanismCommand##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMechanismCommand##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMechanismCommand(classe) \
 \
 \
declare_TIE_CATIAMechanismCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMechanismCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMechanismCommand,"CATIAMechanismCommand",CATIAMechanismCommand::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMechanismCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMechanismCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMechanismCommand##classe(classe::MetaObject(),CATIAMechanismCommand::MetaObject(),(void *)CreateTIECATIAMechanismCommand##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMechanismCommand(classe) \
 \
 \
declare_TIE_CATIAMechanismCommand(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMechanismCommand##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMechanismCommand,"CATIAMechanismCommand",CATIAMechanismCommand::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMechanismCommand(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMechanismCommand, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMechanismCommand##classe(classe::MetaObject(),CATIAMechanismCommand::MetaObject(),(void *)CreateTIECATIAMechanismCommand##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMechanismCommand(classe) TIE_CATIAMechanismCommand(classe)
#else
#define BOA_CATIAMechanismCommand(classe) CATImplementBOA(CATIAMechanismCommand, classe)
#endif

#endif
