BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = SpaceAnalysisItf SPAProIDL SPAPubIDL

LINK_WITH=  NS0S3STR \
            Collections \
            Mathematics \
            CATInfInterfaces\
			JS0GROUP \
			CATMathStream \
            $(LINK_WITH_DEBUG)

# STV : JS0GROUP added for setting migration interfaces.


#if os SunOS
LINK_WITH_DEBUG = CATSimulationInterfaces
#else
LINK_WITH_DEBUG =
#endif

#ifdef CATIAV5R5
            CATNavigatorItf
#endif

#VE0BASE \
#ObjectModeler\
#ApplicationFrame \
#SpecsModeler\
#JS0FM \
#Mathematics \
#SimulationItfCPP

OS = COMMON

OS = Windows_NT



