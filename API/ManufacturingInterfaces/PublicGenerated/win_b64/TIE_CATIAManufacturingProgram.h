#ifndef __TIE_CATIAManufacturingProgram
#define __TIE_CATIAManufacturingProgram

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingProgram.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingProgram */
#define declare_TIE_CATIAManufacturingProgram(classe) \
 \
 \
class TIECATIAManufacturingProgram##classe : public CATIAManufacturingProgram \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingProgram, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall get_Activities(CATIAMfgActivities *& oActivities); \
      virtual HRESULT __stdcall InsertOperation(CATIAManufacturingOperation * iReferenceOperation, CATIAManufacturingOperation * iManufacturingOperation); \
      virtual HRESULT __stdcall MoveOperation(CATIAManufacturingActivity * iReferenceOperation, CATIAManufacturingActivity * iManufacturingOperation); \
      virtual HRESULT __stdcall AppendOperation(const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation); \
      virtual HRESULT __stdcall AddToolChange(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange); \
      virtual HRESULT __stdcall AddToolChangeMultipleFeeds(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumFSData, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange); \
      virtual HRESULT __stdcall AddGotoPoint(const CATBSTR & iPointName, CATIAManufacturingActivity *& oMfgGotoPoint); \
      virtual HRESULT __stdcall AddPPInstruction(const CATBSTR & iPPInstruction, CATIAManufacturingActivity *& oMfgPPInstruction); \
      virtual HRESULT __stdcall AddRotabl(const CATBSTR & iRotabl, const CATBSTR & iSens, double ival, CATIAManufacturingActivity *& oMfgRotabl); \
      virtual HRESULT __stdcall AddGotoPointfromCoordinates(double iX, double iY, double iZ, CATIAManufacturingActivity *& oMfgGotoPoint); \
      virtual HRESULT __stdcall OrderAndCreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, const CATBSTR & iAxeRotabl, const CATBSTR & iSensRotation, CATIAMfgActivities *& oListeMfgActivity); \
      virtual HRESULT __stdcall CreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, CATIAMfgActivities *& oListeMfgActivity); \
      virtual HRESULT __stdcall CompletewithPolarStrategy(CATIAMfgActivities * iListeMfgActivity, const CATBSTR & iAxeRef, const CATBSTR & iSensRotation); \
      virtual HRESULT __stdcall GetTableCurrentAbsolutePosition(CATIAManufacturingActivity * iActivityRef, double & oAngle); \
      virtual HRESULT __stdcall GetNCOutputFile(CATBSTR & oOutputFile); \
      virtual HRESULT __stdcall AssociateOutputCode(const CATBSTR & iFileName); \
      virtual HRESULT __stdcall LockActivitesWithinProgram(); \
      virtual HRESULT __stdcall UnlockActivitesWithinProgram(); \
      virtual HRESULT __stdcall ImportNCOutputOnProgram(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName); \
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



