#ifndef __TIE_DNBIA3DStatePositionManagement
#define __TIE_DNBIA3DStatePositionManagement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "DNBIA3DStatePositionManagement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface DNBIA3DStatePositionManagement */
#define declare_TIE_DNBIA3DStatePositionManagement(classe) \
 \
 \
class TIEDNBIA3DStatePositionManagement##classe : public DNBIA3DStatePositionManagement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(DNBIA3DStatePositionManagement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateAbsolutePosition(CATBaseDispatch * iObject, DNBIA3DStatePosition *& oPosition); \
      virtual HRESULT __stdcall CreateRelativePosition(CATBaseDispatch * iObject, CATBaseDispatch * iReferenceObject, DNBIA3DStatePosition *& oPosition); \
      virtual HRESULT __stdcall DeletePosition(DNBIA3DStatePosition * iPosition); \
      virtual HRESULT __stdcall GetAllPositions(DNBIA3DStatePositions *& oListPositions); \
      virtual HRESULT __stdcall GetPositions(CATBaseDispatch * iObject, DNBIA3DStatePositions *& oListPositions); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_DNBIA3DStatePositionManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateAbsolutePosition(CATBaseDispatch * iObject, DNBIA3DStatePosition *& oPosition); \
virtual HRESULT __stdcall CreateRelativePosition(CATBaseDispatch * iObject, CATBaseDispatch * iReferenceObject, DNBIA3DStatePosition *& oPosition); \
virtual HRESULT __stdcall DeletePosition(DNBIA3DStatePosition * iPosition); \
virtual HRESULT __stdcall GetAllPositions(DNBIA3DStatePositions *& oListPositions); \
virtual HRESULT __stdcall GetPositions(CATBaseDispatch * iObject, DNBIA3DStatePositions *& oListPositions); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_DNBIA3DStatePositionManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateAbsolutePosition(CATBaseDispatch * iObject, DNBIA3DStatePosition *& oPosition) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)CreateAbsolutePosition(iObject,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::CreateRelativePosition(CATBaseDispatch * iObject, CATBaseDispatch * iReferenceObject, DNBIA3DStatePosition *& oPosition) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)CreateRelativePosition(iObject,iReferenceObject,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::DeletePosition(DNBIA3DStatePosition * iPosition) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)DeletePosition(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllPositions(DNBIA3DStatePositions *& oListPositions) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)GetAllPositions(oListPositions)); \
} \
HRESULT __stdcall  ENVTIEName::GetPositions(CATBaseDispatch * iObject, DNBIA3DStatePositions *& oListPositions) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)GetPositions(iObject,oListPositions)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(DNBIA3DStatePositionManagement,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_DNBIA3DStatePositionManagement(classe)    TIEDNBIA3DStatePositionManagement##classe


/* Common methods inside a TIE */
#define common_TIE_DNBIA3DStatePositionManagement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(DNBIA3DStatePositionManagement, classe) \
 \
 \
CATImplementTIEMethods(DNBIA3DStatePositionManagement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(DNBIA3DStatePositionManagement, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(DNBIA3DStatePositionManagement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(DNBIA3DStatePositionManagement, classe) \
 \
HRESULT __stdcall  TIEDNBIA3DStatePositionManagement##classe::CreateAbsolutePosition(CATBaseDispatch * iObject, DNBIA3DStatePosition *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iObject,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAbsolutePosition(iObject,oPosition); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iObject,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePositionManagement##classe::CreateRelativePosition(CATBaseDispatch * iObject, CATBaseDispatch * iReferenceObject, DNBIA3DStatePosition *& oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iObject,&iReferenceObject,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRelativePosition(iObject,iReferenceObject,oPosition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iObject,&iReferenceObject,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePositionManagement##classe::DeletePosition(DNBIA3DStatePosition * iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeletePosition(iPosition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePositionManagement##classe::GetAllPositions(DNBIA3DStatePositions *& oListPositions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oListPositions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllPositions(oListPositions); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oListPositions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStatePositionManagement##classe::GetPositions(CATBaseDispatch * iObject, DNBIA3DStatePositions *& oListPositions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iObject,&oListPositions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPositions(iObject,oListPositions); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iObject,&oListPositions); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePositionManagement##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePositionManagement##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePositionManagement##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePositionManagement##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStatePositionManagement##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_DNBIA3DStatePositionManagement(classe) \
 \
 \
declare_TIE_DNBIA3DStatePositionManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DStatePositionManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DStatePositionManagement,"DNBIA3DStatePositionManagement",DNBIA3DStatePositionManagement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DStatePositionManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(DNBIA3DStatePositionManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DStatePositionManagement##classe(classe::MetaObject(),DNBIA3DStatePositionManagement::MetaObject(),(void *)CreateTIEDNBIA3DStatePositionManagement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_DNBIA3DStatePositionManagement(classe) \
 \
 \
declare_TIE_DNBIA3DStatePositionManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DStatePositionManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DStatePositionManagement,"DNBIA3DStatePositionManagement",DNBIA3DStatePositionManagement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DStatePositionManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(DNBIA3DStatePositionManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DStatePositionManagement##classe(classe::MetaObject(),DNBIA3DStatePositionManagement::MetaObject(),(void *)CreateTIEDNBIA3DStatePositionManagement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_DNBIA3DStatePositionManagement(classe) TIE_DNBIA3DStatePositionManagement(classe)
#else
#define BOA_DNBIA3DStatePositionManagement(classe) CATImplementBOA(DNBIA3DStatePositionManagement, classe)
#endif

#endif
