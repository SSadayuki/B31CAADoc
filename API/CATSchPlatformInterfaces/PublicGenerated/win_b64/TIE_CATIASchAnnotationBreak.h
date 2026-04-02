#ifndef __TIE_CATIASchAnnotationBreak
#define __TIE_CATIASchAnnotationBreak

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAnnotationBreak.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAnnotationBreak */
#define declare_TIE_CATIASchAnnotationBreak(classe) \
 \
 \
class TIECATIASchAnnotationBreak##classe : public CATIASchAnnotationBreak \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAnnotationBreak, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Scale(double iDbScaleFactor); \
      virtual HRESULT __stdcall FlipOverLine(); \
      virtual HRESULT __stdcall FlipOverOrthogonalLine(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAnnotationBreak(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Scale(double iDbScaleFactor); \
virtual HRESULT __stdcall FlipOverLine(); \
virtual HRESULT __stdcall FlipOverOrthogonalLine(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAnnotationBreak(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Scale(double iDbScaleFactor) \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)Scale(iDbScaleFactor)); \
} \
HRESULT __stdcall  ENVTIEName::FlipOverLine() \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)FlipOverLine()); \
} \
HRESULT __stdcall  ENVTIEName::FlipOverOrthogonalLine() \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)FlipOverOrthogonalLine()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAnnotationBreak,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAnnotationBreak(classe)    TIECATIASchAnnotationBreak##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAnnotationBreak(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAnnotationBreak, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAnnotationBreak, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAnnotationBreak, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAnnotationBreak, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAnnotationBreak, classe) \
 \
HRESULT __stdcall  TIECATIASchAnnotationBreak##classe::Scale(double iDbScaleFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDbScaleFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Scale(iDbScaleFactor); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDbScaleFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAnnotationBreak##classe::FlipOverLine() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipOverLine(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAnnotationBreak##classe::FlipOverOrthogonalLine() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipOverOrthogonalLine(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAnnotationBreak##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAnnotationBreak##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAnnotationBreak##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAnnotationBreak##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAnnotationBreak##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAnnotationBreak(classe) \
 \
 \
declare_TIE_CATIASchAnnotationBreak(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAnnotationBreak##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAnnotationBreak,"CATIASchAnnotationBreak",CATIASchAnnotationBreak::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAnnotationBreak(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAnnotationBreak, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAnnotationBreak##classe(classe::MetaObject(),CATIASchAnnotationBreak::MetaObject(),(void *)CreateTIECATIASchAnnotationBreak##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAnnotationBreak(classe) \
 \
 \
declare_TIE_CATIASchAnnotationBreak(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAnnotationBreak##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAnnotationBreak,"CATIASchAnnotationBreak",CATIASchAnnotationBreak::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAnnotationBreak(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAnnotationBreak, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAnnotationBreak##classe(classe::MetaObject(),CATIASchAnnotationBreak::MetaObject(),(void *)CreateTIECATIASchAnnotationBreak##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAnnotationBreak(classe) TIE_CATIASchAnnotationBreak(classe)
#else
#define BOA_CATIASchAnnotationBreak(classe) CATImplementBOA(CATIASchAnnotationBreak, classe)
#endif

#endif
