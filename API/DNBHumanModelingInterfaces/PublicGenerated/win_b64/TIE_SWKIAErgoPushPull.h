#ifndef __TIE_SWKIAErgoPushPull
#define __TIE_SWKIAErgoPushPull

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAErgoPushPull.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAErgoPushPull */
#define declare_TIE_SWKIAErgoPushPull(classe) \
 \
 \
class TIESWKIAErgoPushPull##classe : public SWKIAErgoPushPull \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAErgoPushPull, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Frequency(double & poFrequency); \
      virtual HRESULT __stdcall put_Frequency(double piFrequency); \
      virtual HRESULT __stdcall get_DistanceOfPush(CATBSTR & pioDistanceOfPush); \
      virtual HRESULT __stdcall put_DistanceOfPush(const CATBSTR & piDistanceOfPush); \
      virtual HRESULT __stdcall get_DistanceOfPull(CATBSTR & pioDistanceOfPull); \
      virtual HRESULT __stdcall put_DistanceOfPull(const CATBSTR & piDistanceOfPull); \
      virtual HRESULT __stdcall get_Population(double & poPopulation); \
      virtual HRESULT __stdcall put_Population(double piPopulation); \
      virtual HRESULT __stdcall get_MaxInitialPushForce(CATBSTR & pioMaxInitialPushForce); \
      virtual HRESULT __stdcall get_MaxSustainedPushForce(CATBSTR & pioMaxSustainedPushForce); \
      virtual HRESULT __stdcall get_MaxInitialPullForce(CATBSTR & pioMaxInitialPullForce); \
      virtual HRESULT __stdcall get_MaxSustainedPullForce(CATBSTR & pioMaxSustainedPullForce); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAErgoPushPull(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Frequency(double & poFrequency); \
virtual HRESULT __stdcall put_Frequency(double piFrequency); \
virtual HRESULT __stdcall get_DistanceOfPush(CATBSTR & pioDistanceOfPush); \
virtual HRESULT __stdcall put_DistanceOfPush(const CATBSTR & piDistanceOfPush); \
virtual HRESULT __stdcall get_DistanceOfPull(CATBSTR & pioDistanceOfPull); \
virtual HRESULT __stdcall put_DistanceOfPull(const CATBSTR & piDistanceOfPull); \
virtual HRESULT __stdcall get_Population(double & poPopulation); \
virtual HRESULT __stdcall put_Population(double piPopulation); \
virtual HRESULT __stdcall get_MaxInitialPushForce(CATBSTR & pioMaxInitialPushForce); \
virtual HRESULT __stdcall get_MaxSustainedPushForce(CATBSTR & pioMaxSustainedPushForce); \
virtual HRESULT __stdcall get_MaxInitialPullForce(CATBSTR & pioMaxInitialPullForce); \
virtual HRESULT __stdcall get_MaxSustainedPullForce(CATBSTR & pioMaxSustainedPullForce); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAErgoPushPull(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Frequency(double & poFrequency) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_Frequency(poFrequency)); \
} \
HRESULT __stdcall  ENVTIEName::put_Frequency(double piFrequency) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)put_Frequency(piFrequency)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceOfPush(CATBSTR & pioDistanceOfPush) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_DistanceOfPush(pioDistanceOfPush)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceOfPush(const CATBSTR & piDistanceOfPush) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)put_DistanceOfPush(piDistanceOfPush)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceOfPull(CATBSTR & pioDistanceOfPull) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_DistanceOfPull(pioDistanceOfPull)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceOfPull(const CATBSTR & piDistanceOfPull) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)put_DistanceOfPull(piDistanceOfPull)); \
} \
HRESULT __stdcall  ENVTIEName::get_Population(double & poPopulation) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_Population(poPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Population(double piPopulation) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)put_Population(piPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxInitialPushForce(CATBSTR & pioMaxInitialPushForce) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_MaxInitialPushForce(pioMaxInitialPushForce)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxSustainedPushForce(CATBSTR & pioMaxSustainedPushForce) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_MaxSustainedPushForce(pioMaxSustainedPushForce)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxInitialPullForce(CATBSTR & pioMaxInitialPullForce) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_MaxInitialPullForce(pioMaxInitialPullForce)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxSustainedPullForce(CATBSTR & pioMaxSustainedPullForce) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_MaxSustainedPullForce(pioMaxSustainedPullForce)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAErgoPushPull,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAErgoPushPull(classe)    TIESWKIAErgoPushPull##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAErgoPushPull(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAErgoPushPull, classe) \
 \
 \
CATImplementTIEMethods(SWKIAErgoPushPull, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAErgoPushPull, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAErgoPushPull, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAErgoPushPull, classe) \
 \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_Frequency(double & poFrequency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poFrequency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Frequency(poFrequency); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poFrequency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::put_Frequency(double piFrequency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piFrequency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Frequency(piFrequency); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piFrequency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_DistanceOfPush(CATBSTR & pioDistanceOfPush) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&pioDistanceOfPush); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceOfPush(pioDistanceOfPush); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&pioDistanceOfPush); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::put_DistanceOfPush(const CATBSTR & piDistanceOfPush) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piDistanceOfPush); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceOfPush(piDistanceOfPush); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piDistanceOfPush); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_DistanceOfPull(CATBSTR & pioDistanceOfPull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&pioDistanceOfPull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceOfPull(pioDistanceOfPull); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&pioDistanceOfPull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::put_DistanceOfPull(const CATBSTR & piDistanceOfPull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piDistanceOfPull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceOfPull(piDistanceOfPull); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piDistanceOfPull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_Population(double & poPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Population(poPopulation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::put_Population(double piPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&piPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Population(piPopulation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&piPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_MaxInitialPushForce(CATBSTR & pioMaxInitialPushForce) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&pioMaxInitialPushForce); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxInitialPushForce(pioMaxInitialPushForce); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&pioMaxInitialPushForce); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_MaxSustainedPushForce(CATBSTR & pioMaxSustainedPushForce) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&pioMaxSustainedPushForce); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxSustainedPushForce(pioMaxSustainedPushForce); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&pioMaxSustainedPushForce); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_MaxInitialPullForce(CATBSTR & pioMaxInitialPullForce) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&pioMaxInitialPullForce); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxInitialPullForce(pioMaxInitialPullForce); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&pioMaxInitialPullForce); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoPushPull##classe::get_MaxSustainedPullForce(CATBSTR & pioMaxSustainedPullForce) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&pioMaxSustainedPullForce); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxSustainedPullForce(pioMaxSustainedPullForce); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&pioMaxSustainedPullForce); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoPushPull##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoPushPull##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoPushPull##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoPushPull##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoPushPull##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAErgoPushPull(classe) \
 \
 \
declare_TIE_SWKIAErgoPushPull(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoPushPull##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoPushPull,"SWKIAErgoPushPull",SWKIAErgoPushPull::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoPushPull(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAErgoPushPull, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoPushPull##classe(classe::MetaObject(),SWKIAErgoPushPull::MetaObject(),(void *)CreateTIESWKIAErgoPushPull##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAErgoPushPull(classe) \
 \
 \
declare_TIE_SWKIAErgoPushPull(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoPushPull##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoPushPull,"SWKIAErgoPushPull",SWKIAErgoPushPull::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoPushPull(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAErgoPushPull, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoPushPull##classe(classe::MetaObject(),SWKIAErgoPushPull::MetaObject(),(void *)CreateTIESWKIAErgoPushPull##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAErgoPushPull(classe) TIE_SWKIAErgoPushPull(classe)
#else
#define BOA_SWKIAErgoPushPull(classe) CATImplementBOA(SWKIAErgoPushPull, classe)
#endif

#endif
