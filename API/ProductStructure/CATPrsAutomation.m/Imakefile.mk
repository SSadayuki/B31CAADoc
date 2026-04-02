# COPYRIGHT DASSAULT SYSTEMES 2003
#======================================================================
# Imakefile for module CATPrsAutomation.m
#======================================================================
#
#  
#======================================================================
#
# SHARED LIBRARY 
#



BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = AS0AUTO

LINK_WITH = AS0STARTUP CATPrsNaming\
    JS0SCBAK JS0CORBA JS0STR JS03TRA JS0ERROR JS0GROUP JS0LIB0\
    JS0LOGRP JS0DSPA JS0CTYP JS0COL JS0COMP JS0INF\
    AD0XXBAS AC0XXLNK  AC0SPBAS\
    ProductStructureItf InfItf KnowledgeItf \
    CATKnowledgeModeler CATLifAutomation \
    CK0FEAT \
    ON0MAIN ON0PROP\
    NS0S3STR CATScriptItfBase\
    Collections YN000MAT \
    CD0FRAME CD0WIN CD0AUTO VE0MDL  \
    VE0BASE YN000MFL GN0NAME \
    CATPrdEnoviaV5Interface \
    CATCafAutostart CD0AUTOSTART \
    CATMathStream CATViz \
    MecModItfCPP \
	CATPrsRep CATScriptReplayInteractions\
	CATPDMBaseItf \


#
OS = AIX

# 
OS = HP-UX

#
OS = IRIX

#
OS = SunOS

OS = Windows_NT

