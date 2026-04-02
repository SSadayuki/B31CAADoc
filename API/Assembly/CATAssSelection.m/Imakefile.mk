#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
AssemblyUUID \
CATAfrUUID \
CATAssemblyInterfacesUUID \
CATIAApplicationFrameUUID \
CATMmiUUID \
CATVisUUID \
GeometricObjectsUUID \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureUUID
#else
LINK_WITH_FOR_IID =
#endif
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = AS0SEL AsmCstSet AsmCstSetNav

# On est prie de respecter l'ordre alphabetique
LINK_WITH=$(LINK_WITH_FOR_IID)  AC0SPBAS \
            AD0XXBAS \
            CATPDMBaseItfCPP \
            CATProductStructure1 \
						CATPrsRep \
            CAPPFRM \
			CATXDocLinkItfCPP \
            CD0FRAME \
            CK0FEAT \
            Collections \
            CP0SPEC \
            DI0PANV2 \
            JS0FM \
            JS0GROUP \
            InfItf \
            Mathematics \
            MecModItfCPP \
            MF0CST \
            NS0SI18N \
            ObjectModeler \
            ProductStructureItf \
            ToolsVisu \
            VE0MDL \
            YP00TMP  BODYNOPE \
            YP00IMPL YI00IMPL \
            CATAssemblyInterfacesUUID \
            CATInteractiveInterfaces \
            CATAssemblyInterfaces \
            CATGraphicProperties \
            CATViz \
            KnowledgeItf \
            CATMathStream \
            CATConstraintModelerItf \
            CATMechanicalModeler \
            MF0DimInt \
            CATGraphicProperties \
            CATViz \
			VE0GRPH2 \
			MF0CST \
            CATCGMGeoMath \
