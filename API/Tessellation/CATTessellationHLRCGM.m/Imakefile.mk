#
# Imakefile for the  module CATTessellationHLR
#
# History :
#
# Jan. 98 JCH Creation
# Nov. 99 HKL Ajout de CATTopologicalOperators pour CATHLREntityCGM::Save
# Jul. 01 LAT Modification pour decouper le HLR et en faire un composant
#             pour SPATIAL.
#             Ajout de HLRModeleV4 (qui est extrait de HLRModele) 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

INCLUDED_MODULES = HLRProject HLRModeleV4

#ifdef CATIAR417
DUMMY_LINK_WITH = CATSysTS
#else
#ifdef CATIAV5R24
DUMMY_LINK_WITH =
#endif
#endif

LINK_WITH = \
  $(DUMMY_LINK_WITH) \
  Collections \
  JS0ERROR \
  JS0SCBAK \
  JS0CORBA \
  JS03TRA \
  CATTesHLRUtilities \
  CATTessellationHLR \
  CATMathematics \
  CATCGMGeoMath \
  CATMathStream \
  CATAdvancedMathematics \
  CATGeometricObjects \
  CATGMModelInterfaces
#			CATTopologicalOperators

#
OS = COMMON

#
OS = AIX

#
OS = IRIX

#
OS = HP-UX

#
OS = SunOS

#
OS = Windows_NT
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif

#
