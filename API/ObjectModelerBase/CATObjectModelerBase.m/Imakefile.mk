#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

ALIASES_ON_IMPORT= CATObjectModelerBase ObjectModelerSystem CATObjectModelerNavigator

INCLUDED_MODULES = ObjectModeler  AC0XXLNK \
                   AC0WINLNK \
                   CATFileEnv \
                   AD0XXBAS \
                   ON0PROP  \
                   CP0CLIP  \
                   CATOmbMonitor \
                   AC0DOMAIN \
                   CATOmbWarmStart \
                   CATOmbDebugSession \
                   CATOmbCluster \
                   CATOmbDocComposite \
                   CATOmbPersistency \
                   CATOmbExtendedMemory \
                   CATOmbNonCATIADocument \
                   CATOmbLifeCycle \
                   CATOmbDocPersistency \
		               CATOmbWab \
                   CATOmbDWC

COMPLEMENT =

LINK_WITH = CO0LSTPV \
            CO0LSTST \
            CO0RCINT \
            JS03TRA  \
            JS0CORBA \
            JS0ERROR \
            JS0FM    \
            JS0SCBAK \
            JS0SETT  \
            JS0LIB0  \
            JS0STR   \
            NS0S3STR \
            JS0INF   \
	    CATInfInterfaces \
		CATOmbUtils \
        CATOmbWSystem \
		CATOmiClusterItf \
        CATObjectModelerItf \
		CATOmbTom \
		VPMIDicInterfaces \ # for PLM dictionary
        VVSNetBase \
        VVSStreamConsumer \
        VVSUtils \
        VVSCoreStructure \
        VVSUrlUtils \
	JS0FILE \
	JS0STDLIB \
	OMSCompositeStream \
	CATOMY\
	CATObjectModelerNavigator\
    CATOmx\
    CATOmxBase\
	$(COMPLEMENT)

#
OS = AIX

#
OS = HP-UX
#SYS_LIBPATH =
#SH_SYS_LIBPATH = $(SYS_LIBPATH)

#
OS = IRIX

#
OS = SunOS

#
OS = intel_a
COMPLEMENT =  JS0SMT

OS = win_b
COMPLEMENT =  JS0SMT

OS = win_b64
COMPLEMENT =  JS0SMT
