#
# fw CATDialogEngine.tst
# SHARED LIBRARY  
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

LINK_WITH=CATDegUUID CATDialogEngine \
          SystemUUID JS0GROUP JS0FM \
          CATVisUUID CATVisualization CATViz \
          CATAfrUUID CATApplicationFrame \
          AD0XXBAS \
		  YN000MAT CATMathStream
