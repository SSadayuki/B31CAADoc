# COPYRIGHT DASSAULT SYSTEMES 2004-2009
#======================================================================
# Imakefile for module CATScmBatchReconcile.m
#======================================================================
#
#  May   2004  Creation: by Jean-Luc MEDIONI
#  April 2009  Updated : by Jean-Luc MEDIONI to fix issue of CATDrawing update
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = NS0S3STR                          \
            AC0XXLNK                          \
            AC0SPBAS                          \
            CATPDMBase                        \
            CATProductStructure1              \
            CATPDMReconcileModel              \
            CATPDMReconcileService            \
            CATScmReconcileSettingsController \
            DraftingItfCPP                    \
            JS0GROUP                          \
            CATObjectSpecsModeler             \
            CATObjectModelerBase              \
            CATDraftingInterfaces             \
            CATPDMReconcileItfCPP             \
            XMLParserItf                      \
            CATPPRHubLocator                  \
            YP00IMPL                          \
            VE0MDL                            \
            SystemUUID                        \
            CATPDMReconcileAutoRules

OS = AIX                                                             
                                                                     
#
OS = HP-UX                                                           
                                                                     
#
OS = IRIX                                                            
                                                                     
#
OS = SunOS                                                           

#
OS = Windows_NT




