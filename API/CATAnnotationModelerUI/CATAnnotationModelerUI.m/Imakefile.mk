
# gros-module CATAnnnotationModelerUI -> CATAnnotationModelerUI

BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH = JS0FM JS0GROUP \
            CATVisualization  CATViz  CATVisVRML  CATVisVRML2\
            CATApplicationFrame CATGviUtilities \
            CATGeometricObjects CATGeometricOperators \
            CATMathematics CATAdvancedMathematics \
            CATCdbEntity CATIAModelVisu \
            CATObjectModelerBase CATObjectModelerCATIA CATObjectSpecsModeler \
            CATMecModInterfaces \
            CATDraftingAnnotation1 CATDraftingInterfaces CATDfiUUID\
			CATInteractiveInterfaces \
            CATAnnotationModeler CATAnnotationModelerBase CATAnnotationInterfaces CATDraftingInfrastructure CATDraftingInfrastructureUI
         

INCLUDED_MODULES = CATAnnRep \
                   CATAnnVisu
