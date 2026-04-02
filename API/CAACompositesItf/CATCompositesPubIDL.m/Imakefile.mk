#@ autoformat 12:01:18
#
# Makefile for the .idl files
# which are in the PublicInterfaces directory
#

BUILT_OBJECT_TYPE=SHARED LIBRARY

#
# Flags for the idl compilation
#
SOURCES_PATH=PublicInterfaces
COMPILATION_IDL=YES


LINK_WITH= \
    JS0GROUP                       \ # System                         JS0GROUP
#
