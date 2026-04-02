#ifndef __TIE_CATIAArrangementArea
#define __TIE_CATIAArrangementArea

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrangementArea.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrangementArea */
#define declare_TIE_CATIAArrangementArea(classe) \
 \
 \
class TIECATIAArrangementArea##classe : public CATIAArrangementArea \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrangementArea, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_VisuMode(CATArrangementAreaVisuMode & oAreaVisuMode); \
      virtual HRESULT __stdcall put_VisuMode(CATArrangementAreaVisuMode iAreaVisuMode); \
      virtual HRESULT __stdcall get_Height(double & oHeight); \
      virtual HRESULT __stdcall put_Height(double iHeight); \
      virtual HRESULT __stdcall get_ArrangementContours(CATIAArrangementContours *& oContours); \
      virtual HRESULT __stdcall get_Size(double & oSize); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrangementArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_VisuMode(CATArrangementAreaVisuMode & oAreaVisuMode); \
virtual HRESULT __stdcall put_VisuMode(CATArrangementAreaVisuMode iAreaVisuMode); \
virtual HRESULT __stdcall get_Height(double & oHeight); \
virtual HRESULT __stdcall put_Height(double iHeight); \
virtual HRESULT __stdcall get_ArrangementContours(CATIAArrangementContours *& oContours); \
virtual HRESULT __stdcall get_Size(double & oSize); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrangementArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_VisuMode(CATArrangementAreaVisuMode & oAreaVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)get_VisuMode(oAreaVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuMode(CATArrangementAreaVisuMode iAreaVisuMode) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)put_VisuMode(iAreaVisuMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(double & oHeight) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_Height(double iHeight) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)put_Height(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_ArrangementContours(CATIAArrangementContours *& oContours) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)get_ArrangementContours(oContours)); \
} \
HRESULT __stdcall  ENVTIEName::get_Size(double & oSize) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)get_Size(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrangementArea,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrangementArea(classe)    TIECATIAArrangementArea##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrangementArea(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrangementArea, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrangementArea, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrangementArea, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrangementArea, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrangementArea, classe) \
 \
HRESULT __stdcall  TIECATIAArrangementArea##classe::get_VisuMode(CATArrangementAreaVisuMode & oAreaVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAreaVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuMode(oAreaVisuMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAreaVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementArea##classe::put_VisuMode(CATArrangementAreaVisuMode iAreaVisuMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAreaVisuMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuMode(iAreaVisuMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAreaVisuMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementArea##classe::get_Height(double & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementArea##classe::put_Height(double iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Height(iHeight); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementArea##classe::get_ArrangementContours(CATIAArrangementContours *& oContours) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oContours); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ArrangementContours(oContours); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oContours); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementArea##classe::get_Size(double & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Size(oSize); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrangementArea##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementArea##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementArea##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementArea##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementArea##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrangementArea##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrangementArea(classe) \
 \
 \
declare_TIE_CATIAArrangementArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementArea,"CATIAArrangementArea",CATIAArrangementArea::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrangementArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementArea##classe(classe::MetaObject(),CATIAArrangementArea::MetaObject(),(void *)CreateTIECATIAArrangementArea##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrangementArea(classe) \
 \
 \
declare_TIE_CATIAArrangementArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrangementArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrangementArea,"CATIAArrangementArea",CATIAArrangementArea::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrangementArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrangementArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrangementArea##classe(classe::MetaObject(),CATIAArrangementArea::MetaObject(),(void *)CreateTIECATIAArrangementArea##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrangementArea(classe) TIE_CATIAArrangementArea(classe)
#else
#define BOA_CATIAArrangementArea(classe) CATImplementBOA(CATIAArrangementArea, classe)
#endif

#endif
