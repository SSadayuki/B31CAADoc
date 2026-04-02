#ifndef __TIE_CATIAOriginElements
#define __TIE_CATIAOriginElements

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOriginElements.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOriginElements */
#define declare_TIE_CATIAOriginElements(classe) \
 \
 \
class TIECATIAOriginElements##classe : public CATIAOriginElements \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOriginElements, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PlaneXY(CATIABase *& oPlane); \
      virtual HRESULT __stdcall get_PlaneYZ(CATIABase *& oPlane); \
      virtual HRESULT __stdcall get_PlaneZX(CATIABase *& oPlane); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAOriginElements(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PlaneXY(CATIABase *& oPlane); \
virtual HRESULT __stdcall get_PlaneYZ(CATIABase *& oPlane); \
virtual HRESULT __stdcall get_PlaneZX(CATIABase *& oPlane); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAOriginElements(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PlaneXY(CATIABase *& oPlane) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)get_PlaneXY(oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlaneYZ(CATIABase *& oPlane) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)get_PlaneYZ(oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlaneZX(CATIABase *& oPlane) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)get_PlaneZX(oPlane)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAOriginElements,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOriginElements(classe)    TIECATIAOriginElements##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOriginElements(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOriginElements, classe) \
 \
 \
CATImplementTIEMethods(CATIAOriginElements, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOriginElements, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOriginElements, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOriginElements, classe) \
 \
HRESULT __stdcall  TIECATIAOriginElements##classe::get_PlaneXY(CATIABase *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneXY(oPlane); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOriginElements##classe::get_PlaneYZ(CATIABase *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneYZ(oPlane); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOriginElements##classe::get_PlaneZX(CATIABase *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneZX(oPlane); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPlane); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOriginElements##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOriginElements##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOriginElements##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOriginElements##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOriginElements##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOriginElements(classe) \
 \
 \
declare_TIE_CATIAOriginElements(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOriginElements##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOriginElements,"CATIAOriginElements",CATIAOriginElements::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOriginElements(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOriginElements, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOriginElements##classe(classe::MetaObject(),CATIAOriginElements::MetaObject(),(void *)CreateTIECATIAOriginElements##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOriginElements(classe) \
 \
 \
declare_TIE_CATIAOriginElements(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOriginElements##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOriginElements,"CATIAOriginElements",CATIAOriginElements::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOriginElements(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOriginElements, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOriginElements##classe(classe::MetaObject(),CATIAOriginElements::MetaObject(),(void *)CreateTIECATIAOriginElements##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOriginElements(classe) TIE_CATIAOriginElements(classe)
#else
#define BOA_CATIAOriginElements(classe) CATImplementBOA(CATIAOriginElements, classe)
#endif

#endif
