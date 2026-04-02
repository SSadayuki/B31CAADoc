#ifndef CATICciPly_H
#define CATICciPly_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICciPly :
//   Interface to manage a ply.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciPly (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"
#include "CATICciPhysicalEntity.h"
#include "CATISpecObject.h"
#include "CATIMaterialFeature.h"
#include "CATICciTapesGroup.h"
#include "CATICciCutPiecesGroup.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICciFlattenBody.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciPly;
#else
extern "C" const IID IID_CATICciPly;
#endif


class CATMathPoint;
class CATMathVector;
class CATICciCompositesGeometry_var;


/**
 * Interface to Ply.
 * <b>Role</b>: Allows to manage a Composites ply feature.
 */
class ExportedByCAACompositesItf CATICciPly : public CATICciPhysicalEntity
{
    CATDeclareInterface;
    
public :
    
    /**
    * Gets the reference shell and draping direction of the ply.
    * @param oRefShell
    *    The Object corresponding to the reference shell.
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
    * Gets the ply's geometry i.e. its 3D contour(s).
    * @param oGeometry
    * The 3D geometry.
    */
    virtual HRESULT GetGeometry(CATIMmiMechanicalFeature_var & oGeometry) = 0;

    /**
    * Retrieves ply's shell corresponding to the highlight area.
    * @param oShell
    *    The highlight shell.
    *    Gets NULL if the shell is not stored i.e. not computed or removed by user.
    */
    virtual HRESULT GetHighlightShell (CATIMmiMechanicalFeature_var & oShell) = 0;

