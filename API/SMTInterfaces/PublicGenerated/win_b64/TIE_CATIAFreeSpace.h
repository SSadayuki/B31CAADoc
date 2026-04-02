#ifndef __TIE_CATIAFreeSpace
#define __TIE_CATIAFreeSpace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFreeSpace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFreeSpace */
#define declare_TIE_CATIAFreeSpace(classe) \
 \
 \
class TIECATIAFreeSpace##classe : public CATIAFreeSpace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFreeSpace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Volume(double & oVolume); \
      virtual HRESULT __stdcall GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFreeSpace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Volume(double & oVolume); \
virtual HRESULT __stdcall GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFreeSpace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Volume(double & oVolume) \
{ \
return (ENVTIECALL(CATIAFreeSpace,ENVTIETypeLetter,ENVTIELetter)get_Volume(oVolume)); \
} \
HRESULT __stdcall  ENVTIEName::GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray) \
{ \
return (ENVTIECALL(CATIAFreeSpace,ENVTIETypeLetter,ENVTIELetter)GetGravityCenter(oGravityCenterCoordinatesArray)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFreeSpace,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFreeSpace,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFreeSpace,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFreeSpace,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFreeSpace,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFreeSpace(classe)    TIECATIAFreeSpace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFreeSpace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFreeSpace, classe) \
 \
 \
CATImplementTIEMethods(CATIAFreeSpace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFreeSpace, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFreeSpace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFreeSpace, classe) \
 \
HRESULT __stdcall  TIECATIAFreeSpace##classe::get_Volume(double & oVolume) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oVolume); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Volume(oVolume); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oVolume); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFreeSpace##classe::GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oGravityCenterCoordinatesArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGravityCenter(oGravityCenterCoordinatesArray); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oGravityCenterCoordinatesArray); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpace##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpace##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpace##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpace##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFreeSpace##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFreeSpace(classe) \
 \
 \
declare_TIE_CATIAFreeSpace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeSpace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeSpace,"CATIAFreeSpace",CATIAFreeSpace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeSpace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFreeSpace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeSpace##classe(classe::MetaObject(),CATIAFreeSpace::MetaObject(),(void *)CreateTIECATIAFreeSpace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFreeSpace(classe) \
 \
 \
declare_TIE_CATIAFreeSpace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeSpace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeSpace,"CATIAFreeSpace",CATIAFreeSpace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeSpace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFreeSpace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeSpace##classe(classe::MetaObject(),CATIAFreeSpace::MetaObject(),(void *)CreateTIECATIAFreeSpace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFreeSpace(classe) TIE_CATIAFreeSpace(classe)
#else
#define BOA_CATIAFreeSpace(classe) CATImplementBOA(CATIAFreeSpace, classe)
#endif

#endif
