#ifdef LOCAL_DEFINITION_FOR_IID
LINK_WITH_FOR_IID = \
CATDfiUUID \
CATVisUUID \
DraftingFeatureUUID \
DraftingUIUUID \
ObjectSpecsModelerUUID \
SystemUUID
#else
LINK_WITH_FOR_IID =
#endif
#=====================================================================================
#                                     CNEXT - CXRn
#                          COPYRIGHT DASSAULT SYSTEMES 1999
#-------------------------------------------------------------------------------------
# FILENAME    :    gros-module CATDuiPropTB
# LOCATION    :    DraftingUI
# AUTHOR      :    fgx
# BUT         :    Toolbars de proprietes Drafting
# DATE        :    04.11.1999
#-------------------------------------------------------------------------------------
# DESCRIPTION :    
#-------------------------------------------------------------------------------------
# COMMENTS    :    
#-------------------------------------------------------------------------------------
# MODIFICATIONS     date  		user        purpose
#    HISTORY        ----  		----        -------
#      00           04.11.1999 	fgx         Creation pour sortir IDCTOOLBARS.m de CATDuiWkbDrw.m
#      01           12.01.2000  pdd			Nouvelle factory => DrwContainer => CATSktEditorToolbox   
#      02           13.11.2000  ppd			Split DraftingFeature => CATAnnotationModeler/CATAnnotationModelerUI.
#=====================================================================================

BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES = IDCTOOLBARS
 
LINK_WITH=$(LINK_WITH_FOR_IID) \
          JS0GROUP \
          JS0FM \
          DI0PANV2 \
          CD0AUTO \
          CD0AUTOSTART \
          CATMathematics  \
          CATApplicationFrame \
          CATInteractiveInterfaces \
          CATLiteralFeatures \
          CATObjectSpecsModeler \
          CATObjectModelerBase \
          CATDialogEngine \
          CATIAApplicationFrame \
          CATVisualization \
          CATViz  \
          DraftingBaseInfrastructureUIUUID \
          CATDraftingInfrastructure \
          CATDraftingInfrastructureUI \
          CATDraftingInterfaces \
          CATSketcherInterfaces \
          CATSktAssistant \
          CATAnnotationModeler \
          CATAnnotationModelerBase \
          CATAnnotationInterfaces \
          CATDraftingFeature \
          CATDraftingAnnotation1 \
          CATFecAutoSave \
          CATDraftingBaseInfra \
          CATDraftingBaseInfraUI \
          CATDraftingUI \
          CATAutoItf \
          CATDraftingBaseUI \
          DibModelerServices \


