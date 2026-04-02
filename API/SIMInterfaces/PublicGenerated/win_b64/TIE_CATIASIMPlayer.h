#ifndef __TIE_CATIASIMPlayer
#define __TIE_CATIASIMPlayer

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASIMPlayer.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASIMPlayer */
#define declare_TIE_CATIASIMPlayer(classe) \
 \
 \
class TIECATIASIMPlayer##classe : public CATIASIMPlayer \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASIMPlayer, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall LoadAgent(CATBaseDispatch * iAgent); \
      virtual HRESULT __stdcall GetLoadedAgent(CATBaseDispatch *& oAgent); \
      virtual HRESULT __stdcall SetClockInterval(double iLowerBound, double iUpperBound, CATLONG & oIndex); \
      virtual HRESULT __stdcall UnSetClockInterval(CATLONG iIndex); \
      virtual HRESULT __stdcall GetClockLowerBound(double & oLowerBound); \
      virtual HRESULT __stdcall GetClockUpperBound(double & oUpperBound); \
      virtual HRESULT __stdcall get_LoopMode(CatSIMLoopMode & oMode); \
      virtual HRESULT __stdcall put_LoopMode(CatSIMLoopMode iMode); \
      virtual HRESULT __stdcall get_ClockStep(double & oClockStep); \
      virtual HRESULT __stdcall put_ClockStep(double iClockStep); \
      virtual HRESULT __stdcall get_Tempo(double & oTempo); \
      virtual HRESULT __stdcall put_Tempo(double iTempo); \
      virtual HRESULT __stdcall get_PlayExitMode(CatSIMPlayExitMode & oPlayExitMode); \
      virtual HRESULT __stdcall put_PlayExitMode(CatSIMPlayExitMode iPlayExitMode); \
      virtual HRESULT __stdcall PlayBegin(); \
      virtual HRESULT __stdcall PlayEnd(); \
      virtual HRESULT __stdcall PlayForward(); \
      virtual HRESULT __stdcall PlayBackward(); \
      virtual HRESULT __stdcall PlayStepForward(); \
      virtual HRESULT __stdcall PlayStepBackward(); \
      virtual HRESULT __stdcall Pause(); \
      virtual HRESULT __stdcall PlayJump(double iClockValue); \
      virtual HRESULT __stdcall get_AbsoluteClock(double & oClockValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASIMPlayer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall LoadAgent(CATBaseDispatch * iAgent); \
virtual HRESULT __stdcall GetLoadedAgent(CATBaseDispatch *& oAgent); \
virtual HRESULT __stdcall SetClockInterval(double iLowerBound, double iUpperBound, CATLONG & oIndex); \
virtual HRESULT __stdcall UnSetClockInterval(CATLONG iIndex); \
virtual HRESULT __stdcall GetClockLowerBound(double & oLowerBound); \
virtual HRESULT __stdcall GetClockUpperBound(double & oUpperBound); \
virtual HRESULT __stdcall get_LoopMode(CatSIMLoopMode & oMode); \
virtual HRESULT __stdcall put_LoopMode(CatSIMLoopMode iMode); \
virtual HRESULT __stdcall get_ClockStep(double & oClockStep); \
virtual HRESULT __stdcall put_ClockStep(double iClockStep); \
virtual HRESULT __stdcall get_Tempo(double & oTempo); \
virtual HRESULT __stdcall put_Tempo(double iTempo); \
virtual HRESULT __stdcall get_PlayExitMode(CatSIMPlayExitMode & oPlayExitMode); \
virtual HRESULT __stdcall put_PlayExitMode(CatSIMPlayExitMode iPlayExitMode); \
virtual HRESULT __stdcall PlayBegin(); \
virtual HRESULT __stdcall PlayEnd(); \
virtual HRESULT __stdcall PlayForward(); \
virtual HRESULT __stdcall PlayBackward(); \
virtual HRESULT __stdcall PlayStepForward(); \
virtual HRESULT __stdcall PlayStepBackward(); \
virtual HRESULT __stdcall Pause(); \
virtual HRESULT __stdcall PlayJump(double iClockValue); \
virtual HRESULT __stdcall get_AbsoluteClock(double & oClockValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASIMPlayer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::LoadAgent(CATBaseDispatch * iAgent) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)LoadAgent(iAgent)); \
} \
HRESULT __stdcall  ENVTIEName::GetLoadedAgent(CATBaseDispatch *& oAgent) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)GetLoadedAgent(oAgent)); \
} \
HRESULT __stdcall  ENVTIEName::SetClockInterval(double iLowerBound, double iUpperBound, CATLONG & oIndex) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)SetClockInterval(iLowerBound,iUpperBound,oIndex)); \
} \
HRESULT __stdcall  ENVTIEName::UnSetClockInterval(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)UnSetClockInterval(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetClockLowerBound(double & oLowerBound) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)GetClockLowerBound(oLowerBound)); \
} \
HRESULT __stdcall  ENVTIEName::GetClockUpperBound(double & oUpperBound) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)GetClockUpperBound(oUpperBound)); \
} \
HRESULT __stdcall  ENVTIEName::get_LoopMode(CatSIMLoopMode & oMode) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_LoopMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LoopMode(CatSIMLoopMode iMode) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)put_LoopMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClockStep(double & oClockStep) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_ClockStep(oClockStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClockStep(double iClockStep) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)put_ClockStep(iClockStep)); \
} \
HRESULT __stdcall  ENVTIEName::get_Tempo(double & oTempo) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_Tempo(oTempo)); \
} \
HRESULT __stdcall  ENVTIEName::put_Tempo(double iTempo) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)put_Tempo(iTempo)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlayExitMode(CatSIMPlayExitMode & oPlayExitMode) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_PlayExitMode(oPlayExitMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlayExitMode(CatSIMPlayExitMode iPlayExitMode) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)put_PlayExitMode(iPlayExitMode)); \
} \
HRESULT __stdcall  ENVTIEName::PlayBegin() \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)PlayBegin()); \
} \
HRESULT __stdcall  ENVTIEName::PlayEnd() \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)PlayEnd()); \
} \
HRESULT __stdcall  ENVTIEName::PlayForward() \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)PlayForward()); \
} \
HRESULT __stdcall  ENVTIEName::PlayBackward() \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)PlayBackward()); \
} \
HRESULT __stdcall  ENVTIEName::PlayStepForward() \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)PlayStepForward()); \
} \
HRESULT __stdcall  ENVTIEName::PlayStepBackward() \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)PlayStepBackward()); \
} \
HRESULT __stdcall  ENVTIEName::Pause() \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)Pause()); \
} \
HRESULT __stdcall  ENVTIEName::PlayJump(double iClockValue) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)PlayJump(iClockValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_AbsoluteClock(double & oClockValue) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_AbsoluteClock(oClockValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASIMPlayer,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASIMPlayer(classe)    TIECATIASIMPlayer##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASIMPlayer(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASIMPlayer, classe) \
 \
 \
CATImplementTIEMethods(CATIASIMPlayer, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASIMPlayer, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASIMPlayer, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASIMPlayer, classe) \
 \
HRESULT __stdcall  TIECATIASIMPlayer##classe::LoadAgent(CATBaseDispatch * iAgent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iAgent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LoadAgent(iAgent); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iAgent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::GetLoadedAgent(CATBaseDispatch *& oAgent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAgent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLoadedAgent(oAgent); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAgent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::SetClockInterval(double iLowerBound, double iUpperBound, CATLONG & oIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLowerBound,&iUpperBound,&oIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClockInterval(iLowerBound,iUpperBound,oIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLowerBound,&iUpperBound,&oIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::UnSetClockInterval(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnSetClockInterval(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::GetClockLowerBound(double & oLowerBound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLowerBound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClockLowerBound(oLowerBound); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLowerBound); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::GetClockUpperBound(double & oUpperBound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oUpperBound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClockUpperBound(oUpperBound); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oUpperBound); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::get_LoopMode(CatSIMLoopMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LoopMode(oMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::put_LoopMode(CatSIMLoopMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LoopMode(iMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::get_ClockStep(double & oClockStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oClockStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClockStep(oClockStep); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oClockStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::put_ClockStep(double iClockStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iClockStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClockStep(iClockStep); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iClockStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::get_Tempo(double & oTempo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTempo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Tempo(oTempo); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTempo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::put_Tempo(double iTempo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iTempo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Tempo(iTempo); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iTempo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::get_PlayExitMode(CatSIMPlayExitMode & oPlayExitMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oPlayExitMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlayExitMode(oPlayExitMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oPlayExitMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::put_PlayExitMode(CatSIMPlayExitMode iPlayExitMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iPlayExitMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlayExitMode(iPlayExitMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iPlayExitMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::PlayBegin() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlayBegin(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::PlayEnd() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlayEnd(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::PlayForward() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlayForward(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::PlayBackward() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlayBackward(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::PlayStepForward() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlayStepForward(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::PlayStepBackward() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlayStepBackward(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::Pause() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Pause(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::PlayJump(double iClockValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iClockValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PlayJump(iClockValue); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iClockValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASIMPlayer##classe::get_AbsoluteClock(double & oClockValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oClockValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AbsoluteClock(oClockValue); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oClockValue); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASIMPlayer##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASIMPlayer##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASIMPlayer##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASIMPlayer##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASIMPlayer##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASIMPlayer(classe) \
 \
 \
declare_TIE_CATIASIMPlayer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASIMPlayer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASIMPlayer,"CATIASIMPlayer",CATIASIMPlayer::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASIMPlayer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASIMPlayer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASIMPlayer##classe(classe::MetaObject(),CATIASIMPlayer::MetaObject(),(void *)CreateTIECATIASIMPlayer##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASIMPlayer(classe) \
 \
 \
declare_TIE_CATIASIMPlayer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASIMPlayer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASIMPlayer,"CATIASIMPlayer",CATIASIMPlayer::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASIMPlayer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASIMPlayer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASIMPlayer##classe(classe::MetaObject(),CATIASIMPlayer::MetaObject(),(void *)CreateTIECATIASIMPlayer##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASIMPlayer(classe) TIE_CATIASIMPlayer(classe)
#else
#define BOA_CATIASIMPlayer(classe) CATImplementBOA(CATIASIMPlayer, classe)
#endif

#endif
