#==================================================================================================
# COPYRIGHT DASSAULT SYSTEMES 2001
#==================================================================================================
# Imakefile for module CATCloudQsrInterfaces.m
#==================================================================================================
# 02-Aug-2006 - JLH - Nettoyage pour la V5R18.
# ??-Jul-2001 - CQO - Creation
#==================================================================================================

BUILT_OBJECT_TYPE = SHARED LIBRARY 
 
INCLUDED_MODULES = \
  CATCloudQsrItf \
  CATCloudQsrItfCPP 
 
LINK_WITH = \
  CATApplicationFrame \
  JS0GROUP 

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
