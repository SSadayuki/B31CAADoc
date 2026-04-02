#ifndef __TIE_CATIASfmOpening
#define __TIE_CATIASfmOpening

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmOpening.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmOpening */
#define declare_TIE_CATIASfmOpening(classe) \
 \
 \
class TIECATIASfmOpening##classe : public CATIASfmOpening \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmOpening, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall IsAPlateOpening(CATLONG & oStatus); \
      virtual HRESULT __stdcall put_CreationMode(CATLONG iMode); \
      virtual HRESULT __stdcall get_CreationMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_IntersectingElement(CATIAReference * iIntersectingElement); \
      virtual HRESULT __stdcall get_IntersectingElement(CATIAReference *& oIntersectingElement); \
      virtual HRESULT __stdcall put_MoldedSurface(CATIAReference * iMoldedSurface); \
      virtual HRESULT __stdcall get_MoldedSurface(CATIAReference *& oMoldedSurface); \
      virtual HRESULT __stdcall put_Direction(CATIAReference * iDirection); \
      virtual HRESULT __stdcall get_Direction(CATIAReference *& oDirection); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant *& oDirection); \
      virtual HRESULT __stdcall SetMasterMode(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmOpening(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall IsAPlateOpening(CATLONG & oStatus); \
virtual HRESULT __stdcall put_CreationMode(CATLONG iMode); \
virtual HRESULT __stdcall get_CreationMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_IntersectingElement(CATIAReference * iIntersectingElement); \
virtual HRESULT __stdcall get_IntersectingElement(CATIAReference *& oIntersectingElement); \
virtual HRESULT __stdcall put_MoldedSurface(CATIAReference * iMoldedSurface); \
virtual HRESULT __stdcall get_MoldedSurface(CATIAReference *& oMoldedSurface); \
virtual HRESULT __stdcall put_Direction(CATIAReference * iDirection); \
virtual HRESULT __stdcall get_Direction(CATIAReference *& oDirection); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant *& oDirection); \
virtual HRESULT __stdcall SetMasterMode(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmOpening(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::IsAPlateOpening(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)IsAPlateOpening(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreationMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)put_CreationMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_CreationMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)get_CreationMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_IntersectingElement(CATIAReference * iIntersectingElement) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)put_IntersectingElement(iIntersectingElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_IntersectingElement(CATIAReference *& oIntersectingElement) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)get_IntersectingElement(oIntersectingElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_MoldedSurface(CATIAReference * iMoldedSurface) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)put_MoldedSurface(iMoldedSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_MoldedSurface(CATIAReference *& oMoldedSurface) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)get_MoldedSurface(oMoldedSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAReference * iDirection) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAReference *& oDirection) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant *& oDirection) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetMasterMode() \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)SetMasterMode()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmOpening,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmOpening(classe)    TIECATIASfmOpening##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmOpening(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmOpening, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmOpening, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmOpening, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmOpening, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmOpening, classe) \
 \
HRESULT __stdcall  TIECATIASfmOpening##classe::IsAPlateOpening(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAPlateOpening(oStatus); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::put_CreationMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreationMode(iMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::get_CreationMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreationMode(oMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::put_IntersectingElement(CATIAReference * iIntersectingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIntersectingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IntersectingElement(iIntersectingElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIntersectingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::get_IntersectingElement(CATIAReference *& oIntersectingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIntersectingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IntersectingElement(oIntersectingElement); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIntersectingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::put_MoldedSurface(CATIAReference * iMoldedSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMoldedSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MoldedSurface(iMoldedSurface); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMoldedSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::get_MoldedSurface(CATIAReference *& oMoldedSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMoldedSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MoldedSurface(oMoldedSurface); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMoldedSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::put_Direction(CATIAReference * iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDirection); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::get_Direction(CATIAReference *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDirection); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::GetDirection(CATSafeArrayVariant *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmOpening##classe::SetMasterMode() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMasterMode(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpening##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpening##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpening##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpening##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmOpening##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmOpening(classe) \
 \
 \
declare_TIE_CATIASfmOpening(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmOpening##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmOpening,"CATIASfmOpening",CATIASfmOpening::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmOpening(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmOpening, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmOpening##classe(classe::MetaObject(),CATIASfmOpening::MetaObject(),(void *)CreateTIECATIASfmOpening##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmOpening(classe) \
 \
 \
declare_TIE_CATIASfmOpening(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmOpening##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmOpening,"CATIASfmOpening",CATIASfmOpening::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmOpening(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmOpening, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmOpening##classe(classe::MetaObject(),CATIASfmOpening::MetaObject(),(void *)CreateTIECATIASfmOpening##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmOpening(classe) TIE_CATIASfmOpening(classe)
#else
#define BOA_CATIASfmOpening(classe) CATImplementBOA(CATIASfmOpening, classe)
#endif

#endif
