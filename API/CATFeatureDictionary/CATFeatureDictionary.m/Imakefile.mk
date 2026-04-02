#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATVisUUID \
FileMenuUUID \
LiteralFeaturesUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY


INCLUDED_MODULES = CATFdeWorkshop \
 CATFdeEditor \
 CATFdeViewController

LINK_WITH = JS0GROUP JS0FM \                 # System
        AC0CATPL \                                  # ObjectModelerCATIA
        ObjectModeler \                             # ObjectModelerBase
        SpecsModeler \                              # ObjectSpecsModeler
        ON0FRAME CD0STWIN \ # CATIAApplicationFrame
        CATInteractiveInterfaces \                  # InteractiveInterfaces
        CD0WIN CD0FRAME \                           # ApplicationFrame
        CATViz VE0BASE VE0MDL \                     # Visualization
        ApplicationFrame \                          # ApplicationFrame
        KnowledgeItf CATLiteralFeatures \           #LiteralFeatures
        CATGraph \                                  #Graph
        DI0PANV2 \                                  #Dialog
        AC0ITEMS \ #FileMenu	CATFmuServices 
        CATLiteralsEditor \                         #LiteralsEditor	
        CATMcoInterfaces  \                         #MechanicalCommands
        CATFdeInterfaces \                          #Fde interfaces
        CATCclInterfaces \                          #Catalog AddIn
        CATLifRelations \    #KnowledgeModeler
	YN000MAT


LOCAL_CCFLAGS     = -DSPECDEBUG

#--------------------------
# Partie specifique Intel_a
#--------------------------
OS            = intel_a
#LINK_WITH     = XMLUtils  xmlxerces xmlicuuc $(LINK_WITH_GLOBAL)
CXX_EXCEPTION =
LOCAL_CCFLAGS = -GX
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION

#--------------------------------
# Partie specifique Windows 2000
#--------------------------------
OS            = win_a
#LINK_WITH     = XMLUtils xmlxerces xmlicuuc $(LINK_WITH_GLOBAL)
CXX_EXCEPTION =
LOCAL_CCFLAGS = -D_WIN9X_SOURCE -DNATIVE_EXCEPTION

#-------------------------
# Partie specifique aix_a
#-------------------------
OS            = AIX
SYS_LIBPATH   = -lbsd
#LINK_WITH     = XMLUtils xmlxerces xmlicuuc $(LINK_WITH_GLOBAL)
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION

#-------------------------
# Partie specifique hpux_a
#-------------------------
OS            = HP-UX
#LINK_WITH     = XMLUtils xmlxerces xmlicuuc $(LINK_WITH_GLOBAL)
CXX_EXCEPTION =
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION

#-------------------------
# Partie specifique irix_a
#-------------------------
OS                  = IRIX
#LINK_WITH           = XMLUtils xmlxerces xmlicuuc $(LINK_WITH_GLOBAL)
LOCAL_CCFLAGS       = -DIRIX  -DNATIVE_EXCEPTION
CXX_EXCEPTION       =
#LOCAL_LDFLAGS       = -v
#CXX_TEMPLATE_INC    = -auto_include
#CXX_TEMPLATE_PRELK  = -prelink
#CXX_TEMPLATE_INST   = -ptused

#-----------------------------
# Partie specifique solaris_a
#-----------------------------
OS            = SunOS
#LINK_WITH     = XMLUtils xmlxerces xmlicuuc $(LINK_WITH_GLOBAL)
LOCAL_CCFLAGS = -DNATIVE_EXCEPTION
