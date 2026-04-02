# COPYRIGHT 2004 DASSAULT SYSTEMES
# Module: V5JsyLegacyStarter
# Description: This modules contains the legacy V5 Java starters used by
#              ENOVIA 3d com classic and ENOVIA LCA fat client.

BUILT_OBJECT_TYPE=JAVA

TYPE=CLIENT   # Legacy V5 Java starters are only for Java client applications

LINK_WITH=V5JsyStarter V5JsyLoader PLBinitProxy
