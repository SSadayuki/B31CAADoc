
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=$(LINK_WITH_FOR_IID)            \
			JS0FM \
			NS0S1MSG \
			NS0S3STR \
			AS0STARTUP \
			AC0SPBAS \
			CATNavigatorItf \
			CATDMUPersistency \
			AS0STARTUP \
			AC0SPBAS \
			SimulationItfCPP \
			CATDMUBase \
			CATClnBase \
			CATClnSpecs

OS = COMMON

OS = Windows_NT
