#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATMmiUUID \
CATShmInterfacesUUID \
CATVisUUID \
GeometricObjectsUUID \
InteractiveInterfacesUUID \
LiteralFeaturesUUID \
MechanicalCommandsUUID \
MechanicalModelerUIUUID \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
PartInterfacesUUID \
ProductStructureUUID \
SketcherToolsUIUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# PARTEDT
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_BEFORE_CATIAV5R24=$(LINK_WITH_FOR_IID)  AC0CATPL ApplicationFrame AS0STARTUP CD0AUTOSTART CD0AUTO \
            CAPPFRM CATShmInterfaces CATInteractiveInterfaces CATSktSettings CATSktAssistant CATSketcherToolsUI CK0FEAT CATKnowledgeModeler KnowledgeItf CATIACBFormat CK0PARAM CD0NTOG \
            DI0PANV2 DI0STATE \
            GN0GRAPH \
            HLRTools \
            JS0GROUP JS0FM JS0FILE \
            Mathematics \
            CATMechanicalModeler CATMecModInterfaces CATMmiUUID \
            CATFecGroupSelection CATFecAutoSave \
            CATMechanicalCommands \
            OM0EDPRO ObjectModeler \
            PartItf PG0GROUP ProductStructureItf\
            SketcherItf SpecsModeler CATXDocLinkItf\
            CATUdfInterfaces CATDlgStandard \
            CATGviUtilities CATGviGeomVisu CATVisualization\
            VE0GROUP VE0GRPH2 \
            YI00IMPL YP00IMPL \
            CATTPSUUID \
			      CATFileMenu \
	          CATFeatureCommands CATFmuLinks CATOsmItf CATGitInterfaces MF0AUTO CATMmrAutomation CATMmrSys \
            CATConstraintModelerItf CATGraphicProperties CATMmrReplace CATPrt CATViz CATMmrDbgTools CATMmlBrepAttributes CATMecModLiveUseItf\
            CATMecModLiveInterfaces CATMmrBrepMAccess MecModItfCPP CATMecModUseItf MF0STARTUP MF0ROOT SI0TOPAC CATMmrVisProperties CATMmrSpecToVisu  \
			CATDlgHtml

#ifdef CATIAV5R24
	LINK_WITH=$(LINK_WITH_BEFORE_CATIAV5R24)\
            CATMmlBRepMode CATFecUtilities

#else
	LINK_WITH=$(LINK_WITH_BEFORE_CATIAV5R24) 
#endif


INCLUDED_MODULES = PrtEnv MechFeatCom PrtProperties PrtWorkshop SpecCmd PartEditor MMUInterfaces CATMmuEditor CATMmuServicesForModel

ALIASES_ON_IMPORT=CATMechanicalModelerUI PrtEnv MecModItfCPP CATMechanicalModeler CATMmrVisProperties CATMmrSpecToVisu

OS = IRIX                                                            
LOCAL_CCFLAGS= -G 0
#LOCAL_CCFLAGS= -DNATIVE_EXCEPTION
#-D_IRIX_SOURCE -DNATIVE_EXCEPTION
#CXX_EXCEPTION=
