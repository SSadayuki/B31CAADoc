#ifndef __TIE_CATIAArrangementRectangle
#define __TIE_CATIAArrangementRectangle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementRectangle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementRectangle */
#define declare_TIE_CATIAArrangementRectangle(classe) \
 \
 \
class TIECATIAArrangementRectangle##classe : public CATIAArrangementRectangle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementRectangle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_XLength(double & oXLength); \
      virtual HRESULT __stdcall put_XLength(double iXLength); \
      virtual HRESULT __stdcall get_YLength(double & oYLength); \
      virtual HRESULT __stdcall put_YLength(double iYLength); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrangementRectangle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_XLength(double & oXLength); \
virtual HRESULT __stdcall put_XLength(double iXLength); \
virtual HRESULT __stdcall get_YLength(double & oYLength); \
virtual HRESULT __stdcall put_YLength(double iYLength); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrangementRectangle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_XLength(double & oXLength) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)get_XLength(oXLength)); \
} \
HRESULT __stdcall  ENVTIEName::put_XLength(double iXLength) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)put_XLength(iXLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_YLength(double & oYLength) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)get_YLength(oYLength)); \
} \
HRESULT __stdcall  ENVTIEName::put_YLength(double iYLength) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)put_YLength(iYLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrangementRectangle,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementRectangle(classe)    TIECATIAArrangementRectangle##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementRectangle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementRectangle, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementRectangle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementRectangle, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementRectangle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementRectangle, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementRectangle##classe::get_XLength(double & oXLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oXLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_XLength(oXLength); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oXLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRectangle##classe::put_XLength(double iXLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iXLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_XLength(iXLength); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iXLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRectangle##classe::get_YLength(double & oYLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oYLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_YLength(oYLength); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oYLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRectangle##classe::put_YLength(double iYLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iYLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_YLength(iYLength); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iYLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementRectangle##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangle##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangle##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangle##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangle##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementRectangle##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementRectangle(classe) \
 \
 \
declare_TIE_CATIAArrangementRectangle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementRectangle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementRectangle,"CATIAArrangementRectangle",CATIAArrangementRectangle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementRectangle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementRectangle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementRectangle##classe(classe::MetaObject(),CATIAArrangementRectangle::MetaObject(),(void *)CreateTIECATIAArrangementRectangle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementRectangle(classe) \
 \
 \
declare_TIE_CATIAArrangementRectangle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementRectangle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementRectangle,"CATIAArrangementRectangle",CATIAArrangementRectangle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementRectangle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementRectangle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementRectangle##classe(classe::MetaObject(),CATIAArrangementRectangle::MetaObject(),(void *)CreateTIECATIAArrangementRectangle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementRectangle(classe) TIE_CATIAArrangementRectangle(classe)
#else
#define BOA_CATIAArrangementRectangle(classe) CATImplementBOA(CATIAArrangementRectangle, classe)
#endif

#endif
