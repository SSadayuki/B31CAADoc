# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CAACafEltToolsOptions.m
#======================================================================
# 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=JS0FM JS0GROUP JS0FILE\
          DI0PANV2 CATDlgStandard \
          CATInteractiveInterfaces \
          CATObjectModelerBase \
					CATIAApplicationFrame \
					CATApplicationFrame \
					CATInfInterfaces
