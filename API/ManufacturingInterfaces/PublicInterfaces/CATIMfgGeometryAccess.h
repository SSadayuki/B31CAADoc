/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgGeometryAccess_H
#define CATIMfgGeometryAccess_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATGeometry.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgGeometryAccess;
#else
extern "C" const IID IID_CATIMfgGeometryAccess;
#endif

/**
* Interface to retrieve geometric elements from a manufacturing geometry.
* <br><b>Role</b>: CATIMfgGeometryAccess has methods to retrieve geometric elements
* from a manufacturing geometry.
*/

class ExportedByMfgItfEnv CATIMfgGeometryAccess : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Retrieves the geometric elements from the manufacturing geometry. 
* @param iAllGeometricElements
*   Specifies if all geometric elements must be retrieved.
*   <br><b>Legal values</b>: The parameter can be
*   <dl>
*     <dt><tt>0</tt>   <dd>Only geometric elements on the visible space are retrieved
*     <dt><tt>1</tt>   <dd>All geometric elements are retrieved
*   </dl>
*
* @param iDuplicate
*   Specifies if the geometric elements must be duplicated
*   <br><b>Legal values</b>: The parameter can be
*   <dl>
*     <dt><tt>0</tt>   <dd>Geometric elements are duplicated only if necessary (in a product context)  
*     <dt><tt>1</tt>   <dd>Geometric elements are duplicated
*   </dl>
*
* @param oGeometricElements
*   The geometric elements.
*/

    virtual HRESULT GetGeometricElements (CATLISTP(CATGeometry) &oGeometricElements, int iAllGeometricElements = 0, int iDuplicate = 0) = 0; 

/**
* Retrieves the geometric elements from the manufacturing geometry. 
* @param oGeometry
*   The geometric element.
* @param oProduct
*   The associated product.
*/

    virtual HRESULT GetGeometricReferences (CATBaseUnknown_var& oGeometry, CATBaseUnknown_var& oProduct) = 0; 

	/**
* Retrieves the status of the manufacturing geometry with respect to pointed geometric elements. 
* @param oStatus
*   <dl>
*     <dt><tt>0</tt>   <dd>Geometric elements from manufacturing geometry are not found
*     <dt><tt>1</tt>   <dd>Manufacturing geometry is up to date with respect to geometric elements
*     <dt><tt>2</tt>   <dd>Manufacturing geometry is not up to date with respect to geometric elements
*   </dl>
*/

    virtual HRESULT GetStatus(int &oStatus) = 0; 

};

CATDeclareHandler(CATIMfgGeometryAccess, CATBaseUnknown);

#endif


