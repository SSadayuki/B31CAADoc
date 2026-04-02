#ifndef __TIE_CATIAManufacturingToolCorrector
#define __TIE_CATIAManufacturingToolCorrector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingToolCorrector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingToolCorrector */
#define declare_TIE_CATIAManufacturingToolCorrector(classe) \
 \
 \
class TIECATIAManufacturingToolCorrector##classe : public CATIAManufacturingToolCorrector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingToolCorrector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Point(CATBSTR & oPoint); \
      virtual HRESULT __stdcall get_Number(short & oNumber); \
      virtual HRESULT __stdcall get_LengthNumber(short & oLengthNumber); \
      virtual HRESULT __stdcall get_RadiusNumber(short & oRadiusNumber); \
      virtual HRESULT __stdcall get_Diameter(double & oDiameter); \
      virtual HRESULT __stdcall GetValues(CATBSTR & oPoint, short & oNumber, short & oLengthNumber, short & oRadiusNumber, double & oDiameter); \
      virtual HRESULT __stdcall SetValues(const CATBSTR & oPoint, short oNumber, short oLengthNumber, short oRadiusNumber, double oDiameter); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingToolCorrector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Point(CATBSTR & oPoint); \
virtual HRESULT __stdcall get_Number(short & oNumber); \
virtual HRESULT __stdcall get_LengthNumber(short & oLengthNumber); \
virtual HRESULT __stdcall get_RadiusNumber(short & oRadiusNumber); \
virtual HRESULT __stdcall get_Diameter(double & oDiameter); \
virtual HRESULT __stdcall GetValues(CATBSTR & oPoint, short & oNumber, short & oLengthNumber, short & oRadiusNumber, double & oDiameter); \
virtual HRESULT __stdcall SetValues(const CATBSTR & oPoint, short oNumber, short oLengthNumber, short oRadiusNumber, double oDiameter); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingToolCorrector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Point(CATBSTR & oPoint) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_Point(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Number(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_Number(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_LengthNumber(short & oLengthNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_LengthNumber(oLengthNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadiusNumber(short & oRadiusNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_RadiusNumber(oRadiusNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diameter(double & oDiameter) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_Diameter(oDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetValues(CATBSTR & oPoint, short & oNumber, short & oLengthNumber, short & oRadiusNumber, double & oDiameter) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)GetValues(oPoint,oNumber,oLengthNumber,oRadiusNumber,oDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::SetValues(const CATBSTR & oPoint, short oNumber, short oLengthNumber, short oRadiusNumber, double oDiameter) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)SetValues(oPoint,oNumber,oLengthNumber,oRadiusNumber,oDiameter)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingToolCorrector,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingToolCorrector(classe)    TIECATIAManufacturingToolCorrector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingToolCorrector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingToolCorrector, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingToolCorrector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingToolCorrector, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingToolCorrector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingToolCorrector, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingToolCorrector##classe::get_Point(CATBSTR & oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolCorrector##classe::get_Number(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Number(oNumber); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolCorrector##classe::get_LengthNumber(short & oLengthNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLengthNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LengthNumber(oLengthNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLengthNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolCorrector##classe::get_RadiusNumber(short & oRadiusNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oRadiusNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadiusNumber(oRadiusNumber); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oRadiusNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolCorrector##classe::get_Diameter(double & oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diameter(oDiameter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolCorrector##classe::GetValues(CATBSTR & oPoint, short & oNumber, short & oLengthNumber, short & oRadiusNumber, double & oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPoint,&oNumber,&oLengthNumber,&oRadiusNumber,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValues(oPoint,oNumber,oLengthNumber,oRadiusNumber,oDiameter); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPoint,&oNumber,&oLengthNumber,&oRadiusNumber,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingToolCorrector##classe::SetValues(const CATBSTR & oPoint, short oNumber, short oLengthNumber, short oRadiusNumber, double oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPoint,&oNumber,&oLengthNumber,&oRadiusNumber,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValues(oPoint,oNumber,oLengthNumber,oRadiusNumber,oDiameter); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPoint,&oNumber,&oLengthNumber,&oRadiusNumber,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolCorrector##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolCorrector##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolCorrector##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolCorrector##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingToolCorrector##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingToolCorrector(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolCorrector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolCorrector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolCorrector,"CATIAManufacturingToolCorrector",CATIAManufacturingToolCorrector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolCorrector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingToolCorrector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolCorrector##classe(classe::MetaObject(),CATIAManufacturingToolCorrector::MetaObject(),(void *)CreateTIECATIAManufacturingToolCorrector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingToolCorrector(classe) \
 \
 \
declare_TIE_CATIAManufacturingToolCorrector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingToolCorrector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingToolCorrector,"CATIAManufacturingToolCorrector",CATIAManufacturingToolCorrector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingToolCorrector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingToolCorrector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingToolCorrector##classe(classe::MetaObject(),CATIAManufacturingToolCorrector::MetaObject(),(void *)CreateTIECATIAManufacturingToolCorrector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingToolCorrector(classe) TIE_CATIAManufacturingToolCorrector(classe)
#else
#define BOA_CATIAManufacturingToolCorrector(classe) CATImplementBOA(CATIAManufacturingToolCorrector, classe)
#endif

#endif
