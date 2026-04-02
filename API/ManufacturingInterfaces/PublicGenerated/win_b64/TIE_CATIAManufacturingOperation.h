#ifndef __TIE_CATIAManufacturingOperation
#define __TIE_CATIAManufacturingOperation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingOperation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingOperation */
#define declare_TIE_CATIAManufacturingOperation(classe) \
 \
 \
class TIECATIAManufacturingOperation##classe : public CATIAManufacturingOperation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingOperation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Comment(CATBSTR *& oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall SetFeature(CATIABase * iMachinableFeature); \
      virtual HRESULT __stdcall GetFeature(CATIABase *& oMachinableFeature); \
      virtual HRESULT __stdcall GetManufacturingFeature(CATIAManufacturingFeature *& oManufacturingFeature); \
      virtual HRESULT __stdcall GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall AddDistanceAlongAxis(const CATBSTR & iType, double iDistance); \
      virtual HRESULT __stdcall AddGotoHorizontal(const CATBSTR & iTypeMacro, double iDistance, double iAngle1, double iAngle2); \
      virtual HRESULT __stdcall AddMotionToAPlane(const CATBSTR & iTypeMacro, short iMode, CATIABase * iPlane, CATIAProduct * iProduct); \
      virtual HRESULT __stdcall AddMotionGoToAPoint(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct); \
      virtual HRESULT __stdcall AddClearance(const CATBSTR & iTypeMacro, double iA, double iB, double iC, double iD); \
      virtual HRESULT __stdcall AddPPWords(const CATBSTR & iTypeMacro, const CATBSTR & iPPWords); \
      virtual HRESULT __stdcall GetMfgTopPlane(double & oA, double & oB, double & oC, double & oD); \
      virtual HRESULT __stdcall GetMfgAparamTopPln(double & oA); \
      virtual HRESULT __stdcall GetMfgBparamTopPln(double & oB); \
      virtual HRESULT __stdcall GetMfgCparamTopPln(double & oC); \
      virtual HRESULT __stdcall GetMfgDparamTopPln(double & oD); \
      virtual HRESULT __stdcall GetMfgFeaturePosition(CATSafeArrayVariant & ioPosition); \
      virtual HRESULT __stdcall GetMfgFeatureXPosition(double & oX); \
      virtual HRESULT __stdcall GetMfgFeatureYPosition(double & oY); \
      virtual HRESULT __stdcall GetMfgFeatureZPosition(double & oZ); \
      virtual HRESULT __stdcall GetMfgAxialFeatureDiameter(double & oDiam); \
      virtual HRESULT __stdcall GetTrajectoryEndPointCoord(CATSafeArrayVariant & oEndPoint); \
      virtual HRESULT __stdcall GetTrajectoryStartPointCoord(CATSafeArrayVariant & oStartPoint); \
      virtual HRESULT __stdcall SetTool(const CATBSTR & iToolName); \
      virtual HRESULT __stdcall SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
      virtual HRESULT __stdcall RemoveAllGeometry(const CATBSTR & iGeometryType); \
      virtual HRESULT __stdcall SetPattern(CATIABase * iPattern); \
      virtual HRESULT __stdcall GetPattern(CATIABase *& oPattern); \
      virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall InsertToolMotion(const CATBSTR & iType, short iPosition, CATIAManufacturingToolMotion *& oToolMotion); \
      virtual HRESULT __stdcall GetListOfToolMotions(CATIAMfgToolMotions *& oListOfToolMotions); \
      virtual HRESULT __stdcall SetFeedrateMagnitude(const CATBSTR & iMagnitudeName); \
      virtual HRESULT __stdcall SetSpindleMagnitude(const CATBSTR & iMagnitudeName); \
      virtual HRESULT __stdcall IsGeometricallyAccessibleOnSetup(CATIABase * iManufacturingSetup, CAT_VARIANT_BOOL & oIsAccessible); \
      virtual HRESULT __stdcall SetRadiusOnMacro(const CATBSTR & iMacroType, double iRadius); \
      virtual HRESULT __stdcall GetRadiusOnMacro(const CATBSTR & iMacroType, double & oRadius); \
      virtual HRESULT __stdcall SetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, double iOffset, const CATBSTR & iPosition); \
      virtual HRESULT __stdcall GetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset, CATBSTR & oPosition); \
      virtual HRESULT __stdcall RemoveRelimitingGeometry(const CATBSTR & iGeometryType); \
      virtual HRESULT __stdcall SetStartPointGeometry(const CATBSTR & iGeometryPosition, CATIABase * iReference, CATIABase * iProduct, double iOffset); \
      virtual HRESULT __stdcall GetStartPointGeometry(CATBSTR & oGeometryPosition, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset); \
      virtual HRESULT __stdcall RemoveStartPointGeometry(); \
      virtual HRESULT __stdcall AddDistanceAlongAlineMotion(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct); \
      virtual HRESULT __stdcall AddDistanceAlongAlineMotionFeed(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue); \
      virtual HRESULT __stdcall AddMotionGoToAPointFeed(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue); \
      virtual HRESULT __stdcall AddDistanceAlongAxisFeed(const CATBSTR & iType, double iDistance, const CATBSTR & iFeedrateType, double iFeedrateValue); \
      virtual HRESULT __stdcall GetToolGage(double & oMinToolLength, double & oMinToolGage); \
      virtual HRESULT __stdcall GetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL & oAutoUpdate); \
      virtual HRESULT __stdcall SetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL iAutoUpdate); \
      virtual HRESULT __stdcall LockActivty(); \
      virtual HRESULT __stdcall UnlockActivty(); \
      virtual HRESULT __stdcall ImportNCOutput(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName); \
      virtual HRESULT __stdcall get_Precedences(CATIAManufacturingPrecedences *& oPrecedences); \
      virtual HRESULT __stdcall get_Tool(CATIAManufacturingTool *& oMfgTool); \
      virtual HRESULT __stdcall get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly); \
      virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT __stdcall get_NumberOfStrategyAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall get_NumberOfFeedrateAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall get_NumberOfGeomAttributes(short & oNumber); \
      virtual HRESULT __stdcall GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes); \
      virtual HRESULT __stdcall get_Representation(CATBSTR & Representation); \
      virtual HRESULT __stdcall put_Representation(const CATBSTR & Representation); \
      virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
      virtual HRESULT __stdcall get_MachiningTime(double & aTime); \
      virtual HRESULT __stdcall get_TotalTime(double & aTime); \
      virtual HRESULT __stdcall GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis); \
      virtual HRESULT __stdcall SetToolAxis(double iXAxis, double iYAxis, double iZAxis); \
      virtual HRESULT __stdcall get_VideoResult(CATBSTR & VideoResult); \
      virtual HRESULT __stdcall get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea); \
      virtual HRESULT __stdcall put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea); \
      virtual HRESULT __stdcall GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis); \
      virtual HRESULT __stdcall SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis); \
      virtual HRESULT __stdcall get_Active(CAT_VARIANT_BOOL & oActive); \
      virtual HRESULT __stdcall put_Active(CAT_VARIANT_BOOL iActive); \
      virtual HRESULT __stdcall IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal); \
      virtual HRESULT __stdcall AttrValue(const CATVariant & iIndex, CATVariant & oAttVal); \
      virtual HRESULT __stdcall AttrName(CATLONG iIndex, CATBSTR & oName); \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_Description(CATBSTR & oDescriptionBSTR); \
      virtual HRESULT __stdcall put_Description(const CATBSTR & iDescriptionBSTR); \
      virtual HRESULT __stdcall get_CycleTime(double & oCT); \
      virtual HRESULT __stdcall put_CycleTime(double iCT); \
      virtual HRESULT __stdcall get_CalculatedCycleTime(double & oCCT); \
      virtual HRESULT __stdcall get_BeginningDate(double & oBegin); \
      virtual HRESULT __stdcall put_BeginningDate(double iSBT); \
      virtual HRESULT __stdcall get_EndDate(double & oEnd); \
      virtual HRESULT __stdcall get_ChildrenActivities(CATIAActivities *& oChildren); \
      virtual HRESULT __stdcall CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild); \
      virtual HRESULT __stdcall CreateLink(CATIAActivity * iSecondActivity); \
      virtual HRESULT __stdcall RemoveLink(CATIAActivity * iSecondActivity); \
      virtual HRESULT __stdcall get_NextCFActivities(CATIAActivities *& oNextCF); \
      virtual HRESULT __stdcall get_PreviousCFActivities(CATIAActivities *& oPreviousCF); \
      virtual HRESULT __stdcall get_NextPRFActivities(CATIAActivities *& oNextPRF); \
      virtual HRESULT __stdcall get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF); \
      virtual HRESULT __stdcall get_AttrCount(CATLONG & oNbAttr); \
      virtual HRESULT __stdcall get_Items(CATIAItems *& oItems); \
      virtual HRESULT __stdcall get_Outputs(CATIAOutputs *& oOutputs); \
      virtual HRESULT __stdcall get_Resources(CATIAResources *& oResources); \
      virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
      virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
      virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
      virtual HRESULT __stdcall get_PrecedenceActivities(CATIAActivities *& oActivities); \
      virtual HRESULT __stdcall get_PossiblePrecedenceActivities(CATIAActivities *& oActivities); \
      virtual HRESULT __stdcall get_ProcessID(CATBSTR & oProcessID); \
      virtual HRESULT __stdcall SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique); \
      virtual HRESULT __stdcall get_CalculatedBeginTime(double & oCBT); \
      virtual HRESULT __stdcall AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName); \
      virtual HRESULT __stdcall RemoveAttr(const CATBSTR & iAttributeName); \
      virtual HRESULT __stdcall AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
      virtual HRESULT __stdcall RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
      virtual HRESULT __stdcall GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingOperation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Comment(CATBSTR *& oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall SetFeature(CATIABase * iMachinableFeature); \
virtual HRESULT __stdcall GetFeature(CATIABase *& oMachinableFeature); \
virtual HRESULT __stdcall GetManufacturingFeature(CATIAManufacturingFeature *& oManufacturingFeature); \
virtual HRESULT __stdcall GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall AddDistanceAlongAxis(const CATBSTR & iType, double iDistance); \
virtual HRESULT __stdcall AddGotoHorizontal(const CATBSTR & iTypeMacro, double iDistance, double iAngle1, double iAngle2); \
virtual HRESULT __stdcall AddMotionToAPlane(const CATBSTR & iTypeMacro, short iMode, CATIABase * iPlane, CATIAProduct * iProduct); \
virtual HRESULT __stdcall AddMotionGoToAPoint(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct); \
virtual HRESULT __stdcall AddClearance(const CATBSTR & iTypeMacro, double iA, double iB, double iC, double iD); \
virtual HRESULT __stdcall AddPPWords(const CATBSTR & iTypeMacro, const CATBSTR & iPPWords); \
virtual HRESULT __stdcall GetMfgTopPlane(double & oA, double & oB, double & oC, double & oD); \
virtual HRESULT __stdcall GetMfgAparamTopPln(double & oA); \
virtual HRESULT __stdcall GetMfgBparamTopPln(double & oB); \
virtual HRESULT __stdcall GetMfgCparamTopPln(double & oC); \
virtual HRESULT __stdcall GetMfgDparamTopPln(double & oD); \
virtual HRESULT __stdcall GetMfgFeaturePosition(CATSafeArrayVariant & ioPosition); \
virtual HRESULT __stdcall GetMfgFeatureXPosition(double & oX); \
virtual HRESULT __stdcall GetMfgFeatureYPosition(double & oY); \
virtual HRESULT __stdcall GetMfgFeatureZPosition(double & oZ); \
virtual HRESULT __stdcall GetMfgAxialFeatureDiameter(double & oDiam); \
virtual HRESULT __stdcall GetTrajectoryEndPointCoord(CATSafeArrayVariant & oEndPoint); \
virtual HRESULT __stdcall GetTrajectoryStartPointCoord(CATSafeArrayVariant & oStartPoint); \
virtual HRESULT __stdcall SetTool(const CATBSTR & iToolName); \
virtual HRESULT __stdcall SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
virtual HRESULT __stdcall RemoveAllGeometry(const CATBSTR & iGeometryType); \
virtual HRESULT __stdcall SetPattern(CATIABase * iPattern); \
virtual HRESULT __stdcall GetPattern(CATIABase *& oPattern); \
virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall InsertToolMotion(const CATBSTR & iType, short iPosition, CATIAManufacturingToolMotion *& oToolMotion); \
virtual HRESULT __stdcall GetListOfToolMotions(CATIAMfgToolMotions *& oListOfToolMotions); \
virtual HRESULT __stdcall SetFeedrateMagnitude(const CATBSTR & iMagnitudeName); \
virtual HRESULT __stdcall SetSpindleMagnitude(const CATBSTR & iMagnitudeName); \
virtual HRESULT __stdcall IsGeometricallyAccessibleOnSetup(CATIABase * iManufacturingSetup, CAT_VARIANT_BOOL & oIsAccessible); \
virtual HRESULT __stdcall SetRadiusOnMacro(const CATBSTR & iMacroType, double iRadius); \
virtual HRESULT __stdcall GetRadiusOnMacro(const CATBSTR & iMacroType, double & oRadius); \
virtual HRESULT __stdcall SetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, double iOffset, const CATBSTR & iPosition); \
virtual HRESULT __stdcall GetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset, CATBSTR & oPosition); \
virtual HRESULT __stdcall RemoveRelimitingGeometry(const CATBSTR & iGeometryType); \
virtual HRESULT __stdcall SetStartPointGeometry(const CATBSTR & iGeometryPosition, CATIABase * iReference, CATIABase * iProduct, double iOffset); \
virtual HRESULT __stdcall GetStartPointGeometry(CATBSTR & oGeometryPosition, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset); \
virtual HRESULT __stdcall RemoveStartPointGeometry(); \
virtual HRESULT __stdcall AddDistanceAlongAlineMotion(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct); \
virtual HRESULT __stdcall AddDistanceAlongAlineMotionFeed(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue); \
virtual HRESULT __stdcall AddMotionGoToAPointFeed(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue); \
virtual HRESULT __stdcall AddDistanceAlongAxisFeed(const CATBSTR & iType, double iDistance, const CATBSTR & iFeedrateType, double iFeedrateValue); \
virtual HRESULT __stdcall GetToolGage(double & oMinToolLength, double & oMinToolGage); \
virtual HRESULT __stdcall GetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL & oAutoUpdate); \
virtual HRESULT __stdcall SetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL iAutoUpdate); \
virtual HRESULT __stdcall LockActivty(); \
virtual HRESULT __stdcall UnlockActivty(); \
virtual HRESULT __stdcall ImportNCOutput(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName); \
virtual HRESULT __stdcall get_Precedences(CATIAManufacturingPrecedences *& oPrecedences); \
virtual HRESULT __stdcall get_Tool(CATIAManufacturingTool *& oMfgTool); \
virtual HRESULT __stdcall get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly); \
virtual HRESULT __stdcall GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT __stdcall get_NumberOfStrategyAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall get_NumberOfFeedrateAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall get_NumberOfGeomAttributes(short & oNumber); \
virtual HRESULT __stdcall GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes); \
virtual HRESULT __stdcall get_Representation(CATBSTR & Representation); \
virtual HRESULT __stdcall put_Representation(const CATBSTR & Representation); \
virtual HRESULT __stdcall GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName); \
virtual HRESULT __stdcall get_MachiningTime(double & aTime); \
virtual HRESULT __stdcall get_TotalTime(double & aTime); \
virtual HRESULT __stdcall GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis); \
virtual HRESULT __stdcall SetToolAxis(double iXAxis, double iYAxis, double iZAxis); \
virtual HRESULT __stdcall get_VideoResult(CATBSTR & VideoResult); \
virtual HRESULT __stdcall get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea); \
virtual HRESULT __stdcall put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea); \
virtual HRESULT __stdcall GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis); \
virtual HRESULT __stdcall SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis); \
virtual HRESULT __stdcall get_Active(CAT_VARIANT_BOOL & oActive); \
virtual HRESULT __stdcall put_Active(CAT_VARIANT_BOOL iActive); \
virtual HRESULT __stdcall IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal); \
virtual HRESULT __stdcall AttrValue(const CATVariant & iIndex, CATVariant & oAttVal); \
virtual HRESULT __stdcall AttrName(CATLONG iIndex, CATBSTR & oName); \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_Description(CATBSTR & oDescriptionBSTR); \
virtual HRESULT __stdcall put_Description(const CATBSTR & iDescriptionBSTR); \
virtual HRESULT __stdcall get_CycleTime(double & oCT); \
virtual HRESULT __stdcall put_CycleTime(double iCT); \
virtual HRESULT __stdcall get_CalculatedCycleTime(double & oCCT); \
virtual HRESULT __stdcall get_BeginningDate(double & oBegin); \
virtual HRESULT __stdcall put_BeginningDate(double iSBT); \
virtual HRESULT __stdcall get_EndDate(double & oEnd); \
virtual HRESULT __stdcall get_ChildrenActivities(CATIAActivities *& oChildren); \
virtual HRESULT __stdcall CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild); \
virtual HRESULT __stdcall CreateLink(CATIAActivity * iSecondActivity); \
virtual HRESULT __stdcall RemoveLink(CATIAActivity * iSecondActivity); \
virtual HRESULT __stdcall get_NextCFActivities(CATIAActivities *& oNextCF); \
virtual HRESULT __stdcall get_PreviousCFActivities(CATIAActivities *& oPreviousCF); \
virtual HRESULT __stdcall get_NextPRFActivities(CATIAActivities *& oNextPRF); \
virtual HRESULT __stdcall get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF); \
virtual HRESULT __stdcall get_AttrCount(CATLONG & oNbAttr); \
virtual HRESULT __stdcall get_Items(CATIAItems *& oItems); \
virtual HRESULT __stdcall get_Outputs(CATIAOutputs *& oOutputs); \
virtual HRESULT __stdcall get_Resources(CATIAResources *& oResources); \
virtual HRESULT __stdcall get_Relations(CATIARelations *& oRelations); \
virtual HRESULT __stdcall get_Parameters(CATIAParameters *& oParameters); \
virtual HRESULT __stdcall GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj); \
virtual HRESULT __stdcall get_PrecedenceActivities(CATIAActivities *& oActivities); \
virtual HRESULT __stdcall get_PossiblePrecedenceActivities(CATIAActivities *& oActivities); \
virtual HRESULT __stdcall get_ProcessID(CATBSTR & oProcessID); \
virtual HRESULT __stdcall SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique); \
virtual HRESULT __stdcall get_CalculatedBeginTime(double & oCBT); \
virtual HRESULT __stdcall AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName); \
virtual HRESULT __stdcall RemoveAttr(const CATBSTR & iAttributeName); \
virtual HRESULT __stdcall AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
virtual HRESULT __stdcall RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType); \
virtual HRESULT __stdcall GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingOperation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR *& oComment) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::SetFeature(CATIABase * iMachinableFeature) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetFeature(iMachinableFeature)); \
} \
HRESULT __stdcall  ENVTIEName::GetFeature(CATIABase *& oMachinableFeature) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetFeature(oMachinableFeature)); \
} \
HRESULT __stdcall  ENVTIEName::GetManufacturingFeature(CATIAManufacturingFeature *& oManufacturingFeature) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetManufacturingFeature(oManufacturingFeature)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetAnAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::AddDistanceAlongAxis(const CATBSTR & iType, double iDistance) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddDistanceAlongAxis(iType,iDistance)); \
} \
HRESULT __stdcall  ENVTIEName::AddGotoHorizontal(const CATBSTR & iTypeMacro, double iDistance, double iAngle1, double iAngle2) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddGotoHorizontal(iTypeMacro,iDistance,iAngle1,iAngle2)); \
} \
HRESULT __stdcall  ENVTIEName::AddMotionToAPlane(const CATBSTR & iTypeMacro, short iMode, CATIABase * iPlane, CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddMotionToAPlane(iTypeMacro,iMode,iPlane,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddMotionGoToAPoint(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddMotionGoToAPoint(iTypeMacro,iPoint,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddClearance(const CATBSTR & iTypeMacro, double iA, double iB, double iC, double iD) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddClearance(iTypeMacro,iA,iB,iC,iD)); \
} \
HRESULT __stdcall  ENVTIEName::AddPPWords(const CATBSTR & iTypeMacro, const CATBSTR & iPPWords) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddPPWords(iTypeMacro,iPPWords)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgTopPlane(double & oA, double & oB, double & oC, double & oD) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgTopPlane(oA,oB,oC,oD)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgAparamTopPln(double & oA) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgAparamTopPln(oA)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgBparamTopPln(double & oB) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgBparamTopPln(oB)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgCparamTopPln(double & oC) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgCparamTopPln(oC)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgDparamTopPln(double & oD) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgDparamTopPln(oD)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgFeaturePosition(CATSafeArrayVariant & ioPosition) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgFeaturePosition(ioPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgFeatureXPosition(double & oX) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgFeatureXPosition(oX)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgFeatureYPosition(double & oY) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgFeatureYPosition(oY)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgFeatureZPosition(double & oZ) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgFeatureZPosition(oZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetMfgAxialFeatureDiameter(double & oDiam) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMfgAxialFeatureDiameter(oDiam)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrajectoryEndPointCoord(CATSafeArrayVariant & oEndPoint) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetTrajectoryEndPointCoord(oEndPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrajectoryStartPointCoord(CATSafeArrayVariant & oStartPoint) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetTrajectoryStartPointCoord(oStartPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetTool(const CATBSTR & iToolName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetTool(iToolName)); \
} \
HRESULT __stdcall  ENVTIEName::SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetGeometry(iGeometryType,iReference,iProduct,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllGeometry(const CATBSTR & iGeometryType) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)RemoveAllGeometry(iGeometryType)); \
} \
HRESULT __stdcall  ENVTIEName::SetPattern(CATIABase * iPattern) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetPattern(iPattern)); \
} \
HRESULT __stdcall  ENVTIEName::GetPattern(CATIABase *& oPattern) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetPattern(oPattern)); \
} \
HRESULT __stdcall  ENVTIEName::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetAGeometricAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::InsertToolMotion(const CATBSTR & iType, short iPosition, CATIAManufacturingToolMotion *& oToolMotion) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)InsertToolMotion(iType,iPosition,oToolMotion)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfToolMotions(CATIAMfgToolMotions *& oListOfToolMotions) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetListOfToolMotions(oListOfToolMotions)); \
} \
HRESULT __stdcall  ENVTIEName::SetFeedrateMagnitude(const CATBSTR & iMagnitudeName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetFeedrateMagnitude(iMagnitudeName)); \
} \
HRESULT __stdcall  ENVTIEName::SetSpindleMagnitude(const CATBSTR & iMagnitudeName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetSpindleMagnitude(iMagnitudeName)); \
} \
HRESULT __stdcall  ENVTIEName::IsGeometricallyAccessibleOnSetup(CATIABase * iManufacturingSetup, CAT_VARIANT_BOOL & oIsAccessible) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)IsGeometricallyAccessibleOnSetup(iManufacturingSetup,oIsAccessible)); \
} \
HRESULT __stdcall  ENVTIEName::SetRadiusOnMacro(const CATBSTR & iMacroType, double iRadius) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetRadiusOnMacro(iMacroType,iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetRadiusOnMacro(const CATBSTR & iMacroType, double & oRadius) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetRadiusOnMacro(iMacroType,oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, double iOffset, const CATBSTR & iPosition) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetRelimitingGeometry(iGeometryType,iReference,iProduct,iOffset,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset, CATBSTR & oPosition) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetRelimitingGeometry(iGeometryType,oReference,oProduct,oOffset,oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveRelimitingGeometry(const CATBSTR & iGeometryType) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)RemoveRelimitingGeometry(iGeometryType)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartPointGeometry(const CATBSTR & iGeometryPosition, CATIABase * iReference, CATIABase * iProduct, double iOffset) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetStartPointGeometry(iGeometryPosition,iReference,iProduct,iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::GetStartPointGeometry(CATBSTR & oGeometryPosition, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetStartPointGeometry(oGeometryPosition,oReference,oProduct,oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveStartPointGeometry() \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)RemoveStartPointGeometry()); \
} \
HRESULT __stdcall  ENVTIEName::AddDistanceAlongAlineMotion(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddDistanceAlongAlineMotion(iType,iDistance,iLine,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddDistanceAlongAlineMotionFeed(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddDistanceAlongAlineMotionFeed(iType,iDistance,iLine,iProduct,iFeedrateType,iFeedrateValue)); \
} \
HRESULT __stdcall  ENVTIEName::AddMotionGoToAPointFeed(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddMotionGoToAPointFeed(iTypeMacro,iPoint,iProduct,iFeedrateType,iFeedrateValue)); \
} \
HRESULT __stdcall  ENVTIEName::AddDistanceAlongAxisFeed(const CATBSTR & iType, double iDistance, const CATBSTR & iFeedrateType, double iFeedrateValue) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddDistanceAlongAxisFeed(iType,iDistance,iFeedrateType,iFeedrateValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetToolGage(double & oMinToolLength, double & oMinToolGage) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetToolGage(oMinToolLength,oMinToolGage)); \
} \
HRESULT __stdcall  ENVTIEName::GetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL & oAutoUpdate) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetFeedSpeedAutoUpdate(iType,oAutoUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::SetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL iAutoUpdate) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetFeedSpeedAutoUpdate(iType,iAutoUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::LockActivty() \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)LockActivty()); \
} \
HRESULT __stdcall  ENVTIEName::UnlockActivty() \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)UnlockActivty()); \
} \
HRESULT __stdcall  ENVTIEName::ImportNCOutput(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)ImportNCOutput(iType,iNCOutputFile,iPPName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Precedences(CATIAManufacturingPrecedences *& oPrecedences) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Precedences(oPrecedences)); \
} \
HRESULT __stdcall  ENVTIEName::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Tool(oMfgTool)); \
} \
HRESULT __stdcall  ENVTIEName::get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_ToolAssembly(oMfgToolAssembly)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfStrategyAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_NumberOfStrategyAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetListOfStrategyAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfFeedrateAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_NumberOfFeedrateAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetListOfFeedrateAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfGeomAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_NumberOfGeomAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetListOfGeomAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Representation(CATBSTR & Representation) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Representation(Representation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Representation(const CATBSTR & Representation) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_Representation(Representation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetAttributeNLSName(iAttributName,oNLSName)); \
} \
HRESULT __stdcall  ENVTIEName::get_MachiningTime(double & aTime) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_MachiningTime(aTime)); \
} \
HRESULT __stdcall  ENVTIEName::get_TotalTime(double & aTime) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_TotalTime(aTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetToolAxis(oXAxis,oYAxis,oZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetToolAxis(double iXAxis, double iYAxis, double iZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetToolAxis(iXAxis,iYAxis,iZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_VideoResult(CATBSTR & VideoResult) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_VideoResult(VideoResult)); \
} \
HRESULT __stdcall  ENVTIEName::get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_MachinableFeature(oMachArea)); \
} \
HRESULT __stdcall  ENVTIEName::put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_MachinableFeature(iMachArea)); \
} \
HRESULT __stdcall  ENVTIEName::GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetMachiningDirection(oXAxis,oYAxis,oZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetMachiningDirection(iXAxis,iYAxis,iZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_Active(CAT_VARIANT_BOOL & oActive) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Active(oActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Active(CAT_VARIANT_BOOL iActive) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_Active(iActive)); \
} \
HRESULT __stdcall  ENVTIEName::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)IsSubTypeOf(iName,oVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AttrValue(iIndex,oAttVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AttrName(iIndex,oName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Description(oDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_Description(iDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CycleTime(double & oCT) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_CycleTime(oCT)); \
} \
HRESULT __stdcall  ENVTIEName::put_CycleTime(double iCT) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_CycleTime(iCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedCycleTime(double & oCCT) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_CalculatedCycleTime(oCCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginningDate(double & oBegin) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_BeginningDate(oBegin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BeginningDate(double iSBT) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_BeginningDate(iSBT)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndDate(double & oEnd) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_EndDate(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_ChildrenActivities(oChildren)); \
} \
HRESULT __stdcall  ENVTIEName::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)CreateChild(iTypeOfChild,oCreatedChild)); \
} \
HRESULT __stdcall  ENVTIEName::CreateLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)CreateLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)RemoveLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_NextCFActivities(oNextCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_PreviousCFActivities(oPreviousCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_NextPRFActivities(oNextPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_PreviousPRFActivities(oPreviousPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttrCount(CATLONG & oNbAttr) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_AttrCount(oNbAttr)); \
} \
HRESULT __stdcall  ENVTIEName::get_Items(CATIAItems *& oItems) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Items(oItems)); \
} \
HRESULT __stdcall  ENVTIEName::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Outputs(oOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_Resources(CATIAResources *& oResources) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Resources(oResources)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_PrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_PossiblePrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProcessID(CATBSTR & oProcessID) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_ProcessID(oProcessID)); \
} \
HRESULT __stdcall  ENVTIEName::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)SetProcessID(iProcessID,iCheckUnique)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedBeginTime(double & oCBT) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_CalculatedBeginTime(oCBT)); \
} \
HRESULT __stdcall  ENVTIEName::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddAttr(iAttributeName,AttrType,iAttributePromptName)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)RemoveAttr(iAttributeName)); \
} \
HRESULT __stdcall  ENVTIEName::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)AddActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)RemoveActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetActivityConstraints(iConstraintType,oConstrtList)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingOperation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingOperation(classe)    TIECATIAManufacturingOperation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingOperation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingOperation, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingOperation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingOperation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingOperation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingOperation, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Comment(CATBSTR *& oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetFeature(CATIABase * iMachinableFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iMachinableFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFeature(iMachinableFeature); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iMachinableFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetFeature(CATIABase *& oMachinableFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oMachinableFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeature(oMachinableFeature); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oMachinableFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetManufacturingFeature(CATIAManufacturingFeature *& oManufacturingFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oManufacturingFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManufacturingFeature(oManufacturingFeature); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oManufacturingFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetAnAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddDistanceAlongAxis(const CATBSTR & iType, double iDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iType,&iDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDistanceAlongAxis(iType,iDistance); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iType,&iDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddGotoHorizontal(const CATBSTR & iTypeMacro, double iDistance, double iAngle1, double iAngle2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iTypeMacro,&iDistance,&iAngle1,&iAngle2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGotoHorizontal(iTypeMacro,iDistance,iAngle1,iAngle2); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iTypeMacro,&iDistance,&iAngle1,&iAngle2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddMotionToAPlane(const CATBSTR & iTypeMacro, short iMode, CATIABase * iPlane, CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iTypeMacro,&iMode,&iPlane,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMotionToAPlane(iTypeMacro,iMode,iPlane,iProduct); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iTypeMacro,&iMode,&iPlane,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddMotionGoToAPoint(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iTypeMacro,&iPoint,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMotionGoToAPoint(iTypeMacro,iPoint,iProduct); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iTypeMacro,&iPoint,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddClearance(const CATBSTR & iTypeMacro, double iA, double iB, double iC, double iD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iTypeMacro,&iA,&iB,&iC,&iD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddClearance(iTypeMacro,iA,iB,iC,iD); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iTypeMacro,&iA,&iB,&iC,&iD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddPPWords(const CATBSTR & iTypeMacro, const CATBSTR & iPPWords) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iTypeMacro,&iPPWords); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPPWords(iTypeMacro,iPPWords); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iTypeMacro,&iPPWords); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgTopPlane(double & oA, double & oB, double & oC, double & oD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oA,&oB,&oC,&oD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgTopPlane(oA,oB,oC,oD); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oA,&oB,&oC,&oD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgAparamTopPln(double & oA) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oA); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgAparamTopPln(oA); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oA); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgBparamTopPln(double & oB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgBparamTopPln(oB); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgCparamTopPln(double & oC) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oC); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgCparamTopPln(oC); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oC); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgDparamTopPln(double & oD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgDparamTopPln(oD); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgFeaturePosition(CATSafeArrayVariant & ioPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&ioPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgFeaturePosition(ioPosition); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&ioPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgFeatureXPosition(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgFeatureXPosition(oX); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgFeatureYPosition(double & oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgFeatureYPosition(oY); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgFeatureZPosition(double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgFeatureZPosition(oZ); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMfgAxialFeatureDiameter(double & oDiam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oDiam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMfgAxialFeatureDiameter(oDiam); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oDiam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetTrajectoryEndPointCoord(CATSafeArrayVariant & oEndPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oEndPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrajectoryEndPointCoord(oEndPoint); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oEndPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetTrajectoryStartPointCoord(CATSafeArrayVariant & oStartPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oStartPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrajectoryStartPointCoord(oStartPoint); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oStartPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetTool(const CATBSTR & iToolName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iToolName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTool(iToolName); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iToolName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iGeometryType,&iReference,&iProduct,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeometry(iGeometryType,iReference,iProduct,iPosition); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iGeometryType,&iReference,&iProduct,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::RemoveAllGeometry(const CATBSTR & iGeometryType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iGeometryType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllGeometry(iGeometryType); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iGeometryType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetPattern(CATIABase * iPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPattern(iPattern); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetPattern(CATIABase *& oPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPattern(oPattern); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAGeometricAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::InsertToolMotion(const CATBSTR & iType, short iPosition, CATIAManufacturingToolMotion *& oToolMotion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iType,&iPosition,&oToolMotion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertToolMotion(iType,iPosition,oToolMotion); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iType,&iPosition,&oToolMotion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetListOfToolMotions(CATIAMfgToolMotions *& oListOfToolMotions) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oListOfToolMotions); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfToolMotions(oListOfToolMotions); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oListOfToolMotions); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetFeedrateMagnitude(const CATBSTR & iMagnitudeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iMagnitudeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFeedrateMagnitude(iMagnitudeName); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iMagnitudeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetSpindleMagnitude(const CATBSTR & iMagnitudeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iMagnitudeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSpindleMagnitude(iMagnitudeName); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iMagnitudeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::IsGeometricallyAccessibleOnSetup(CATIABase * iManufacturingSetup, CAT_VARIANT_BOOL & oIsAccessible) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iManufacturingSetup,&oIsAccessible); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGeometricallyAccessibleOnSetup(iManufacturingSetup,oIsAccessible); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iManufacturingSetup,&oIsAccessible); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetRadiusOnMacro(const CATBSTR & iMacroType, double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iMacroType,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadiusOnMacro(iMacroType,iRadius); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iMacroType,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetRadiusOnMacro(const CATBSTR & iMacroType, double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iMacroType,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRadiusOnMacro(iMacroType,oRadius); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iMacroType,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, double iOffset, const CATBSTR & iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iGeometryType,&iReference,&iProduct,&iOffset,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelimitingGeometry(iGeometryType,iReference,iProduct,iOffset,iPosition); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iGeometryType,&iReference,&iProduct,&iOffset,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetRelimitingGeometry(const CATBSTR & iGeometryType, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset, CATBSTR & oPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iGeometryType,&oReference,&oProduct,&oOffset,&oPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimitingGeometry(iGeometryType,oReference,oProduct,oOffset,oPosition); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iGeometryType,&oReference,&oProduct,&oOffset,&oPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::RemoveRelimitingGeometry(const CATBSTR & iGeometryType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iGeometryType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveRelimitingGeometry(iGeometryType); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iGeometryType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetStartPointGeometry(const CATBSTR & iGeometryPosition, CATIABase * iReference, CATIABase * iProduct, double iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iGeometryPosition,&iReference,&iProduct,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartPointGeometry(iGeometryPosition,iReference,iProduct,iOffset); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iGeometryPosition,&iReference,&iProduct,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetStartPointGeometry(CATBSTR & oGeometryPosition, CATIABase *& oReference, CATIABase *& oProduct, double & oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oGeometryPosition,&oReference,&oProduct,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartPointGeometry(oGeometryPosition,oReference,oProduct,oOffset); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oGeometryPosition,&oReference,&oProduct,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::RemoveStartPointGeometry() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveStartPointGeometry(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddDistanceAlongAlineMotion(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iType,&iDistance,&iLine,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDistanceAlongAlineMotion(iType,iDistance,iLine,iProduct); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iType,&iDistance,&iLine,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddDistanceAlongAlineMotionFeed(const CATBSTR & iType, double iDistance, CATIABase * iLine, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iType,&iDistance,&iLine,&iProduct,&iFeedrateType,&iFeedrateValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDistanceAlongAlineMotionFeed(iType,iDistance,iLine,iProduct,iFeedrateType,iFeedrateValue); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iType,&iDistance,&iLine,&iProduct,&iFeedrateType,&iFeedrateValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddMotionGoToAPointFeed(const CATBSTR & iTypeMacro, CATIABase * iPoint, CATIAProduct * iProduct, const CATBSTR & iFeedrateType, double iFeedrateValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iTypeMacro,&iPoint,&iProduct,&iFeedrateType,&iFeedrateValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMotionGoToAPointFeed(iTypeMacro,iPoint,iProduct,iFeedrateType,iFeedrateValue); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iTypeMacro,&iPoint,&iProduct,&iFeedrateType,&iFeedrateValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddDistanceAlongAxisFeed(const CATBSTR & iType, double iDistance, const CATBSTR & iFeedrateType, double iFeedrateValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iType,&iDistance,&iFeedrateType,&iFeedrateValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDistanceAlongAxisFeed(iType,iDistance,iFeedrateType,iFeedrateValue); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iType,&iDistance,&iFeedrateType,&iFeedrateValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetToolGage(double & oMinToolLength, double & oMinToolGage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oMinToolLength,&oMinToolGage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolGage(oMinToolLength,oMinToolGage); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oMinToolLength,&oMinToolGage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL & oAutoUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iType,&oAutoUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeedSpeedAutoUpdate(iType,oAutoUpdate); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iType,&oAutoUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetFeedSpeedAutoUpdate(const CATBSTR & iType, CAT_VARIANT_BOOL iAutoUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iType,&iAutoUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFeedSpeedAutoUpdate(iType,iAutoUpdate); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iType,&iAutoUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::LockActivty() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockActivty(); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::UnlockActivty() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnlockActivty(); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::ImportNCOutput(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&iType,&iNCOutputFile,&iPPName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportNCOutput(iType,iNCOutputFile,iPPName); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&iType,&iNCOutputFile,&iPPName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Precedences(CATIAManufacturingPrecedences *& oPrecedences) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oPrecedences); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Precedences(oPrecedences); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oPrecedences); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oMfgTool); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Tool(oMfgTool); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oMfgTool); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oMfgToolAssembly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToolAssembly(oMfgToolAssembly); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oMfgToolAssembly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_NumberOfStrategyAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfStrategyAttributes(oNumber); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfStrategyAttributes(oListOfAttributes); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_NumberOfFeedrateAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfFeedrateAttributes(oNumber); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfFeedrateAttributes(oListOfAttributes); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_NumberOfGeomAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfGeomAttributes(oNumber); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfGeomAttributes(oListOfAttributes); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Representation(CATBSTR & Representation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&Representation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Representation(Representation); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&Representation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::put_Representation(const CATBSTR & Representation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&Representation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Representation(Representation); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&Representation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iAttributName,&oNLSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNLSName(iAttributName,oNLSName); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iAttributName,&oNLSName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_MachiningTime(double & aTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&aTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachiningTime(aTime); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&aTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_TotalTime(double & aTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&aTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TotalTime(aTime); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&aTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oXAxis,&oYAxis,&oZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolAxis(oXAxis,oYAxis,oZAxis); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oXAxis,&oYAxis,&oZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetToolAxis(double iXAxis, double iYAxis, double iZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iXAxis,&iYAxis,&iZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolAxis(iXAxis,iYAxis,iZAxis); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iXAxis,&iYAxis,&iZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_VideoResult(CATBSTR & VideoResult) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&VideoResult); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VideoResult(VideoResult); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&VideoResult); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&oMachArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachinableFeature(oMachArea); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&oMachArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&iMachArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MachinableFeature(iMachArea); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&iMachArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&oXAxis,&oYAxis,&oZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMachiningDirection(oXAxis,oYAxis,oZAxis); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&oXAxis,&oYAxis,&oZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iXAxis,&iYAxis,&iZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMachiningDirection(iXAxis,iYAxis,iZAxis); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iXAxis,&iYAxis,&iZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Active(CAT_VARIANT_BOOL & oActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&oActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Active(oActive); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&oActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::put_Active(CAT_VARIANT_BOOL iActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&iActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Active(iActive); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&iActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iName,&oVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSubTypeOf(iName,oVal); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iName,&oVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&iIndex,&oAttVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrValue(iIndex,oAttVal); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&iIndex,&oAttVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iIndex,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrName(iIndex,oName); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iIndex,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&oDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Description(oDescriptionBSTR); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&oDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&iDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Description(iDescriptionBSTR); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&iDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_CycleTime(double & oCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&oCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CycleTime(oCT); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&oCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::put_CycleTime(double iCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&iCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CycleTime(iCT); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&iCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_CalculatedCycleTime(double & oCCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&oCCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedCycleTime(oCCT); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&oCCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_BeginningDate(double & oBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&oBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginningDate(oBegin); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&oBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::put_BeginningDate(double iSBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iSBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BeginningDate(iSBT); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iSBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_EndDate(double & oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndDate(oEnd); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&oChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChildrenActivities(oChildren); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&oChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&iTypeOfChild,&oCreatedChild); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateChild(iTypeOfChild,oCreatedChild); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&iTypeOfChild,&oCreatedChild); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::CreateLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLink(iSecondActivity); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLink(iSecondActivity); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&oNextCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextCFActivities(oNextCF); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&oNextCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&oPreviousCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousCFActivities(oPreviousCF); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&oPreviousCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&oNextPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextPRFActivities(oNextPRF); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&oNextPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oPreviousPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousPRFActivities(oPreviousPRF); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oPreviousPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_AttrCount(CATLONG & oNbAttr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&oNbAttr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttrCount(oNbAttr); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&oNbAttr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Items(CATIAItems *& oItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&oItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Items(oItems); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&oItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&oOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Outputs(oOutputs); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&oOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Resources(CATIAResources *& oResources) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oResources); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Resources(oResources); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oResources); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrecedenceActivities(oActivities); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PossiblePrecedenceActivities(oActivities); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_ProcessID(CATBSTR & oProcessID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&oProcessID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProcessID(oProcessID); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&oProcessID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iProcessID,&iCheckUnique); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProcessID(iProcessID,iCheckUnique); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iProcessID,&iCheckUnique); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::get_CalculatedBeginTime(double & oCBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&oCBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedBeginTime(oCBT); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&oCBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iAttributeName,&AttrType,&iAttributePromptName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAttr(iAttributeName,AttrType,iAttributePromptName); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iAttributeName,&AttrType,&iAttributePromptName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&iAttributeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAttr(iAttributeName); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&iAttributeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingOperation##classe::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iConstraintType,&oConstrtList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActivityConstraints(iConstraintType,oConstrtList); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iConstraintType,&oConstrtList); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOperation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOperation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOperation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOperation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingOperation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingOperation(classe) \
 \
 \
declare_TIE_CATIAManufacturingOperation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingOperation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingOperation,"CATIAManufacturingOperation",CATIAManufacturingOperation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingOperation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingOperation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingOperation##classe(classe::MetaObject(),CATIAManufacturingOperation::MetaObject(),(void *)CreateTIECATIAManufacturingOperation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingOperation(classe) \
 \
 \
declare_TIE_CATIAManufacturingOperation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingOperation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingOperation,"CATIAManufacturingOperation",CATIAManufacturingOperation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingOperation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingOperation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingOperation##classe(classe::MetaObject(),CATIAManufacturingOperation::MetaObject(),(void *)CreateTIECATIAManufacturingOperation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingOperation(classe) TIE_CATIAManufacturingOperation(classe)
#else
#define BOA_CATIAManufacturingOperation(classe) CATImplementBOA(CATIAManufacturingOperation, classe)
#endif

#endif
