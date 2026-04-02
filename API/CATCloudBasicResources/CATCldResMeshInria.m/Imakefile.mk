#==============================================================================================================
# COPYRIGHT DASSAULT SYSTEMES PROVENCE 2000
#==============================================================================================================
# Imakefile for module CATCldResMeshInria.m
#==============================================================================================================
# 11-Mar-2004 - JLH - Suppression de l'inactivation des exceptions.
# 25-Mar-2002 - JLH - Ajout des flags pour Sun
# ??-Jul-2000 - JLH - Creation
#==============================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY 
 
LINK_WITH =

# System dependant variables
#
OS = AIX
CXX_EXCEPTION =
#
OS = HP-UX
CXX_EXCEPTION =
#
OS = IRIX
CXX_EXCEPTION =
#
OS = SunOS
LOCAL_CCFLAGS = -xlibmil
OPTIMIZATION_CPP = -xO4
CXX_EXCEPTION =
#
OS = Windows_NT
CXX_EXCEPTION =
