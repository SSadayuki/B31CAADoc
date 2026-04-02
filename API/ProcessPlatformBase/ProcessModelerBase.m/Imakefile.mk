#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= SHARED LIBRARY

INCLUDED_MODULES =  SP0BBDOC\
		    SP0BBOSM\
		    SP0BBERR\
		    SP0BBITF\
		    SP0BBAUTO\
		    SP0BBMDY\
		    PositionManagement\
			StateManagement\


LINK_WITH=  JS0GROUP\
	    ObjectModeler\
	    AS0STARTUP\
	    AC0CATPL\
	    ProcessInterfaces\
	    CK0FEAT CATCafAutomation CATApplicationFrame InfItf\
	    Mathematics\
	    CATCclInterfaces\
	    VE0GROUP KnowledgeItf\
	    CATProductStructureInterfaces CATFmuServices CATInteractiveInterfaces CATObjectSpecsModeler\
	    CATKnowledgeModeler CATLifAutomation \
		DNBStateItf DNBState \
        CATViz CATMathStream \
		CATPDMBaseItfCPP \
		CAT3DXmlExportServices \
		CATFileMenu \
		DI0PANV2 \ 
		JS0FM \
		CAT3DXmlInterfaces \
		CAT3DXmlLightBaseServices \
		CATLightXml \
		ON0FRAME CD0STWIN \
		TECHNLNK  \
		CATAutoItf  

# GE0MAIN #Prereq pour les welds	
#
OS = AIX
#BUILD = NO
#
OS = HP-UX
#BUILD = NO
#
OS = SunOS
#BUILD = NO
#
OS = IRIX
#BUILD = NO
#
OS = Windows_NT
#BUILD = NO
