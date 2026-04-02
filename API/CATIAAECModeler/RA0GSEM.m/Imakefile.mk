# 
IMPACT_ON_IMPORT = YES
# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
INCLUDED_MODULES = RA0R1PG RA0R2PG RA0R3PG RA0R4PG RA0R5PG \
		   RA0R6PG RA0R7PG RA0R8PG RA0R9PG RA0SPRG
#
OS = COMMON
LINK_WITH =
#
OS = Windows_NT
LOCAL_LDFLAGS = \
		/EXPORT:rar1pgst /EXPORT:rar1pg  \
		/EXPORT:rar2pgst /EXPORT:rar2pg  \
		/EXPORT:rar3pgst /EXPORT:rar3pg  \
		/EXPORT:rar4pgst /EXPORT:rar4pg  \
		/EXPORT:rar5pgst /EXPORT:rar5pg  \
		/EXPORT:rar6pgst /EXPORT:rar6pg  \
		/EXPORT:rar7pgst /EXPORT:rar7pg  \
		/EXPORT:rar8pgst /EXPORT:rar8pg  \
		/EXPORT:rar9pgst /EXPORT:rar9pg  \
		/EXPORT:rasprgst /EXPORT:rasprg