#define ENVTIEdeclare_CATIAManufacturingProgram(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall get_Activities(CATIAMfgActivities *& oActivities); \
virtual HRESULT __stdcall InsertOperation(CATIAManufacturingOperation * iReferenceOperation, CATIAManufacturingOperation * iManufacturingOperation); \
virtual HRESULT __stdcall MoveOperation(CATIAManufacturingActivity * iReferenceOperation, CATIAManufacturingActivity * iManufacturingOperation); \
virtual HRESULT __stdcall AppendOperation(const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation); \
virtual HRESULT __stdcall AddToolChange(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange); \
virtual HRESULT __stdcall AddToolChangeMultipleFeeds(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumFSData, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange); \
virtual HRESULT __stdcall AddGotoPoint(const CATBSTR & iPointName, CATIAManufacturingActivity *& oMfgGotoPoint); \
virtual HRESULT __stdcall AddPPInstruction(const CATBSTR & iPPInstruction, CATIAManufacturingActivity *& oMfgPPInstruction); \
virtual HRESULT __stdcall AddRotabl(const CATBSTR & iRotabl, const CATBSTR & iSens, double ival, CATIAManufacturingActivity *& oMfgRotabl); \
virtual HRESULT __stdcall AddGotoPointfromCoordinates(double iX, double iY, double iZ, CATIAManufacturingActivity *& oMfgGotoPoint); \
virtual HRESULT __stdcall OrderAndCreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, const CATBSTR & iAxeRotabl, const CATBSTR & iSensRotation, CATIAMfgActivities *& oListeMfgActivity); \
virtual HRESULT __stdcall CreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, CATIAMfgActivities *& oListeMfgActivity); \
virtual HRESULT __stdcall CompletewithPolarStrategy(CATIAMfgActivities * iListeMfgActivity, const CATBSTR & iAxeRef, const CATBSTR & iSensRotation); \
virtual HRESULT __stdcall GetTableCurrentAbsolutePosition(CATIAManufacturingActivity * iActivityRef, double & oAngle); \
virtual HRESULT __stdcall GetNCOutputFile(CATBSTR & oOutputFile); \
virtual HRESULT __stdcall AssociateOutputCode(const CATBSTR & iFileName); \
virtual HRESULT __stdcall LockActivitesWithinProgram(); \
virtual HRESULT __stdcall UnlockActivitesWithinProgram(); \
virtual HRESULT __stdcall ImportNCOutputOnProgram(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName); \
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


