#
IMPACT_ON_IMPORT = YES
# 
BUILT_OBJECT_TYPE = SHARED LIBRARY
#
OS = COMMON
LINK_WITH = 
#
OS = Windows_NT
LOCAL_LDFLAGS = \
		/EXPORT:dtarde \
		/EXPORT:lgrtab \
		/EXPORT:tbslot \
		/EXPORT:tbnocc \
		/EXPORT:itypst \
		/EXPORT:numche \
		/EXPORT:tabadr \
		/EXPORT:tbchem \
		/EXPORT:nomche \
		/EXPORT:numocc \
		/EXPORT:tbreel 

