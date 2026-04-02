#ifndef __TIE_SWKIAErgoLiftLower
#define __TIE_SWKIAErgoLiftLower

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAErgoLiftLower.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAErgoLiftLower */
#define declare_TIE_SWKIAErgoLiftLower(classe) \
 \
 \
class TIESWKIAErgoLiftLower##classe : public SWKIAErgoLiftLower \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAErgoLiftLower, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SaveInitialPosture(); \
      virtual HRESULT __stdcall SaveFinalPosture(); \
      virtual HRESULT __stdcall get_GuideLine(CATBSTR & pioGuideLine); \
      virtual HRESULT __stdcall put_GuideLine(const CATBSTR & piGuideLine); \
      virtual HRESULT __stdcall get_Coupling(CATBSTR & pioCoupling); \
      virtual HRESULT __stdcall put_Coupling(const CATBSTR & piCoupling); \
      virtual HRESULT __stdcall get_Frequency(double & poFrequency); \
      virtual HRESULT __stdcall put_Frequency(double piFrequency); \
      virtual HRESULT __stdcall get_Duration(double & poDuration); \
      virtual HRESULT __stdcall put_Duration(double piDuration); \
      virtual HRESULT __stdcall get_ObjectWeight(CATBSTR & pioObjectWeight); \
      virtual HRESULT __stdcall put_ObjectWeight(const CATBSTR & piObjectWeight); \
      virtual HRESULT __stdcall get_Population(double & poPopulation); \
      virtual HRESULT __stdcall put_Population(double piPopulation); \
      virtual HRESULT __stdcall get_NIOSH_ActionLimit(CATBSTR & pioActionLimit); \
      virtual HRESULT __stdcall get_NIOSH_MaximumPermLimit(CATBSTR & pioMaximumPermLimit); \
      virtual HRESULT __stdcall get_NIOSH_RWLInitial(CATBSTR & pioRWLInitial); \
      virtual HRESULT __stdcall get_NIOSH_RWLFinal(CATBSTR & pioRWLFinal); \
      virtual HRESULT __stdcall get_NIOSH_LIInitial(CATBSTR & pioLIInitial); \
      virtual HRESULT __stdcall get_NIOSH_LIFinal(CATBSTR & pioLIFinal); \
      virtual HRESULT __stdcall get_NIOSH_HorizontalLocationInitial(CATBSTR & pioHorizontalLocationInitial); \
      virtual HRESULT __stdcall get_NIOSH_HorizontalLocationFinal(CATBSTR & pioHorizontalLocationFinal); \
      virtual HRESULT __stdcall get_NIOSH_VerticalLocationInitial(CATBSTR & pioVerticalLocationInitial); \
      virtual HRESULT __stdcall get_NIOSH_VerticalLocationFinal(CATBSTR & pioVerticalLocationFinal); \
      virtual HRESULT __stdcall get_NIOSH_TravelDistance(CATBSTR & pioTravelDistance); \
      virtual HRESULT __stdcall get_NIOSH_AngleOfAsymmetryInitial(CATBSTR & pioAngleOfAsymmetryInitial); \
      virtual HRESULT __stdcall get_NIOSH_AngleOfAsymmetryFinal(CATBSTR & pioAngleOfAsymmetryFinal); \
      virtual HRESULT __stdcall get_NIOSH_LoadConstant(CATBSTR & pioLoadConstant); \
      virtual HRESULT __stdcall get_NIOSH_HorizontalMultiplierInitial(CATBSTR & pioHorizontalMultiplierInitial); \
      virtual HRESULT __stdcall get_NIOSH_HorizontalMultiplierFinal(CATBSTR & pioHorizontalMultiplierFinal); \
      virtual HRESULT __stdcall get_NIOSH_VerticalMultiplierInitial(CATBSTR & pioVerticalMultiplierInitial); \
      virtual HRESULT __stdcall get_NIOSH_VerticalMultiplierFinal(CATBSTR & pioVerticalMultiplierFinal); \
      virtual HRESULT __stdcall get_NIOSH_DistanceMultiplier(CATBSTR & pioDistanceMultiplier); \
      virtual HRESULT __stdcall get_NIOSH_AsymmetricMultiplierInitial(CATBSTR & pioAsymmetricMultiplierInitial); \
      virtual HRESULT __stdcall get_NIOSH_AsymmetricMultiplierFinal(CATBSTR & pioAsymmetricMultiplierFinal); \
      virtual HRESULT __stdcall get_NIOSH_FrequencyMultiplier(CATBSTR & pioFrequencyMultiplier); \
      virtual HRESULT __stdcall get_NIOSH_CouplingMultiplierInitial(CATBSTR & pioCouplingMultiplierInitial); \
      virtual HRESULT __stdcall get_NIOSH_CouplingMultiplierFinal(CATBSTR & pioCouplingMultiplierFinal); \
      virtual HRESULT __stdcall get_Snook_MaximumWeight(CATBSTR & pioMaximumWeight); \
      virtual HRESULT __stdcall get_WarningMessage(CATBSTR & pioWarningMessage); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAErgoLiftLower(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SaveInitialPosture(); \
virtual HRESULT __stdcall SaveFinalPosture(); \
virtual HRESULT __stdcall get_GuideLine(CATBSTR & pioGuideLine); \
virtual HRESULT __stdcall put_GuideLine(const CATBSTR & piGuideLine); \
virtual HRESULT __stdcall get_Coupling(CATBSTR & pioCoupling); \
virtual HRESULT __stdcall put_Coupling(const CATBSTR & piCoupling); \
virtual HRESULT __stdcall get_Frequency(double & poFrequency); \
virtual HRESULT __stdcall put_Frequency(double piFrequency); \
virtual HRESULT __stdcall get_Duration(double & poDuration); \
virtual HRESULT __stdcall put_Duration(double piDuration); \
virtual HRESULT __stdcall get_ObjectWeight(CATBSTR & pioObjectWeight); \
virtual HRESULT __stdcall put_ObjectWeight(const CATBSTR & piObjectWeight); \
virtual HRESULT __stdcall get_Population(double & poPopulation); \
virtual HRESULT __stdcall put_Population(double piPopulation); \
virtual HRESULT __stdcall get_NIOSH_ActionLimit(CATBSTR & pioActionLimit); \
virtual HRESULT __stdcall get_NIOSH_MaximumPermLimit(CATBSTR & pioMaximumPermLimit); \
virtual HRESULT __stdcall get_NIOSH_RWLInitial(CATBSTR & pioRWLInitial); \
virtual HRESULT __stdcall get_NIOSH_RWLFinal(CATBSTR & pioRWLFinal); \
virtual HRESULT __stdcall get_NIOSH_LIInitial(CATBSTR & pioLIInitial); \
virtual HRESULT __stdcall get_NIOSH_LIFinal(CATBSTR & pioLIFinal); \
virtual HRESULT __stdcall get_NIOSH_HorizontalLocationInitial(CATBSTR & pioHorizontalLocationInitial); \
virtual HRESULT __stdcall get_NIOSH_HorizontalLocationFinal(CATBSTR & pioHorizontalLocationFinal); \
virtual HRESULT __stdcall get_NIOSH_VerticalLocationInitial(CATBSTR & pioVerticalLocationInitial); \
virtual HRESULT __stdcall get_NIOSH_VerticalLocationFinal(CATBSTR & pioVerticalLocationFinal); \
virtual HRESULT __stdcall get_NIOSH_TravelDistance(CATBSTR & pioTravelDistance); \
virtual HRESULT __stdcall get_NIOSH_AngleOfAsymmetryInitial(CATBSTR & pioAngleOfAsymmetryInitial); \
virtual HRESULT __stdcall get_NIOSH_AngleOfAsymmetryFinal(CATBSTR & pioAngleOfAsymmetryFinal); \
virtual HRESULT __stdcall get_NIOSH_LoadConstant(CATBSTR & pioLoadConstant); \
virtual HRESULT __stdcall get_NIOSH_HorizontalMultiplierInitial(CATBSTR & pioHorizontalMultiplierInitial); \
virtual HRESULT __stdcall get_NIOSH_HorizontalMultiplierFinal(CATBSTR & pioHorizontalMultiplierFinal); \
virtual HRESULT __stdcall get_NIOSH_VerticalMultiplierInitial(CATBSTR & pioVerticalMultiplierInitial); \
virtual HRESULT __stdcall get_NIOSH_VerticalMultiplierFinal(CATBSTR & pioVerticalMultiplierFinal); \
virtual HRESULT __stdcall get_NIOSH_DistanceMultiplier(CATBSTR & pioDistanceMultiplier); \
virtual HRESULT __stdcall get_NIOSH_AsymmetricMultiplierInitial(CATBSTR & pioAsymmetricMultiplierInitial); \
virtual HRESULT __stdcall get_NIOSH_AsymmetricMultiplierFinal(CATBSTR & pioAsymmetricMultiplierFinal); \
virtual HRESULT __stdcall get_NIOSH_FrequencyMultiplier(CATBSTR & pioFrequencyMultiplier); \
virtual HRESULT __stdcall get_NIOSH_CouplingMultiplierInitial(CATBSTR & pioCouplingMultiplierInitial); \
virtual HRESULT __stdcall get_NIOSH_CouplingMultiplierFinal(CATBSTR & pioCouplingMultiplierFinal); \
virtual HRESULT __stdcall get_Snook_MaximumWeight(CATBSTR & pioMaximumWeight); \
virtual HRESULT __stdcall get_WarningMessage(CATBSTR & pioWarningMessage); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAErgoLiftLower(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SaveInitialPosture() \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)SaveInitialPosture()); \
} \
HRESULT __stdcall  ENVTIEName::SaveFinalPosture() \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)SaveFinalPosture()); \
} \
HRESULT __stdcall  ENVTIEName::get_GuideLine(CATBSTR & pioGuideLine) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_GuideLine(pioGuideLine)); \
} \
HRESULT __stdcall  ENVTIEName::put_GuideLine(const CATBSTR & piGuideLine) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)put_GuideLine(piGuideLine)); \
} \
HRESULT __stdcall  ENVTIEName::get_Coupling(CATBSTR & pioCoupling) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Coupling(pioCoupling)); \
} \
HRESULT __stdcall  ENVTIEName::put_Coupling(const CATBSTR & piCoupling) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)put_Coupling(piCoupling)); \
} \
HRESULT __stdcall  ENVTIEName::get_Frequency(double & poFrequency) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Frequency(poFrequency)); \
} \
HRESULT __stdcall  ENVTIEName::put_Frequency(double piFrequency) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)put_Frequency(piFrequency)); \
} \
HRESULT __stdcall  ENVTIEName::get_Duration(double & poDuration) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Duration(poDuration)); \
} \
HRESULT __stdcall  ENVTIEName::put_Duration(double piDuration) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)put_Duration(piDuration)); \
} \
HRESULT __stdcall  ENVTIEName::get_ObjectWeight(CATBSTR & pioObjectWeight) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_ObjectWeight(pioObjectWeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_ObjectWeight(const CATBSTR & piObjectWeight) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)put_ObjectWeight(piObjectWeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Population(double & poPopulation) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Population(poPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Population(double piPopulation) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)put_Population(piPopulation)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_ActionLimit(CATBSTR & pioActionLimit) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_ActionLimit(pioActionLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_MaximumPermLimit(CATBSTR & pioMaximumPermLimit) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_MaximumPermLimit(pioMaximumPermLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_RWLInitial(CATBSTR & pioRWLInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_RWLInitial(pioRWLInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_RWLFinal(CATBSTR & pioRWLFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_RWLFinal(pioRWLFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_LIInitial(CATBSTR & pioLIInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_LIInitial(pioLIInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_LIFinal(CATBSTR & pioLIFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_LIFinal(pioLIFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_HorizontalLocationInitial(CATBSTR & pioHorizontalLocationInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_HorizontalLocationInitial(pioHorizontalLocationInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_HorizontalLocationFinal(CATBSTR & pioHorizontalLocationFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_HorizontalLocationFinal(pioHorizontalLocationFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_VerticalLocationInitial(CATBSTR & pioVerticalLocationInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_VerticalLocationInitial(pioVerticalLocationInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_VerticalLocationFinal(CATBSTR & pioVerticalLocationFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_VerticalLocationFinal(pioVerticalLocationFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_TravelDistance(CATBSTR & pioTravelDistance) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_TravelDistance(pioTravelDistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_AngleOfAsymmetryInitial(CATBSTR & pioAngleOfAsymmetryInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_AngleOfAsymmetryInitial(pioAngleOfAsymmetryInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_AngleOfAsymmetryFinal(CATBSTR & pioAngleOfAsymmetryFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_AngleOfAsymmetryFinal(pioAngleOfAsymmetryFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_LoadConstant(CATBSTR & pioLoadConstant) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_LoadConstant(pioLoadConstant)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_HorizontalMultiplierInitial(CATBSTR & pioHorizontalMultiplierInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_HorizontalMultiplierInitial(pioHorizontalMultiplierInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_HorizontalMultiplierFinal(CATBSTR & pioHorizontalMultiplierFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_HorizontalMultiplierFinal(pioHorizontalMultiplierFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_VerticalMultiplierInitial(CATBSTR & pioVerticalMultiplierInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_VerticalMultiplierInitial(pioVerticalMultiplierInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_VerticalMultiplierFinal(CATBSTR & pioVerticalMultiplierFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_VerticalMultiplierFinal(pioVerticalMultiplierFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_DistanceMultiplier(CATBSTR & pioDistanceMultiplier) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_DistanceMultiplier(pioDistanceMultiplier)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_AsymmetricMultiplierInitial(CATBSTR & pioAsymmetricMultiplierInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_AsymmetricMultiplierInitial(pioAsymmetricMultiplierInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_AsymmetricMultiplierFinal(CATBSTR & pioAsymmetricMultiplierFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_AsymmetricMultiplierFinal(pioAsymmetricMultiplierFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_FrequencyMultiplier(CATBSTR & pioFrequencyMultiplier) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_FrequencyMultiplier(pioFrequencyMultiplier)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_CouplingMultiplierInitial(CATBSTR & pioCouplingMultiplierInitial) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_CouplingMultiplierInitial(pioCouplingMultiplierInitial)); \
} \
HRESULT __stdcall  ENVTIEName::get_NIOSH_CouplingMultiplierFinal(CATBSTR & pioCouplingMultiplierFinal) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_NIOSH_CouplingMultiplierFinal(pioCouplingMultiplierFinal)); \
} \
HRESULT __stdcall  ENVTIEName::get_Snook_MaximumWeight(CATBSTR & pioMaximumWeight) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Snook_MaximumWeight(pioMaximumWeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_WarningMessage(CATBSTR & pioWarningMessage) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_WarningMessage(pioWarningMessage)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAErgoLiftLower,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAErgoLiftLower(classe)    TIESWKIAErgoLiftLower##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAErgoLiftLower(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAErgoLiftLower, classe) \
 \
 \
CATImplementTIEMethods(SWKIAErgoLiftLower, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAErgoLiftLower, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAErgoLiftLower, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAErgoLiftLower, classe) \
 \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::SaveInitialPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveInitialPosture(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::SaveFinalPosture() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveFinalPosture(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_GuideLine(CATBSTR & pioGuideLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&pioGuideLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GuideLine(pioGuideLine); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&pioGuideLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::put_GuideLine(const CATBSTR & piGuideLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piGuideLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GuideLine(piGuideLine); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piGuideLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_Coupling(CATBSTR & pioCoupling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&pioCoupling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Coupling(pioCoupling); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&pioCoupling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::put_Coupling(const CATBSTR & piCoupling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piCoupling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Coupling(piCoupling); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piCoupling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_Frequency(double & poFrequency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poFrequency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Frequency(poFrequency); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poFrequency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::put_Frequency(double piFrequency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&piFrequency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Frequency(piFrequency); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&piFrequency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_Duration(double & poDuration) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poDuration); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Duration(poDuration); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poDuration); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::put_Duration(double piDuration) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&piDuration); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Duration(piDuration); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&piDuration); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_ObjectWeight(CATBSTR & pioObjectWeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&pioObjectWeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ObjectWeight(pioObjectWeight); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&pioObjectWeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::put_ObjectWeight(const CATBSTR & piObjectWeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&piObjectWeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ObjectWeight(piObjectWeight); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&piObjectWeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_Population(double & poPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&poPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Population(poPopulation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&poPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::put_Population(double piPopulation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&piPopulation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Population(piPopulation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&piPopulation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_ActionLimit(CATBSTR & pioActionLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&pioActionLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_ActionLimit(pioActionLimit); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&pioActionLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_MaximumPermLimit(CATBSTR & pioMaximumPermLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&pioMaximumPermLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_MaximumPermLimit(pioMaximumPermLimit); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&pioMaximumPermLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_RWLInitial(CATBSTR & pioRWLInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&pioRWLInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_RWLInitial(pioRWLInitial); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&pioRWLInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_RWLFinal(CATBSTR & pioRWLFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&pioRWLFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_RWLFinal(pioRWLFinal); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&pioRWLFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_LIInitial(CATBSTR & pioLIInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&pioLIInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_LIInitial(pioLIInitial); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&pioLIInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_LIFinal(CATBSTR & pioLIFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&pioLIFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_LIFinal(pioLIFinal); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&pioLIFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_HorizontalLocationInitial(CATBSTR & pioHorizontalLocationInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&pioHorizontalLocationInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_HorizontalLocationInitial(pioHorizontalLocationInitial); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&pioHorizontalLocationInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_HorizontalLocationFinal(CATBSTR & pioHorizontalLocationFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&pioHorizontalLocationFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_HorizontalLocationFinal(pioHorizontalLocationFinal); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&pioHorizontalLocationFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_VerticalLocationInitial(CATBSTR & pioVerticalLocationInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&pioVerticalLocationInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_VerticalLocationInitial(pioVerticalLocationInitial); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&pioVerticalLocationInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_VerticalLocationFinal(CATBSTR & pioVerticalLocationFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&pioVerticalLocationFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_VerticalLocationFinal(pioVerticalLocationFinal); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&pioVerticalLocationFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_TravelDistance(CATBSTR & pioTravelDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&pioTravelDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_TravelDistance(pioTravelDistance); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&pioTravelDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_AngleOfAsymmetryInitial(CATBSTR & pioAngleOfAsymmetryInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&pioAngleOfAsymmetryInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_AngleOfAsymmetryInitial(pioAngleOfAsymmetryInitial); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&pioAngleOfAsymmetryInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_AngleOfAsymmetryFinal(CATBSTR & pioAngleOfAsymmetryFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&pioAngleOfAsymmetryFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_AngleOfAsymmetryFinal(pioAngleOfAsymmetryFinal); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&pioAngleOfAsymmetryFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_LoadConstant(CATBSTR & pioLoadConstant) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&pioLoadConstant); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_LoadConstant(pioLoadConstant); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&pioLoadConstant); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_HorizontalMultiplierInitial(CATBSTR & pioHorizontalMultiplierInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&pioHorizontalMultiplierInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_HorizontalMultiplierInitial(pioHorizontalMultiplierInitial); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&pioHorizontalMultiplierInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_HorizontalMultiplierFinal(CATBSTR & pioHorizontalMultiplierFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&pioHorizontalMultiplierFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_HorizontalMultiplierFinal(pioHorizontalMultiplierFinal); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&pioHorizontalMultiplierFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_VerticalMultiplierInitial(CATBSTR & pioVerticalMultiplierInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&pioVerticalMultiplierInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_VerticalMultiplierInitial(pioVerticalMultiplierInitial); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&pioVerticalMultiplierInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_VerticalMultiplierFinal(CATBSTR & pioVerticalMultiplierFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&pioVerticalMultiplierFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_VerticalMultiplierFinal(pioVerticalMultiplierFinal); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&pioVerticalMultiplierFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_DistanceMultiplier(CATBSTR & pioDistanceMultiplier) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&pioDistanceMultiplier); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_DistanceMultiplier(pioDistanceMultiplier); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&pioDistanceMultiplier); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_AsymmetricMultiplierInitial(CATBSTR & pioAsymmetricMultiplierInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&pioAsymmetricMultiplierInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_AsymmetricMultiplierInitial(pioAsymmetricMultiplierInitial); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&pioAsymmetricMultiplierInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_AsymmetricMultiplierFinal(CATBSTR & pioAsymmetricMultiplierFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&pioAsymmetricMultiplierFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_AsymmetricMultiplierFinal(pioAsymmetricMultiplierFinal); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&pioAsymmetricMultiplierFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_FrequencyMultiplier(CATBSTR & pioFrequencyMultiplier) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&pioFrequencyMultiplier); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_FrequencyMultiplier(pioFrequencyMultiplier); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&pioFrequencyMultiplier); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_CouplingMultiplierInitial(CATBSTR & pioCouplingMultiplierInitial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&pioCouplingMultiplierInitial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_CouplingMultiplierInitial(pioCouplingMultiplierInitial); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&pioCouplingMultiplierInitial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_NIOSH_CouplingMultiplierFinal(CATBSTR & pioCouplingMultiplierFinal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&pioCouplingMultiplierFinal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NIOSH_CouplingMultiplierFinal(pioCouplingMultiplierFinal); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&pioCouplingMultiplierFinal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_Snook_MaximumWeight(CATBSTR & pioMaximumWeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&pioMaximumWeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Snook_MaximumWeight(pioMaximumWeight); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&pioMaximumWeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAErgoLiftLower##classe::get_WarningMessage(CATBSTR & pioWarningMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&pioWarningMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WarningMessage(pioWarningMessage); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&pioWarningMessage); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoLiftLower##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoLiftLower##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoLiftLower##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoLiftLower##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAErgoLiftLower##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAErgoLiftLower(classe) \
 \
 \
declare_TIE_SWKIAErgoLiftLower(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoLiftLower##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoLiftLower,"SWKIAErgoLiftLower",SWKIAErgoLiftLower::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoLiftLower(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAErgoLiftLower, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoLiftLower##classe(classe::MetaObject(),SWKIAErgoLiftLower::MetaObject(),(void *)CreateTIESWKIAErgoLiftLower##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAErgoLiftLower(classe) \
 \
 \
declare_TIE_SWKIAErgoLiftLower(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAErgoLiftLower##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAErgoLiftLower,"SWKIAErgoLiftLower",SWKIAErgoLiftLower::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAErgoLiftLower(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAErgoLiftLower, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAErgoLiftLower##classe(classe::MetaObject(),SWKIAErgoLiftLower::MetaObject(),(void *)CreateTIESWKIAErgoLiftLower##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAErgoLiftLower(classe) TIE_SWKIAErgoLiftLower(classe)
#else
#define BOA_SWKIAErgoLiftLower(classe) CATImplementBOA(SWKIAErgoLiftLower, classe)
#endif

#endif
