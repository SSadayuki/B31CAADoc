#ifndef __TIE_CATISIMAgent
#define __TIE_CATISIMAgent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISIMAgent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISIMAgent */
#define declare_TIE_CATISIMAgent(classe) \
 \
 \
class TIECATISIMAgent##classe : public CATISIMAgent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISIMAgent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Init (CATISIMAbsoluteClock * iSIMAbsoluteClock) ; \
      virtual HRESULT Clean (CatSIMPlayExitMode iExitMode) ; \
      virtual HRESULT Activate () ; \
      virtual HRESULT Deactivate () ; \
      virtual HRESULT GetDuration (double & oDuration) ; \
      virtual HRESULT SetClock (double iLocalClockValue) ; \
      virtual HRESULT ApplyState () ; \
      virtual HRESULT Validate (CatSIMValidationStatusRequest & oStatusRequest) ; \
      virtual HRESULT GetFwdDeltaClock (double & oDeltaClock) ; \
      virtual HRESULT GetBwdDeltaClock (double & oDeltaClock) ; \
      virtual HRESULT Commit () ; \
      virtual HRESULT Reset () ; \
      virtual HRESULT GetStepControlAbility (CatSIMStepControlMode iStepControlMode, int & oStatus) ; \
      virtual HRESULT SetStepControlMode (CatSIMStepControlMode iStepControlMode) ; \
      virtual HRESULT GetMinReqDeltaClock (double & oDeltaClock) ; \
      virtual HRESULT GetMaxReqDeltaClock (double & oDeltaClock) ; \
      virtual HRESULT GetBackwardAbility (int & oStatus) ; \
      virtual HRESULT GetJumpAbility (int & oStatus) ; \
      virtual HRESULT GetNumberOfParameters (int& oNbOfParameters) ; \
      virtual HRESULT GetCurrentParameter (int& oCurrentParameterNumber) ; \
      virtual HRESULT SetCurrentParameter (int  iCurrentParameterNumber, double& oClockForNewParam) ; \
      virtual HRESULT GetTimeBasedParameter (int& oTimeParamIndex) ; \
      virtual HRESULT GetCharacteristicsOfParameter (int iParameterIndex, CATSIMParameterCharacteristics& oCharacteristic) ; \
      virtual HRESULT GetInputFieldForParameter (int iParameterIndex, CATUnicodeString& oLabel, CATSIMLabellingMode& oUseMode) ; \
      virtual HRESULT GetNameOfParameter (int iParameterIndex, CATUnicodeString& oLabel) ; \
      virtual HRESULT GetMagnitudeOfParameter (int iParameterIndex, CATUnicodeString& oMagnitudeName) ; \
      virtual HRESULT IsOnExactValue (int iParameterIndex, CATBoolean& oValue) ; \
      virtual HRESULT HasACustomUI (CATBoolean& oHasCustomUI) ; \
      virtual HRESULT SetPlayerCustomUI (CATDlgFrame* iFatherFrame) ; \
      virtual HRESULT GetPlayContext (CATSIMPlayContext& oContextValue) ; \
      virtual HRESULT SetPlayContext (CATSIMPlayContext& iContextValue) ; \
};



