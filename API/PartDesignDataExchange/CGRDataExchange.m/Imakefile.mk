# COPYRIGHT 2002 DASSAULT SYSTEMES PROVENCE
#======================================================================
# Imakefile for module CGRDataExchange.m
#======================================================================
#
# 08/09/1999: C. Guinamard: Creation
# 30/07/2003: DFB: Ajout de CATCGMGeoMath,CATConstraintModeler,CATConstraintModelerItf  warning du compilo
#======================================================================
#
# SHARED LIBRARY 
#

BUILT_OBJECT_TYPE = SHARED LIBRARY


LINK_WITH_COMMON =  AC0XXLNK AD0XXBAS JS0CORBA VE0MDL AC0SPBAS\
	     CO0LSTPV YP00IMPL NS0S3STR YI00IMPL \
	     DataExchangeInfrastructure MF0STARTUP\
	     MecModItf BOOPER \
	     CD0FRAME \
		 JS0FM \
         PartAndNCGMDataExchange DXM2V5 \
		 CATLayersAndFilters CATMmiUUID \
		 CATCGMGeoMath CATConstraintModeler CATConstraintModelerItf

LINK_WITH = $(LINK_WITH_COMMON) CATInteractiveInterfaces CATViz \
            DataExchangeBaseRepsItfCPP DataExchangeKernelItfCPP CATXCADServices \

OS = AIX

#
OS = HP-UX

#
OS = IRIX

#
OS = SunOS

#
OS = Windows_NT