    /**
    * Creates (or retrieves)ply's shell corresponding to the highlight area.
    * <br> WARNING: This method modifies the part document.
    * @param oShell
    *    The created or retrieved highlight shell.
    */
    virtual HRESULT CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell) = 0;

    /**
    * Removes previous ply's shell corresponding to the highlight area.
    * <br> WARNING: this method modifies the part document.
    */
    virtual HRESULT RemoveHighlightShell() = 0;

    /**
    * Gets ply's exploded surface (result of the ply exploder).
    * @param oGeometry
    *    The exploded surface.
    *    Gets NULL if the shell is not available
    */
    virtual HRESULT GetExplodedSurface(CATIMmiMechanicalFeature_var & oGeometry) = 0;

    /**
    * Gets ply's composites geometry.
    * @param oGeometry
    *   The ply's composites geometry.
    */
    virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) = 0;

    /**
    * Removes all eng. or man. contours of the ply.
    * (i.e. all contours under current composites geometry node)
    */
    virtual HRESULT RemoveContours () = 0;

    /**
    * Gets the tape group under the ply.
    * @param oTapeGroup
    * The tape group.
    */
    virtual HRESULT GetTapesGroup( CATICciTapesGroup_var & oTapeGroup) = 0;

    /**
    * Gets the cut-piece group under the ply.
    * @param oTapeGroup
    * The tape group.
    */
    virtual HRESULT GetCutPiecesGroup( CATICciCutPiecesGroup_var & oCutPiecesGroup) = 0;  
    
   /** Sets draping direction on the ply. 
   * @param iDrapingDirection
   *  draping direction. 
   * <br> S_OK        drapping direction setting OK. 
   * <br>E_INVALIDARG drapping direction could not be setted because it is lock from PliesGroup father. 
   * <br>E_FAIL       error.
   */ 
	virtual HRESULT SetDrapingDirection(CATBoolean iDrapingDirection) = 0 ; 

	//--------------------------------------------------------------------------------------------------
    // Flatten 
    //--------------------------------------------------------------------------------------------------

	/** Gets composites flattenbody under the ply.
	* @param ohIFlattenBody
	* The flatten body.
	* <br> Note: if there exists a Flattenbody for the ply then it returns the existing one 
	*	if No, it simply creates one and returns it.
	*/
	virtual HRESULT GetFlattenBody( CATICciFlattenBody_var &ohIFlattenBody ) = 0;

	/**
    * Creates the flatten.
	*  @param ihIPlaneSpec
    *     Plane MechanicalFeature to be passed.
	*  @param ihIPointSpec
    *	  Point MechanicalFeature if passed,should lie on the plane(ihIPlaneSpec).
	*  @param iDrappingdirection
	*	  Drapping direction, 1 - value is aligned with draping direction as preferred value.
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
	*		<li> Flatten rosettes can be access through CATICciFlatenBody::GetFlattenRosette API
    *       <li> Flatten contour can be acces through CATICciFlattenBody::GetFlattenGeometries API
	*  </ul>
	*	<br> Note:
	*	<ul>
	*		<li> E_FAIL if no producibility defined on the Ply.
	*		<li> E_FAIL if point(ihIPointSpec) not lies on plane(ihIPlaneSpec).
	*	</ul>
	*	<br> Note:
	*			Creates Flatten Body if there doesnt exists one. 
	*  @see CATICciFlattenBody
    */
	virtual HRESULT CreateCompositesFlatten(const CATIMmiMechanicalFeature_var& ihIPlaneSpec, const CATIMmiMechanicalFeature_var& ihIPointSpec, 
		CATCciFlattenDrapingDirection iDrapingdirection, CATCciRotation  imode , CATIMmiMechanicalFeature_var& ohIFlatFeat) = 0; 

	/**
    * Creates associative unfold feature of a ply.
	*  @param ihIUnfoldSurface
    *     Unfolded surface on which Unfold feature gets created. ( GSD unfold feature - CATIGSMUnfold)
	*  @param ohIUnfold
	*     returns CATIMmiMechanicalFeature_var which is the Unfold feature.
	*  <br> It is a composites feature containing the generated Faltten rosette, Unfold contours.
	* <br> Note: 
	*	<ul>
	*		<li> checks whether there exists a flatten feature for ply.
	*		<li> E_FAIL if there exists a Flatten Feature for that ply.
	*	</ul>
	* <br> Note: <br>
	*		Creates Flatten Body if there doesnt exists one. 
	*  @see #CATIGSMUnfold
    */
	virtual HRESULT CreateCompositesUnfold(const CATIMmiMechanicalFeature_var &ihIUnfoldSurface,  CATIMmiMechanicalFeature_var &ohIUnfold) = 0;

 

    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
    
	/**
	* @deprecated V5R26 
	* Use @see #GetGeometry(CATIMmiMechanicalFeature_var&) method instead.
    * Gets the ply's geometry i.e. its 3D contour(s).
    * @param oGeometry
    * The 3D geometry.
    */
    virtual HRESULT GetGeometry(CATISpecObject_var & oGeometry) = 0;

    /**
	* @deprecated V5R26
	* Use @see #GetReferenceShell(CATIMmiMechanicalFeature_var&,CATBoolean&) method instead.
    * Gets the reference shell and draping direction of the ply.
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
	* Use @see #GetHighlightShell(CATIMmiMechanicalFeature_var&) method instead.
    * Retrieves ply's shell corresponding to the highlight area.
    * @param oShell
    *    The highlight shell.
    *    Gets NULL if the shell is not stored i.e. not computed or removed by user.
    */
    virtual HRESULT GetHighlightShell (CATISpecObject_var & oShell) = 0;
	
	 /**
	* @deprecated V5R26
	* Use @see #CreateHighlightShell(CATIMmiMechanicalFeature_var&) method instead.
    * Creates (or retrieves)ply's shell corresponding to the highlight area.
    * <br> WARNING: This method modifies the part document.
    * @param oShell
    *    The created or retrieved highlight shell.
    */
    virtual HRESULT CreateHighlightShell (CATISpecObject_var & oShell) = 0;
	
    /**
	* @deprecated V5R26
	* Use @see #GetExplodedSurface(CATIMmiMechanicalFeature_var&) method instead.
    * Gets ply's exploded surface (result of the ply exploder).
    * @param oGeometry
    *    The exploded surface.
    *    Gets NULL if the shell is not available
    */
    virtual HRESULT GetExplodedSurface(CATISpecObject_var & oGeometry) = 0;

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
    virtual HRESULT CreateFlatten (CATCciFlattenMode imode, CATBaseUnknown_var &ohIFlatBU )=0; 
	
    /**
	*@deprecated V5R26 
	* Use @see CATICciFlattenBody#SetUserFlattenGeometry method instead.
    * Sets the flatten geometry of the ply.
    * @param ihIFlatGeom
    * The flatten geometry.
	* @see CATICciFlattenBody#SetFlattenedGeometry
    */
    virtual HRESULT SetFlattenedGeometry( CATISpecObject_var ihIFlatGeom ) = 0;

	/**
	*@deprecated V5R26 
	* Use @href CATICciFlattenBody#GetFlattenGeometries method instead.
    * Gets the ply's flattened geometries.
    * @param oListOfContours
    *    The list of flatten geometries.
    *    <ul>
    *      <li>If the flatten shape of the Ply corresponds to a composites flatten feature in a FlattenBody,
    *          the list will contain to the last version (if modified by a smooth feature for example) of each
    *          flatten contour.
    *      <li>If the flatten shape of the Ply corresponds to a user geometry defined by the user (e.g. a join)
    *          the list will only contain one element with n domains corresponding to the n flatten contours.
    *    </ul>
    */
    virtual HRESULT GetFlattenedGeometries(CATLISTV(CATISpecObject_var) &oListOfContours) = 0;

    /**
	*@deprecated V5R26 
	* Use @href CATICciFlattenBody#GetFlattenRosette method instead.
    * Gets the flattened rosette of the ply.
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
	* AddFlattenContour of flatten concerns user Flatten geometries added in CATICciFlattenBody. 
	* <br> Former API, allow access to generated composites design result for flatten 
	* which is not a secure methodology for the data consistancy. 
	* <br> From now on , Flatten classification allows the user to interactively manage what is the wished Flatten Result for OUTER contour , Rosette etc ... 
	* @see CATICciFlattenBody#SetUserFlattenGeometry method to create user defined flatten.
	* Adds the new contour(ihContour) as flatten contour to the flatten feature. 	
    * If multiple contours need to be added then the method has to be called multiple times.
    */
    virtual HRESULT AddFlattenContour(const CATISpecObject_var &ihContour) = 0;

    /**
	*@deprecated V5R26
	* DeleteFlattenContour of flatten concerns user Flatten geometries added in CATICciFlattenBody. 
	* <br> Former API, allow access to generated composites design result for flatten 
	* which is not a secure methodology for the data consistancy. 
	* <br> From now on , Flatten classification allows the user to interactively manage what is the wished Flatten Result for OUTER contour , Rosette etc ... 
	* @see CATICciFlattenBody#SetUserFlattenGeometry method to create user defined flatten.
    * Deletes the existing contour(ihContour) of the flatten feature. 	
    * If multiple contours need to be deleted then the method has to be called multiple times.
    */
    virtual HRESULT DeleteFlattenContour(const CATISpecObject_var &ihContour) = 0;	

    /**
	*@deprecated V5R26
	* ReplaceFlattenContour of flatten concerns user Flatten geometries added in CATICciFlattenBody. 
	* <br> Former API, allow access to generated composites design result for flatten 
	* which is not a secure methodology for the data consistancy.
	* <br> From now on , Flatten classification allows the user to interactively manage what is the wished Flatten Result for OUTER contour , Rosette etc ... 
	* @see CATICciFlattenBody#SetUserFlattenGeometry method to create user defined flatten.
    * Replaces the existing contour(ihOldContour) of flatten feature with new contour(ihNewContour).  
    * ihOldContour will be identified among the contours of flatten feature and will be deleted.
    * Then ihNewContour will be added flatten contour of the feature.  
    */
    virtual HRESULT ReplaceFlattenContour(const CATISpecObject_var ihOldContour,const CATISpecObject_var ihNewContour) = 0;

    /**
	*@deprecated V5R26
	* ReplaceFlattenRosette of flatten concerns user Flatten geometries added in CATICciFlattenBody. 
	* <br> Former API, allow access to generated composites design result for flatten 
	* which is not a secure methodology for the data consistancy. 
	* <br> From now on , Flatten classification allows the user to interactively manage what is the wished Flatten Result for OUTER contour , Rosette etc ... 
	* @see CATICciFlattenBody#SetUserFlattenGeometry method to create user defined flatten.
    * Replaces the existing rosette of the flatten feature with the input rosette(ihRosette).
    * Previously existing rosette will be removed (not deleted) from the feature. 		
    */
    virtual HRESULT ReplaceFlattenRosette(const CATISpecObject_var ihRosette ) = 0;


};

CATDeclareHandler(CATICciPly, CATICciPhysicalEntity);

#endif