#define ENVTIEdeclare_CATISIMAgent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Init (CATISIMAbsoluteClock * iSIMAbsoluteClock) ; \
virtual HRESULT Clean (CatSIMPlayExitMode iExitMode) ; \
virtual HRESULT Activate () ; \
virtual HRESULT Deactivate () ; \
virtual HRESULT GetDuration (double & oDuration) ; \
virtual HRESULT SetClock (double iLocalClockValue) ; \
virtual HRESULT ApplyState () ; \
virtual HRESULT Validate (CatSIMValidationStatusRequest & oStatusRequest) ; \
virtual HRESULT GetFwdDeltaClock (double & oDeltaClock) ; \
virtual HRESULT GetBwdDeltaClock (double & oDeltaClock) ; \
virtual HRESULT Commit () ; \
virtual HRESULT Reset () ; \
virtual HRESULT GetStepControlAbility (CatSIMStepControlMode iStepControlMode, int & oStatus) ; \
virtual HRESULT SetStepControlMode (CatSIMStepControlMode iStepControlMode) ; \
virtual HRESULT GetMinReqDeltaClock (double & oDeltaClock) ; \
virtual HRESULT GetMaxReqDeltaClock (double & oDeltaClock) ; \
virtual HRESULT GetBackwardAbility (int & oStatus) ; \
virtual HRESULT GetJumpAbility (int & oStatus) ; \
virtual HRESULT GetNumberOfParameters (int& oNbOfParameters) ; \
virtual HRESULT GetCurrentParameter (int& oCurrentParameterNumber) ; \
virtual HRESULT SetCurrentParameter (int  iCurrentParameterNumber, double& oClockForNewParam) ; \
virtual HRESULT GetTimeBasedParameter (int& oTimeParamIndex) ; \
virtual HRESULT GetCharacteristicsOfParameter (int iParameterIndex, CATSIMParameterCharacteristics& oCharacteristic) ; \
virtual HRESULT GetInputFieldForParameter (int iParameterIndex, CATUnicodeString& oLabel, CATSIMLabellingMode& oUseMode) ; \
virtual HRESULT GetNameOfParameter (int iParameterIndex, CATUnicodeString& oLabel) ; \
virtual HRESULT GetMagnitudeOfParameter (int iParameterIndex, CATUnicodeString& oMagnitudeName) ; \
virtual HRESULT IsOnExactValue (int iParameterIndex, CATBoolean& oValue) ; \
virtual HRESULT HasACustomUI (CATBoolean& oHasCustomUI) ; \
virtual HRESULT SetPlayerCustomUI (CATDlgFrame* iFatherFrame) ; \
virtual HRESULT GetPlayContext (CATSIMPlayContext& oContextValue) ; \
virtual HRESULT SetPlayContext (CATSIMPlayContext& iContextValue) ; \


