#
# Imakefile for the  module HRV
#
# History :
#
# Oct.02  Andre BLOT (abt)   Creation

# linked-with: VE0BASE is required for CATViewer class
#              HLRModele is required for CATHLRInternalMotor (mother) class
#              HLRProject is required for CATHLRComputer (mother) class
#              HLRTools is required for CATHLRObjectLinker class
#              JS0MT JS0FM have been retrieved from list because they are useless
#

# BUILD = NO

#BUILT_OBJECT_TYPE=NONE
BUILT_OBJECT_TYPE=SHARED LIBRARY
#

OS = COMMON
#LINK_WITH = CATMathematics HLRModele HLRProject HLRTools \
#			JS0SCBAK VE0BASE
LINK_WITH = \
  CATMathematics \
  CATMathStream \
  JS0SCBAK \
  CATVizBase \
  HRV\
  CATPolyhedralMathematics
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
OPTIMIZATION_CPP = /O2
#

