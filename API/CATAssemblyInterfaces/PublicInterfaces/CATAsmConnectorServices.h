/* -*-c++-*- */
#ifndef CATAsmConnectorServices_H
#define CATAsmConnectorServices_H

// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h"
#include "CATAssemblyInterfaces.h"

class CATIProduct;
class CATIConnector;
class CATILinkableObject;
class CATIUnknownList;

/**
*   Global methods to create or search connectors
*/

/**
*   Creates a connector.
* @param iGeometry
*   The geometry to be referenced
* @param iInstanceComponent
*   The instance product associated to the geometry of "iGeometry".
*   It must be a descendant of the "iActiveComponent".
* @param iActiveComponent
*   The active component. This parameter is used to
*   identify the working document.
* @param iSearchType
*    The searching mode.
*    <br><b>Legal values</b>:
*    <br><tt>0</tt> = creates connector if not found
*    <br><tt>1</tt> = searches only existing connector
*    <br><tt>2</tt> = searches only published connector
* @param oConnector
*    The resulting connector.
* @param oCreation
*     Is it a creation?
*    <br><b>Legal values</b>:
*    <br><tt>0</tt> = No. The connector has been found,
*    <br><tt>1</tt> = Yes. The connector has been created.
* @param iResolutionMode
*    The resolution mode.
*    <br><b>Legal values</b>:
*    <br><tt>0</tt> = static resolution mode
*    <br><tt>1</tt> = dynamic resolution mode
*/
ExportedByCATAssemblyInterfaces HRESULT GetProductConnector( 
                              CATILinkableObject * iGeometry,
                              CATIProduct        * iInstanceComponent,
                              CATIProduct        * iActiveComponent,
                              int                  iSearchType,
                              CATIConnector*&      oConnector,
                              int           &      oCreation,
                              int                  iResolutionMode=0);

/**
 * @nodoc
 */
//   Finds the connectors referencing a geometry.
// @param iGeometry
//   The referenced geometry.
// @param iInstanceComponent
//   The instance product associated to the geometry of "iGeometry".
//   It must be a descendant of the "iActiveComponent".
// @param iActiveComponent
//   The active component. This parameter is used to
//   identify the working assembly level.
// @param ioCtorsLst
//    The list of connectors referencing iGeom. The connectors are searched in
//    the reference component of iInstanceComponent that belongs to the
//    reference product of iActiveProduct.
//    if ioCtorsLst is null when GetProductConnectors is called , a new list is
//    created and return.
//    if ioCtorsLst is not null, the connectors are added to the
//    list (*ioCtorsLst).
//    The added pointers are pointers of CATIConnector, eventhough the list
//    is a list of IUnknown.
ExportedByCATAssemblyInterfaces HRESULT GetProductConnectors(
                             CATILinkableObject * iGeom,
                             CATIProduct        * iLeafProduct,
                             CATIProduct        * iActiveProduct,
                             CATIUnknownList   ** ioCtorsLst);
#endif
