#ifndef __TIE_CATIADrawingGDT
#define __TIE_CATIADrawingGDT

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingGDT.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingGDT */
#define declare_TIE_CATIADrawingGDT(classe) \
 \
 \
class TIECATIADrawingGDT##classe : public CATIADrawingGDT \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingGDT, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_x(double & oxposition); \
      virtual HRESULT __stdcall put_x(double oxposition); \
      virtual HRESULT __stdcall get_y(double & oyposition); \
      virtual HRESULT __stdcall put_y(double iyposition); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_RowNumber(CATLONG & oRowNumber); \
      virtual HRESULT __stdcall GetReferenceNumber(CATLONG iRowNumber, CATLONG & oRefNumber); \
      virtual HRESULT __stdcall GetToleranceType(CATLONG iRowNumber, CATLONG & oGDTSymbol); \
      virtual HRESULT __stdcall SetToleranceType(CATLONG iRowNumber, CATLONG iGDTSymbol); \
      virtual HRESULT __stdcall GetTextRange(CATLONG iRowNumber, CATLONG iNumber, CATIADrawingTextRange *& oTextRange); \
      virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
      virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingGDT(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_x(double & oxposition); \
virtual HRESULT __stdcall put_x(double oxposition); \
virtual HRESULT __stdcall get_y(double & oyposition); \
virtual HRESULT __stdcall put_y(double iyposition); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_RowNumber(CATLONG & oRowNumber); \
virtual HRESULT __stdcall GetReferenceNumber(CATLONG iRowNumber, CATLONG & oRefNumber); \
virtual HRESULT __stdcall GetToleranceType(CATLONG iRowNumber, CATLONG & oGDTSymbol); \
virtual HRESULT __stdcall SetToleranceType(CATLONG iRowNumber, CATLONG iGDTSymbol); \
virtual HRESULT __stdcall GetTextRange(CATLONG iRowNumber, CATLONG iNumber, CATIADrawingTextRange *& oTextRange); \
virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingGDT(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_x(double & oxposition) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double oxposition) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)put_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oyposition) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_y(oyposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iyposition) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)put_y(iyposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_RowNumber(CATLONG & oRowNumber) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_RowNumber(oRowNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetReferenceNumber(CATLONG iRowNumber, CATLONG & oRefNumber) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)GetReferenceNumber(iRowNumber,oRefNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetToleranceType(CATLONG iRowNumber, CATLONG & oGDTSymbol) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)GetToleranceType(iRowNumber,oGDTSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::SetToleranceType(CATLONG iRowNumber, CATLONG iGDTSymbol) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)SetToleranceType(iRowNumber,iGDTSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::GetTextRange(CATLONG iRowNumber, CATLONG iNumber, CATIADrawingTextRange *& oTextRange) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)GetTextRange(iRowNumber,iNumber,oTextRange)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_TextProperties(oTextProperties)); \
} \
HRESULT __stdcall  ENVTIEName::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_Leaders(oLeaders)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingGDT,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingGDT(classe)    TIECATIADrawingGDT##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingGDT(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingGDT, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingGDT, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingGDT, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingGDT, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingGDT, classe) \
 \
HRESULT __stdcall  TIECATIADrawingGDT##classe::get_x(double & oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oxposition); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::put_x(double oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(oxposition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::get_y(double & oyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oyposition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::put_y(double iyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iyposition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::get_RowNumber(CATLONG & oRowNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oRowNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RowNumber(oRowNumber); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oRowNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::GetReferenceNumber(CATLONG iRowNumber, CATLONG & oRefNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iRowNumber,&oRefNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceNumber(iRowNumber,oRefNumber); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iRowNumber,&oRefNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::GetToleranceType(CATLONG iRowNumber, CATLONG & oGDTSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iRowNumber,&oGDTSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToleranceType(iRowNumber,oGDTSymbol); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iRowNumber,&oGDTSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::SetToleranceType(CATLONG iRowNumber, CATLONG iGDTSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iRowNumber,&iGDTSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToleranceType(iRowNumber,iGDTSymbol); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iRowNumber,&iGDTSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::GetTextRange(CATLONG iRowNumber, CATLONG iNumber, CATIADrawingTextRange *& oTextRange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRowNumber,&iNumber,&oTextRange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextRange(iRowNumber,iNumber,oTextRange); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRowNumber,&iNumber,&oTextRange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oTextProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextProperties(oTextProperties); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oTextProperties); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingGDT##classe::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oLeaders); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Leaders(oLeaders); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oLeaders); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDT##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDT##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDT##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDT##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingGDT##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingGDT(classe) \
 \
 \
declare_TIE_CATIADrawingGDT(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingGDT##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingGDT,"CATIADrawingGDT",CATIADrawingGDT::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingGDT(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingGDT, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingGDT##classe(classe::MetaObject(),CATIADrawingGDT::MetaObject(),(void *)CreateTIECATIADrawingGDT##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingGDT(classe) \
 \
 \
declare_TIE_CATIADrawingGDT(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingGDT##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingGDT,"CATIADrawingGDT",CATIADrawingGDT::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingGDT(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingGDT, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingGDT##classe(classe::MetaObject(),CATIADrawingGDT::MetaObject(),(void *)CreateTIECATIADrawingGDT##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingGDT(classe) TIE_CATIADrawingGDT(classe)
#else
#define BOA_CATIADrawingGDT(classe) CATImplementBOA(CATIADrawingGDT, classe)
#endif

#endif
