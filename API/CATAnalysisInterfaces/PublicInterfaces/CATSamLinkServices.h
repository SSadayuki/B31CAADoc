// COPYRIGHT Dassault Systemes 2003
#ifndef CATSamLinkServices_H_ 
#define CATSamLinkServices_H_ 

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

#include "CATAnalysisToolkit.h"

#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATILinkableObject.h"
#include "CATIProduct.h"
#include "CATISamAnalysisManager.h"
#include "CATDocument.h"

class CATDocument;
class CATPathElement;

class ExportedByCATAnalysisToolkit CATSamLinkServices
{
  public:
    

    /*
		*Tells if an object can be selected from a specific analysis cocument
		*@ param iFromDoc the contextual Analysis document
		*@ param iPath the path of selected element
		*@ param iSelected the selected element
    *@ return TRUE if selection is valid
		*/
    static 	CATBoolean			CanBeSelected			(CATDocument * iFromDoc, CATPathElement* iPath, CATBaseUnknown_var &iSelected);

    /*
		*Returns the contextual positioning instance product for a selected element
		*@ param iFromDoc the contextual Analysis document
		*@ param iPath the path of selected element
		*@ param iSelected the selected element
		*/
    static 	CATIProduct_var GetInstanceProduct(CATDocument * iFromDoc, CATPathElement* iPath, CATBaseUnknown_var &iSelected);


    /*
		*Returns All the analysis that can possibly analyse the product
		*@ param iAnalysisDoc the starting Analysis document
		*@ param iInstProduct the positioning instance product
		*@ param oAnalysisDocs list of Analysis
		*@ param oLocalReferences list of references product/part of iInstProduct in oAnalysisDocs context
		*/
		static  HRESULT GetAllProductsAndAnalysis(CATDocument* iAnalysisDoc,
																							CATIProduct_var iInstProduct,
																							CATLISTP(CATDocument) &oAnalysisDocs,
																							CATLISTV(CATBaseUnknown_var) & oLocalReferences);


		/*
		*Returns all instances that have a valid Analysis for assembly as active shape representation
		*@ param iAnalysisDoc the starting Analysis document
		*@ param oListProd list of Product instances
		*@ param oListAnalysis list of coresponding Rep
		*@ param oListShape list of coresponding Shapes
		*/
		static void GetDocumentAssemblyList(CATDocument* iAnalysisDoc,
																			 CATLISTV(CATBaseUnknown_var) & oListProd,
																			 CATLISTP(CATDocument) & oListAnalysis,
																			 CATLISTV(CATUnicodeString) & oListShape);
		

		/*
		*tests the validity of the document for assembly use
		*@ param iAdoc the analysis document to test
		*@ param iProd the instance product that agregates the document
		*@ iAdoc must have only one link to geometrie and products are not supported
		*@ if iProd is not Null, test instance/reference is performed
		*/
		static CATBoolean IsDocAllowedForAssembly(CATDocument* iAdoc,CATIProduct_var &iProd);

	private:

		static void GetManager(CATDocument* iDocument, CATISamAnalysisManager_var& oManager);
		static HRESULT GetAssemblyList(CATDocument* iAnalysisDoc,
															 CATLISTV(CATBaseUnknown_var) & oListProd,
															 CATLISTP(CATDocument) & oListAnalysis);

    /*
		*Returns the right instance in an analysis context
		*@ param iOldInstProduct an instance of the searched product
		*@ param iAnalysisDoc the analysis contxt in which the instance must be searched
		*@ param oNEwInstProduct the found instance
		*/
		static void GetNewInstance(CATIProduct_var iOldInstProduct,CATDocument* iAnalysisDoc,CATIProduct_var & oNEwInstProduct);

    /*
		*Returns the first product and analysis found in a path
		*@ param iPath the path of selected element
		*@ param iSelected the selected element
		*@ param oProduct the first product
		*@ param oAnalysisDoc the first analysis document
		*/
		static	void GetFirstProductAndAnalysis(CATPathElement* iPath, CATBaseUnknown_var &iSelected,
																						CATIProduct_var & oProduct, CATDocument* &oAnalysisDoc);


    /*
		*Returns the analysis analysing the product
		*@ param iAnalysisDoc the starting Analysis document
		*@ param iInstProduct the positioning instance product
		*@ param oAnalysisDoc the last analysis analysing this product
		*@ param oLocalReference the reference product of iInstProduct in oAnalysisDoc context
		*/
		static	HRESULT GetLocalProductAndAnalysis(CATDocument* iAnalysisDoc,
																						CATIProduct_var iInstProduct,
																						CATDocument* &oAnalysisDoc,
																						CATIProduct_var & oLocalReference);

		static CATBoolean CanBeSelected ( CATDocument * iFromDoc,
																			CATPathElement* iPath,
																			CATBaseUnknown_var &iSelected,
																			CATIProduct_var & oProduct);


};


#endif
