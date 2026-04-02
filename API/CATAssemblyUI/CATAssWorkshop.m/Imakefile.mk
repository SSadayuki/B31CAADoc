#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
CATAssemblyUIUUID
#else
LINK_WITH_FOR_IID =
#endif
#
BUILT_OBJECT_TYPE=SHARED LIBRARY
INCLUDED_MODULES = AsmWorkshop

LINK_WITH=$(LINK_WITH_FOR_IID)  CATAssWkbAssembly \
       AS0SEL \
       CATAssCommands \
       CATAssCouMdl \
       AC0SPBAS \
       AS0STARTUP \
       AD0XXBAS \
       CATMmuSettings \
       CATScriptEngine \
	   CATAssemblyInterfaces \
       CD0AUTOSTART \
       CD0FRAME \
       CD0WIN \
       CD0NTOG \
       Collections \
       JS0GROUP \
       JS0FM \
       MecModItfCPP \
       MF0CST \
       NS0SI18N \
       SELECT \
       VE0BASE \
       VE0MDL  \
			 CATTPSHeadersServices \
			 CATProductStructureInterfaces \
       CATConstraintModeler \
        CATConstraintModelerItf \
        KnowledgeItf \
        CATMathStream \
        CATViz \
        CATConstraintSettings \
        CATConstraintModelerItf \
        CATMechanicalModeler \
        MF0DimInt \
        CATViz \

SH_LINK_WITH= $(LINK_WITH)
