#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATMmiUUID \
InfInterfacesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = MF0AUTO

LINK_WITH=$(LINK_WITH_FOR_IID)   CP0CLIP \
            JS0GROUP AC0SPBAS AD0XXBAS GN0NAME ON0PROP \
            CATMechanicalModeler ObjectModeler\
            MecModItf SketcherItf PartItf InfItf KnowledgeItf \
            CATInteractiveInterfaces \
		        SELECT CATMathematics CD0AUTO CATCafAutomation \
            VE0BASE AS0STARTUP CATAssemblyInterfaces CATScriptReplayInteractions \
            YP00IMPL CATAutoItf WindowsAndViews CATProductStructureInterfaces \
            CATViz CATMecModLiveUseItf

LOCAL_CCFLAGS= -DSPECDEBUG
