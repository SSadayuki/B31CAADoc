#
BUILT_OBJECT_TYPE=LOAD MODULE
#
OS = COMMON
LINK_WITH = JS0GROUP dsc_GeoFactoryContainer CATMathematics


#
#------------------------------------------------------------------------------------------------------------
#  This option edits the image to indicate that the application can handle addresses larger than 2 gigabytes.
#     (EDITBIN /LARGEADDRESSAWARE   is equivalent)
#
#  To benefit from 3GB of physical RAM on a 4GB system (the remaining 1GB goes tokernel)
#     boot.ini switch must exist with "/3GB" 
#
#   To see if executable is defined  with /3B availability
#       dumpbin   /HEADERS
#   FILE HEADER VALUES
#       Application can handle large (>2GB) addresses
#
#------------------------------------------------------------------------------------------------------------

#
OS = Windows_NT
LOCAL_LDFLAGS = /LARGEADDRESSAWARE
#if os win_b64
#else
OPTIMIZATION_CPP = /O2
#endif
#

