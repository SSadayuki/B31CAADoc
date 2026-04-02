#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY


INCLUDED_MODULES = CATOmnMain  \
                   CATOmnExt \
                   

COMPLEMENT =

LINK_WITH = JS0CORBA \
			JS0SCBAK \
			JS0FM    \
			ObjectModelerSystem\	
	


