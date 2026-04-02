#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
LINK_WITH = NS0S3STR              \
            AC0XXLNK              \
            AC0SPBAS              \
            CATPDMBase            \
            CATProductStructure1  \
            CATPDMReconcileModel  \
            CATPDMReconcileService \
            JS0GROUP              \
            CATObjectSpecsModeler \
            CATObjectModelerBase  \
            CATPDMReconcileItfCPP

OS = AIX                                                             
                                                                     
#
OS = HP-UX                                                           
                                                                     
#
OS = IRIX                                                            
                                                                     
#
OS = SunOS                                                           

#
OS = Windows_NT
