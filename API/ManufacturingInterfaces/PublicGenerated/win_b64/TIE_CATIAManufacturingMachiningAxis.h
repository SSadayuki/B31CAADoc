#ifndef __TIE_CATIAManufacturingMachiningAxis
#define __TIE_CATIAManufacturingMachiningAxis

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingMachiningAxis.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingMachiningAxis */
#define declare_TIE_CATIAManufacturingMachiningAxis(classe) \
 \
 \
class TIECATIAManufacturingMachiningAxis##classe : public CATIAManufacturingMachiningAxis \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingMachiningAxis, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Origin(short & Origin); \
      virtual HRESULT __stdcall put_Origin(short Origin); \
      virtual HRESULT __stdcall get_OriginNumber(short & OriginNumber); \
      virtual HRESULT __stdcall put_OriginNumber(short OriginNumber); \
      virtual HRESULT __stdcall get_OriginGroup(short & OriginGroup); \
      virtual HRESULT __stdcall put_OriginGroup(short OriginGroup); \
      virtual HRESULT __stdcall SetPartAxisSystem(CATIABase * iPAS, CATIABase * iProduct); \
      virtual HRESULT __stdcall SetOriginPoint(CATIABase * iPoint, CATIABase * iProduct); \
      virtual HRESULT __stdcall GetOriginPoint(double & x, double & y, double & z); \
      virtual HRESULT __stdcall SetOriginXDirection(double x, double y, double z); \
      virtual HRESULT __stdcall SetOriginZDirection(double x, double y, double z); \
      virtual HRESULT __stdcall GetOriginXDirection(double & x, double & y, double & z); \
      virtual HRESULT __stdcall GetOriginYDirection(double & x, double & y, double & z); \
      virtual HRESULT __stdcall GetOriginZDirection(double & x, double & y, double & z); \
      virtual HRESULT __stdcall SetOriginPointByCoordinates(double x, double y, double z); \
      virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingMachiningAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Origin(short & Origin); \
