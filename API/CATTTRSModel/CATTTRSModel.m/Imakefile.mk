# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
#
# Imakefile for module CATTTRSModel.m
#
#======================================================================
#  Jan 1999  Creation                                      
#======================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY

INCLUDED_MODULES = CATTTRSTeckPack      \
				   CATTTRSSetManagement \
				   CATTTRSAssocitivityManagement \				   

LINK_WITH=  JS0GROUP                    \ # System
            SystemUUID                  \ # System
            CATMathematics              \
            CATVisualization            \
            CATViz                      \
            CATVisUUID                  \
            CATApplicationFrame         \
            CATIAApplicationFrame       \
            CATGeometricObjects         \
            CATGeometricOperators       \
            CATNewTopologicalObjects    \
			YN000FUN                    \ # AdvancedMathematics
            YI00IMPL                    \ # NewTopologicalObjects
            CATObjectModelerBase        \
            ObjectModelerBaseUUID       \
            CATObjectSpecsModeler       \
            ObjectSpecsModelerUUID      \
            KnowledgeItf                \ # KnowledgeInterfaces
            CATLiteralFeatures          \
            CATProductStructure1        \
            ProductStructureUUID        \
            CATTTRSItf                  \
            CATTTRSUUID                 \
            CATMecModInterfaces         \
            CATMmiUUID                  \ # MecModInterfaces
			CATMecModUseItf             \ # CATMecModUseItf
            CATMechanicalModeler        \
			PartItf                     \ # PartInterfaces
            CATSketcherInterfaces       \
            CATGitInterfaces            \
            CATSaiSpaceAnalysisItf      \ # SpaceAnalysisInterfaces
			TessAPI                     \ # Tessellation
            CATUdfInterfaces            \
            CATMathStream               \
            CATCGMGeoMath               \
            CATConstraintModeler        \
            CATConstraintModelerItf     \
            TECHNLNK                       \ # Cluster
            CATProductStructureInterfaces  \ # Cluster
            CSASOLID                       \ # Cluster
            CATIAEntity                    \ # Cluster
            AC0CATPL                       \ # Cluster
            DraftingItfCPP                 \ # DraftingInterfaces
            CATPrsScene \ # ProductStructure
            #CATTPSItfCPP \
            CATGMOperatorsInterfaces  \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
