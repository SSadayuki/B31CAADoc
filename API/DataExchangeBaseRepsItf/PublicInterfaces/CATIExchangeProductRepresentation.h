/* -*-c++-*- */

#ifndef CATIExchangeProductRepresentation_H
#define CATIExchangeProductRepresentation_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 24/01/03: ABM: Creation 
// 17/03/03: MAX: CAA Documentation 
// 01/04/03: MAX: Chgt de classe mere : CATIExchangeRepresentation -> CATBaseUnknown
// 
//===================================================================

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATListOfValCATIExchangeProduct.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeProductRepresentation;
#else
extern "C" const IID IID_CATIExchangeProductRepresentation ;
#endif

// String to be returned by implementations on method CATIExchangeRepresentation::GetRepresentationType
// and to give to CATIExchangeInputDocument::GetRepresentation
#define XCAD_PRODUCT_REPRESENTATION "ProductStructureRepresentation"


/**
 * Interface to exchange product representations.
 * <b>Role</b>: This interface is mainly dedicated to give access to root products in data exchange.
 * The product representation is the subset of a document to access to product structures or assemblies;
 * It is retrieved from a document.
 * <br>Available from CATIA V5R11.
 * @see CATIExchangeProduct, CATIExchangeProductInstance
*/ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeProductRepresentation: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the list of products making the representation.
 * There is generally one product in the representation except in some systems where a document may enclose several root products.
 * @param oProducts
 *				Get the list of root products.
 */
     virtual HRESULT GetRootProducts(CATLISTV(CATIExchangeProduct_var)& oProducts) = 0;

};
CATDeclareHandler(CATIExchangeProductRepresentation,CATBaseUnknown);

#endif