#define ENVTIEdefine_CATISIMAgent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Init (CATISIMAbsoluteClock * iSIMAbsoluteClock)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)Init (iSIMAbsoluteClock)); \
} \
HRESULT  ENVTIEName::Clean (CatSIMPlayExitMode iExitMode)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)Clean (iExitMode)); \
} \
HRESULT  ENVTIEName::Activate ()  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)Activate ()); \
} \
HRESULT  ENVTIEName::Deactivate ()  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)Deactivate ()); \
} \
HRESULT  ENVTIEName::GetDuration (double & oDuration)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetDuration (oDuration)); \
} \
HRESULT  ENVTIEName::SetClock (double iLocalClockValue)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)SetClock (iLocalClockValue)); \
} \
HRESULT  ENVTIEName::ApplyState ()  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)ApplyState ()); \
} \
HRESULT  ENVTIEName::Validate (CatSIMValidationStatusRequest & oStatusRequest)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)Validate (oStatusRequest)); \
} \
HRESULT  ENVTIEName::GetFwdDeltaClock (double & oDeltaClock)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetFwdDeltaClock (oDeltaClock)); \
} \
HRESULT  ENVTIEName::GetBwdDeltaClock (double & oDeltaClock)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetBwdDeltaClock (oDeltaClock)); \
} \
HRESULT  ENVTIEName::Commit ()  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)Commit ()); \
} \
HRESULT  ENVTIEName::Reset ()  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)Reset ()); \
} \
HRESULT  ENVTIEName::GetStepControlAbility (CatSIMStepControlMode iStepControlMode, int & oStatus)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetStepControlAbility (iStepControlMode,oStatus)); \
} \
HRESULT  ENVTIEName::SetStepControlMode (CatSIMStepControlMode iStepControlMode)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)SetStepControlMode (iStepControlMode)); \
} \
HRESULT  ENVTIEName::GetMinReqDeltaClock (double & oDeltaClock)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetMinReqDeltaClock (oDeltaClock)); \
} \
HRESULT  ENVTIEName::GetMaxReqDeltaClock (double & oDeltaClock)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetMaxReqDeltaClock (oDeltaClock)); \
} \
HRESULT  ENVTIEName::GetBackwardAbility (int & oStatus)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetBackwardAbility (oStatus)); \
} \
HRESULT  ENVTIEName::GetJumpAbility (int & oStatus)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetJumpAbility (oStatus)); \
} \
HRESULT  ENVTIEName::GetNumberOfParameters (int& oNbOfParameters)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetNumberOfParameters (oNbOfParameters)); \
} \
HRESULT  ENVTIEName::GetCurrentParameter (int& oCurrentParameterNumber)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetCurrentParameter (oCurrentParameterNumber)); \
} \
HRESULT  ENVTIEName::SetCurrentParameter (int  iCurrentParameterNumber, double& oClockForNewParam)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)SetCurrentParameter (iCurrentParameterNumber,oClockForNewParam)); \
} \
HRESULT  ENVTIEName::GetTimeBasedParameter (int& oTimeParamIndex)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetTimeBasedParameter (oTimeParamIndex)); \
} \
HRESULT  ENVTIEName::GetCharacteristicsOfParameter (int iParameterIndex, CATSIMParameterCharacteristics& oCharacteristic)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetCharacteristicsOfParameter (iParameterIndex,oCharacteristic)); \
} \
HRESULT  ENVTIEName::GetInputFieldForParameter (int iParameterIndex, CATUnicodeString& oLabel, CATSIMLabellingMode& oUseMode)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetInputFieldForParameter (iParameterIndex,oLabel,oUseMode)); \
} \
HRESULT  ENVTIEName::GetNameOfParameter (int iParameterIndex, CATUnicodeString& oLabel)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetNameOfParameter (iParameterIndex,oLabel)); \
} \
HRESULT  ENVTIEName::GetMagnitudeOfParameter (int iParameterIndex, CATUnicodeString& oMagnitudeName)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetMagnitudeOfParameter (iParameterIndex,oMagnitudeName)); \
} \
HRESULT  ENVTIEName::IsOnExactValue (int iParameterIndex, CATBoolean& oValue)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)IsOnExactValue (iParameterIndex,oValue)); \
} \
HRESULT  ENVTIEName::HasACustomUI (CATBoolean& oHasCustomUI)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)HasACustomUI (oHasCustomUI)); \
} \
HRESULT  ENVTIEName::SetPlayerCustomUI (CATDlgFrame* iFatherFrame)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)SetPlayerCustomUI (iFatherFrame)); \
} \
HRESULT  ENVTIEName::GetPlayContext (CATSIMPlayContext& oContextValue)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)GetPlayContext (oContextValue)); \
} \
HRESULT  ENVTIEName::SetPlayContext (CATSIMPlayContext& iContextValue)  \
{ \
return (ENVTIECALL(CATISIMAgent,ENVTIETypeLetter,ENVTIELetter)SetPlayContext (iContextValue)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISIMAgent(classe)    TIECATISIMAgent##classe


/* Common methods inside a TIE */
#define common_TIE_CATISIMAgent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISIMAgent, classe) \
 \
 \
CATImplementTIEMethods(CATISIMAgent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISIMAgent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISIMAgent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISIMAgent, classe) \
 \
HRESULT  TIECATISIMAgent##classe::Init (CATISIMAbsoluteClock * iSIMAbsoluteClock)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init (iSIMAbsoluteClock)); \
} \
HRESULT  TIECATISIMAgent##classe::Clean (CatSIMPlayExitMode iExitMode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Clean (iExitMode)); \
} \
HRESULT  TIECATISIMAgent##classe::Activate ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate ()); \
} \
HRESULT  TIECATISIMAgent##classe::Deactivate ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate ()); \
} \
HRESULT  TIECATISIMAgent##classe::GetDuration (double & oDuration)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDuration (oDuration)); \
} \
HRESULT  TIECATISIMAgent##classe::SetClock (double iLocalClockValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClock (iLocalClockValue)); \
} \
HRESULT  TIECATISIMAgent##classe::ApplyState ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyState ()); \
} \
HRESULT  TIECATISIMAgent##classe::Validate (CatSIMValidationStatusRequest & oStatusRequest)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Validate (oStatusRequest)); \
} \
HRESULT  TIECATISIMAgent##classe::GetFwdDeltaClock (double & oDeltaClock)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFwdDeltaClock (oDeltaClock)); \
} \
HRESULT  TIECATISIMAgent##classe::GetBwdDeltaClock (double & oDeltaClock)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBwdDeltaClock (oDeltaClock)); \
} \
HRESULT  TIECATISIMAgent##classe::Commit ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit ()); \
} \
HRESULT  TIECATISIMAgent##classe::Reset ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reset ()); \
} \
HRESULT  TIECATISIMAgent##classe::GetStepControlAbility (CatSIMStepControlMode iStepControlMode, int & oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStepControlAbility (iStepControlMode,oStatus)); \
} \
HRESULT  TIECATISIMAgent##classe::SetStepControlMode (CatSIMStepControlMode iStepControlMode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStepControlMode (iStepControlMode)); \
} \
HRESULT  TIECATISIMAgent##classe::GetMinReqDeltaClock (double & oDeltaClock)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMinReqDeltaClock (oDeltaClock)); \
} \
HRESULT  TIECATISIMAgent##classe::GetMaxReqDeltaClock (double & oDeltaClock)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxReqDeltaClock (oDeltaClock)); \
} \
HRESULT  TIECATISIMAgent##classe::GetBackwardAbility (int & oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackwardAbility (oStatus)); \
} \
HRESULT  TIECATISIMAgent##classe::GetJumpAbility (int & oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetJumpAbility (oStatus)); \
} \
HRESULT  TIECATISIMAgent##classe::GetNumberOfParameters (int& oNbOfParameters)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfParameters (oNbOfParameters)); \
} \
HRESULT  TIECATISIMAgent##classe::GetCurrentParameter (int& oCurrentParameterNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentParameter (oCurrentParameterNumber)); \
} \
HRESULT  TIECATISIMAgent##classe::SetCurrentParameter (int  iCurrentParameterNumber, double& oClockForNewParam)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentParameter (iCurrentParameterNumber,oClockForNewParam)); \
} \
HRESULT  TIECATISIMAgent##classe::GetTimeBasedParameter (int& oTimeParamIndex)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTimeBasedParameter (oTimeParamIndex)); \
} \
HRESULT  TIECATISIMAgent##classe::GetCharacteristicsOfParameter (int iParameterIndex, CATSIMParameterCharacteristics& oCharacteristic)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCharacteristicsOfParameter (iParameterIndex,oCharacteristic)); \
} \
HRESULT  TIECATISIMAgent##classe::GetInputFieldForParameter (int iParameterIndex, CATUnicodeString& oLabel, CATSIMLabellingMode& oUseMode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInputFieldForParameter (iParameterIndex,oLabel,oUseMode)); \
} \
HRESULT  TIECATISIMAgent##classe::GetNameOfParameter (int iParameterIndex, CATUnicodeString& oLabel)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNameOfParameter (iParameterIndex,oLabel)); \
} \
HRESULT  TIECATISIMAgent##classe::GetMagnitudeOfParameter (int iParameterIndex, CATUnicodeString& oMagnitudeName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMagnitudeOfParameter (iParameterIndex,oMagnitudeName)); \
} \
HRESULT  TIECATISIMAgent##classe::IsOnExactValue (int iParameterIndex, CATBoolean& oValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsOnExactValue (iParameterIndex,oValue)); \
} \
HRESULT  TIECATISIMAgent##classe::HasACustomUI (CATBoolean& oHasCustomUI)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasACustomUI (oHasCustomUI)); \
} \
HRESULT  TIECATISIMAgent##classe::SetPlayerCustomUI (CATDlgFrame* iFatherFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlayerCustomUI (iFatherFrame)); \
} \
HRESULT  TIECATISIMAgent##classe::GetPlayContext (CATSIMPlayContext& oContextValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlayContext (oContextValue)); \
} \
HRESULT  TIECATISIMAgent##classe::SetPlayContext (CATSIMPlayContext& iContextValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlayContext (iContextValue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISIMAgent(classe) \
 \
 \
declare_TIE_CATISIMAgent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISIMAgent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISIMAgent,"CATISIMAgent",CATISIMAgent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISIMAgent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISIMAgent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISIMAgent##classe(classe::MetaObject(),CATISIMAgent::MetaObject(),(void *)CreateTIECATISIMAgent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISIMAgent(classe) \
 \
 \
declare_TIE_CATISIMAgent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISIMAgent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISIMAgent,"CATISIMAgent",CATISIMAgent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISIMAgent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISIMAgent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISIMAgent##classe(classe::MetaObject(),CATISIMAgent::MetaObject(),(void *)CreateTIECATISIMAgent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISIMAgent(classe) TIE_CATISIMAgent(classe)
#else
#define BOA_CATISIMAgent(classe) CATImplementBOA(CATISIMAgent, classe)
#endif

#endif
