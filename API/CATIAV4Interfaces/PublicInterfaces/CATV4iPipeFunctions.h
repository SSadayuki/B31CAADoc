//===================================================================
// COPYRIGHT Dassault Systemes 2009
//===================================================================
//
// CATV4iPipeFunctions.h
// Define various catgeo exposed APIs.
//
//===================================================================
// 
//  Usage notes:
//       These are Global Functions.
//
//===================================================================
//  May 2009  Creation: 
//  Added New APIs in April 2010.
//===================================================================

#ifndef  CATV4iPipeFunctions_h
#define  CATV4iPipeFunctions_h

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include <ExportedByCATV4iPipeInterface.h>

class CATV4iV4Element;

/**
 * Retrieves the origin of the connector.
 * @param iElement [in]
 *   The pointer to the V4 tubing connector.
 * @param oXori [out]
 *   The X,Y,Z coordinates of the origin of the connector.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iPibroc(const CATV4iV4Element* iElement, double *oXori , int &ier);

/**
 * Retrieves the connector end type.
 * <b>Role</b>: This method retrieves the end type (integer value) for the given connector element.
 * The correspondence between the integer value and the end type name is given in the PRJ file of the CATIA V4 Model.
 *
 * @param iElement [in]
 *   The pointer to the V4 tubing connector.
 * @param oTypext [out]
 *   The end type of the connector.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iPibrte(const CATV4iV4Element* iElement, int &oTypext, int &ier);

/**
 * Retrieves the parent connector for the given connector occurrence.
 * @param iElement [in]
 *   The pointer to the V4 tubing connector occurrence.
 * @param oElement [out]
 *   The pointer to the V4 tubing parent connector.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iGetConnectorLink(const CATV4iV4Element* iElement, CATV4iV4Element* &oElement, int &ier);

/**
 * Retrieves the parent pipe element for the given connector.
 * @param iElement [in]
 *   The pointer to the V4 tubing connector.
 * @param oElement [out]
 *   The pointer to the V4 tubing parent pipe element of the connector.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iGetPipingLink(const CATV4iV4Element* iElement, CATV4iV4Element* &oElement, int &ier);

/**
 * Retrieves the ditto element linked to the given connector occurrence.
 * @param iElement [in]
 *   The pointer to the V4 tubing connector occurrence.
 * @param oElement [out]
 *   The pointer to the V4 tubing ditto element linked to the connector occurrence.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iGetDittoLink(const CATV4iV4Element* iElement, CATV4iV4Element* &oElement, int &ier);

/**
 * Retrieves the canonical length for the given spline tube element.
 * @param iElement [in]
 *   The pointer to the V4 spline tube element.
 * @param oCanonLength [out]
 *   The canonical length of the V4 spline tube element.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iGetCanonLength(const CATV4iV4Element* iElement, double &oCanonLength, int &ier);

/**
 * Retrieves the connector/connector occurrence mechanically linked to the given connector/connector occurrence.
 * @param iElement [in]
 *   The pointer to the V4 tubing connector/connector occurrence.
 * @param oElement [out]
 *   The pointer to the V4 tubing connector/connector occurrence mechanically linked to the connector/connector occurrence.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iGetMechLink(const CATV4iV4Element* iElement, CATV4iV4Element* &oElement, int &ier);

/**
 * Retrieves the parent connector occurrence for the given connector occurrence.
 * @param iElement [in]
 *   The pointer to the V4 tubing connector occurrence.
 * @param oElement [out]
 *   The pointer to the V4 tubing parent connector occurrence.
 * @param ier [out]
 *   The error code.
 * @return
 *     <ul>
 *       <li> 0 if succeeded</li>
 *       <li> -1 otherwise</li>
 *     </ul>
 */
ExportedByCATV4iPipeInterface int CATV4iGetParentOCPLink(const CATV4iV4Element* iElement, CATV4iV4Element* &oElement, int &ier);


#endif

