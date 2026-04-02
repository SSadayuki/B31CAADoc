#ifndef __TIE_SWKIAAnthro
#define __TIE_SWKIAAnthro

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAAnthro.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAAnthro */
#define declare_TIE_SWKIAAnthro(classe) \
 \
 \
class TIESWKIAAnthro##classe : public SWKIAAnthro \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAAnthro, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Gender(CATBSTR & pioGender); \
      virtual HRESULT __stdcall put_Gender(const CATBSTR & piGender); \
      virtual HRESULT __stdcall get_Population(CATBSTR & pioPopulation); \
      virtual HRESULT __stdcall put_Population(const CATBSTR & piPopulation); \
      virtual HRESULT __stdcall get_ConstructionType(CATBSTR & pioConstructionType); \
      virtual HRESULT __stdcall put_ConstructionType(const CATBSTR & piConstructionType); \
      virtual HRESULT __stdcall get_PopulationAccommodation(double & poAccomodation); \
      virtual HRESULT __stdcall put_PopulationAccommodation(double piAccomodation); \
      virtual HRESULT __stdcall get_LimitBound(double & poLimitBound); \
      virtual HRESULT __stdcall put_LimitBound(double piLimitBound); \
      virtual HRESULT __stdcall get_InterpolationMethod(CATBSTR & pioInterpolation); \
      virtual HRESULT __stdcall put_InterpolationMethod(const CATBSTR & piInterpolation); \
      virtual HRESULT __stdcall get_NumberOfVariables(CATLONG & poNbVariables); \
      virtual HRESULT __stdcall GetVariableAtIndex(CATLONG piIndex, SWKIAAnthroVariable *& poVariable); \
      virtual HRESULT __stdcall GetVariableFromUsNumber(CATLONG piRefNumber, SWKIAAnthroVariable *& poVariable); \
      virtual HRESULT __stdcall Reset(); \
      virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAAnthro(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Gender(CATBSTR & pioGender); \
virtual HRESULT __stdcall put_Gender(const CATBSTR & piGender); \
virtual HRESULT __stdcall get_Population(CATBSTR & pioPopulation); \
virtual HRESULT __stdcall put_Population(const CATBSTR & piPopulation); \
virtual HRESULT __stdcall get_ConstructionType(CATBSTR & pioConstructionType); \
virtual HRESULT __stdcall put_ConstructionType(const CATBSTR & piConstructionType); \
virtual HRESULT __stdcall get_PopulationAccommodation(double & poAccomodation); \
virtual HRESULT __stdcall put_PopulationAccommodation(double piAccomodation); \
virtual HRESULT __stdcall get_LimitBound(double & poLimitBound); \
virtual HRESULT __stdcall put_LimitBound(double piLimitBound); \
virtual HRESULT __stdcall get_InterpolationMethod(CATBSTR & pioInterpolation); \
virtual HRESULT __stdcall put_InterpolationMethod(const CATBSTR & piInterpolation); \
virtual HRESULT __stdcall get_NumberOfVariables(CATLONG & poNbVariables); \
virtual HRESULT __stdcall GetVariableAtIndex(CATLONG piIndex, SWKIAAnthroVariable *& poVariable); \
virtual HRESULT __stdcall GetVariableFromUsNumber(CATLONG piRefNumber, SWKIAAnthroVariable *& poVariable); \
virtual HRESULT __stdcall Reset(); \
virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAAnthro(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Gender(CATBSTR & pioGender) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_Gender(pioGender)); \
} \
HRESULT __stdcall  ENVTIEName::put_Gender(const CATBSTR & piGender) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_Gender(piGender)); \
} \
HRESULT __stdcall  ENVTIEName::get_Population(CATBSTR & pioPopulation) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_Population(pioPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Population(const CATBSTR & piPopulation) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_Population(piPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConstructionType(CATBSTR & pioConstructionType) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_ConstructionType(pioConstructionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConstructionType(const CATBSTR & piConstructionType) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_ConstructionType(piConstructionType)); \
} \
HRESULT __stdcall  ENVTIEName::get_PopulationAccommodation(double & poAccomodation) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_PopulationAccommodation(poAccomodation)); \
} \
HRESULT __stdcall  ENVTIEName::put_PopulationAccommodation(double piAccomodation) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_PopulationAccommodation(piAccomodation)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitBound(double & poLimitBound) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_LimitBound(poLimitBound)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitBound(double piLimitBound) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_LimitBound(piLimitBound)); \
} \
HRESULT __stdcall  ENVTIEName::get_InterpolationMethod(CATBSTR & pioInterpolation) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_InterpolationMethod(pioInterpolation)); \
} \
HRESULT __stdcall  ENVTIEName::put_InterpolationMethod(const CATBSTR & piInterpolation) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_InterpolationMethod(piInterpolation)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfVariables(CATLONG & poNbVariables) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_NumberOfVariables(poNbVariables)); \
} \
HRESULT __stdcall  ENVTIEName::GetVariableAtIndex(CATLONG piIndex, SWKIAAnthroVariable *& poVariable) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)GetVariableAtIndex(piIndex,poVariable)); \
} \
HRESULT __stdcall  ENVTIEName::GetVariableFromUsNumber(CATLONG piRefNumber, SWKIAAnthroVariable *& poVariable) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)GetVariableFromUsNumber(piRefNumber,poVariable)); \
} \
HRESULT __stdcall  ENVTIEName::Reset() \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)Reset()); \
} \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & pioText) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_Memo(pioText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAAnthro,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAAnthro(classe)    TIESWKIAAnthro##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAAnthro(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAAnthro, classe) \
 \
 \
CATImplementTIEMethods(SWKIAAnthro, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAAnthro, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAAnthro, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAAnthro, classe) \
 \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_Gender(CATBSTR & pioGender) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&pioGender); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Gender(pioGender); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&pioGender); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::put_Gender(const CATBSTR & piGender) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piGender); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Gender(piGender); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piGender); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_Population(CATBSTR & pioPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&pioPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Population(pioPopulation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&pioPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::put_Population(const CATBSTR & piPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Population(piPopulation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_ConstructionType(CATBSTR & pioConstructionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&pioConstructionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConstructionType(pioConstructionType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&pioConstructionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::put_ConstructionType(const CATBSTR & piConstructionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piConstructionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConstructionType(piConstructionType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piConstructionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_PopulationAccommodation(double & poAccomodation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poAccomodation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PopulationAccommodation(poAccomodation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poAccomodation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::put_PopulationAccommodation(double piAccomodation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&piAccomodation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PopulationAccommodation(piAccomodation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&piAccomodation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_LimitBound(double & poLimitBound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poLimitBound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitBound(poLimitBound); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poLimitBound); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::put_LimitBound(double piLimitBound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&piLimitBound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitBound(piLimitBound); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&piLimitBound); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_InterpolationMethod(CATBSTR & pioInterpolation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&pioInterpolation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InterpolationMethod(pioInterpolation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&pioInterpolation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::put_InterpolationMethod(const CATBSTR & piInterpolation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&piInterpolation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InterpolationMethod(piInterpolation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&piInterpolation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_NumberOfVariables(CATLONG & poNbVariables) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&poNbVariables); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfVariables(poNbVariables); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&poNbVariables); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::GetVariableAtIndex(CATLONG piIndex, SWKIAAnthroVariable *& poVariable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&piIndex,&poVariable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVariableAtIndex(piIndex,poVariable); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&piIndex,&poVariable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::GetVariableFromUsNumber(CATLONG piRefNumber, SWKIAAnthroVariable *& poVariable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&piRefNumber,&poVariable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVariableFromUsNumber(piRefNumber,poVariable); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&piRefNumber,&poVariable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::Reset() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reset(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::get_Memo(CATBSTR & pioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&pioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(pioText); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&pioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthro##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthro##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthro##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthro##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthro##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthro##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAAnthro(classe) \
 \
 \
declare_TIE_SWKIAAnthro(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAAnthro##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAAnthro,"SWKIAAnthro",SWKIAAnthro::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAAnthro(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAAnthro, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAAnthro##classe(classe::MetaObject(),SWKIAAnthro::MetaObject(),(void *)CreateTIESWKIAAnthro##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAAnthro(classe) \
 \
 \
declare_TIE_SWKIAAnthro(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAAnthro##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAAnthro,"SWKIAAnthro",SWKIAAnthro::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAAnthro(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAAnthro, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAAnthro##classe(classe::MetaObject(),SWKIAAnthro::MetaObject(),(void *)CreateTIESWKIAAnthro##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAAnthro(classe) TIE_SWKIAAnthro(classe)
#else
#define BOA_SWKIAAnthro(classe) CATImplementBOA(SWKIAAnthro, classe)
#endif

#endif
