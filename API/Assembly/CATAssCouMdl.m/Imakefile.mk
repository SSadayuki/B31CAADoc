#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
AssemblyUUID \
CATAfrUUID \
CATAssemblyInterfacesUUID \
CATIAApplicationFrameUUID \
CATMmiUUID \
CATVisUUID \
InfInterfacesUUID \
InteractiveInterfacesUUID \
MechanicalCommandsUUID \
MechanicalModelerUUID \
ObjectModelerBaseUUID \
ObjectSpecsModelerUUID \
ProductStructureInterfacesUUID \
ProductStructureUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LOCAL_CCFLAGS = -DASMTRACE

LINK_WITH = $(LINK_WITH_FOR_IID) AC0SPBAS AC0SPXML AC0XXLNK CATOsmItf \
            AD0XXBAS \
            CATProductStructure1 AS0SEL AsmCstSet \
            CATAssemblyInterfaces \
            CATPDMBase \
            CATPDMItfOld \
            CD0FRAME CD0WIN CD0NTOG \
            CK0FEAT \
            CATInfInterfaces \
            CATInteractiveInterfaces \
            JS0GROUP JS0LOGRP JS0FM\
            MecModItfCPP CATMcoInterfaces \
            CATConstraintModeler \
            NS0S1MSG NS0S3STR \
            OM0EDPRO \
            ON0PROP \
            PartItf \
            ProductStructurePubIDL \
            VE0BASE VE0MDL VE0GRPH2 \
            YP00IMPL YN000MAT \
            CATTPSItf \
            CATTPSUUID \
            KnowledgeItf \
            CATUdfInterfaces \
            CATConstraintModelerItf \
            CATMechanicalModeler \
            MF0DimInt \
            CATCGMGeoMath \
            CATMathStream \
            CATViz \
#
OS = AIX

#
OS = HP-UX

#
OS = IRIX

#
OS = SunOS

#
OS = Windows_NT
