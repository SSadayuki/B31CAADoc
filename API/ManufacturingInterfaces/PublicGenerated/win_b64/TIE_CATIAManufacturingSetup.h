#ifndef __TIE_CATIAManufacturingSetup
#define __TIE_CATIAManufacturingSetup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingSetup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingSetup */
#define declare_TIE_CATIAManufacturingSetup(classe) \
 \
 \
class TIECATIAManufacturingSetup##classe : public CATIAManufacturingSetup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingSetup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Programs(CATIAMfgActivities *& oPrograms); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall put_Product(CATIAProduct * iProduct); \
      virtual HRESULT __stdcall get_Product(CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall get_Machine(CATIAManufacturingMachine *& oMachine); \
      virtual HRESULT __stdcall put_Machine(CATIAManufacturingMachine * iMachine); \
      virtual HRESULT __stdcall get_MachiningAxisSystem(CATIAManufacturingMachiningAxis *& oMachiningAxis); \
      virtual HRESULT __stdcall put_MachiningAxisSystem(CATIAManufacturingMachiningAxis * iMachiningAxis); \
      virtual HRESULT __stdcall SetToolChangePointByName(const CATBSTR & iPointName); \
      virtual HRESULT __stdcall SetToolChangePoint(double iX, double iY, double iZ); \
      virtual HRESULT __stdcall GetToolChangePoint(double & oX, double & oY, double & oZ); \
      virtual HRESULT __stdcall CreateMachine(const CATBSTR & iTypeMachine, CATIAManufacturingMachine *& oMachine); \
      virtual HRESULT __stdcall GetManufacturingView(CATIAManufacturingView *& oManufacuringView); \
      virtual HRESULT __stdcall GetPartName(CATBSTR & oPartName); \
      virtual HRESULT __stdcall GetMachiningAxisSystemName(CATBSTR & oMachiningAxisSystemName); \
      virtual HRESULT __stdcall GetStockFromSetup(const CATBSTR & oStockPath); \
      virtual HRESULT __stdcall DesignGeometriesCount(CATLONG & oDesignGeometriesListSize); \
      virtual HRESULT __stdcall ListDesignGeometries(CATSafeArrayVariant & oListOfDesignGeometries); \
      virtual HRESULT __stdcall ListDesignGeometriesProducts(CATSafeArrayVariant & oListOfDesignGeometriesProducts); \
      virtual HRESULT __stdcall StockGeometriesCount(CATLONG & oStockGeometriesListSize); \
      virtual HRESULT __stdcall ListStockGeometries(CATSafeArrayVariant & oListOfStockGeometries); \
      virtual HRESULT __stdcall ListStockGeometriesProducts(CATSafeArrayVariant & oListOfStockGeometriesProducts); \
      virtual HRESULT __stdcall FixtureGeometriesCount(CATLONG & oFixtureGeometriesListSize); \
      virtual HRESULT __stdcall ListFixtureGeometries(CATSafeArrayVariant & oListOfFixtureGeometries); \
      virtual HRESULT __stdcall ListFixtureGeometriesProducts(CATSafeArrayVariant & oListOfFixtureGeometriesProducts); \
      virtual HRESULT __stdcall InProcessModelBodiesCount(CATLONG & oIPMBodiesListSize); \
      virtual HRESULT __stdcall ListInProcessModelBodies(CATSafeArrayVariant & oListOfIPMBodies); \
      virtual HRESULT __stdcall GetProductInstance(CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall SetSafetyPlane(CATIABase * iSafetyPlane, CATIAProduct * iProduct); \
      virtual HRESULT __stdcall GetSafetyPlane(CATSafeArrayVariant *& oMathPlane); \
      virtual HRESULT __stdcall SetProductAndReconciliate(CATIAProduct * iProduct); \
      virtual HRESULT __stdcall SetStock(CATIABase * iStock, CATIAProduct * iProduct); \
      virtual HRESULT __stdcall SetDesignPart(CATIABase * iPart, CATIAProduct * iProduct); \
      virtual HRESULT __stdcall ReadMfgData(const CATBSTR & iFileName, const CATSafeArrayVariant & iNCMILLSET); \
      virtual HRESULT __stdcall ImportCATSetting(const CATBSTR & XMLFilePath); \
      virtual HRESULT __stdcall ExportCATSetting(const CATBSTR & dirPath); \
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



#define ENVTIEdeclare_CATIAManufacturingSetup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Programs(CATIAMfgActivities *& oPrograms); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall put_Product(CATIAProduct * iProduct); \
virtual HRESULT __stdcall get_Product(CATIAProduct *& oProduct); \
virtual HRESULT __stdcall get_Machine(CATIAManufacturingMachine *& oMachine); \
virtual HRESULT __stdcall put_Machine(CATIAManufacturingMachine * iMachine); \
virtual HRESULT __stdcall get_MachiningAxisSystem(CATIAManufacturingMachiningAxis *& oMachiningAxis); \
virtual HRESULT __stdcall put_MachiningAxisSystem(CATIAManufacturingMachiningAxis * iMachiningAxis); \
virtual HRESULT __stdcall SetToolChangePointByName(const CATBSTR & iPointName); \
virtual HRESULT __stdcall SetToolChangePoint(double iX, double iY, double iZ); \
virtual HRESULT __stdcall GetToolChangePoint(double & oX, double & oY, double & oZ); \
virtual HRESULT __stdcall CreateMachine(const CATBSTR & iTypeMachine, CATIAManufacturingMachine *& oMachine); \
virtual HRESULT __stdcall GetManufacturingView(CATIAManufacturingView *& oManufacuringView); \
virtual HRESULT __stdcall GetPartName(CATBSTR & oPartName); \
virtual HRESULT __stdcall GetMachiningAxisSystemName(CATBSTR & oMachiningAxisSystemName); \
virtual HRESULT __stdcall GetStockFromSetup(const CATBSTR & oStockPath); \
virtual HRESULT __stdcall DesignGeometriesCount(CATLONG & oDesignGeometriesListSize); \
virtual HRESULT __stdcall ListDesignGeometries(CATSafeArrayVariant & oListOfDesignGeometries); \
virtual HRESULT __stdcall ListDesignGeometriesProducts(CATSafeArrayVariant & oListOfDesignGeometriesProducts); \
virtual HRESULT __stdcall StockGeometriesCount(CATLONG & oStockGeometriesListSize); \
virtual HRESULT __stdcall ListStockGeometries(CATSafeArrayVariant & oListOfStockGeometries); \
virtual HRESULT __stdcall ListStockGeometriesProducts(CATSafeArrayVariant & oListOfStockGeometriesProducts); \
virtual HRESULT __stdcall FixtureGeometriesCount(CATLONG & oFixtureGeometriesListSize); \
virtual HRESULT __stdcall ListFixtureGeometries(CATSafeArrayVariant & oListOfFixtureGeometries); \
virtual HRESULT __stdcall ListFixtureGeometriesProducts(CATSafeArrayVariant & oListOfFixtureGeometriesProducts); \
virtual HRESULT __stdcall InProcessModelBodiesCount(CATLONG & oIPMBodiesListSize); \
virtual HRESULT __stdcall ListInProcessModelBodies(CATSafeArrayVariant & oListOfIPMBodies); \
virtual HRESULT __stdcall GetProductInstance(CATIAProduct *& oProduct); \
virtual HRESULT __stdcall SetSafetyPlane(CATIABase * iSafetyPlane, CATIAProduct * iProduct); \
virtual HRESULT __stdcall GetSafetyPlane(CATSafeArrayVariant *& oMathPlane); \
virtual HRESULT __stdcall SetProductAndReconciliate(CATIAProduct * iProduct); \
virtual HRESULT __stdcall SetStock(CATIABase * iStock, CATIAProduct * iProduct); \
virtual HRESULT __stdcall SetDesignPart(CATIABase * iPart, CATIAProduct * iProduct); \
virtual HRESULT __stdcall ReadMfgData(const CATBSTR & iFileName, const CATSafeArrayVariant & iNCMILLSET); \
virtual HRESULT __stdcall ImportCATSetting(const CATBSTR & XMLFilePath); \
virtual HRESULT __stdcall ExportCATSetting(const CATBSTR & dirPath); \
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


#define ENVTIEdefine_CATIAManufacturingSetup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Programs(CATIAMfgActivities *& oPrograms) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Programs(oPrograms)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Product(CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_Product(iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::get_Product(CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Product(oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::get_Machine(CATIAManufacturingMachine *& oMachine) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Machine(oMachine)); \
} \
HRESULT __stdcall  ENVTIEName::put_Machine(CATIAManufacturingMachine * iMachine) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_Machine(iMachine)); \
} \
HRESULT __stdcall  ENVTIEName::get_MachiningAxisSystem(CATIAManufacturingMachiningAxis *& oMachiningAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_MachiningAxisSystem(oMachiningAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_MachiningAxisSystem(CATIAManufacturingMachiningAxis * iMachiningAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_MachiningAxisSystem(iMachiningAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetToolChangePointByName(const CATBSTR & iPointName) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetToolChangePointByName(iPointName)); \
} \
HRESULT __stdcall  ENVTIEName::SetToolChangePoint(double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetToolChangePoint(iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetToolChangePoint(double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetToolChangePoint(oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::CreateMachine(const CATBSTR & iTypeMachine, CATIAManufacturingMachine *& oMachine) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)CreateMachine(iTypeMachine,oMachine)); \
} \
HRESULT __stdcall  ENVTIEName::GetManufacturingView(CATIAManufacturingView *& oManufacuringView) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetManufacturingView(oManufacuringView)); \
} \
HRESULT __stdcall  ENVTIEName::GetPartName(CATBSTR & oPartName) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetPartName(oPartName)); \
} \
HRESULT __stdcall  ENVTIEName::GetMachiningAxisSystemName(CATBSTR & oMachiningAxisSystemName) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetMachiningAxisSystemName(oMachiningAxisSystemName)); \
} \
HRESULT __stdcall  ENVTIEName::GetStockFromSetup(const CATBSTR & oStockPath) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetStockFromSetup(oStockPath)); \
} \
HRESULT __stdcall  ENVTIEName::DesignGeometriesCount(CATLONG & oDesignGeometriesListSize) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)DesignGeometriesCount(oDesignGeometriesListSize)); \
} \
HRESULT __stdcall  ENVTIEName::ListDesignGeometries(CATSafeArrayVariant & oListOfDesignGeometries) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ListDesignGeometries(oListOfDesignGeometries)); \
} \
HRESULT __stdcall  ENVTIEName::ListDesignGeometriesProducts(CATSafeArrayVariant & oListOfDesignGeometriesProducts) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ListDesignGeometriesProducts(oListOfDesignGeometriesProducts)); \
} \
HRESULT __stdcall  ENVTIEName::StockGeometriesCount(CATLONG & oStockGeometriesListSize) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)StockGeometriesCount(oStockGeometriesListSize)); \
} \
HRESULT __stdcall  ENVTIEName::ListStockGeometries(CATSafeArrayVariant & oListOfStockGeometries) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ListStockGeometries(oListOfStockGeometries)); \
} \
HRESULT __stdcall  ENVTIEName::ListStockGeometriesProducts(CATSafeArrayVariant & oListOfStockGeometriesProducts) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ListStockGeometriesProducts(oListOfStockGeometriesProducts)); \
} \
HRESULT __stdcall  ENVTIEName::FixtureGeometriesCount(CATLONG & oFixtureGeometriesListSize) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)FixtureGeometriesCount(oFixtureGeometriesListSize)); \
} \
HRESULT __stdcall  ENVTIEName::ListFixtureGeometries(CATSafeArrayVariant & oListOfFixtureGeometries) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ListFixtureGeometries(oListOfFixtureGeometries)); \
} \
HRESULT __stdcall  ENVTIEName::ListFixtureGeometriesProducts(CATSafeArrayVariant & oListOfFixtureGeometriesProducts) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ListFixtureGeometriesProducts(oListOfFixtureGeometriesProducts)); \
} \
HRESULT __stdcall  ENVTIEName::InProcessModelBodiesCount(CATLONG & oIPMBodiesListSize) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)InProcessModelBodiesCount(oIPMBodiesListSize)); \
} \
HRESULT __stdcall  ENVTIEName::ListInProcessModelBodies(CATSafeArrayVariant & oListOfIPMBodies) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ListInProcessModelBodies(oListOfIPMBodies)); \
} \
HRESULT __stdcall  ENVTIEName::GetProductInstance(CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetProductInstance(oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::SetSafetyPlane(CATIABase * iSafetyPlane, CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetSafetyPlane(iSafetyPlane,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetSafetyPlane(CATSafeArrayVariant *& oMathPlane) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetSafetyPlane(oMathPlane)); \
} \
HRESULT __stdcall  ENVTIEName::SetProductAndReconciliate(CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetProductAndReconciliate(iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::SetStock(CATIABase * iStock, CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetStock(iStock,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::SetDesignPart(CATIABase * iPart, CATIAProduct * iProduct) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetDesignPart(iPart,iProduct)); \
} \
HRESULT __stdcall  ENVTIEName::ReadMfgData(const CATBSTR & iFileName, const CATSafeArrayVariant & iNCMILLSET) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ReadMfgData(iFileName,iNCMILLSET)); \
} \
HRESULT __stdcall  ENVTIEName::ImportCATSetting(const CATBSTR & XMLFilePath) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ImportCATSetting(XMLFilePath)); \
} \
HRESULT __stdcall  ENVTIEName::ExportCATSetting(const CATBSTR & dirPath) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)ExportCATSetting(dirPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_Precedences(CATIAManufacturingPrecedences *& oPrecedences) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Precedences(oPrecedences)); \
} \
HRESULT __stdcall  ENVTIEName::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Tool(oMfgTool)); \
} \
HRESULT __stdcall  ENVTIEName::get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_ToolAssembly(oMfgToolAssembly)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetAttribute(iAttribut,oAttributCke)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfStrategyAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_NumberOfStrategyAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetListOfStrategyAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfFeedrateAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_NumberOfFeedrateAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetListOfFeedrateAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfGeomAttributes(short & oNumber) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_NumberOfGeomAttributes(oNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetListOfGeomAttributes(oListOfAttributes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Representation(CATBSTR & Representation) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Representation(Representation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Representation(const CATBSTR & Representation) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_Representation(Representation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetAttributeNLSName(iAttributName,oNLSName)); \
} \
HRESULT __stdcall  ENVTIEName::get_MachiningTime(double & aTime) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_MachiningTime(aTime)); \
} \
HRESULT __stdcall  ENVTIEName::get_TotalTime(double & aTime) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_TotalTime(aTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetToolAxis(oXAxis,oYAxis,oZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetToolAxis(double iXAxis, double iYAxis, double iZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetToolAxis(iXAxis,iYAxis,iZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_VideoResult(CATBSTR & VideoResult) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_VideoResult(VideoResult)); \
} \
HRESULT __stdcall  ENVTIEName::get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_MachinableFeature(oMachArea)); \
} \
HRESULT __stdcall  ENVTIEName::put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_MachinableFeature(iMachArea)); \
} \
HRESULT __stdcall  ENVTIEName::GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetMachiningDirection(oXAxis,oYAxis,oZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetMachiningDirection(iXAxis,iYAxis,iZAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_Active(CAT_VARIANT_BOOL & oActive) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Active(oActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Active(CAT_VARIANT_BOOL iActive) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_Active(iActive)); \
} \
HRESULT __stdcall  ENVTIEName::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)IsSubTypeOf(iName,oVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)AttrValue(iIndex,oAttVal)); \
} \
HRESULT __stdcall  ENVTIEName::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)AttrName(iIndex,oName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Description(oDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_Description(iDescriptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CycleTime(double & oCT) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_CycleTime(oCT)); \
} \
HRESULT __stdcall  ENVTIEName::put_CycleTime(double iCT) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_CycleTime(iCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedCycleTime(double & oCCT) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_CalculatedCycleTime(oCCT)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginningDate(double & oBegin) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_BeginningDate(oBegin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BeginningDate(double iSBT) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_BeginningDate(iSBT)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndDate(double & oEnd) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_EndDate(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_ChildrenActivities(oChildren)); \
} \
HRESULT __stdcall  ENVTIEName::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)CreateChild(iTypeOfChild,oCreatedChild)); \
} \
HRESULT __stdcall  ENVTIEName::CreateLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)CreateLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)RemoveLink(iSecondActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_NextCFActivities(oNextCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_PreviousCFActivities(oPreviousCF)); \
} \
HRESULT __stdcall  ENVTIEName::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_NextPRFActivities(oNextPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_PreviousPRFActivities(oPreviousPRF)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttrCount(CATLONG & oNbAttr) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_AttrCount(oNbAttr)); \
} \
HRESULT __stdcall  ENVTIEName::get_Items(CATIAItems *& oItems) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Items(oItems)); \
} \
HRESULT __stdcall  ENVTIEName::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Outputs(oOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_Resources(CATIAResources *& oResources) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Resources(oResources)); \
} \
HRESULT __stdcall  ENVTIEName::get_Relations(CATIARelations *& oRelations) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Relations(oRelations)); \
} \
HRESULT __stdcall  ENVTIEName::get_Parameters(CATIAParameters *& oParameters) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Parameters(oParameters)); \
} \
HRESULT __stdcall  ENVTIEName::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetTechnologicalObject(iApplicationType,oApplicativeObj)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_PrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_PossiblePrecedenceActivities(oActivities)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProcessID(CATBSTR & oProcessID) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_ProcessID(oProcessID)); \
} \
HRESULT __stdcall  ENVTIEName::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)SetProcessID(iProcessID,iCheckUnique)); \
} \
HRESULT __stdcall  ENVTIEName::get_CalculatedBeginTime(double & oCBT) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_CalculatedBeginTime(oCBT)); \
} \
HRESULT __stdcall  ENVTIEName::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)AddAttr(iAttributeName,AttrType,iAttributePromptName)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)RemoveAttr(iAttributeName)); \
} \
HRESULT __stdcall  ENVTIEName::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)AddActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)RemoveActivityConstraint(iActivity,iConstraintType)); \
} \
HRESULT __stdcall  ENVTIEName::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetActivityConstraints(iConstraintType,oConstrtList)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingSetup,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingSetup(classe)    TIECATIAManufacturingSetup##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingSetup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingSetup, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingSetup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingSetup, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingSetup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingSetup, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Programs(CATIAMfgActivities *& oPrograms) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPrograms); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Programs(oPrograms); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPrograms); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_Product(CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Product(iProduct); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Product(CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Product(oProduct); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Machine(CATIAManufacturingMachine *& oMachine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oMachine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Machine(oMachine); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oMachine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_Machine(CATIAManufacturingMachine * iMachine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iMachine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Machine(iMachine); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iMachine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_MachiningAxisSystem(CATIAManufacturingMachiningAxis *& oMachiningAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oMachiningAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachiningAxisSystem(oMachiningAxis); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oMachiningAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_MachiningAxisSystem(CATIAManufacturingMachiningAxis * iMachiningAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iMachiningAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MachiningAxisSystem(iMachiningAxis); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iMachiningAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetToolChangePointByName(const CATBSTR & iPointName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPointName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolChangePointByName(iPointName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPointName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetToolChangePoint(double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolChangePoint(iX,iY,iZ); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetToolChangePoint(double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolChangePoint(oX,oY,oZ); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::CreateMachine(const CATBSTR & iTypeMachine, CATIAManufacturingMachine *& oMachine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iTypeMachine,&oMachine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateMachine(iTypeMachine,oMachine); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iTypeMachine,&oMachine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetManufacturingView(CATIAManufacturingView *& oManufacuringView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oManufacuringView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManufacturingView(oManufacuringView); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oManufacuringView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetPartName(CATBSTR & oPartName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oPartName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPartName(oPartName); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oPartName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetMachiningAxisSystemName(CATBSTR & oMachiningAxisSystemName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oMachiningAxisSystemName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMachiningAxisSystemName(oMachiningAxisSystemName); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oMachiningAxisSystemName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetStockFromSetup(const CATBSTR & oStockPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oStockPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStockFromSetup(oStockPath); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oStockPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::DesignGeometriesCount(CATLONG & oDesignGeometriesListSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oDesignGeometriesListSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DesignGeometriesCount(oDesignGeometriesListSize); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oDesignGeometriesListSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ListDesignGeometries(CATSafeArrayVariant & oListOfDesignGeometries) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oListOfDesignGeometries); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListDesignGeometries(oListOfDesignGeometries); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oListOfDesignGeometries); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ListDesignGeometriesProducts(CATSafeArrayVariant & oListOfDesignGeometriesProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oListOfDesignGeometriesProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListDesignGeometriesProducts(oListOfDesignGeometriesProducts); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oListOfDesignGeometriesProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::StockGeometriesCount(CATLONG & oStockGeometriesListSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oStockGeometriesListSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StockGeometriesCount(oStockGeometriesListSize); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oStockGeometriesListSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ListStockGeometries(CATSafeArrayVariant & oListOfStockGeometries) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oListOfStockGeometries); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListStockGeometries(oListOfStockGeometries); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oListOfStockGeometries); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ListStockGeometriesProducts(CATSafeArrayVariant & oListOfStockGeometriesProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oListOfStockGeometriesProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListStockGeometriesProducts(oListOfStockGeometriesProducts); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oListOfStockGeometriesProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::FixtureGeometriesCount(CATLONG & oFixtureGeometriesListSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oFixtureGeometriesListSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FixtureGeometriesCount(oFixtureGeometriesListSize); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oFixtureGeometriesListSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ListFixtureGeometries(CATSafeArrayVariant & oListOfFixtureGeometries) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oListOfFixtureGeometries); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListFixtureGeometries(oListOfFixtureGeometries); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oListOfFixtureGeometries); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ListFixtureGeometriesProducts(CATSafeArrayVariant & oListOfFixtureGeometriesProducts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oListOfFixtureGeometriesProducts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListFixtureGeometriesProducts(oListOfFixtureGeometriesProducts); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oListOfFixtureGeometriesProducts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::InProcessModelBodiesCount(CATLONG & oIPMBodiesListSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oIPMBodiesListSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InProcessModelBodiesCount(oIPMBodiesListSize); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oIPMBodiesListSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ListInProcessModelBodies(CATSafeArrayVariant & oListOfIPMBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oListOfIPMBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListInProcessModelBodies(oListOfIPMBodies); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oListOfIPMBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetProductInstance(CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductInstance(oProduct); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetSafetyPlane(CATIABase * iSafetyPlane, CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iSafetyPlane,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSafetyPlane(iSafetyPlane,iProduct); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iSafetyPlane,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetSafetyPlane(CATSafeArrayVariant *& oMathPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oMathPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSafetyPlane(oMathPlane); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oMathPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetProductAndReconciliate(CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProductAndReconciliate(iProduct); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetStock(CATIABase * iStock, CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iStock,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStock(iStock,iProduct); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iStock,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetDesignPart(CATIABase * iPart, CATIAProduct * iProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iPart,&iProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDesignPart(iPart,iProduct); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iPart,&iProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ReadMfgData(const CATBSTR & iFileName, const CATSafeArrayVariant & iNCMILLSET) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iFileName,&iNCMILLSET); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadMfgData(iFileName,iNCMILLSET); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iFileName,&iNCMILLSET); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ImportCATSetting(const CATBSTR & XMLFilePath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&XMLFilePath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ImportCATSetting(XMLFilePath); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&XMLFilePath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::ExportCATSetting(const CATBSTR & dirPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&dirPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportCATSetting(dirPath); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&dirPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Precedences(CATIAManufacturingPrecedences *& oPrecedences) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oPrecedences); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Precedences(oPrecedences); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oPrecedences); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Tool(CATIAManufacturingTool *& oMfgTool) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oMfgTool); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Tool(oMfgTool); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oMfgTool); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_ToolAssembly(CATIAManufacturingToolAssembly *& oMfgToolAssembly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oMfgToolAssembly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ToolAssembly(oMfgToolAssembly); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oMfgToolAssembly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_NumberOfStrategyAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfStrategyAttributes(oNumber); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetListOfStrategyAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfStrategyAttributes(oListOfAttributes); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_NumberOfFeedrateAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfFeedrateAttributes(oNumber); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetListOfFeedrateAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfFeedrateAttributes(oListOfAttributes); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_NumberOfGeomAttributes(short & oNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfGeomAttributes(oNumber); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetListOfGeomAttributes(CATSafeArrayVariant & oListOfAttributes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oListOfAttributes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfGeomAttributes(oListOfAttributes); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oListOfAttributes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Representation(CATBSTR & Representation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&Representation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Representation(Representation); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&Representation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_Representation(const CATBSTR & Representation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&Representation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Representation(Representation); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&Representation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetAttributeNLSName(const CATBSTR & iAttributName, CATBSTR & oNLSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iAttributName,&oNLSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributeNLSName(iAttributName,oNLSName); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iAttributName,&oNLSName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_MachiningTime(double & aTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&aTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachiningTime(aTime); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&aTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_TotalTime(double & aTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&aTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TotalTime(aTime); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&aTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetToolAxis(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oXAxis,&oYAxis,&oZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetToolAxis(oXAxis,oYAxis,oZAxis); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oXAxis,&oYAxis,&oZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetToolAxis(double iXAxis, double iYAxis, double iZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iXAxis,&iYAxis,&iZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetToolAxis(iXAxis,iYAxis,iZAxis); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iXAxis,&iYAxis,&iZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_VideoResult(CATBSTR & VideoResult) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&VideoResult); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VideoResult(VideoResult); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&VideoResult); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_MachinableFeature(CATIAManufacturingMachinableArea *& oMachArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oMachArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MachinableFeature(oMachArea); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oMachArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_MachinableFeature(CATIAManufacturingMachinableArea * iMachArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iMachArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MachinableFeature(iMachArea); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iMachArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetMachiningDirection(double & oXAxis, double & oYAxis, double & oZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oXAxis,&oYAxis,&oZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMachiningDirection(oXAxis,oYAxis,oZAxis); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oXAxis,&oYAxis,&oZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetMachiningDirection(double iXAxis, double iYAxis, double iZAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&iXAxis,&iYAxis,&iZAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMachiningDirection(iXAxis,iYAxis,iZAxis); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&iXAxis,&iYAxis,&iZAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Active(CAT_VARIANT_BOOL & oActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&oActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Active(oActive); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&oActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_Active(CAT_VARIANT_BOOL iActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&iActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Active(iActive); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&iActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::IsSubTypeOf(const CATBSTR & iName, CAT_VARIANT_BOOL & oVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iName,&oVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSubTypeOf(iName,oVal); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iName,&oVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::AttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&iIndex,&oAttVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrValue(iIndex,oAttVal); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&iIndex,&oAttVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::AttrName(CATLONG iIndex, CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iIndex,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttrName(iIndex,oName); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iIndex,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Description(CATBSTR & oDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&oDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Description(oDescriptionBSTR); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&oDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_Description(const CATBSTR & iDescriptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&iDescriptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Description(iDescriptionBSTR); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&iDescriptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_CycleTime(double & oCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&oCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CycleTime(oCT); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&oCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_CycleTime(double iCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&iCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CycleTime(iCT); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&iCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_CalculatedCycleTime(double & oCCT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&oCCT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedCycleTime(oCCT); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&oCCT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_BeginningDate(double & oBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&oBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginningDate(oBegin); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&oBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::put_BeginningDate(double iSBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iSBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BeginningDate(iSBT); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iSBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_EndDate(double & oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndDate(oEnd); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_ChildrenActivities(CATIAActivities *& oChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&oChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChildrenActivities(oChildren); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&oChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::CreateChild(const CATBSTR & iTypeOfChild, CATIAActivity *& oCreatedChild) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iTypeOfChild,&oCreatedChild); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateChild(iTypeOfChild,oCreatedChild); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iTypeOfChild,&oCreatedChild); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::CreateLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateLink(iSecondActivity); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::RemoveLink(CATIAActivity * iSecondActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&iSecondActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLink(iSecondActivity); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&iSecondActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_NextCFActivities(CATIAActivities *& oNextCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&oNextCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextCFActivities(oNextCF); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&oNextCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_PreviousCFActivities(CATIAActivities *& oPreviousCF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&oPreviousCF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousCFActivities(oPreviousCF); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&oPreviousCF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_NextPRFActivities(CATIAActivities *& oNextPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&oNextPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NextPRFActivities(oNextPRF); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&oNextPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_PreviousPRFActivities(CATIAActivities *& oPreviousPRF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oPreviousPRF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviousPRFActivities(oPreviousPRF); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oPreviousPRF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_AttrCount(CATLONG & oNbAttr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&oNbAttr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttrCount(oNbAttr); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&oNbAttr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Items(CATIAItems *& oItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&oItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Items(oItems); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&oItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Outputs(CATIAOutputs *& oOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&oOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Outputs(oOutputs); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&oOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Resources(CATIAResources *& oResources) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oResources); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Resources(oResources); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oResources); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Relations(CATIARelations *& oRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&oRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Relations(oRelations); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&oRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_Parameters(CATIAParameters *& oParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&oParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parameters(oParameters); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&oParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetTechnologicalObject(const CATBSTR & iApplicationType, CATBaseDispatch *& oApplicativeObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iApplicationType,&oApplicativeObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTechnologicalObject(iApplicationType,oApplicativeObj); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iApplicationType,&oApplicativeObj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_PrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrecedenceActivities(oActivities); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_PossiblePrecedenceActivities(CATIAActivities *& oActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&oActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PossiblePrecedenceActivities(oActivities); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&oActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_ProcessID(CATBSTR & oProcessID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&oProcessID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProcessID(oProcessID); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&oProcessID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::SetProcessID(const CATBSTR & iProcessID, CAT_VARIANT_BOOL iCheckUnique) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iProcessID,&iCheckUnique); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProcessID(iProcessID,iCheckUnique); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iProcessID,&iCheckUnique); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::get_CalculatedBeginTime(double & oCBT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oCBT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CalculatedBeginTime(oCBT); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oCBT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::AddAttr(const CATBSTR & iAttributeName, SPPProcessAttributeType AttrType, const CATBSTR & iAttributePromptName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iAttributeName,&AttrType,&iAttributePromptName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAttr(iAttributeName,AttrType,iAttributePromptName); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iAttributeName,&AttrType,&iAttributePromptName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::RemoveAttr(const CATBSTR & iAttributeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&iAttributeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAttr(iAttributeName); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&iAttributeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::AddActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::RemoveActivityConstraint(CATIAActivity * iActivity, SPPProcessConstraintType iConstraintType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&iActivity,&iConstraintType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveActivityConstraint(iActivity,iConstraintType); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&iActivity,&iConstraintType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSetup##classe::GetActivityConstraints(SPPProcessConstraintType iConstraintType, CATIAActivities *& oConstrtList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iConstraintType,&oConstrtList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActivityConstraints(iConstraintType,oConstrtList); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iConstraintType,&oConstrtList); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSetup##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSetup##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSetup##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSetup##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSetup##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingSetup(classe) \
 \
 \
declare_TIE_CATIAManufacturingSetup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingSetup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingSetup,"CATIAManufacturingSetup",CATIAManufacturingSetup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingSetup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingSetup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingSetup##classe(classe::MetaObject(),CATIAManufacturingSetup::MetaObject(),(void *)CreateTIECATIAManufacturingSetup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingSetup(classe) \
 \
 \
declare_TIE_CATIAManufacturingSetup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingSetup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingSetup,"CATIAManufacturingSetup",CATIAManufacturingSetup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingSetup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingSetup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingSetup##classe(classe::MetaObject(),CATIAManufacturingSetup::MetaObject(),(void *)CreateTIECATIAManufacturingSetup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingSetup(classe) TIE_CATIAManufacturingSetup(classe)
#else
#define BOA_CATIAManufacturingSetup(classe) CATImplementBOA(CATIAManufacturingSetup, classe)
#endif

#endif
