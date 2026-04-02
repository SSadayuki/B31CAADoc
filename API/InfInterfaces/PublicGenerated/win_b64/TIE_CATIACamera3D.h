#ifndef __TIE_CATIACamera3D
#define __TIE_CATIACamera3D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIACamera3D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACamera3D */
#define declare_TIE_CATIACamera3D(classe) \
 \
 \
class TIECATIACamera3D##classe : public CATIACamera3D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACamera3D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint); \
      virtual HRESULT __stdcall put_Viewpoint3D(CATIAViewpoint3D * iViewpoint); \
      virtual HRESULT __stdcall get_Type(CatCameraType & oType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACamera3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint); \
virtual HRESULT __stdcall put_Viewpoint3D(CATIAViewpoint3D * iViewpoint); \
virtual HRESULT __stdcall get_Type(CatCameraType & oType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACamera3D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)get_Viewpoint3D(oViewpoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Viewpoint3D(CATIAViewpoint3D * iViewpoint) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)put_Viewpoint3D(iViewpoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CatCameraType & oType) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACamera3D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACamera3D(classe)    TIECATIACamera3D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACamera3D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACamera3D, classe) \
 \
 \
CATImplementTIEMethods(CATIACamera3D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACamera3D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACamera3D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACamera3D, classe) \
 \
HRESULT __stdcall  TIECATIACamera3D##classe::get_Viewpoint3D(CATIAViewpoint3D *& oViewpoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oViewpoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viewpoint3D(oViewpoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oViewpoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACamera3D##classe::put_Viewpoint3D(CATIAViewpoint3D * iViewpoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iViewpoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Viewpoint3D(iViewpoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iViewpoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACamera3D##classe::get_Type(CatCameraType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACamera3D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACamera3D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACamera3D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACamera3D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACamera3D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACamera3D(classe) \
 \
 \
declare_TIE_CATIACamera3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACamera3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACamera3D,"CATIACamera3D",CATIACamera3D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACamera3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACamera3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACamera3D##classe(classe::MetaObject(),CATIACamera3D::MetaObject(),(void *)CreateTIECATIACamera3D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACamera3D(classe) \
 \
 \
declare_TIE_CATIACamera3D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACamera3D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACamera3D,"CATIACamera3D",CATIACamera3D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACamera3D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACamera3D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACamera3D##classe(classe::MetaObject(),CATIACamera3D::MetaObject(),(void *)CreateTIECATIACamera3D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACamera3D(classe) TIE_CATIACamera3D(classe)
#else
#define BOA_CATIACamera3D(classe) CATImplementBOA(CATIACamera3D, classe)
#endif

#endif
