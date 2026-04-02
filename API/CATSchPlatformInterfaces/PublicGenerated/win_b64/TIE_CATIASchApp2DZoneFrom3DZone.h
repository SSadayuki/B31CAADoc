#ifndef __TIE_CATIASchApp2DZoneFrom3DZone
#define __TIE_CATIASchApp2DZoneFrom3DZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchApp2DZoneFrom3DZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchApp2DZoneFrom3DZone */
#define declare_TIE_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
class TIECATIASchApp2DZoneFrom3DZone##classe : public CATIASchApp2DZoneFrom3DZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchApp2DZoneFrom3DZone, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Create2DAppZone(CATIABase *& oAppZone); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchApp2DZoneFrom3DZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Create2DAppZone(CATIABase *& oAppZone); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchApp2DZoneFrom3DZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Create2DAppZone(CATIABase *& oAppZone) \
{ \
return (ENVTIECALL(CATIASchApp2DZoneFrom3DZone,ENVTIETypeLetter,ENVTIELetter)Create2DAppZone(oAppZone)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchApp2DZoneFrom3DZone,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchApp2DZoneFrom3DZone,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchApp2DZoneFrom3DZone,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchApp2DZoneFrom3DZone,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchApp2DZoneFrom3DZone,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchApp2DZoneFrom3DZone(classe)    TIECATIASchApp2DZoneFrom3DZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchApp2DZoneFrom3DZone, classe) \
 \
 \
CATImplementTIEMethods(CATIASchApp2DZoneFrom3DZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchApp2DZoneFrom3DZone, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchApp2DZoneFrom3DZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchApp2DZoneFrom3DZone, classe) \
 \
HRESULT __stdcall  TIECATIASchApp2DZoneFrom3DZone##classe::Create2DAppZone(CATIABase *& oAppZone) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAppZone); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create2DAppZone(oAppZone); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAppZone); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchApp2DZoneFrom3DZone##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchApp2DZoneFrom3DZone##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchApp2DZoneFrom3DZone##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchApp2DZoneFrom3DZone##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchApp2DZoneFrom3DZone##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
declare_TIE_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchApp2DZoneFrom3DZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchApp2DZoneFrom3DZone,"CATIASchApp2DZoneFrom3DZone",CATIASchApp2DZoneFrom3DZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchApp2DZoneFrom3DZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchApp2DZoneFrom3DZone##classe(classe::MetaObject(),CATIASchApp2DZoneFrom3DZone::MetaObject(),(void *)CreateTIECATIASchApp2DZoneFrom3DZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
declare_TIE_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchApp2DZoneFrom3DZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchApp2DZoneFrom3DZone,"CATIASchApp2DZoneFrom3DZone",CATIASchApp2DZoneFrom3DZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchApp2DZoneFrom3DZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchApp2DZoneFrom3DZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchApp2DZoneFrom3DZone##classe(classe::MetaObject(),CATIASchApp2DZoneFrom3DZone::MetaObject(),(void *)CreateTIECATIASchApp2DZoneFrom3DZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchApp2DZoneFrom3DZone(classe) TIE_CATIASchApp2DZoneFrom3DZone(classe)
#else
#define BOA_CATIASchApp2DZoneFrom3DZone(classe) CATImplementBOA(CATIASchApp2DZoneFrom3DZone, classe)
#endif

#endif
