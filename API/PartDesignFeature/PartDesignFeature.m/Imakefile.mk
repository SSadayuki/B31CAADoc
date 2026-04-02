#@ autoformat 07:01:12
#
# SHARED LIBRARY PRTFACTORY
#

#if defined(CATIAV5R24)
ALIASES_ON_IMPORT=CATPartDesignFeature CATPartDesignBase
#endif

BUILT_OBJECT_TYPE= NONE

LINK_WITH_V5_ONLY=
LINK_WITH_V6_ONLY=
LINK_WITH_V6CLIENTANDV5=
LINK_WITH_V6CLIENT_ONLY=

INCLUDED_MODULES =PRTFACTORY PRTSHAPE\
	PRTPRISM PRTREVOL PRTSWEEP PRTHOLE\
	PRTCHAMFER PRTDRAFT PRTFILLET PRTAUTOFILLET\
	PRTMIRROR PRTSCALING PRTREMOVEFACE\
	PRTSHELL PRTSPLIT PRTTHICK\
	PRTRECPATT\
	PRTBOOLEAN\
	PRTOBJ PRTUTILITY\
	PRTAUTODRAFT\
 
LINK_WITH = \
    $(LINK_WITH_V5_ONLY)           \
    $(LINK_WITH_V6_ONLY)           \
	$(LINK_WITH_V6CLIENTANDV5)     \
    CATGSMUtilitiesServices        \ # CATGSMTopoServices             CATGSMUtilitiesServices
    CATIAEntity                    \ # CATIADataBasics                CATCdbEntity
	CATGraphicProperties           \ # CATGraphicProperties           CATGraphicProperties
    DI0STATE                       \ # DialogEngine                   CATDialogEngine
    SI0REPOR                       \ # GenericNaming                  CATGngReport
    SI0REPER                       \ # GenericNaming                  CATGngReportUtilities
    SI0TOPAC                       \ # GenericNaming                  CATGngTopologicalAccess
    YP00IMPL                       \ # GeometricObjects               CATGeometricObjects
    Y3DYNOPE                       \ # GeometricOperators             CATGeometricOperators
    KnowledgeItf                   \ # KnowledgeInterfaces            KnowledgeItf
    CATKnowledgeModeler            \ # KnowledgeModeler               CATKnowledgeModeler
    CK0FEAT                        \ # LiteralFeatures                CATLiteralFeatures
    YN000M2D                       \ # Mathematics                    CATMathematics
    YN000MAT                       \ # Mathematics                    CATMathematics
    YN000MFL                       \ # Mathematics                    CATMathematics
    MecModItf                      \ # MecModInterfaces               CATMecModInterfaces
    MF0GEOM                        \ # MechanicalModeler              CATMechanicalModeler
    MF0STARTUP                     \ # MechanicalModeler              CATMechanicalModeler
    BOOPER                         \ # NewTopologicalObjects          CATTopologicalObjects
    Topology                       \ # NewTopologicalObjects          CATTopologicalObjects
    YI00IMPL                       \ # NewTopologicalObjects          CATTopologicalObjects
    AD0XXBAS                       \ # ObjectModelerBase              CATObjectModelerBase
    ON0PROP                        \ # ObjectModelerBase              CATObjectModelerBase
    AC0CATPL                       \ # ObjectModelerCATIA             CATObjectModelerCATIA
    AC0SPBAS                       \ # ObjectSpecsModeler             CATObjectSpecsModeler
    PartItf                        \ # PartInterfaces                 CATPartInterfaces
    SketcherItf                    \ # SketcherInterfaces             CATSketcherInterfaces
    Collections                    \ # System                         JS0GROUP
    JS0GROUP                       \ # System                         JS0GROUP
    NS0SI18N                       \ # System                         JS0GROUP
    BODYNOPE                       \ # TopologicalOperators           CATTopologicalOperators
    TopoOperError                  \ # TopologicalOperators           CATTopologicalOperators
	CATMmrVisProperties            \ # MechanicalModeler              CATMmrVisProperties
#

OS = COMMON
#if defined(CATIAR201)
LINK_WITH_V6_ONLY= \
    $(LINK_WITH_V6CLIENT_ONLY)     \
	CATFbdImportInterfaces \
#endif
#

#if !defined(_DS_COMPUTE_SERVER)
LINK_WITH_V6CLIENTANDV5= \
	CAPPFRM                        \ # CATIAApplicationFrame          CATIAApplicationFrame
#
#if defined(CATIAR201)
LINK_WITH_V6CLIENT_ONLY = \
#
#elif defined(CATIAV5R21)
LINK_WITH_V5_ONLY= \
	CATApplicationFrame \
    CATVisualization \
    CATViz \            
#
#endif
#endif
