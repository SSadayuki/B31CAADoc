#ifndef CATGetBRepFromMechFeature_H
#define CATGetBRepFromMechFeature_H

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMechanicalModeler.h"

#include "CATBaseUnknown.h"

class CATIGeometricalElement;
class CATIBRepAccess;


/**
* Creates a selecting object.
* <br>
* <b>Role</b>: For a geometrical feature corresponding to a canonic feature ( point, line, plane, surface with one planar face, ..),
* this method creates a selecting object (vertex, linear edge, planar face) on the unique cell of same dimension as the geometrical feature. 
* <br> If a selecting object is created, S_OK is returned, E_FAIL otherwise.
* <br> For instance, E_FAIL is returned in case of geometrical feature generating more that one cell or for a non planar surface.
* @param iGeometricalElement
*    The geometrical feature.
* @param oBRepAccess
*    The selecting object.
* @param oDimension
*    The dimension of the cell associated with the selecting object.
*    <br><b>Legal values</b>:
*    <br><tt>0</tt>  : point
*    <br><tt>1</tt>  : line
*    <br><tt>2</tt>  : plane
*    <br><tt>-1</tt> : no selecting object was created
*/
ExportedByCATMechanicalModeler HRESULT CATMmrGetCanonicBRepFromGeometricalElement 
                                                    (const CATIGeometricalElement*  iGeometricalElement,
                                                     CATIBRepAccess** oBRepAccess,
                                                     int* oDimension);

#endif
