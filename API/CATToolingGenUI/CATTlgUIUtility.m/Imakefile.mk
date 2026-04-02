#@ autoformat 14:06:27
# COPYRIGHT DASSAULT SYSTEMES 1999
#======================================================================
# Imakefile for module CATTlgServicesUI.m
#======================================================================
#  10/08/2011 : fdm; R212 : Create
#  10/03/2014 : fdm; R217 : mk-ALIASES_ON_IMPORT
#======================================================================
#
# NONE 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 


INCLUDED_MODULES =   \
                     CATTlgUICommands			\
					 CATTlgUIFeatures			\
					 CATTlgUIControls			\
					 CATTlgUIVidControls		\
					 CATTlgUIRobot				\


LINK_WITH = \
	CK0FEAT                        \ # LiteralFeatures                CK0FEAT
	CATGitInterfaces               \ # GSMInterfaces                  CATGitInterfaces
	CATGMOperatorsInterfaces       \ # GMOperatorsInterfaces          CATGMOperatorsInterfaces
	CATGSMUseItf                   \ # CATGSMUseItf                   CATGSMUseItf
    CATMathStream                  \ # CATMathStream                  CATMathStream 
	CATMeasureGeometryInterfaces   \ # MeasureGeometryInterfaces      CATMeasureGeometryInterfaces
    CATMecModInterfaces            \ # MecModInterfaces               CATMecModInterfaces
    CATMecModLiveInterfaces        \ # MecModLiveInterfaces           CATMecModLiveInterfaces
    CATMecModLiveUseItf            \ # CATMecModLiveUseItf            CATMecModLiveUseItf
	CATMecModUseItf                \ # CATMecModUseItf                CATMecModUseItf
	CATMmrServices                 \ # MechanicalModeler              CATMmrServices
    CATSurfacicComponents          \ # CATSurfacicUIResources         CATSurfacicComponents
    CATSurfacicResources           \ # CATSurfacicResources           CATSurfacicResources
	CATSurfacicUtilities           \
    CATTlgUIItf                    \ # CATToolingGenUI                CATTlgUIItf
    CATToolingItfCPP               \ # CATToolingGenServicesItf       CATToolingItfCPP
	CATToolingGenFeaturesItf       \ # CATToolingGenFeaturesItf       CATToolingGenFeaturesItf
    CATViewItf                     \ # CATView                        CATView
    DI0PANV2                       \ # Dialog                         DI0PANV2
    CATDialogEngine                \ # DialogEngine                   CATDialogEngine
    CATGMModelInterfaces           \ # GMModelInterfaces              CATGMModelInterfaces
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATMathematics                 \ # Mathematics                    CATMathematics
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    CATObjectSpecsModeler          \ # ObjectSpecsModeler             CATObjectSpecsModeler
    JS0FM                          \ # System                         
    NS0S3STR                       \ # System                         JS0GROUP
    VisuDialog                     \ # VisuImmersiveDialog            VisuDialog
	SpecCmd                        \ # MechanicalModeler              SpecCmd
	PolyVizUtils	               \ # PolyVizUtils	                 PolyVizUtils
	CATViz							\
	CD0FRAME						\
	CATVisualization				\
	CATInteractiveInterfaces		\
	CK0PARAM						\
	SELECT							\
	XMLParserItf					\
	CATSketcherInterfaces			\
	YN000FUN						\
	VE0GRPH2						\
	CATFileMenu						\
#

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
