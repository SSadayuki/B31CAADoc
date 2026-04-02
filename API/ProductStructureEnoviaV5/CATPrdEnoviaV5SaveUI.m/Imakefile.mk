# COPYRIGHT DASSAULT SYSTEMES 2010
#======================================================================
# Imakefile for module CATVPMNavSavePanel.m
#======================================================================
#
#  September 2010  Creation: VVD
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

##INCLUDED_MODULES = CATImmVPMLock CATImmVPMSheetEditor CATImmVPMWhereUsed CATImmVPMSynchronizeCmd CATImmVPMConfigurePartCmd CATImmVPMPublish CATImmVPMDocCommand

LINK_WITH =  ON0FRAME JS0CORBA JS0FM CD0FRAME AC0SPBAS  AC0ITEMS\
                       AC0XXLNK AS0STARTUP DI0PANV2 CATDialogEngine \
	CATViz CATVisualization CATFileMenu \
        CATEnoviaV5AdapterBase CATEnoviaV5AdapterItf CATEnoviaV5Save CATPDMBase \
	CATInteractiveInterfaces \
	CATPrdEnoviaV5Command CATPDMBaseItfCPP CATPPRHubLocator\
	CATEnoviaV5VPMNav CATPDMBaseEnoviaV5CAA \
	CATPrdEnoviaV5Impl CATEnoviaV5AttrMap CATOmbDocAttributes \
	YN000MAT JS0GROUP \
	CATImmItf \
