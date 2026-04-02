#ifndef __TIE_CATIASchRouteSymbol
#define __TIE_CATIASchRouteSymbol

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchRouteSymbol.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchRouteSymbol */
#define declare_TIE_CATIASchRouteSymbol(classe) \
 \
 \
class TIECATIASchRouteSymbol##classe : public CATIASchRouteSymbol \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchRouteSymbol, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetGRRRoute(CATIASchGRRRoute *& oGRRRoute); \
      virtual HRESULT __stdcall SetPosition(CATLONG iSegNum, double iSegParm); \
      virtual HRESULT __stdcall GetPosition(CATLONG & oSegNum, double & oSegParm); \
      virtual HRESULT __stdcall Scale(double iDbScaleFactor); \
      virtual HRESULT __stdcall FlipOverLine(); \
      virtual HRESULT __stdcall FlipOverOrthogonalLine(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchRouteSymbol(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetGRRRoute(CATIASchGRRRoute *& oGRRRoute); \
virtual HRESULT __stdcall SetPosition(CATLONG iSegNum, double iSegParm); \
virtual HRESULT __stdcall GetPosition(CATLONG & oSegNum, double & oSegParm); \
virtual HRESULT __stdcall Scale(double iDbScaleFactor); \
virtual HRESULT __stdcall FlipOverLine(); \
virtual HRESULT __stdcall FlipOverOrthogonalLine(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchRouteSymbol(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetGRRRoute(CATIASchGRRRoute *& oGRRRoute) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)GetGRRRoute(oGRRRoute)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(CATLONG iSegNum, double iSegParm) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)SetPosition(iSegNum,iSegParm)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(CATLONG & oSegNum, double & oSegParm) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)GetPosition(oSegNum,oSegParm)); \
} \
HRESULT __stdcall  ENVTIEName::Scale(double iDbScaleFactor) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)Scale(iDbScaleFactor)); \
} \
HRESULT __stdcall  ENVTIEName::FlipOverLine() \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)FlipOverLine()); \
} \
HRESULT __stdcall  ENVTIEName::FlipOverOrthogonalLine() \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)FlipOverOrthogonalLine()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchRouteSymbol,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchRouteSymbol(classe)    TIECATIASchRouteSymbol##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchRouteSymbol(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchRouteSymbol, classe) \
 \
 \
CATImplementTIEMethods(CATIASchRouteSymbol, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchRouteSymbol, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchRouteSymbol, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchRouteSymbol, classe) \
 \
HRESULT __stdcall  TIECATIASchRouteSymbol##classe::GetGRRRoute(CATIASchGRRRoute *& oGRRRoute) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGRRRoute); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGRRRoute(oGRRRoute); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGRRRoute); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteSymbol##classe::SetPosition(CATLONG iSegNum, double iSegParm) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSegNum,&iSegParm); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iSegNum,iSegParm); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSegNum,&iSegParm); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteSymbol##classe::GetPosition(CATLONG & oSegNum, double & oSegParm) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSegNum,&oSegParm); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oSegNum,oSegParm); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSegNum,&oSegParm); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteSymbol##classe::Scale(double iDbScaleFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDbScaleFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Scale(iDbScaleFactor); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDbScaleFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteSymbol##classe::FlipOverLine() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipOverLine(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchRouteSymbol##classe::FlipOverOrthogonalLine() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FlipOverOrthogonalLine(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteSymbol##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteSymbol##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteSymbol##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteSymbol##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchRouteSymbol##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchRouteSymbol(classe) \
 \
 \
declare_TIE_CATIASchRouteSymbol(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRouteSymbol##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRouteSymbol,"CATIASchRouteSymbol",CATIASchRouteSymbol::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRouteSymbol(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchRouteSymbol, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRouteSymbol##classe(classe::MetaObject(),CATIASchRouteSymbol::MetaObject(),(void *)CreateTIECATIASchRouteSymbol##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchRouteSymbol(classe) \
 \
 \
declare_TIE_CATIASchRouteSymbol(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchRouteSymbol##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchRouteSymbol,"CATIASchRouteSymbol",CATIASchRouteSymbol::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchRouteSymbol(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchRouteSymbol, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchRouteSymbol##classe(classe::MetaObject(),CATIASchRouteSymbol::MetaObject(),(void *)CreateTIECATIASchRouteSymbol##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchRouteSymbol(classe) TIE_CATIASchRouteSymbol(classe)
#else
#define BOA_CATIASchRouteSymbol(classe) CATImplementBOA(CATIASchRouteSymbol, classe)
#endif

#endif
