#=====================================================================================
#                          COPYRIGHT DASSAULT SYSTEMES 2001
#-------------------------------------------------------------------------------------
# MODULE      :    CATRpmUtilities
# FRAMEWORK   :    CATReporterModeler
# AUTHOR      :    VSO
# DATE        :    9.2001
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     user  date        purpose
#    HISTORY        ----  ----        -------
#                   bcy    3/28/2002   useless link with irregularities
#
# removed: BIG:CATExpertDriver BIG:CATObjectModelerCATIA
#=====================================================================================
BUILT_OBJECT_TYPE=SHARED LIBRARY
#
LINK_WITH = CATVisualization CATApplicationFrame CATIAApplicationFrame \
            CATObjectSpecsModeler CATObjectModelerBase JS0GROUP JS0FM \
            CATLifSpecs \
            CATLifDictionary \
            CATLiteralFeatures \
            CATKnowledgeModeler KnowledgeItf

SH_LINK_WITH= $(LINK_WITH)


