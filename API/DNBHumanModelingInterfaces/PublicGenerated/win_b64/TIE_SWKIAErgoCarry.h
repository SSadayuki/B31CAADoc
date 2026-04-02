#ifndef __TIE_SWKIAErgoCarry
#define __TIE_SWKIAErgoCarry

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAErgoCarry.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAErgoCarry */
#define declare_TIE_SWKIAErgoCarry(classe) \
 \
 \
class TIESWKIAErgoCarry##classe : public SWKIAErgoCarry \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAErgoCarry, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Frequency(double & poFrequency); \
      virtual HRESULT __stdcall put_Frequency(double piFrequency); \
      virtual HRESULT __stdcall get_DistanceOfCarry(CATBSTR & pioDistanceOfCarry); \
      virtual HRESULT __stdcall put_DistanceOfCarry(const CATBSTR & piDistanceOfCarry); \
      virtual HRESULT __stdcall get_Population(double & poPopulation); \
      virtual HRESULT __stdcall put_Population(double piPopulation); \
      virtual HRESULT __stdcall get_MaximumWeight(CATBSTR & pioMaximumWeight); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAErgoCarry(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Frequency(double & poFrequency); \
virtual HRESULT __stdcall put_Frequency(double piFrequency); \
virtual HRESULT __stdcall get_DistanceOfCarry(CATBSTR & pioDistanceOfCarry); \
virtual HRESULT __stdcall put_DistanceOfCarry(const CATBSTR & piDistanceOfCarry); \
virtual HRESULT __stdcall get_Population(double & poPopulation); \
virtual HRESULT __stdcall put_Population(double piPopulation); \
virtual HRESULT __stdcall get_MaximumWeight(CATBSTR & pioMaximumWeight); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAErgoCarry(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Frequency(double & poFrequency) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)get_Frequency(poFrequency)); \
} \
HRESULT __stdcall  ENVTIEName::put_Frequency(double piFrequency) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)put_Frequency(piFrequency)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceOfCarry(CATBSTR & pioDistanceOfCarry) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)get_DistanceOfCarry(pioDistanceOfCarry)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceOfCarry(const CATBSTR & piDistanceOfCarry) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)put_DistanceOfCarry(piDistanceOfCarry)); \
} \
HRESULT __stdcall  ENVTIEName::get_Population(double & poPopulation) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)get_Population(poPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Population(double piPopulation) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)put_Population(piPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumWeight(CATBSTR & pioMaximumWeight) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)get_MaximumWeight(pioMaximumWeight)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAErgoCarry,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAErgoCarry(classe)    TIESWKIAErgoCarry##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAErgoCarry(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAErgoCarry, classe) \
 \
 \
CATImplementTIEMethods(SWKIAErgoCarry, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAErgoCarry, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAErgoCarry, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAErgoCarry, classe) \
 \
HRESULT __stdcall  TIESWKIAErgoCarry##classe::get_Frequency(double & poFrequency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poFrequency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Frequency(poFrequency); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poFrequency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoCarry##classe::put_Frequency(double piFrequency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piFrequency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Frequency(piFrequency); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piFrequency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoCarry##classe::get_DistanceOfCarry(CATBSTR & pioDistanceOfCarry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&pioDistanceOfCarry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceOfCarry(pioDistanceOfCarry); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&pioDistanceOfCarry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoCarry##classe::put_DistanceOfCarry(const CATBSTR & piDistanceOfCarry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piDistanceOfCarry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceOfCarry(piDistanceOfCarry); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piDistanceOfCarry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoCarry##classe::get_Population(double & poPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&poPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Population(poPopulation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&poPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoCarry##classe::put_Population(double piPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Population(piPopulation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoCarry##classe::get_MaximumWeight(CATBSTR & pioMaximumWeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&pioMaximumWeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumWeight(pioMaximumWeight); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&pioMaximumWeight); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoCarry##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoCarry##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoCarry##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoCarry##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoCarry##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAErgoCarry(classe) \
 \
 \
declare_TIE_SWKIAErgoCarry(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoCarry##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoCarry,"SWKIAErgoCarry",SWKIAErgoCarry::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoCarry(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAErgoCarry, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoCarry##classe(classe::MetaObject(),SWKIAErgoCarry::MetaObject(),(void *)CreateTIESWKIAErgoCarry##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAErgoCarry(classe) \
 \
 \
declare_TIE_SWKIAErgoCarry(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoCarry##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoCarry,"SWKIAErgoCarry",SWKIAErgoCarry::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoCarry(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAErgoCarry, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoCarry##classe(classe::MetaObject(),SWKIAErgoCarry::MetaObject(),(void *)CreateTIESWKIAErgoCarry##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAErgoCarry(classe) TIE_SWKIAErgoCarry(classe)
#else
#define BOA_SWKIAErgoCarry(classe) CATImplementBOA(SWKIAErgoCarry, classe)
#endif

#endif
