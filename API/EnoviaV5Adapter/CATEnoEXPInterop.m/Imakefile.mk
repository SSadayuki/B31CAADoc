# COPYRIGHT DASSAULT SYSTEMES 2015
#======================================================================
# Imakefile for module CATEnoEXPInterop.m
#======================================================================
# Sept 2015  VPW
#======================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY 

LINK_WITH =  JS0GROUP CD0FRAME JS0FM AC0XXLNK \
             CATPDMBaseItfCPP CATPDMBaseEnoviaV5CAA \
			 XMLParserItf CATEnoviaV5AdapterBase \
			 CATPDMBase CATEnoviaPlugInterfaces DI0PANV2
			 






          
 
             

