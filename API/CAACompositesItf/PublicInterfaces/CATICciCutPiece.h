//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciCutPiece :
//   Interface to manage a CutPiece.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciCutPiece (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================
#ifndef CATICciCutPiece_H
#define CATICciCutPiece_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATICciPhysicalEntity.h"
#include "CATISpecObject.h"
#include "CATIMaterialFeature.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICciFlattenBody.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciCutPiece;
#else
extern "C" const IID IID_CATICciCutPiece;
#endif

class CATMathAxis;
class CATMathPoint;
class CATMathVector;
class CATICciCompositesGeometry_var;


/**
 * Interface to CutPiece.
 * <b>Role</b>: Allows to manage a Composites Cut Piece feature.
 */
class ExportedByCAACompositesItf CATICciCutPiece : public CATICciPhysicalEntity
{
    CATDeclareInterface;
    
public :

    /**
    * Gets the reference shell and draping direction of the CutPiece.
    * @param oRefShell
    *    The specObject corresponding to the reference shell.
    * @param oDrapingDirection
    *    The draping direction as boolean.
    *    <ul>
    *      <li>FALSE when draping direction is opposite to the normal of the shell. 
    *      <li>TRUE when draping direction is equal to the normal of the shell. 
    *    </ul>
    */
    virtual HRESULT GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell,
									           CATBoolean & oDrapingDirection) = 0;

    /**
    * Gets the CutPiece's geometry i.e. its 3D contour(s).
    * @param oGeometry
    *    The 3D geometry.
    */
    virtual HRESULT GetGeometry(CATIMmiMechanicalFeature_var & oGeometry) = 0;
	
	/**
    * Gets CutPiece's exploded geometry.
    * @param oGeometry
    *    The exploded geometry.
    *    Gets NULL if the geometry is not available.
    */
    virtual HRESULT GetExplodedSurface(CATIMmiMechanicalFeature_var & oGeometry) = 0;

    /**
    * Gets cut-piece's composites geometry.
    * @param oGeometry
    *   The cut-piece's composites geometry.
    */
    virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) = 0;

    /**
    * Gets ply's shell corresponding to the highlight area.
    * @param oShell
    *    The highlight shell.
    *    Gets NULL if the shell is not stored i.e. not computed or removed by user.
    */
    virtual HRESULT GetHighlightShell (CATIMmiMechanicalFeature_var & oShell) = 0;

    /**
    * Creates cut-piece's shell corresponding to the highlight area.
    * <br> WARNING: this method modifies the part document.
    * @param oShell
    *    The created highlight shell.
    */
    virtual HRESULT CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell) = 0;

    /**
    * Removes previously created cut-piece's shell corresponding to the highlight area.
    * <br> WARNING: this method modifies the part document.
    */
    virtual HRESULT RemoveHighlightShell() = 0;

	//--------------------------------------------------------------------------------------------------
    // Flatten 
    //--------------------------------------------------------------------------------------------------

	/** Gets composites flattenbody under the CutPiece.
	* @param oFlattenBody
	* The flatten body.
	* <br> Note: if there exists a Flattenbody for the CutPiece, it returns the existing one 
	*	if No, it simply creates one and returns it.
	*/
	virtual HRESULT GetFlattenBody( CATICciFlattenBody_var &oFlattenBody ) = 0;

	/**
    * Creates the flatten.
	*  @param ihIPlaneSpec
    *     Plane MechanicalFeature to be passed.
	*  @param ihIPointSpec
    *	  Point MechanicalFeature if passed, should lie on the plane(ihIPlaneSpec).
	*  @param iDrappingdirection
	*	  Drapping direction. <br> 1 - value is aligned with draping direction as preferred value.
	*	<ul>
	*		<li> 0 : DrappingDirectionUnCheck.
	*		<li> 1 : DrappingDirectionNormalToPlane.
	*	</ul>	  
	*	@param imode
	*	  material roll or unfold direction - material roll is preferred mode(mostly used)
	*	<ul>	
	*		<li> 0 : material roll.
	*		<li> 1 : UnfoldAssembly.
	*	</ul>
	*	@param ohIFlatBU 
	*	  CATIMmiMechanicalFeature_var which is the composite flattening Feature.
	*  <br> It is a composites feature containing the generated Faltten rosette , Flatten contours. 
	*	<ul>	
	*		<li> Flatten rosettes can be access through CATICciFlatenBody::GetFlattenRosette API.
    *       <li> Flatten contour can be acces through CATICciFlattenBody::GetFlattenGeometries API.
	*  </ul>
	*	Note:
	*	<ul>
	*		<li> E_FAIL if no producibility defined on the CutPiece.
	*		<li> E_FAIL if point(ihIPointSpec) not lies on plane(ihIPlaneSpec).
	*	</ul>
	*	 Note:
	* <br> Creates Flatten Body if there doesnt exists one. 
	*  @see CATICciFlattenBody
    */
	virtual HRESULT CreateCompositesFlatten(const CATIMmiMechanicalFeature_var& ihIPlaneSpec, const CATIMmiMechanicalFeature_var& ihIPointSpec, 
		CATCciFlattenDrapingDirection iDrapingdirection, CATCciRotation  imode , CATIMmiMechanicalFeature_var& ohIFlatBU) = 0; 
	
	/**
    * Creates associative unfold feature of a CutPiece.
	*  @param ihIUnfoldSurface
    *     Unfolded surface on which Unfold feature gets created. ( GSD unfold feature - CATIGSMUnfold)
	*  @param ohIUnfold
	*     returns CATIMmiMechanicalFeature_var which is the Unfold feature.
	*  <br> It is a composites feature containing the generated Faltten rosette, Unfold contours.
	*  @see #CATIGSMUnfold
	* <br> Note: 
	*	<ul>
	*		<li> checks whether there exists a flatten feature for CutPiece
	*		<li> E_FAIL if there exists a Flatten Feature for that CutPiece.
	*	</ul>
	* <br> Note:
	*		Creates Flatten Body if there doesnt exists one. 
    */
	virtual HRESULT CreateCompositesUnfold(const CATIMmiMechanicalFeature_var &ihIUnfoldSurface,  CATIMmiMechanicalFeature_var &ohIUnfold) = 0;
	

    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
    
	/**
	* @deprecated V5R26 
	* Use @see #GetReferenceShell(CATIMmiMechanicalFeature_var&,CATBoolean&) method instead.
    * Gets the reference shell and draping direction of the CutPiece.
    * @param oRefShell
    *    The specObject corresponding to the reference shell.
    * @param oDrapingDirection
    *    The draping direction as boolean.
    *    <ul>
    *      <li>FALSE when draping direction is opposite to the normal of the shell. 
    *      <li>TRUE when draping direction is equal to the normal of the shell. 
    *    </ul>
    */
    virtual HRESULT GetReferenceShell(CATISpecObject_var & oRefShell,
									           CATBoolean & oDrapingDirection) = 0;

    /**
	* @deprecated V5R26 
	* Use @see #GetGeometry(CATIMmiMechanicalFeature_var&) method instead.
    * Gets the CutPiece's geometry i.e. its 3D contour(s).
    * @param oGeometry
    *    The 3D geometry.
    */
    virtual HRESULT GetGeometry(CATISpecObject_var & oGeometry) = 0;
	
	/**
	* @deprecated V5R26 
	* Use @see #GetExplodedSurface(CATIMmiMechanicalFeature_var&)  method instead.
    * Gets CutPiece's exploded geometry.
    * @param oGeometry
    *    The exploded geometry.
    *    Gets NULL if the geometry is not available.
    */
    virtual HRESULT GetExplodedSurface(CATISpecObject_var & oGeometry) = 0;

	/**
	* @deprecated V5R26 
	* Use @see  #GetHighlightShell(CATIMmiMechanicalFeature_var&)  method instead.
    * Gets ply's shell corresponding to the highlight area.
    * @param oShell
    *    The highlight shell.
    *    Gets NULL if the shell is not stored i.e. not computed or removed by user.
    */
    virtual HRESULT GetHighlightShell (CATISpecObject_var & oShell) = 0;

    /**
	* @deprecated V5R26 
	* Use @see #CreateHighlightShell(CATIMmiMechanicalFeature_var&)  method instead.
    * Creates cut-piece's shell corresponding to the highlight area.
    * <br> WARNING: this method modifies the part document.
    * @param oShell
    *    The created highlight shell.
    */
    virtual HRESULT CreateHighlightShell (CATISpecObject_var & oShell) = 0;


	/**
	*@deprecated V5R26 
	* Use @see #CreateCompositesFlatten, #CreateCompositesUnfold  method instead.
    * Creates the flatten.
    * @param imode 
	*	CATCciStandard or CATCciUnfold
	* @ohIFlatBU
    *	Created flatten.
	* @see CATICciFlattenBody#CreateFlatten
    */
	virtual HRESULT CreateFlatten(CATCciFlattenMode imode, CATBaseUnknown_var &ohIFlatBU )=0;

	/**
	*@deprecated V5R26 
	* Use @see CATICciFlattenBody#SetUserFlattenGeometry method instead.
    * Sets the flatten geometry of the CutPiece.
    * @param ihIFlatGeom
    * The flatten geometry.
	* @see CATICciFlattenBody#SetFlattenedGeometry
    */
	virtual HRESULT SetFlattenedGeometry( CATISpecObject_var ihIFlatGeom ) = 0;

	/**
	*@deprecated V5R26 
	* Use @href CATICciFlattenBody#GetFlattenRosette method instead.
    * Gets the flattened rosette of the CutPiece.
    * <br> Note: if the user has defined his own flatten geometry via GSD type features he should have added
    *  a domain with two curves to define the flatten rosette. If not return code will be E_FAIL.
    * @param oOrigin
    *  Origin of the flattened rosette
    * @param oXAxis
    *  X axis of the flattened rosette
    * @param oYAxis
    *  Y axis of the flattened rosette
    */
    virtual HRESULT GetFlattenedRosette(CATMathPoint& oOrigin, CATMathVector& oXAxis, CATMathVector& oYAxis) = 0;

	/**
	*@deprecated V5R26 
	* Use @href CATICciFlattenBody#GetFlattenGeometries method instead.
    * Gets the CutPiece's flattened geometries.
    * @param oListOfContours
    *    The list of flatten geometries.
    *    <ul>
    *      <li>If the flatten shape of the CutPiece corresponds to a composites flatten feature in a FlattenBody,
    *          the list will contain to the last version (if modified by a smooth feature for example) of each
    *          flatten contour.
    *      <li>If the flatten shape of the CutPiece corresponds to a user geometry defined by the user (e.g. a join)
    *          the list will only contain one element with n domains corresponding to the n flatten contours.
    *    </ul>
    */
    virtual HRESULT GetFlattenedGeometries(CATLISTV(CATISpecObject_var) &oListOfContours) = 0;
};

CATDeclareHandler(CATICciCutPiece, CATICciPhysicalEntity);

#endif
