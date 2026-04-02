#======================================================================
# Imakefile for module CATJSyMiniServer.mj
#======================================================================
#
# Java module
#
BUILT_OBJECT_TYPE=JAVA
TYPE = COMMON
DELIVERABLE=NO

LINK_WITH = V5JsyLoader V5JSystem CATJSystem

LOCAL_JAVA_FLAGS=-J-ms16m -J-mx96m

