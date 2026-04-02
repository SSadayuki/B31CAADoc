#ifndef __TIE_CATIGSMUseToolPath
#define __TIE_CATIGSMUseToolPath

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGSMUseToolPath.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGSMUseToolPath */
#define declare_TIE_CATIGSMUseToolPath(classe) \
 \
 \
class TIECATIGSMUseToolPath##classe : public CATIGSMUseToolPath \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGSMUseToolPath, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetToolProfile(CATIMmiMechanicalFeature_var &ohProfile) ; \
      virtual HRESULT SetToolProfile(const CATIMmiMechanicalFeature_var &ihProfile) ; \
      virtual HRESULT GetToolAxisOrigin(CATIMmiMechanicalFeature_var &ohOrigin) ; \
      virtual HRESULT SetToolAxisOrigin(const CATIMmiMechanicalFeature_var &ihOrigin) ; \
      virtual HRESULT GetToolAxisDirection(CATIGSMUseDirection_var &ohDirection) ; \
      virtual HRESULT SetToolAxisDirection(const CATIGSMUseDirection_var &ihDirection) ; \
      virtual HRESULT GetMotionAxes(CATListValCATIMmiMechanicalFeature_var &olAxes) ; \
      virtual HRESULT SetMotionAxis(const CATIMmiMechanicalFeature_var &hAxis, const int &iRank) ; \
      virtual HRESULT RemoveMotionAxis(const int &iRank) ; \
      virtual HRESULT GetMotionCurve(CATIMmiMechanicalFeature_var &ohCurve) ; \
      virtual HRESULT SetMotionCurve(const CATIMmiMechanicalFeature_var &ihCurve) ; \
      virtual HRESULT GetMotionParameters1(CATIMmiMechanicalFeature_var &ohAxis, int &oNbVectors, CATListValCATBaseUnknown_var &olParams) ; \
      virtual HRESULT SetMotionParameterAxis1(const CATIMmiMechanicalFeature_var &ihAxis) ; \
      virtual HRESULT SetMotionParameterVector1(const int &iRank, const CATICkeParm_var &ihAParam, const CATICkeParm_var &ihBParam, const CATICkeParm_var &ihXParam, const CATICkeParm_var &ihYParam, const CATICkeParm_var &ihZParam) ; \
      virtual HRESULT RemoveMotionParameterVector1(const int &iRank) ; \
      virtual HRESULT GetVolumeResult(CATBoolean &obVolumeResult) ; \
      virtual HRESULT SetVolumeResult(const CATBoolean &ibVolumeResult) ; \
      virtual HRESULT GetMotionType(CATGSMUseMotionType &oType) ; \
      virtual HRESULT SetMotionType(const CATGSMUseMotionType &iType) ; \
      virtual HRESULT GetBodyMotion(CATIMmiMechanicalFeature_var &ohBodyMotion) ; \
      virtual HRESULT GetAutomaticPositioning(CATBoolean &obAutoPos) ; \
      virtual HRESULT SetAutomaticPositioning(const CATBoolean &ibAutoPos) ; \
      virtual HRESULT GetMotionCornerParameters(int &oNbCorners, CATListValCATBaseUnknown_var &olCornerParams, CATListOfInt &oCornerPositions) ; \
      virtual HRESULT SetMotionCornerParameters(const int &iRank, const CATICkeParm_var &ihDP1Param, const CATICkeParm_var &ihDP2Param, const CATICkeParm_var &ihATension1Param, const CATICkeParm_var &ihATension2Param, const CATICkeParm_var &ihBTension1Param, const CATICkeParm_var &ihBTension2Param, const CATICkeParm_var &ihXTension1Param, const CATICkeParm_var &ihXTension2Param, const CATICkeParm_var &ihYTension1Param, const CATICkeParm_var &ihYTension2Param, const CATICkeParm_var &ihZTension1Param, const CATICkeParm_var &ihZTension2Param) ; \
      virtual HRESULT RemoveMotionCornerParameters(const int &iRank) ; \
};



