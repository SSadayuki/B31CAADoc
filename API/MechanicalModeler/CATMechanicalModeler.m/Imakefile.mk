#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATIAApplicationFrameUUID \
CATMmiUUID \
CATVisUUID \
GenericNamingUUID \
GeometricObjectsUUID \
InteractiveInterfacesUUID \
KnowledgeInterfacesUUID \
LiteralFeaturesUUID \
MechanicalCommandsUUID \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID \
SketcherInterfacesUUID \
SystemUUID \
CATConstraintMdlItfUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH_BEFORE_CATIAV5R24=$(LINK_WITH_FOR_IID)   SystemUUID               \
            JS0FM                    \
            JS0GROUP                 \
            CATOsmItf                \
            CATMathematics           \
            CATCosSolverInterface    \
            CATGngGraph              \
            CATGngName               \
            CATGngReport             \
            CATGngReportUtilities    \
            CATGngTopologicalAccess  \
            CATGngBRepAccess         \
			      CATIAEntity				\
            CATObjectModelerBase  TECHNLNK DataAdmin  \
            CATObjectSpecsModeler    \
            CATObjectModelerCATIA    \
            CATObjectSpecsModeler    \
			      CATCGRStream			 \
            CATLiteralFeatures CATKnowledgeModeler       \
            CATTopologicalOperators  \
            CATGeometricObjects      \
            CATNewTopologicalObjects \
            CATGeometricOperators    \
            CATTesHLRUtilities       \
            CATGitInterfaces         \
            CATShmInterfaces         \
            KnowledgeItf             \
            CATDfiUUID               \
            CATMecModInterfaces      \
            CATMmiUUID               \
            CATPartInterfaces        \
            CATSketcherInterfaces    \
            CATProductStructure1     \
            CATPLMRules              \
            CATApplicationFrame      \
            CATIAApplicationFrame    \
            CATVisualization         \
			CATGviUtilities			 \
			CATMcoModel              \
            CATMmrUUID               \
		        CATInteractiveInterfaces \
            CATAxisBody              \
            CATAssemblyInterfaces \
			      CATGeomReroute \
            AS0STARTUP             \
            ProductStructureItf    \
			      CATProductStructureInterfaces \
            CATBasicTopologicalOpe   \            
			      CATConstraintModelerItf \
			      CATXDocLinkItf         \
            CATCdbEntity             \
            CATUdfInterfaces           \
			      CATMmrAutomation         \
                   CATMmrDbgTools \
			      MF0AUTO                  \
            InfPubIDL \
            MecModItfCPP\
            CATTerTechnoResultItf CATTerTechnoResultInterfacesUUID \ 
		        CATMmrReplace \
            CATCGMGeoMath \
            CATGraphicProperties \
            CATMathStream \
            CATMmrSys \
            CATViz \
            CATMmrBrepMode CATMmrBrepMAccess CATMecModUseItf CATMecModLiveUseItf \
            CATMecModExtendItf \
            CATMechanicalModelerLive CATMmlSys CATMmlBRepMode CATMecModLiveInterfaces \
            CATGngFeatures \
			CATMmlRefPlane CATOmnMain CATMmrSpecToVisu CATMmrVisProperties CATSysAllocator

#ifdef CATIAV5R24
  LINK_WITH = $(LINK_WITH_BEFORE_CATIAV5R24)\
			CATMmlBRepModel CATMmlUUID CATOmxBase CATSysTS
#else
  LINK_WITH = $(LINK_WITH_BEFORE_CATIAV5R24)
#endif
           
INCLUDED_MODULES = MF0STARTUP MF0Tracer MF0ERROR MF0ROOT MF0GEOM MF0CCP MF0JournalToolsBox MMInterfaces CATMfImport CATPartArchi CATMfAnalyse CATMfShape \
                   CATMfCkeOperator CATMmrServices CATMmrChecks CATMmrDuplicate CATMmrRemove CATMmrReorder CATMmrInsert CATMmrActivity CATMmrBackupStartup \
                   CATMfReroute CATMmrBrepModel CATMmrBrepFtr CATMmrBrepAccess CATMmrBrepReport CATMmrBrepAttributes CATMmrViewsAndResults \
                   CATMmrBrepProxys CATMmrCAAImpl CATMmrPrtCont CATMmrReplace CATGeomReroute CATMmrBrepMode CATMmrDbgTools CATMmrLiveShapeInfra \
                   CATMmrBrepMAccess CATMmrSwitchMode CATMmrModelEvents CATMmrSymbolicGroups CATMmrGenericFeature CATMmrSymbolicGroupsCCP CATMmrNavigateObject
			    

LOCAL_CCFLAGS= -DSPECDEBUG

ALIASES_ON_IMPORT_BEFORE_CATIAV5R24=CATMechanicalModeler CATConstraintModeler CATConstraintModelerItf CATMecModInterfaces CATMmlSys 

#ifdef CATIAV5R24
  ALIASES_ON_IMPORT=$(ALIASES_ON_IMPORT_BEFORE_CATIAV5R24) CATMmlBRepModel CATMecModLiveInterfaces
#else
  ALIASES_ON_IMPORT=$(ALIASES_ON_IMPORT_BEFORE_CATIAV5R24)
#endif

OS = AIX
OS = aix_a64
LOCAL_LDFLAGS = -bbigtoc

OS = HP-UX

OS = IRIX

OS = SunOS

OS = Windows_NT
