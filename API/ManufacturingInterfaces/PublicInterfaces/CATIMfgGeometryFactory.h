/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgGeometryFactory_H
#define CATIMfgGeometryFactory_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATILinkableObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgGeometryFactory;
#else
extern "C" const IID IID_CATIMfgGeometryFactory;
#endif

/**
* Interface to create a manufacturing geometry.
* <br><b>Role</b>: CATIMfgGeometryFactory has methods to create a
* manufacturing geometry and a manufacturing connector.
* The manufacturing geometry is used to refer a geometry of an external document
* such as a CATPart or a CATProduct. 
* The manufacturing connector is used to refer an object of an external document
* such as a CATPart or a CATProduct. This object may be a Design Feature.
* @see CATIMfgGeometryAccess
*/

class ExportedByMfgItfEnv CATIMfgGeometryFactory : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Creates a manufacturing geometry. 
* @param iGeometry
*   The geometry referred by the manufacturing geometry. 
*   <br><b>Legal values</b>: The geometry can be a
*   <dl>
*     <dt><tt>Surface type selecting object </tt>      
*     <dt><tt>Edge type selecting object  </tt>     
*     <dt><tt>Vertex type selecting object</tt>   
*     <dt><tt>Body feature</tt> 
*     <dt><tt>Sketch</tt>    
*   </dl>
*
* @param iProduct
*   The product referred by the manufacturing geometry.
* May be NULL_var if not in product context
*
* @param oManufacturingGeometry
*   The manufacturing geometry.
*/

    virtual HRESULT CreateGeometry (const CATILinkableObject_var &iGeometry, const CATBaseUnknown_var &iProduct,
                                    CATBaseUnknown_var &oManufacturingGeometry) = 0; 

/**
* Creates a manufacturing connector.
* @param iExternalObject
*   The external object referred by the manufacturing connector. 
*
* @param iProduct
*   The product referred by the manufacturing connector.
* May be NULL_var if not in product context
*
* @param oManufacturingConnector
*   The manufacturing connector.
*/

    virtual HRESULT CreateConnector (const CATILinkableObject_var &iExternalObject, const CATBaseUnknown_var &iProduct,
                                     CATBaseUnknown_var &oManufacturingConnector) = 0; 
};

CATDeclareHandler(CATIMfgGeometryFactory, CATBaseUnknown);

#endif


