#
# SHARED LIBRARY
#

BUILT_OBJECT_TYPE= SHARED LIBRARY

LINK_WITH= JS0GROUP \
           CATPDMBase \
           CATPDMItfOld \
           CATPDMBaseItfCPP \
           ObjectModeler \
           ProcessInterfaces \
           ProcessModelerBase \
           CATObjectSpecsModeler

#
OS = AIX

#
OS = HP-UX

#
OS = SunOS

#
OS = IRIX

#
OS = Windows_NT
