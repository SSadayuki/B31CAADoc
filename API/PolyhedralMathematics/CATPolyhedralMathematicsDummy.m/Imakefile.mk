# COPYRIGHT DASSAULT SYSTEMES 2007, ALL RIGHTS RESERVED.
#======================================================================
# Imakefile for module CATPolyhedralMathematicsDummy.m
#======================================================================
#
# May 2007 Creation ndo
# Temporary R18-only DLL (until CATPolyhedralMathematics.dll migrate to PolyhedralMathematics!)
# EMPTY DLL! LINK INSTEAD WITH CATPolyhedralMathematics!
#======================================================================
#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE=SHARED LIBRARY 

#ifdef CATIAV5R20  
ALIASES_ON_IMPORT=CATPolyhedralMathematicsDummy CATPolyhedralMathematics
#endif  
