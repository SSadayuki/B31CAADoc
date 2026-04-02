#ifndef __TIE_CATIASurfaceBasedShape
#define __TIE_CATIASurfaceBasedShape

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASurfaceBasedShape.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASurfaceBasedShape */
#define declare_TIE_CATIASurfaceBasedShape(classe) \
 \
 \
class TIECATIASurfaceBasedShape##classe : public CATIASurfaceBasedShape \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASurfaceBasedShape, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASurfaceBasedShape(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASurfaceBasedShape(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIASurfaceBasedShape,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIASurfaceBasedShape,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASurfaceBasedShape,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASurfaceBasedShape,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASurfaceBasedShape,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASurfaceBasedShape,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASurfaceBasedShape,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASurfaceBasedShape(classe)    TIECATIASurfaceBasedShape##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASurfaceBasedShape(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASurfaceBasedShape, classe) \
 \
 \
CATImplementTIEMethods(CATIASurfaceBasedShape, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASurfaceBasedShape, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASurfaceBasedShape, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASurfaceBasedShape, classe) \
 \
HRESULT __stdcall  TIECATIASurfaceBasedShape##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASurfaceBasedShape##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASurfaceBasedShape##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASurfaceBasedShape##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASurfaceBasedShape##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASurfaceBasedShape##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASurfaceBasedShape##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASurfaceBasedShape(classe) \
 \
 \
declare_TIE_CATIASurfaceBasedShape(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASurfaceBasedShape##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASurfaceBasedShape,"CATIASurfaceBasedShape",CATIASurfaceBasedShape::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASurfaceBasedShape(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASurfaceBasedShape, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASurfaceBasedShape##classe(classe::MetaObject(),CATIASurfaceBasedShape::MetaObject(),(void *)CreateTIECATIASurfaceBasedShape##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASurfaceBasedShape(classe) \
 \
 \
declare_TIE_CATIASurfaceBasedShape(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASurfaceBasedShape##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASurfaceBasedShape,"CATIASurfaceBasedShape",CATIASurfaceBasedShape::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASurfaceBasedShape(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASurfaceBasedShape, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASurfaceBasedShape##classe(classe::MetaObject(),CATIASurfaceBasedShape::MetaObject(),(void *)CreateTIECATIASurfaceBasedShape##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASurfaceBasedShape(classe) TIE_CATIASurfaceBasedShape(classe)
#else
#define BOA_CATIASurfaceBasedShape(classe) CATImplementBOA(CATIASurfaceBasedShape, classe)
#endif

#endif