virtual HRESULT __stdcall put_Origin(short Origin); \
virtual HRESULT __stdcall get_OriginNumber(short & OriginNumber); \
virtual HRESULT __stdcall put_OriginNumber(short OriginNumber); \
virtual HRESULT __stdcall get_OriginGroup(short & OriginGroup); \
virtual HRESULT __stdcall put_OriginGroup(short OriginGroup); \
virtual HRESULT __stdcall SetPartAxisSystem(CATIABase * iPAS, CATIABase * iProduct); \
virtual HRESULT __stdcall SetOriginPoint(CATIABase * iPoint, CATIABase * iProduct); \
virtual HRESULT __stdcall GetOriginPoint(double & x, double & y, double & z); \
virtual HRESULT __stdcall SetOriginXDirection(double x, double y, double z); \
virtual HRESULT __stdcall SetOriginZDirection(double x, double y, double z); \
virtual HRESULT __stdcall GetOriginXDirection(double & x, double & y, double & z); \
virtual HRESULT __stdcall GetOriginYDirection(double & x, double & y, double & z); \
virtual HRESULT __stdcall GetOriginZDirection(double & x, double & y, double & z); \
virtual HRESULT __stdcall SetOriginPointByCoordinates(double x, double y, double z); \
virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingMachiningAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Origin(short & Origin) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)get_Origin(Origin)); \
} \
HRESULT __stdcall  ENVTIEName::put_Origin(short Origin) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)put_Origin(Origin)); \
} \
HRESULT __stdcall  ENVTIEName::get_OriginNumber(short & OriginNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)get_OriginNumber(OriginNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_OriginNumber(short OriginNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)put_OriginNumber(OriginNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_OriginGroup(short & OriginGroup) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)get_OriginGroup(OriginGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_OriginGroup(short OriginGroup) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)put_OriginGroup(OriginGroup)); \
} \
HRESULT __stdcall  ENVTIEName::SetPartAxisSystem(CATIABase * iPAS, CATIABase * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)SetPartAxisSystem(iPAS,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::SetOriginPoint(CATIABase * iPoint, CATIABase * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)SetOriginPoint(iPoint,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetOriginPoint(double & x, double & y, double & z) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)GetOriginPoint(x,y,z)); \
} \
HRESULT __stdcall  ENVTIEName::SetOriginXDirection(double x, double y, double z) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)SetOriginXDirection(x,y,z)); \
} \
HRESULT __stdcall  ENVTIEName::SetOriginZDirection(double x, double y, double z) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)SetOriginZDirection(x,y,z)); \
} \
HRESULT __stdcall  ENVTIEName::GetOriginXDirection(double & x, double & y, double & z) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)GetOriginXDirection(x,y,z)); \
} \
HRESULT __stdcall  ENVTIEName::GetOriginYDirection(double & x, double & y, double & z) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)GetOriginYDirection(x,y,z)); \
} \
HRESULT __stdcall  ENVTIEName::GetOriginZDirection(double & x, double & y, double & z) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)GetOriginZDirection(x,y,z)); \
} \
HRESULT __stdcall  ENVTIEName::SetOriginPointByCoordinates(double x, double y, double z) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)SetOriginPointByCoordinates(x,y,z)); \
} \
HRESULT __stdcall  ENVTIEName::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)GetAGeometricAttribute(iAttribut,oAttributCke)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingMachiningAxis,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingMachiningAxis(classe)    TIECATIAManufacturingMachiningAxis##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingMachiningAxis(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingMachiningAxis, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingMachiningAxis, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingMachiningAxis, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingMachiningAxis, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingMachiningAxis, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::get_Origin(short & Origin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&Origin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Origin(Origin); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&Origin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::put_Origin(short Origin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&Origin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Origin(Origin); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&Origin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::get_OriginNumber(short & OriginNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&OriginNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OriginNumber(OriginNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&OriginNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::put_OriginNumber(short OriginNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&OriginNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OriginNumber(OriginNumber); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&OriginNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::get_OriginGroup(short & OriginGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&OriginGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OriginGroup(OriginGroup); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&OriginGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::put_OriginGroup(short OriginGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&OriginGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OriginGroup(OriginGroup); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&OriginGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::SetPartAxisSystem(CATIABase * iPAS, CATIABase * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPAS,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPartAxisSystem(iPAS,iProduct); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPAS,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::SetOriginPoint(CATIABase * iPoint, CATIABase * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPoint,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOriginPoint(iPoint,iProduct); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPoint,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::GetOriginPoint(double & x, double & y, double & z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&x,&y,&z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOriginPoint(x,y,z); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&x,&y,&z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::SetOriginXDirection(double x, double y, double z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&x,&y,&z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOriginXDirection(x,y,z); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&x,&y,&z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::SetOriginZDirection(double x, double y, double z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&x,&y,&z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOriginZDirection(x,y,z); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&x,&y,&z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::GetOriginXDirection(double & x, double & y, double & z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&x,&y,&z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOriginXDirection(x,y,z); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&x,&y,&z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::GetOriginYDirection(double & x, double & y, double & z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&x,&y,&z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOriginYDirection(x,y,z); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&x,&y,&z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::GetOriginZDirection(double & x, double & y, double & z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&x,&y,&z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOriginZDirection(x,y,z); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&x,&y,&z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::SetOriginPointByCoordinates(double x, double y, double z) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&x,&y,&z); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOriginPointByCoordinates(x,y,z); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&x,&y,&z); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingMachiningAxis##classe::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAGeometricAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachiningAxis##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachiningAxis##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachiningAxis##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachiningAxis##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingMachiningAxis##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingMachiningAxis(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachiningAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachiningAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachiningAxis,"CATIAManufacturingMachiningAxis",CATIAManufacturingMachiningAxis::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachiningAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingMachiningAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachiningAxis##classe(classe::MetaObject(),CATIAManufacturingMachiningAxis::MetaObject(),(void *)CreateTIECATIAManufacturingMachiningAxis##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingMachiningAxis(classe) \
 \
 \
declare_TIE_CATIAManufacturingMachiningAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingMachiningAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingMachiningAxis,"CATIAManufacturingMachiningAxis",CATIAManufacturingMachiningAxis::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingMachiningAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingMachiningAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingMachiningAxis##classe(classe::MetaObject(),CATIAManufacturingMachiningAxis::MetaObject(),(void *)CreateTIECATIAManufacturingMachiningAxis##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingMachiningAxis(classe) TIE_CATIAManufacturingMachiningAxis(classe)
#else
#define BOA_CATIAManufacturingMachiningAxis(classe) CATImplementBOA(CATIAManufacturingMachiningAxis, classe)
#endif

#endif
