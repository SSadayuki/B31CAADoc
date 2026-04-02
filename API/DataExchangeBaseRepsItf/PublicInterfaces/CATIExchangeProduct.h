/* -*-c++-*- */

#ifndef CATIExchangeProduct_H
#define CATIExchangeProduct_H

// COPYRIGHT 2002-2003 DASSAULT SYSTEMES PROVENCE

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 15/01/03: ABM: Update for XCAD
// 17/03/03: MAX: CAA Documentation 
// 02/12/03: JHH: Eradication des long
// 
//===================================================================

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATListOfValCATIExchangeProductInstance.h"
#include "CATIExchangeInputDocument.h"
#include "CATExchangeTypeDefs.h"
#include "CATDataType.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeProduct;
#else
extern "C" const IID IID_CATIExchangeProduct ;
#endif

/**
 * Interface to exchange products.
 * <b>Role</b>: The product is the part of a product structure representation describing the structure of one product; 
 * This interface is used to represent root products as well as sub-products (references).
 * A product is either a document, that will be used for the further queries, or a list of product instances
 * that are the "components" of this product.
 * <br>Available from CATIA V5R11.
 * @see CATIExchangeProductRepresentation, CATIExchangeProductInstance
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeProduct: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Product source types.
 * <br><b>Legal values</b>:
 * <br>						Made,
 * <br>						Bought,
 * <br>						Unknown.
 */
	 enum SourceTypes{Made, Bought, Unknown};

/**
 * Retrieves the document enclosed in the product (Product document or Part document).
 * There may be no document: in such case, the browse of the product structure will continue thru <tt>GetInstanceList</tt>.
 * @param oDocument
 *				Get the input document.
 */
     virtual HRESULT GetDocument(CATIExchangeInputDocument_var& oDocument) = 0;

/**
 * Retrieves the filepath associated to the product when it is a document.
 * Generally used on external references when <tt>GetDocument</tt> cannot return a
 * @href CATIExchangeInputDocument because the format is unsupported.
 * @param oDocumentFilePath
 *				Get the document filepath.
 */
     virtual HRESULT GetFilePath(FilePath& oDocumentFilePath) = 0;

/**
 * Retrieves the UID associated to the product (shortcut to UID of the product).
 * The UID is used as an identifier of the product; it is a non persistent ID, which lifecycle is mapped 
 * on the document lifecycle. This UID is used to detect products already converted during the transfer.
 * @param oProductUID
 *				Get the product UID.
 */
     virtual HRESULT GetUID(CATLONG32& oProductUID) = 0;

/**
 * Retrieves the list of product instances referrenced by this product (its components).
 * @param oInstances
 *				Get the list of product instances.
 */
     virtual HRESULT GetInstanceList(CATLISTV(CATIExchangeProductInstance_var)& oInstances) = 0;

/**
 * Retrieves the product's attributes.
 * @param oName
 *				Product identifier, or part number.
 * @param oRevision
 *				Product revision.
 * @param oDefinition
 *				Product definition.
 * @param oDescription
 *				Product description.
 * @param oNomenclature
 *				Nomenclature.
 * @param oProductSource
 *				See <tt>SourceTypes</tt> (Made, Bought, or unknown).
 */
     virtual HRESULT GetProductAttributes(CATUnicodeString& oName, CATUnicodeString& oRevision, 
                                          CATUnicodeString& oDefinition, CATUnicodeString& oDescription, 
                                          CATUnicodeString& oNomenclature, SourceTypes& oProductSource) = 0;

/**
 * Retrieves the geometric properties of the product.
 * @param oCentroid
 *				Get the product's centroid.
 * @param oVolume
 *				Get the product's volume.
 * @param oWetArea
 *				Get the product's wet area.
 * @param oTolerance
 *				Get the tolerance used to compute wet area in the product.
 */
     virtual HRESULT GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance) = 0;

};
CATDeclareHandler(CATIExchangeProduct,CATBaseUnknown);

#endif
