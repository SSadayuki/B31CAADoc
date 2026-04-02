#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
GenKnowledgeInterfacesUUID \
GenerativeKnowledgeUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
LOCAL_YFLAGS = -ltv

LINK_WITH=$(LINK_WITH_FOR_IID)  AC0SPBAS JS0FM AS0STARTUP JS0GROUP \
                                JS0ERROR Collections CAPPFRM \
                                SpecsModeler AC0CATPL CATObjectModelerBase \
                                NS0S3STR CK0FEAT CK0PARAM SketcherItf CATViz VE0MDL \
                                CATMathStream YN000MAT CD0FRAME ApplicationFrame InfItf \
                                KnowledgeItf MecModItf PartItf MF0STARTUP \
                                GenKnowledgeItfCPP \
                                ON0MAIN CATProductStructureInterfaces \
                                CATInfInterfaces CATKnowledgeModeler \
                                CATLifGenerativeParser \
                                CATConstraintModeler CATConstraintModelerItf CATUdfInterfaces CATInteractiveInterfaces CATMcoModel CATCkeKnowledgeEnoviaLink


INCLUDED_MODULES = SY0PAR SY0TERM Position CATInstanciates