#define ENVTIEdeclare_CATIGSMUseToolPath(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetToolProfile(CATIMmiMechanicalFeature_var &ohProfile) ; \
virtual HRESULT SetToolProfile(const CATIMmiMechanicalFeature_var &ihProfile) ; \
virtual HRESULT GetToolAxisOrigin(CATIMmiMechanicalFeature_var &ohOrigin) ; \
virtual HRESULT SetToolAxisOrigin(const CATIMmiMechanicalFeature_var &ihOrigin) ; \
virtual HRESULT GetToolAxisDirection(CATIGSMUseDirection_var &ohDirection) ; \
virtual HRESULT SetToolAxisDirection(const CATIGSMUseDirection_var &ihDirection) ; \
virtual HRESULT GetMotionAxes(CATListValCATIMmiMechanicalFeature_var &olAxes) ; \
virtual HRESULT SetMotionAxis(const CATIMmiMechanicalFeature_var &hAxis, const int &iRank) ; \
virtual HRESULT RemoveMotionAxis(const int &iRank) ; \
virtual HRESULT GetMotionCurve(CATIMmiMechanicalFeature_var &ohCurve) ; \
virtual HRESULT SetMotionCurve(const CATIMmiMechanicalFeature_var &ihCurve) ; \
virtual HRESULT GetMotionParameters1(CATIMmiMechanicalFeature_var &ohAxis, int &oNbVectors, CATListValCATBaseUnknown_var &olParams) ; \
virtual HRESULT SetMotionParameterAxis1(const CATIMmiMechanicalFeature_var &ihAxis) ; \
virtual HRESULT SetMotionParameterVector1(const int &iRank, const CATICkeParm_var &ihAParam, const CATICkeParm_var &ihBParam, const CATICkeParm_var &ihXParam, const CATICkeParm_var &ihYParam, const CATICkeParm_var &ihZParam) ; \
virtual HRESULT RemoveMotionParameterVector1(const int &iRank) ; \
virtual HRESULT GetVolumeResult(CATBoolean &obVolumeResult) ; \
virtual HRESULT SetVolumeResult(const CATBoolean &ibVolumeResult) ; \
virtual HRESULT GetMotionType(CATGSMUseMotionType &oType) ; \
virtual HRESULT SetMotionType(const CATGSMUseMotionType &iType) ; \
virtual HRESULT GetBodyMotion(CATIMmiMechanicalFeature_var &ohBodyMotion) ; \
virtual HRESULT GetAutomaticPositioning(CATBoolean &obAutoPos) ; \
virtual HRESULT SetAutomaticPositioning(const CATBoolean &ibAutoPos) ; \
virtual HRESULT GetMotionCornerParameters(int &oNbCorners, CATListValCATBaseUnknown_var &olCornerParams, CATListOfInt &oCornerPositions) ; \
virtual HRESULT SetMotionCornerParameters(const int &iRank, const CATICkeParm_var &ihDP1Param, const CATICkeParm_var &ihDP2Param, const CATICkeParm_var &ihATension1Param, const CATICkeParm_var &ihATension2Param, const CATICkeParm_var &ihBTension1Param, const CATICkeParm_var &ihBTension2Param, const CATICkeParm_var &ihXTension1Param, const CATICkeParm_var &ihXTension2Param, const CATICkeParm_var &ihYTension1Param, const CATICkeParm_var &ihYTension2Param, const CATICkeParm_var &ihZTension1Param, const CATICkeParm_var &ihZTension2Param) ; \
virtual HRESULT RemoveMotionCornerParameters(const int &iRank) ; \


