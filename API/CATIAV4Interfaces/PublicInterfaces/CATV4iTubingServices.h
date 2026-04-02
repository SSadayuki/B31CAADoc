/*-*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */
#ifndef CATV4iTubingServices_h
#define CATV4iTubingService_h




#include <ExportedByCATV4iTubingServices.h>
#include  "CATUnicodeString.h"

class CATV4iV4Element;
class CATListPtrCATV4iV4Element;

/**
 * Reads the type of tubing element
 * @param iV4Element [in]
 *   The V4 element
 * @return
 *   The type of tubing element
 *   <br><b>Legal values:</b>
 *   <ul><li>-1 : the element is not a tubing element</li>
 *       <li> 1 : the element is a straight tube</li>
 *       <li> 2 : the element is an elbow tube</li>
 *       <li> 3 : the element is a spline tube</li>
 *       <li> 4 : the element is a combined tube</li>
 *       <li> 5 : the element is a mitered elbow</li>
 *       <li> 6 : the element is a tubing line</li>
 *       <li> 7 : the element is a ditto</li></ul>
 */
ExportedByCATV4iTubingServices
int CATV4iGetTubType  (const CATV4iV4Element* iV4Element);

/**
 * Reads the geometry of a tube
 * @param iV4Element [in]
 *   The V4 element
 * @param oDiameter [out]
 *   The diameter of the tube
 * @param oExtremity1 [out]
 *   The coordinates of one end of the tube
 * @param oExtremity2 [out]
 *   The coordinates of the other end of the tube
 * @return
 *   The type of tubing element
 *   <br><b>Legal values:</b>
 *   <ul><li> 0 : the function was OK</li>
 *       <li>-1 : the function was KO</li></ul>
 */
ExportedByCATV4iTubingServices
int  CATV4iGetTubGeoData (const CATV4iV4Element* iV4Element, double &oDiameter, double oExtremity1[3], 
													double oExtremity2[3]);

/**
 * Reads the geometry of a tube elbow
 * @param iV4Element [in]
 *   The V4 element
 * @param oDiameter [out]
 *   The diameter of the elbow
 * @param oBendRadius [out]
 *   The bend radius of the elbow
 * @param oAngle [out]
 *   The angle of the elbow
 * @param oExtremity1 [out]
 *   The coordinates of one end of the elbow
 * @param oExtremity2 [out]
 *   The coordinates of the other end of the elbow
 * @param oCenter [out]
 *   The coordinates of the center of the elbow
 * @param oUdir [out]
 *   The direction normal to oExtremity1
 * @param oVdir [out]
 *   The direction normal to oExtremity2
 * @return
 *   Return code
 *   <br><b>Legal values:</b>
 *   <ul><li> 0 : the function was OK</li>
 *       <li>-1 : the function was KO</li></ul>
 */
ExportedByCATV4iTubingServices
int  CATV4iGetElbowTubeData (const CATV4iV4Element* iV4Element, double &oDiameter, double &oBendRadius, 
														 double &oAngle, double oExtremity1[3], double oExtremity2[3], 
														 double oCenter[3], double oUdir[3], double oVdir[3]);

/**
 * Reads the connectors of a tube
 * @param iV4Element [in]
 *   The V4 element
 * @param iConnectorType [in]
 *   The desired connector type
 *   <br><b>Legal values:</b>
 *   <ul><li>0 : all connectors</li>
 *   <ul><li>1 : extremity connectors</li>
 *       <li>2 : branch connectors</li></ul>
 * @param oConnectorList [out]
 *   The list of connectors
 * @return
 *   Return code
 *   <br><b>Legal values:</b>
 *   <ul><li> 0 : the function was OK</li>
 *       <li>-1 : the function was KO</li></ul>
 */
ExportedByCATV4iTubingServices
int  CATV4iGetTubConnectors (const CATV4iV4Element* iV4Element, int &iConnectorType, CATListPtrCATV4iV4Element &oConnectorList);

/**
 * Reads the combined tube for an element
 * @param iV4Element [in]
 *   The V4 element
 * @return
 *   The combined tube
 */
ExportedByCATV4iTubingServices
CATV4iV4Element* CATV4iGetCombinedTub (const CATV4iV4Element* iV4Element);

/**
 * Reads the diameter of a tubing line
 * @param iV4Element [in]
 *   The V4 element
 * @param oDiameter [out]
 *   The diameter of the tubing line
 * @return
 *   Return code
 *   <br><b>Legal values:</b>
 *   <ul><li> 0 : the function was OK</li>
 *       <li>-1 : the function was KO</li></ul>
 */
ExportedByCATV4iTubingServices
int  CATV4iGetTubLineOD (const CATV4iV4Element* iV4Element, double &oDiameter);  

/**
 * Reads the name of a tubing line
 * @param iV4Element [in]
 *   The V4 element
 * @return
 *   Name of the tubing line
 */
ExportedByCATV4iTubingServices
CATUnicodeString CATV4iGetTubLineName (const CATV4iV4Element* iV4Element);  

#endif