#define ENVTIEdefine_CATIAManufacturingProgram(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activities(CATIAMfgActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Activities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::InsertOperation(CATIAManufacturingOperation * iReferenceOperation, CATIAManufacturingOperation * iManufacturingOperation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)InsertOperation(iReferenceOperation,iManufacturingOperation)); \
} \
HRESULT __stdcall  ENVTIEName::MoveOperation(CATIAManufacturingActivity * iReferenceOperation, CATIAManufacturingActivity * iManufacturingOperation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)MoveOperation(iReferenceOperation,iManufacturingOperation)); \
} \
HRESULT __stdcall  ENVTIEName::AppendOperation(const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AppendOperation(type,AutoSequence,oManufacturingOperation)); \
} \
HRESULT __stdcall  ENVTIEName::AddToolChange(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddToolChange(iToolName,iToolType,iToolCatalog,iNumSyntaxe,oMfgToolChange)); \
} \
HRESULT __stdcall  ENVTIEName::AddToolChangeMultipleFeeds(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumFSData, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddToolChangeMultipleFeeds(iToolName,iToolType,iToolCatalog,iNumFSData,iNumSyntaxe,oMfgToolChange)); \
} \
HRESULT __stdcall  ENVTIEName::AddGotoPoint(const CATBSTR & iPointName, CATIAManufacturingActivity *& oMfgGotoPoint) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddGotoPoint(iPointName,oMfgGotoPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddPPInstruction(const CATBSTR & iPPInstruction, CATIAManufacturingActivity *& oMfgPPInstruction) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddPPInstruction(iPPInstruction,oMfgPPInstruction)); \
} \
HRESULT __stdcall  ENVTIEName::AddRotabl(const CATBSTR & iRotabl, const CATBSTR & iSens, double ival, CATIAManufacturingActivity *& oMfgRotabl) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddRotabl(iRotabl,iSens,ival,oMfgRotabl)); \
} \
HRESULT __stdcall  ENVTIEName::AddGotoPointfromCoordinates(double iX, double iY, double iZ, CATIAManufacturingActivity *& oMfgGotoPoint) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddGotoPointfromCoordinates(iX,iY,iZ,oMfgGotoPoint)); \
} \
HRESULT __stdcall  ENVTIEName::OrderAndCreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, const CATBSTR & iAxeRotabl, const CATBSTR & iSensRotation, CATIAMfgActivities *& oListeMfgActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)OrderAndCreateMOfromReport(iReportSucceed,iTypeMo,iAxeRotabl,iSensRotation,oListeMfgActivity)); \
} \
HRESULT __stdcall  ENVTIEName::CreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, CATIAMfgActivities *& oListeMfgActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)CreateMOfromReport(iReportSucceed,iTypeMo,oListeMfgActivity)); \
} \
HRESULT __stdcall  ENVTIEName::CompletewithPolarStrategy(CATIAMfgActivities * iListeMfgActivity, const CATBSTR & iAxeRef, const CATBSTR & iSensRotation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)CompletewithPolarStrategy(iListeMfgActivity,iAxeRef,iSensRotation)); \
} \
HRESULT __stdcall  ENVTIEName::GetTableCurrentAbsolutePosition(CATIAManufacturingActivity * iActivityRef, double & oAngle) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetTableCurrentAbsolutePosition(iActivityRef,oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetNCOutputFile(CATBSTR & oOutputFile) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetNCOutputFile(oOutputFile)); \
} \
HRESULT __stdcall  ENVTIEName::AssociateOutputCode(const CATBSTR & iFileName) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AssociateOutputCode(iFileName)); \
} \
HRESULT __stdcall  ENVTIEName::LockActivitesWithinProgram() \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)LockActivitesWithinProgram()); \
} \
HRESULT __stdcall  ENVTIEName::UnlockActivitesWithinProgram() \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)UnlockActivitesWithinProgram()); \
} \
HRESULT __stdcall  ENVTIEName::ImportNCOutputOnProgram(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)ImportNCOutputOnProgram(iType,iNCOutputFile,iPPName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Precedences(CATIAManufacturingPrecedences *& oPrecedences) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Precedences(oPrecedences)); \
} \
HRESULT __stdcall  ENVTIEName::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Tool(oMfgTool)); \
} \
HRESULT __stdcall  ENVTIEName::get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_ToolAssembly(oMfgToolAssembly)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfStrategyAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_NumberOfStrategyAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetListOfStrategyAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfFeedrateAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_NumberOfFeedrateAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetListOfFeedrateAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfGeomAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_NumberOfGeomAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetListOfGeomAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Representation(CATBSTR & Representation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Representation(Representation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Representation(const CATBSTR & Representation) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_Representation(Representation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetAttributeNLSName(iAttributName,oNLSName)); \
} \
HRESULT __stdcall  ENVTIEName::get_MachiningTime(double & aTime) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_MachiningTime(aTime)); \
} \
HRESULT __stdcall  ENVTIEName::get_TotalTime(double & aTime) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_TotalTime(aTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetToolAxis(oXAxis,oYAxis,oZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetToolAxis(double iXAxis, double iYAxis, double iZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)SetToolAxis(iXAxis,iYAxis,iZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_VideoResult(CATBSTR & VideoResult) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_VideoResult(VideoResult)); \
} \
HRESULT __stdcall  ENVTIEName::get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_MachinableFeature(oMachArea)); \
} \
HRESULT __stdcall  ENVTIEName::put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_MachinableFeature(iMachArea)); \
} \
HRESULT __stdcall  ENVTIEName::GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetMachiningDirection(oXAxis,oYAxis,oZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)SetMachiningDirection(iXAxis,iYAxis,iZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_Active(CAT_VARIANT_BOOL & oActive) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Active(oActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Active(CAT_VARIANT_BOOL iActive) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_Active(iActive)); \
} \
HRESULT __stdcall  ENVTIEName::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)IsSubTypeOf(iName,oVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AttrValue(iIndex,oAttVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AttrName(iIndex,oName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Description(oDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_Description(iDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CycleTime(double & oCT) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_CycleTime(oCT)); \
} \
HRESULT __stdcall  ENVTIEName::put_CycleTime(double iCT) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_CycleTime(iCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedCycleTime(double & oCCT) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_CalculatedCycleTime(oCCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginningDate(double & oBegin) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_BeginningDate(oBegin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BeginningDate(double iSBT) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_BeginningDate(iSBT)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndDate(double & oEnd) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_EndDate(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_ChildrenActivities(oChildren)); \
} \
HRESULT __stdcall  ENVTIEName::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)CreateChild(iTypeOfChild,oCreatedChild)); \
} \
HRESULT __stdcall  ENVTIEName::CreateLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)CreateLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)RemoveLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_NextCFActivities(oNextCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_PreviousCFActivities(oPreviousCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_NextPRFActivities(oNextPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_PreviousPRFActivities(oPreviousPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttrCount(CATLONG & oNbAttr) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_AttrCount(oNbAttr)); \
} \
HRESULT __stdcall  ENVTIEName::get_Items(CATIAItems *& oItems) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Items(oItems)); \
} \
HRESULT __stdcall  ENVTIEName::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Outputs(oOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_Resources(CATIAResources *& oResources) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Resources(oResources)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_PrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_PossiblePrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProcessID(CATBSTR & oProcessID) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_ProcessID(oProcessID)); \
} \
HRESULT __stdcall  ENVTIEName::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)SetProcessID(iProcessID,iCheckUnique)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedBeginTime(double & oCBT) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_CalculatedBeginTime(oCBT)); \
} \
HRESULT __stdcall  ENVTIEName::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddAttr(iAttributeName,AttrType,iAttributePromptName)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)RemoveAttr(iAttributeName)); \
} \
HRESULT __stdcall  ENVTIEName::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)AddActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)RemoveActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetActivityConstraints(iConstraintType,oConstrtList)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingProgram,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingProgram(classe)    TIECATIAManufacturingProgram##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingProgram(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingProgram, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingProgram, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingProgram, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingProgram, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingProgram, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Activities(CATIAMfgActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activities(oActivities); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::InsertOperation(CATIAManufacturingOperation * iReferenceOperation, CATIAManufacturingOperation * iManufacturingOperation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iReferenceOperation,&iManufacturingOperation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertOperation(iReferenceOperation,iManufacturingOperation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iReferenceOperation,&iManufacturingOperation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::MoveOperation(CATIAManufacturingActivity * iReferenceOperation, CATIAManufacturingActivity * iManufacturingOperation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iReferenceOperation,&iManufacturingOperation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MoveOperation(iReferenceOperation,iManufacturingOperation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iReferenceOperation,&iManufacturingOperation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AppendOperation(const CATBSTR & type, short AutoSequence, CATIAManufacturingOperation *& oManufacturingOperation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&type,&AutoSequence,&oManufacturingOperation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendOperation(type,AutoSequence,oManufacturingOperation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&type,&AutoSequence,&oManufacturingOperation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddToolChange(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iToolName,&iToolType,&iToolCatalog,&iNumSyntaxe,&oMfgToolChange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddToolChange(iToolName,iToolType,iToolCatalog,iNumSyntaxe,oMfgToolChange); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iToolName,&iToolType,&iToolCatalog,&iNumSyntaxe,&oMfgToolChange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddToolChangeMultipleFeeds(const CATBSTR & iToolName, const CATBSTR & iToolType, const CATBSTR & iToolCatalog, short iNumFSData, short iNumSyntaxe, CATIAManufacturingActivity *& oMfgToolChange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iToolName,&iToolType,&iToolCatalog,&iNumFSData,&iNumSyntaxe,&oMfgToolChange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddToolChangeMultipleFeeds(iToolName,iToolType,iToolCatalog,iNumFSData,iNumSyntaxe,oMfgToolChange); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iToolName,&iToolType,&iToolCatalog,&iNumFSData,&iNumSyntaxe,&oMfgToolChange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddGotoPoint(const CATBSTR & iPointName, CATIAManufacturingActivity *& oMfgGotoPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPointName,&oMfgGotoPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGotoPoint(iPointName,oMfgGotoPoint); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPointName,&oMfgGotoPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddPPInstruction(const CATBSTR & iPPInstruction, CATIAManufacturingActivity *& oMfgPPInstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPPInstruction,&oMfgPPInstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPPInstruction(iPPInstruction,oMfgPPInstruction); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPPInstruction,&oMfgPPInstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddRotabl(const CATBSTR & iRotabl, const CATBSTR & iSens, double ival, CATIAManufacturingActivity *& oMfgRotabl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRotabl,&iSens,&ival,&oMfgRotabl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRotabl(iRotabl,iSens,ival,oMfgRotabl); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRotabl,&iSens,&ival,&oMfgRotabl); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddGotoPointfromCoordinates(double iX, double iY, double iZ, CATIAManufacturingActivity *& oMfgGotoPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iX,&iY,&iZ,&oMfgGotoPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGotoPointfromCoordinates(iX,iY,iZ,oMfgGotoPoint); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iX,&iY,&iZ,&oMfgGotoPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::OrderAndCreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, const CATBSTR & iAxeRotabl, const CATBSTR & iSensRotation, CATIAMfgActivities *& oListeMfgActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iReportSucceed,&iTypeMo,&iAxeRotabl,&iSensRotation,&oListeMfgActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OrderAndCreateMOfromReport(iReportSucceed,iTypeMo,iAxeRotabl,iSensRotation,oListeMfgActivity); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iReportSucceed,&iTypeMo,&iAxeRotabl,&iSensRotation,&oListeMfgActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::CreateMOfromReport(CATIAExpertReportObjects * iReportSucceed, const CATBSTR & iTypeMo, CATIAMfgActivities *& oListeMfgActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iReportSucceed,&iTypeMo,&oListeMfgActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateMOfromReport(iReportSucceed,iTypeMo,oListeMfgActivity); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iReportSucceed,&iTypeMo,&oListeMfgActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::CompletewithPolarStrategy(CATIAMfgActivities * iListeMfgActivity, const CATBSTR & iAxeRef, const CATBSTR & iSensRotation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iListeMfgActivity,&iAxeRef,&iSensRotation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CompletewithPolarStrategy(iListeMfgActivity,iAxeRef,iSensRotation); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iListeMfgActivity,&iAxeRef,&iSensRotation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetTableCurrentAbsolutePosition(CATIAManufacturingActivity * iActivityRef, double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iActivityRef,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTableCurrentAbsolutePosition(iActivityRef,oAngle); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iActivityRef,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetNCOutputFile(CATBSTR & oOutputFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oOutputFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNCOutputFile(oOutputFile); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oOutputFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AssociateOutputCode(const CATBSTR & iFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AssociateOutputCode(iFileName); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iFileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::LockActivitesWithinProgram() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockActivitesWithinProgram(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::UnlockActivitesWithinProgram() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnlockActivitesWithinProgram(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::ImportNCOutputOnProgram(const CATBSTR & iType, const CATBSTR & iNCOutputFile, const CATBSTR & iPPName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iType,&iNCOutputFile,&iPPName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportNCOutputOnProgram(iType,iNCOutputFile,iPPName); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iType,&iNCOutputFile,&iPPName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Precedences(CATIAManufacturingPrecedences *& oPrecedences) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oPrecedences); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Precedences(oPrecedences); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oPrecedences); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oMfgTool); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Tool(oMfgTool); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oMfgTool); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oMfgToolAssembly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToolAssembly(oMfgToolAssembly); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oMfgToolAssembly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_NumberOfStrategyAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfStrategyAttributes(oNumber); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfStrategyAttributes(oListOfAttributes); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_NumberOfFeedrateAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfFeedrateAttributes(oNumber); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfFeedrateAttributes(oListOfAttributes); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_NumberOfGeomAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfGeomAttributes(oNumber); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfGeomAttributes(oListOfAttributes); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Representation(CATBSTR & Representation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&Representation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Representation(Representation); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&Representation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::put_Representation(const CATBSTR & Representation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&Representation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Representation(Representation); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&Representation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iAttributName,&oNLSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNLSName(iAttributName,oNLSName); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iAttributName,&oNLSName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_MachiningTime(double & aTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&aTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachiningTime(aTime); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&aTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_TotalTime(double & aTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&aTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TotalTime(aTime); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&aTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oXAxis,&oYAxis,&oZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolAxis(oXAxis,oYAxis,oZAxis); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oXAxis,&oYAxis,&oZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::SetToolAxis(double iXAxis, double iYAxis, double iZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iXAxis,&iYAxis,&iZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolAxis(iXAxis,iYAxis,iZAxis); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iXAxis,&iYAxis,&iZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_VideoResult(CATBSTR & VideoResult) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&VideoResult); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VideoResult(VideoResult); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&VideoResult); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oMachArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachinableFeature(oMachArea); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oMachArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iMachArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MachinableFeature(iMachArea); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iMachArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oXAxis,&oYAxis,&oZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMachiningDirection(oXAxis,oYAxis,oZAxis); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oXAxis,&oYAxis,&oZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iXAxis,&iYAxis,&iZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMachiningDirection(iXAxis,iYAxis,iZAxis); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iXAxis,&iYAxis,&iZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Active(CAT_VARIANT_BOOL & oActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Active(oActive); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::put_Active(CAT_VARIANT_BOOL iActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Active(iActive); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iName,&oVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSubTypeOf(iName,oVal); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iName,&oVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iIndex,&oAttVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrValue(iIndex,oAttVal); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iIndex,&oAttVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iIndex,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrName(iIndex,oName); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iIndex,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&oDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Description(oDescriptionBSTR); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&oDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Description(iDescriptionBSTR); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_CycleTime(double & oCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&oCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CycleTime(oCT); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&oCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::put_CycleTime(double iCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&iCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CycleTime(iCT); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&iCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_CalculatedCycleTime(double & oCCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oCCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedCycleTime(oCCT); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oCCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_BeginningDate(double & oBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginningDate(oBegin); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::put_BeginningDate(double iSBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iSBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BeginningDate(iSBT); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iSBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_EndDate(double & oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndDate(oEnd); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChildrenActivities(oChildren); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&iTypeOfChild,&oCreatedChild); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateChild(iTypeOfChild,oCreatedChild); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&iTypeOfChild,&oCreatedChild); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::CreateLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLink(iSecondActivity); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLink(iSecondActivity); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&oNextCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextCFActivities(oNextCF); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&oNextCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oPreviousCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousCFActivities(oPreviousCF); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oPreviousCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&oNextPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextPRFActivities(oNextPRF); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&oNextPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oPreviousPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousPRFActivities(oPreviousPRF); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oPreviousPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_AttrCount(CATLONG & oNbAttr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&oNbAttr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttrCount(oNbAttr); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&oNbAttr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Items(CATIAItems *& oItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&oItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Items(oItems); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&oItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&oOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Outputs(oOutputs); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&oOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Resources(CATIAResources *& oResources) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oResources); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Resources(oResources); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oResources); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrecedenceActivities(oActivities); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PossiblePrecedenceActivities(oActivities); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_ProcessID(CATBSTR & oProcessID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&oProcessID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProcessID(oProcessID); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&oProcessID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iProcessID,&iCheckUnique); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProcessID(iProcessID,iCheckUnique); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iProcessID,&iCheckUnique); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::get_CalculatedBeginTime(double & oCBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oCBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedBeginTime(oCBT); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oCBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iAttributeName,&AttrType,&iAttributePromptName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAttr(iAttributeName,AttrType,iAttributePromptName); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iAttributeName,&AttrType,&iAttributePromptName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&iAttributeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAttr(iAttributeName); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&iAttributeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingProgram##classe::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iConstraintType,&oConstrtList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActivityConstraints(iConstraintType,oConstrtList); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iConstraintType,&oConstrtList); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingProgram##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingProgram(classe) \
 \
 \
declare_TIE_CATIAManufacturingProgram(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingProgram##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingProgram,"CATIAManufacturingProgram",CATIAManufacturingProgram::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingProgram(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingProgram, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingProgram##classe(classe::MetaObject(),CATIAManufacturingProgram::MetaObject(),(void *)CreateTIECATIAManufacturingProgram##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingProgram(classe) \
 \
 \
declare_TIE_CATIAManufacturingProgram(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingProgram##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingProgram,"CATIAManufacturingProgram",CATIAManufacturingProgram::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingProgram(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingProgram, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingProgram##classe(classe::MetaObject(),CATIAManufacturingProgram::MetaObject(),(void *)CreateTIECATIAManufacturingProgram##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingProgram(classe) TIE_CATIAManufacturingProgram(classe)
#else
#define BOA_CATIAManufacturingProgram(classe) CATImplementBOA(CATIAManufacturingProgram, classe)
#endif

#endif
