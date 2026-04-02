# #ifdef LOCAL_DEFINITION_FOR_IID
# LINK_WITH_FOR_IID =
# #else
# LINK_WITH_FOR_IID =
# #endif
# COPYRIGHT DASSAULT SYSTEMES 2001
#======================================================================
# Imakefile for module CATxPDMInterfaces.m
#======================================================================
#
#  Nov 2001  Creation
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE= SHARED LIBRARY
 
# LINK_WITH=$(LINK_WITH_FOR_IID) JS0GROUP CATObjectModelerBase
LINK_WITH1=JS0GROUP JS0FM\
          CATMathematics \
          CATMathStream \
          CATObjectModelerBase CATInteractiveInterfaces CATxPDMIsolatedLib


OS = COMMON
LINK_WITH=$(LINK_WITH1) 
OS = intel_a
LINK_WITH=$(LINK_WITH1) JS0SMT

OS = win_b
LINK_WITH=$(LINK_WITH1) JS0SMT

OS = win_b64
LINK_WITH=$(LINK_WITH1) JS0SMT

OS = intel_a64
LINK_WITH=$(LINK_WITH1) JS0SMT

OS = win_a
LINK_WITH=$(LINK_WITH1) JS0SMT