#define ENVTIEdefine_CATIGSMUseToolPath(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetToolProfile(CATIMmiMechanicalFeature_var &ohProfile)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetToolProfile(ohProfile)); \
} \
HRESULT  ENVTIEName::SetToolProfile(const CATIMmiMechanicalFeature_var &ihProfile)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetToolProfile(ihProfile)); \
} \
HRESULT  ENVTIEName::GetToolAxisOrigin(CATIMmiMechanicalFeature_var &ohOrigin)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetToolAxisOrigin(ohOrigin)); \
} \
HRESULT  ENVTIEName::SetToolAxisOrigin(const CATIMmiMechanicalFeature_var &ihOrigin)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetToolAxisOrigin(ihOrigin)); \
} \
HRESULT  ENVTIEName::GetToolAxisDirection(CATIGSMUseDirection_var &ohDirection)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetToolAxisDirection(ohDirection)); \
} \
HRESULT  ENVTIEName::SetToolAxisDirection(const CATIGSMUseDirection_var &ihDirection)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetToolAxisDirection(ihDirection)); \
} \
HRESULT  ENVTIEName::GetMotionAxes(CATListValCATIMmiMechanicalFeature_var &olAxes)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetMotionAxes(olAxes)); \
} \
HRESULT  ENVTIEName::SetMotionAxis(const CATIMmiMechanicalFeature_var &hAxis, const int &iRank)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetMotionAxis(hAxis,iRank)); \
} \
HRESULT  ENVTIEName::RemoveMotionAxis(const int &iRank)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)RemoveMotionAxis(iRank)); \
} \
HRESULT  ENVTIEName::GetMotionCurve(CATIMmiMechanicalFeature_var &ohCurve)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetMotionCurve(ohCurve)); \
} \
HRESULT  ENVTIEName::SetMotionCurve(const CATIMmiMechanicalFeature_var &ihCurve)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetMotionCurve(ihCurve)); \
} \
HRESULT  ENVTIEName::GetMotionParameters1(CATIMmiMechanicalFeature_var &ohAxis, int &oNbVectors, CATListValCATBaseUnknown_var &olParams)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetMotionParameters1(ohAxis,oNbVectors,olParams)); \
} \
HRESULT  ENVTIEName::SetMotionParameterAxis1(const CATIMmiMechanicalFeature_var &ihAxis)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetMotionParameterAxis1(ihAxis)); \
} \
HRESULT  ENVTIEName::SetMotionParameterVector1(const int &iRank, const CATICkeParm_var &ihAParam, const CATICkeParm_var &ihBParam, const CATICkeParm_var &ihXParam, const CATICkeParm_var &ihYParam, const CATICkeParm_var &ihZParam)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetMotionParameterVector1(iRank,ihAParam,ihBParam,ihXParam,ihYParam,ihZParam)); \
} \
HRESULT  ENVTIEName::RemoveMotionParameterVector1(const int &iRank)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)RemoveMotionParameterVector1(iRank)); \
} \
HRESULT  ENVTIEName::GetVolumeResult(CATBoolean &obVolumeResult)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetVolumeResult(obVolumeResult)); \
} \
HRESULT  ENVTIEName::SetVolumeResult(const CATBoolean &ibVolumeResult)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetVolumeResult(ibVolumeResult)); \
} \
HRESULT  ENVTIEName::GetMotionType(CATGSMUseMotionType &oType)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetMotionType(oType)); \
} \
HRESULT  ENVTIEName::SetMotionType(const CATGSMUseMotionType &iType)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetMotionType(iType)); \
} \
HRESULT  ENVTIEName::GetBodyMotion(CATIMmiMechanicalFeature_var &ohBodyMotion)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetBodyMotion(ohBodyMotion)); \
} \
HRESULT  ENVTIEName::GetAutomaticPositioning(CATBoolean &obAutoPos)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetAutomaticPositioning(obAutoPos)); \
} \
HRESULT  ENVTIEName::SetAutomaticPositioning(const CATBoolean &ibAutoPos)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetAutomaticPositioning(ibAutoPos)); \
} \
HRESULT  ENVTIEName::GetMotionCornerParameters(int &oNbCorners, CATListValCATBaseUnknown_var &olCornerParams, CATListOfInt &oCornerPositions)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)GetMotionCornerParameters(oNbCorners,olCornerParams,oCornerPositions)); \
} \
HRESULT  ENVTIEName::SetMotionCornerParameters(const int &iRank, const CATICkeParm_var &ihDP1Param, const CATICkeParm_var &ihDP2Param, const CATICkeParm_var &ihATension1Param, const CATICkeParm_var &ihATension2Param, const CATICkeParm_var &ihBTension1Param, const CATICkeParm_var &ihBTension2Param, const CATICkeParm_var &ihXTension1Param, const CATICkeParm_var &ihXTension2Param, const CATICkeParm_var &ihYTension1Param, const CATICkeParm_var &ihYTension2Param, const CATICkeParm_var &ihZTension1Param, const CATICkeParm_var &ihZTension2Param)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)SetMotionCornerParameters(iRank,ihDP1Param,ihDP2Param,ihATension1Param,ihATension2Param,ihBTension1Param,ihBTension2Param,ihXTension1Param,ihXTension2Param,ihYTension1Param,ihYTension2Param,ihZTension1Param,ihZTension2Param)); \
} \
HRESULT  ENVTIEName::RemoveMotionCornerParameters(const int &iRank)  \
{ \
return (ENVTIECALL(CATIGSMUseToolPath,ENVTIETypeLetter,ENVTIELetter)RemoveMotionCornerParameters(iRank)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGSMUseToolPath(classe)    TIECATIGSMUseToolPath##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGSMUseToolPath(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGSMUseToolPath, classe) \
 \
 \
CATImplementTIEMethods(CATIGSMUseToolPath, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGSMUseToolPath, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGSMUseToolPath, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGSMUseToolPath, classe) \
 \
HRESULT  TIECATIGSMUseToolPath##classe::GetToolProfile(CATIMmiMechanicalFeature_var &ohProfile)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolProfile(ohProfile)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetToolProfile(const CATIMmiMechanicalFeature_var &ihProfile)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolProfile(ihProfile)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetToolAxisOrigin(CATIMmiMechanicalFeature_var &ohOrigin)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolAxisOrigin(ohOrigin)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetToolAxisOrigin(const CATIMmiMechanicalFeature_var &ihOrigin)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolAxisOrigin(ihOrigin)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetToolAxisDirection(CATIGSMUseDirection_var &ohDirection)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolAxisDirection(ohDirection)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetToolAxisDirection(const CATIGSMUseDirection_var &ihDirection)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolAxisDirection(ihDirection)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetMotionAxes(CATListValCATIMmiMechanicalFeature_var &olAxes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMotionAxes(olAxes)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetMotionAxis(const CATIMmiMechanicalFeature_var &hAxis, const int &iRank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMotionAxis(hAxis,iRank)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::RemoveMotionAxis(const int &iRank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMotionAxis(iRank)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetMotionCurve(CATIMmiMechanicalFeature_var &ohCurve)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMotionCurve(ohCurve)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetMotionCurve(const CATIMmiMechanicalFeature_var &ihCurve)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMotionCurve(ihCurve)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetMotionParameters1(CATIMmiMechanicalFeature_var &ohAxis, int &oNbVectors, CATListValCATBaseUnknown_var &olParams)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMotionParameters1(ohAxis,oNbVectors,olParams)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetMotionParameterAxis1(const CATIMmiMechanicalFeature_var &ihAxis)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMotionParameterAxis1(ihAxis)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetMotionParameterVector1(const int &iRank, const CATICkeParm_var &ihAParam, const CATICkeParm_var &ihBParam, const CATICkeParm_var &ihXParam, const CATICkeParm_var &ihYParam, const CATICkeParm_var &ihZParam)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMotionParameterVector1(iRank,ihAParam,ihBParam,ihXParam,ihYParam,ihZParam)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::RemoveMotionParameterVector1(const int &iRank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMotionParameterVector1(iRank)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetVolumeResult(CATBoolean &obVolumeResult)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVolumeResult(obVolumeResult)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetVolumeResult(const CATBoolean &ibVolumeResult)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVolumeResult(ibVolumeResult)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetMotionType(CATGSMUseMotionType &oType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMotionType(oType)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetMotionType(const CATGSMUseMotionType &iType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMotionType(iType)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetBodyMotion(CATIMmiMechanicalFeature_var &ohBodyMotion)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBodyMotion(ohBodyMotion)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetAutomaticPositioning(CATBoolean &obAutoPos)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutomaticPositioning(obAutoPos)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetAutomaticPositioning(const CATBoolean &ibAutoPos)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutomaticPositioning(ibAutoPos)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::GetMotionCornerParameters(int &oNbCorners, CATListValCATBaseUnknown_var &olCornerParams, CATListOfInt &oCornerPositions)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMotionCornerParameters(oNbCorners,olCornerParams,oCornerPositions)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::SetMotionCornerParameters(const int &iRank, const CATICkeParm_var &ihDP1Param, const CATICkeParm_var &ihDP2Param, const CATICkeParm_var &ihATension1Param, const CATICkeParm_var &ihATension2Param, const CATICkeParm_var &ihBTension1Param, const CATICkeParm_var &ihBTension2Param, const CATICkeParm_var &ihXTension1Param, const CATICkeParm_var &ihXTension2Param, const CATICkeParm_var &ihYTension1Param, const CATICkeParm_var &ihYTension2Param, const CATICkeParm_var &ihZTension1Param, const CATICkeParm_var &ihZTension2Param)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMotionCornerParameters(iRank,ihDP1Param,ihDP2Param,ihATension1Param,ihATension2Param,ihBTension1Param,ihBTension2Param,ihXTension1Param,ihXTension2Param,ihYTension1Param,ihYTension2Param,ihZTension1Param,ihZTension2Param)); \
} \
HRESULT  TIECATIGSMUseToolPath##classe::RemoveMotionCornerParameters(const int &iRank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMotionCornerParameters(iRank)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGSMUseToolPath(classe) \
 \
 \
declare_TIE_CATIGSMUseToolPath(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMUseToolPath##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMUseToolPath,"CATIGSMUseToolPath",CATIGSMUseToolPath::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMUseToolPath(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGSMUseToolPath, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMUseToolPath##classe(classe::MetaObject(),CATIGSMUseToolPath::MetaObject(),(void *)CreateTIECATIGSMUseToolPath##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGSMUseToolPath(classe) \
 \
 \
declare_TIE_CATIGSMUseToolPath(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMUseToolPath##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMUseToolPath,"CATIGSMUseToolPath",CATIGSMUseToolPath::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMUseToolPath(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGSMUseToolPath, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMUseToolPath##classe(classe::MetaObject(),CATIGSMUseToolPath::MetaObject(),(void *)CreateTIECATIGSMUseToolPath##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGSMUseToolPath(classe) TIE_CATIGSMUseToolPath(classe)
#else
#define BOA_CATIGSMUseToolPath(classe) CATImplementBOA(CATIGSMUseToolPath, classe)
#endif

#endif
