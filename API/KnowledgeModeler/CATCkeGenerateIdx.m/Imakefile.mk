##########################################################################
#
#       makefile customization lib:  Test for Vol
#
##########################################################################
#
# SHARED LIBRARY
#
# -------------------------------------------------------------------------

BUILT_OBJECT_TYPE=LOAD MODULE
PROGRAM_NAME = CATCkeGenerateIdx

# CC flags
LOCAL_CCFLAGS   =

#LINK_WITH       =   AD0XXBAS AC0XXLNK AC0CATPL AC0SPBAS AC0SPDOC              \
#					NS0S3STR CO0LSTPV CO0LSTST CO0RCINT KnowledgeItf  MecModItf \
#					JS0CORBA JS0ERROR JS03TRA JS0SCBAK JS0FM JS0STR CK0FEAT Rule AS0STARTUP \
#					CATLifServices CATVisualization  TECHNLNK \
#					ProductStructurePubIDL ProductStructureItf \
#					ProductStructureInterfacesUUID CATProductStructureInterfaces ProductStructureProtIDL

LINK_WITH       =   CATViz AD0XXBAS AC0XXLNK AC0CATPL     \
					AC0SPBAS AC0SPDOC              \
					NS0S3STR                       \
					CO0LSTPV CO0LSTST CO0RCINT KnowledgeItf  MecModItf \
					JS0CORBA JS0ERROR JS03TRA JS0SCBAK JS0FM JS0STR CK0FEAT  \
					TECHNLNK CATVisualization CATLifServices CATLifGenerativeParser

#
#CATIA_LSTCOMDYN=NO ???
#
# -------------------------------------------------------------------------

OS 	= AIX

# templates aix
#INSTANCIATION_MODE = -qnotempinc

# -------------------------------------------------------------------------

OS 	= IRIX

# templates irix
#INSTANCIATION_MODE = -no_auto_include -no_prelink

# -------------------------------------------------------------------------

OS = HP-UX

INSTANCIATION_MODE = -pta -ptv

# -------------------------------------------------------------------------

OS = SunOS

#INSTANCIATION_MODE = -pta -ptv

