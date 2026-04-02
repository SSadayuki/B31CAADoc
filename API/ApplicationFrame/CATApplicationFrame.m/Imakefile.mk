#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATAfrUUID \
ObjectModelerBaseUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#
# SHARED LIBRARY ApplicationFrame
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

COMMON_MODULES = ApplicationFrame CD0APPLI CD0FRAME \
	CD0WIN CD0VWTLB CD0EDIT CD0CCP \
	CATAfrExport \
	CD0SCCP CCP_DragDrop Companion \
	CATAfrInterfaces CATAfrSDOView \
	Headers HelpAndDoc ModelAndReps UndoRedo ProgressTask EditAndUIActive \
	WindowsAndViews WorkshopsAndWorkbenches Immersive Ole Commands \
	VRCustomize Palette

INCLUDED_MODULES = $(COMMON_MODULES)

COMMON_LINK_WITH=$(LINK_WITH_FOR_IID)  \
	JS0GROUP JS0FM JS0MT JS0FILE \
	InfItf CATSysCommunication \
	CATAutoItf \
	DI0PANV2 CATDlgStandard\
	CATVisualization CATViz CATVisVR \
	ObjectModeler \
	YN000MAT YN000M2D YN000MFL \
	LicensingFR SystemUUID CATAfrUUID CATVisUUID CATVizBaseUUID \
	AutomationInterfacesUUID \
	Palette \
	CATInteractiveInterfaces \
                CATSimpleCommandMessage \
	CATMathStream \
                CATVizBaseUUID CATTechnologicalPackageUIItf \
                CATXMLParserItf 
             


/* gdx 18/11/2004 RI 472765 Linker avec CATIAAppObject    */
/* uniquement ou ce module est builde pour ne pas generer */
/* un message d erreur mkmk INCLUDED_MODULES is           */
/* ignored au build sur Unix                              */

OS = Windows_NT
INCLUDED_MODULES = $(COMMON_MODULES) CATIAAppObject
LINK_WITH = $(COMMON_LINK_WITH) JS0SMT VBAIntegration CATVBAInfra
SYS_LIBS = vfw32.lib wsock32.lib

#ifndef CATIAV5R24
/* gdx 19/7/2005                                          */
/* Ce qui est au dessus est valable pour tous les windows */
/* on surcharge ici ce qui est specifique pour 64 bit.    */
/* En particulier, pas de CATIAAppObject sur 64 bit.      */
OS = win_b64
INCLUDED_MODULES = $(COMMON_MODULES)
LINK_WITH = $(COMMON_LINK_WITH) JS0SMT VBAIntegration
#endif

OS = AIX
LINK_WITH = $(COMMON_LINK_WITH) CATMainwin
SYS_LIBS = -lX11

OS = HP-UX
LINK_WITH = $(COMMON_LINK_WITH) CATMainwin

OS = SunOS
LINK_WITH = $(COMMON_LINK_WITH) CATMainwin

OS = IRIX
LINK_WITH = $(COMMON_LINK_WITH) CATMainwin
SYS_LIBS = -lX11

OS = Linux
LINK_WITH = $(COMMON_LINK_WITH) CATMainwin


