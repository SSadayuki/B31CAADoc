#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE= NONE

# LOCAL_CCFLAGS = -DPRODSTRU_DEBUG 
#LOCAL_CCFLAGS = -DASMTRACE
LOCAL_CCFLAGS = -DCATPDMLogIntegration
#LOCAL_CCFLAGS = -DPRODSTRU_PROTO

INCLUDED_MODULES = AS0STNAV 

LINK_WITH = JS0SCBAK JS0CORBA JS0STR JS03TRA JS0ERROR JS0FM JS0GROUP JS0FILE\
            InfItf KnowledgeItf\
            AD0XXBAS AC0CATPL AC0XXLNK 
            CK0FEAT\
            AC0SPBAS GN0NAME AC0ATPL\
            ON0MAIN ON0FRAME ON0PROP TECHNLNK\
            NS0S3STR \
            Collections YN000MAT \
            CD0FRAME CD0WIN CD0STWIN VE0MDL \
            DI0APPLI DI0PANV2 VE0GRPH2 \
            CD0AUTOSTART \
            VE0BASE CATGviUtilities YN000MFL CP0CLIP CP0SPEC  \
            OM0EDPRO YP00TMP YP00IMPL\
            CATIAEntity \
            ProductStructureItf CATPrsRep\
            CATPrdEnoviaV5Interface\
            ToolsVisu\
            CATPDMItfOld CATPrdIntegration CATPrsConnect CATPrsScene WindowsAndViews \
            CATPrsLifeCycle

#
#
OS = AIX
# 
OS = HP-UX
#
OS = IRIX
#
OS = SunOS

OS = Windows_NT

