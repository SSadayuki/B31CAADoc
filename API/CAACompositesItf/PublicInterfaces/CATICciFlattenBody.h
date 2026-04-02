#ifndef CATICciFlattenBody_H
#define CATICciFlattenBody_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2015
//==============================================================================
//
// CATICciFlattenBody :
//   Interface to manage a FlattenBody.
//
//==============================================================================
// Usage Notes : Interface to manage a FlattenBody.
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciFlattenBody (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICciPhysicalEntity.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciFlattenBody;
#else
extern "C" const IID IID_CATICciFlattenBody;
#endif

/**
 * Interface to Flatten body.
 * <b>Role</b>: Allows to manage a Composites Flatten feature.
 */

class CATMathPoint;
class CATMathVector;

/**
* Categories of flatten.
* <b>Role</b>: Defines the different categories of the CATCciCategory in categorized mode of FlattenBody.
* @param EXTERNALCONTOUR	 External contours 
* @param INTERNALCONTOUR    Internal contours
* @param ROSETTE			 Flatten rosette 
* @param MARKERS			 markers 
* @param CUT				 cut 
* @param NOCATEGORY		 NoCategory 
*/
enum CATCciCategory 
{
		CATCciEXTERNALCONTOUR   =1 ,
        CATCciINTERNALCONTOUR   =2 ,
        CATCciROSETTE           =3 ,
        CATCciMARKERS           =4 ,
        CATCciCUT               =5 ,
        CATCciNOCATEGORY        =6
};


class ExportedByCAACompositesItf CATICciFlattenBody : public CATBaseUnknown
{
    CATDeclareInterface;
    
public :

	/** Gets the Reference Plane of Flatten Body.
	*	@param oPlane
	*	The Reference plane of flattened body.
	*/
	virtual HRESULT GetFlattenPlane(CATIMmiMechanicalFeature_var &ohIGeom) = 0; 

	/** Gets the Reference Point of Flatten Body.
	*	@param oPoint
	*	The Reference point on the reference plane of flattened body.
	* <br> Note: If there doesnt exists a point,it returns null.
	*/
	virtual HRESULT GetLocationPoint(CATIMmiMechanicalFeature_var &ohIGeom) = 0;

	/**
    * Gets the flattened rosette.
    * <br> Note: if the user has defined his own flatten geometry via GSD type features he should have added
    *  a domain with two curves to define the flatten rosette. If not return code will be E_FAIL.
    * @param oOrigin
    *  Origin of the flatten rosette.
    * @param oXAxis
    *  X axis of the flatten rosette.
    * @param oYAxis
    *  Y axis of the flatten rosette.
    */
    virtual HRESULT GetFlattenRosette(CATMathPoint& oOrigin, CATMathVector& oXAxis, CATMathVector& oYAxis) = 0;

	/** Gets draping direction of the flatten.
    * @param oDrapingDirectionNormalToPlane
    *  draping direction. 
    * @return
	*	1, if Drapping direction is normal to the plane else 0.
    */ 
	virtual HRESULT IsDrapingDirectionNormalToPlane(CATBoolean &oDrapingDirectionNormalToPlane) = 0 ;

	/**
    * Gets the Rotation type of flatten.
    * @param oType
    *    The Rotation type of flatten, either unfold or material roll.
	* <br> Note:
	*	<ul>
	*		<li> 1 : Material Roll
	*		<li> 2 : Unfold assembly
	*	</ul>
	*/
	virtual HRESULT GetFlattenRotation (CATCciRotation &oType) = 0;

	/**
    * Sets user flatten contour to the ply or cutpiece.
	* @param ihIFlatGeom
    *	The flatten geometry given by user.
	* @return 
	*	returns S_OK on success
	* <br> Note: Sets contour under NoCategory.
	* <br> Note: Check for flattenbody of the ply. If flatten body does not exist, it gets created.
	*	<ul>
	*		<li> It Removes existing flatten geometriess and sets user given Flatten geometry under flattenBody.
	*		<li> Classification of user flatten contour is not handled by this method.	
    *	</ul>
	*/
    virtual HRESULT SetUserFlattenGeometry(const CATIMmiMechanicalFeature_var &ihIFlatGeom) = 0;

	 /**
    * Gets the ply's flattened geometries.
    * @param iIncludeNoShowElements
	*	To get Hidden contours along with visible contours. 
	* @param oListFlattenContour
    *   The flatten geometry.
	* <br> Note: The list of flatten geometries.
    *    <ul>
    *      <li>If the flatten shape of the Ply corresponds to a composites flatten feature in a FlattenBody,
    *          the list will contain to the last version (if modified by a smooth feature for example) of each
    *          flatten contour.
    *      <li>If the flatten shape of the Ply corresponds to a user geometry defined by the user (e.g. a join)
    *          the list will only contain one element with n domains corresponding to the n flatten contours.
    *    </ul>
    */
    virtual HRESULT GetFlattenGeometries( CATLISTV(CATIMmiMechanicalFeature_var ) & oListFlattenElement, CATBoolean iIncludeNoShowElements = FALSE) = 0;

	/**
    * Gets the ply's flatten geometries under flattenBody by category.
    * @param oListFlattenContour
    *    The List will contain all geometries under required iCategory according to its visibility status.
    * @param iCategory
	*	The category under which Flatten geometries are to be obtained.
    * @param iIncludeNoShowElements
	*	To get Hidden contours along with visible contours. 
	*	<br> Note:
	*	<ul>
	*		<li> The default category is NOCATEGORY.
	*		<li> The default visibility status is FALSE.
	*	</ul>
    */
	virtual HRESULT GetFlattenGeometriesByCategory( CATLISTV(CATIMmiMechanicalFeature_var ) & oListFlattenElements,CATCciCategory iCategory = CATCciNOCATEGORY, CATBoolean iIncludeNoShowElements = FALSE) = 0;

  };

CATDeclareHandler(CATICciFlattenBody, CATBaseUnknown);

#endif
