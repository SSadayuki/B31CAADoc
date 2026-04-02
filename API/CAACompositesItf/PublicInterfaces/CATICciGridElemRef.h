// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATICciGridElemRef.h
//		Interface to manage a reference element of a grid panel
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATICciGridElemRef_H
#define CATICciGridElemRef_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

class CATICkeParm_var;
class CATISpecObject_var;
class CATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciGridElemRef;
#else
extern "C" const IID IID_CATICciGridElemRef ;
#endif

//------------------------------------------------------------------

/**
* Interface representing a composites reference element.
* <b>Role</b>: Allows to manage a ref element feature defining a grid panel.
*/

class ExportedByCAACompositesItf CATICciGridElemRef: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/** 
	* Type of clearance and parallel building from reference element.
	* @param CLEARANCEPARALLEL_RAMPPARALLELS
	*   clearance curve is a parallel to the ref elem then following curves are parallels
	* @param CLEARANCEOFFSET_RAMPPARALLELS
	*   clearance curve is an intersection of an offset with ref shell, and then following curves are parallels
	* @param CLEARANCEOFFSET_RAMPOFFSET
	*   clearance curve is an intersection of an offset with ref shell and following curves intersections of offsets with ref shell
	*/
	enum RampSupportType {  CLEARANCEPARALLEL_RAMPPARALLELS = 0,
							CLEARANCEOFFSET_RAMPPARALLELS = 1, 
							CLEARANCEOFFSET_RAMPOFFSET = 2 };

	/** 
	* Type defining how ramp support slope is defined
	* @param RAMPSUPPORT_SLOPE_RATE
	*   slope is defined with a rate
	* @param RAMPSUPPORT_SLOPE_STEP
	*   slope is defined with a step
	* @param RAMPSUPPORT_SLOPE_ANGLE
	*   slope is defined with an angle
	*/
	enum RampSupportSlopeType {	RAMPSUPPORT_SLOPE_RATE = 0,
								RAMPSUPPORT_SLOPE_STEP = 1,
								RAMPSUPPORT_SLOPE_ANGLE = 2 };
	
	/** 
	* Type defining how clearance is defined
	* @param CLEARANCE_OFFSET
	*   clearance is given by an offset value
	* @param CLEARANCE_GEOMETRY
	*   clearance is given by a geometry (i.e. a point)
	* @param CLEARANCE_CENTEREDPLYDROP
	*   centers the slope on the reference element
	* @param CLEARANCE_CENTERED_AT_PLIES_CREATION
	*   clearance is computed at plies generation so that plies generation so that slope is centered on the reference element.
	*/
	enum RefElementClearanceType {	CLEARANCE_OFFSET = 0,
									CLEARANCE_GEOMETRY = 1,
									CLEARANCE_CENTEREDPLYDROP = 2,
									CLEARANCE_CENTERED_AT_PLIES_CREATION = 3 };


	/**
	* Returns the shell on which the reference element is built.
	* @param ospRefShell
	*    The shell on which the reference element is built.
	*/
	virtual HRESULT GetRefSurface (CATIMmiMechanicalFeature_var& ospRefShell) = 0;

	/**
	* Returns the geometry from which the reference element is built.
	* @param ospGeometry
	*    The geometry from which the reference element is built.
	*/
	virtual HRESULT GetGeometry (CATIMmiMechanicalFeature_var& ospGeometry) = 0;

	/**
	* Sets the geometry from which the reference element is built.
	* @param ispGeometry
	*    The geometry from which the reference element is built
	* <br> Note: The geometry can be 
	*    <ul>
	*		<li> a curve-type element that MUST lie on the ref element surface (see GetRefSurface method)
	*		<li> a surface-type element that MUST intersect the ref element surface (see GetRefSurface method)
	*    </ul>
	*/
	virtual HRESULT SetGeometry (const CATIMmiMechanicalFeature_var& ispGeometry) = 0;

	/**
	* Returns the orientation of the reference element.
	* @param oHasPositiveOrientation
	*    The orientation as boolean.
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>TRUE</tt> when orientation is positive with regards to its geometry (or geometry's normal for a surface)
	*		<li><tt>FALSE</tt> when orientation is negative with regards to its geometry (or geometry's normal for a surface)
	*    </ul>
	* <br> Note: Gives the information of which is the positive side and which is the negative side
	*/
	virtual HRESULT GetHasPositiveOrientation (CATBoolean& oHasPositiveOrientation) = 0;

	/**
	* Sets the orientation of the reference element.
	* @param iHasPositiveOrientation
	*    The orientation as boolean.
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>TRUE</tt> when orientation is positive with regards to its geometry (or geometry's normal for a surface)
	*		<li><tt>FALSE</tt> when orientation is negative with regards to its geometry (or geometry's normal for a surface)
	*    </ul>

	* <br> Note: Gives the information of which is the positive side and which is the negative side
	*/
	virtual HRESULT SetHasPositiveOrientation (const CATBoolean& iHasPositiveOrientation) = 0;
	
	/**
	* Returns the boolean parameter indicating whether the positive and negative sides have the same values.
	* @param oSameValueSide
	*    The boolean indicating whether values are the same on both sides
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>TRUE</tt> if positive and negative sides have the same values
	*		<li><tt>FALSE</tt> if positive and negative sides do NOT have the same values
	*    </ul>
	*/
	virtual HRESULT GetSameValueSide (CATBoolean& oSameValueSide) = 0;

	/**
	* Returns the ramp support type.
	* @param oRampSupportType
	*   The ramp support type. 
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>CLEARANCEPARALLEL_RAMPPARALLELS</tt> if clearance curve is a parallel to the ref elem then following curves are parallels
	*		<li><tt>CLEARANCEOFFSET_RAMPPARALLELS</tt> if clearance curve is an intersection of an offset with ref shell, and then following curves are parallels
	*       <li><tt>CLEARANCEOFFSET_RAMPOFFSET</tt> if clearance curve is an intersection of an offset with ref shell and following curves intersections of offsets with ref shell
	*    </ul>
	* <br> Note: <tt>CLEARANCEOFFSET_RAMPPARALLELS</tt> & <tt>CLEARANCEOFFSET_RAMPOFFSET</tt> types can only be used if the geometry is surface-type.
	*/
	virtual HRESULT GetRampSupportType (RampSupportType & oRampSupportType) = 0;

	// ------------------------------ Positive side values ------------------------------
	
	/** 
	* Returns the type of clearance mode for positive side.
	* @param oPositiveDirClearanceType
	*   The clearance mode type. 
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>CLEARANCE_OFFSET</tt> i.e. clearance is given by an offset value
	*		<li><tt>CLEARANCE_GEOMETRY</tt> i.e. clearance is given by a geometry 
	*		<li><tt>CLEARANCE_CENTEREDPLYDROP</tt> i.e. centers the slope on the reference element
	*		<li><tt>CLEARANCE_CENTERED_AT_PLIES_CREATION</tt> i.e. clearance is computed at plies generation so that plies generation so that slope is centered on the reference element
	*/
	virtual HRESULT GetPositiveDirClearanceMode (RefElementClearanceType& oPositiveDirClearanceType) = 0;
	
	/** 
	* Gets the clearance offset value for positive side in mm.
	* @param oPositiveDirClearanceOffsetInMM
	*	The clearance offset value.
	*/
	virtual HRESULT GetPositiveDirClearanceOffset(double& oPositiveDirClearanceOffsetInMM) = 0;

	/** 
	* Returns the clearance geometry for positive side.
	* @param ospPositiveDirClearanceGeom
	*	The clearance geometry.
	*/
	virtual HRESULT GetPositiveDirClearanceGeom (CATIMmiMechanicalFeature_var& ospPositiveDirClearanceGeom) = 0;

	/** 
	* Returns the type of ramp support slope definition mode for positive side.
	* @param oRampSupportSlopeType
	*   The ramp support slope definition mode. 
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>RAMPSUPPORT_SLOPE_RATE</tt> if slope is defined with a rate (then use @href #GetPositiveDirSlopeRate)
	*		<li><tt>RAMPSUPPORT_SLOPE_STEP</tt> if slope is defined with a step (then use @href #GetPositiveDirSlopeStep)
	*		<li><tt>RAMPSUPPORT_SLOPE_ANGLE</tt> if slope is defined with an angle (then use @href #GetPositiveDirSlopeAngle)  
	*   </ul>
	*/
	virtual HRESULT GetPositiveDirSlopeType (RampSupportSlopeType& oRampSupportSlopeType) = 0;

	/**
	* Returns the slope rate for positive side.
	* @param oPositiveDirSlopeRate
	*	The slope rate.
	*/
	virtual HRESULT GetPositiveDirSlopeRate(int& oPositiveDirSlopeRate) = 0;

	/**
	* Returns the slope step for positive side in mm.
	* @param oPositiveDirStepInMM
	*	The slope step.
	*/
	virtual HRESULT GetPositiveDirSlopeStep(double& oPositiveDirStepInMM) = 0;

	/**
	* Returns the slope angle for positive side in radians.
	* @param oPositiveDirAngleInRad
	*	The slope angle.
	*/
	virtual HRESULT GetPositiveDirSlopeAngle(double& oPositiveDirAngleInRad) = 0;

	// --------- Negative side values ---------
	/** 
	* Returns the type of clearance mode for negative side.
	* @param oNegativeDirClearanceType
	*   The clearance mode type. 
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>CLEARANCE_OFFSET</tt> i.e. clearance is given by an offset value
	*		<li><tt>CLEARANCE_GEOMETRY</tt> i.e. clearance is given by a geometry 
	*		<li><tt>CLEARANCE_CENTEREDPLYDROP</tt> i.e. centers the slope on the reference element
	*		<li><tt>CLEARANCE_CENTERED_AT_PLIES_CREATION</tt> i.e. clearance is computed at plies generation so that plies generation so that slope is centered on the reference element
	*   </ul>
	*/
	virtual HRESULT GetNegativeDirClearanceMode (RefElementClearanceType& oNegativeDirClearanceType) = 0;

	/** 
	* Gets the clearance offset value for negative side in mm.
	* @param oNegativeDirClearanceOffsetInMM
	*	The clearance offset value.
	*/
	virtual HRESULT GetNegativeDirClearanceOffset(double& oNegativeDirClearanceOffsetInMM) = 0;

	/** 
	* Returns the clearance geometry for negative side.
	* @param ospNegativeDirClearanceGeom
	*	The clearance geometry.
	*/
	virtual HRESULT GetNegativeDirClearanceGeom (CATIMmiMechanicalFeature_var& ospNegativeDirClearanceGeom) = 0;

	/** 
	* Returns the type of ramp support slope definition mode for negative side.
	* @param oRampSupportSlopeType
	*   The ramp support slope definition mode. 
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>RAMPSUPPORT_SLOPE_RATE</tt> if slope is defined with a rate (then use @href #GetPositiveDirSlopeRate)
	*		<li><tt>RAMPSUPPORT_SLOPE_STEP</tt> if slope is defined with a step (then use @href #GetPositiveDirSlopeStep)
	*		<li><tt>RAMPSUPPORT_SLOPE_ANGLE</tt> if slope is defined with an angle (then use @href #GetPositiveDirSlopeAngle)  
	*   </ul>
	*/
	virtual HRESULT GetNegativeDirSlopeType (RampSupportSlopeType& oRampSupportSlopeType) = 0;

	/**
	* Returns the slope rate for negative side.
	* @param oNegativeDirSlopeRate
	*	The slope rate.
	*/
	virtual HRESULT GetNegativeDirSlopeRate(int& oNegativeDirSlopeRate) = 0;

	/**
	* Returns the slope step for negative side in mm.
	* @param oNegativeDirStepInMM
	*	The slope step.
	*/
	virtual HRESULT GetNegativeDirSlopeStep(double& oNegativeDirStepInMM) = 0;

	/**
	* Returns the slope angle for negative side in radians.
	* @param oNegativeDirAngleInRad
	*	The slope angle.
	*/
	virtual HRESULT GetNegativeDirSlopeAngle(double& oNegativeDirAngleInRad) = 0;

    //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
	
	/**
	* @deprecated V5R28
	* Sets the boolean parameter indicating wether the positive and negative sides have the same values
	* @param iSameValueSide
	*    The boolean parameter
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>TRUE</tt> if positive and negative sides have the same values
	*		<li><tt>FALSE</tt> if positive and negative sides do NOT have the same values
	*    </ul>
	*/
	virtual HRESULT SetSameValueSide(const CATBoolean iSameValueSide) = 0;

	/**
	* @deprecated V5R28
	* Returns the boolean parameter indicating whether the parallels are chained or not.
	* @param oChainedParallels
	*    The boolean parameter
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>TRUE</tt> if the parallels are chained i.e. each parallel is built from the previous one
	*		<li><tt>FALSE</tt> if the parallels are NOT chained i.e. each parallel is built from the first one
	*    </ul>
	*/
	virtual HRESULT GetChainedParallels(CATBoolean& oChainedParallels) = 0;

	/**
	* @deprecated V5R28
	* Sets the boolean parameter indicating wether the parallels are chained or not.
	* @param iChainedParallels
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>TRUE</tt> if the parallels are chained i.e. each parallel is built from the previous one
	*		<li><tt>FALSE</tt> if the parallels are NOT chained i.e. each parallel is built from the first one
	*    </ul>
	*/
	virtual HRESULT SetChainedParallels(const CATBoolean iChainedParallels) = 0;

	/**
	* @deprecated V5R28
	* Sets the ramp support type.
	* @param iRampSupportType
	*   The ramp support type.
	*    <br><b>Legal values</b>:
	*    <ul>
	*		<li><tt>CLEARANCEPARALLEL_RAMPPARALLELS</tt> if clearance curve is a parallel to the ref elem then following curves are parallels
	*		<li><tt>CLEARANCEOFFSET_RAMPPARALLELS</tt> if clearance curve is an intersection of an offset with ref shell, and then following curves are parallels
	*       <li><tt>CLEARANCEOFFSET_RAMPOFFSET</tt> if clearance curve is an intersection of an offset with ref shell and following curves intersections of offsets with ref shell
	*    </ul>
	* <br> WARNING: <tt>CLEARANCEOFFSET_RAMPPARALLELS</tt> & <tt>CLEARANCEOFFSET_RAMPOFFSET</tt> types can only be used if the geometry is surface-type.
	*/
	virtual HRESULT SetRampSupportType(const RampSupportType& iRampSupportType) = 0;

	/**
	* @deprecated V5R28
	* Sets the type of clearance mode for positive side.
	* @param iPositiveDirClearanceType
	*   The clearance mode type.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>CLEARANCE_OFFSET</tt> i.e. clearance is given by an offset value
	*		<li><tt>CLEARANCE_GEOMETRY</tt> i.e. clearance is given by a geometry
	*		<li><tt>CLEARANCE_CENTEREDPLYDROP</tt> i.e. centers the slope on the reference element
	*		<li><tt>CLEARANCE_CENTERED_AT_PLIES_CREATION</tt> i.e. clearance is computed at plies generation so that plies generation so that slope is centered on the reference element
	*   </ul>
	*/
	virtual HRESULT SetPositiveDirClearanceMode(const RefElementClearanceType& iPositiveDirClearanceType) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetPositiveDirClearanceOffset (double&) method instead.
	* Returns the clearance offset value for positive side.
	* @param ospPositiveDirClearanceOffset
	*	The clearance offset value.
	*/
	virtual HRESULT GetPositiveDirClearanceOffset(CATICkeParm_var& ospPositiveDirClearanceOffset) = 0;

	/**
	* @deprecated V5R28
	* Sets the clearance offset value for positive side in mm.
	* @param iPositiveDirClearanceOffset
	*	The clearance offset value.
	*/
	virtual HRESULT SetPositiveDirClearanceOffset(const double& iPositiveDirClearanceOffset) = 0;

	/**
	* @deprecated V5R28
	* Sets the clearance geometry for positive side.
	* @param ispPositiveDirClearanceGeom
	*	The clearance geometry.
	* <br> WARNING: geometry must either by a point or a curve on the reference surface.
	*/
	virtual HRESULT SetPositiveDirClearanceGeom(const CATIMmiMechanicalFeature_var& ispPositiveDirClearanceGeom) = 0;

	/**
	* @deprecated V5R28
	* Sets the type of ramp support slope definition mode for positive side.
	* @param iRampSupportSlopeType
	*   The ramp support slope definition mode.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>RAMPSUPPORT_SLOPE_RATE</tt> if slope is defined with a rate (then use @href #GetPositiveDirSlopeRate)
	*		<li><tt>RAMPSUPPORT_SLOPE_STEP</tt> if slope is defined with a step (then use @href #GetPositiveDirSlopeStep)
	*		<li><tt>RAMPSUPPORT_SLOPE_ANGLE</tt> if slope is defined with an angle (then use @href #GetPositiveDirSlopeAngle)
	*   </ul>
	*/
	virtual HRESULT SetPositiveDirSlopeType(const RampSupportSlopeType& iRampSupportSlopeType) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetPositiveDirSlopeRate(int& oPositiveDirSlopeRate) method instead.
	* Returns the slope rate for positive side.
	* @param ospPositiveDirSlopeRate
	*	The slope rate.
	*/
	virtual HRESULT GetPositiveDirSlopeRate(CATICkeParm_var& ospPositiveDirSlopeRate) = 0;

	/**
	* @deprecated V5R28
	* Sets the slope rate for positive side.
	* @param iPositiveDirSlopeRate
	*	The slope rate.
	*/
	virtual HRESULT SetPositiveDirSlopeRate(const int& iPositiveDirSlopeRate) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetPositiveDirSlopeStep(double& oPositiveDirStep) method instead.
	* Returns the slope step for positive side.
	* @param ospPositiveDirStep
	*	The slope step.
	*/
	virtual HRESULT GetPositiveDirSlopeStep(CATICkeParm_var& ospPositiveDirStep) = 0;

	/**
	* @deprecated V5R28
	* Sets the slope step for positive side in mm.
	* @param iPositiveDirStep
	*	The slope step.
	*/
	virtual HRESULT SetPositiveDirSlopeStep(const double& iPositiveDirStep) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetPositiveDirSlopeAngle(double& oPositiveDirAngle) method instead.
	* Returns the slope angle for positive side;
	* @param ospPositiveDirAngle
	*	The slope angle.
	*/
	virtual HRESULT GetPositiveDirSlopeAngle(CATICkeParm_var& ospPositiveDirAngle) = 0;

	/**
	* @deprecated V5R28
	* Sets the slope angle for positive side in radians.
	* @param iPositiveDirAngle
	*	The slope angle.
	*/
	virtual HRESULT SetPositiveDirSlopeAngle(const double& iPositiveDirAngle) = 0;

	/**
	* @deprecated V5R28
	* Sets the type of clearance mode for negative side.
	* @param iNegativeDirClearanceType
	*   The clearance mode type.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>CLEARANCE_OFFSET</tt> i.e. clearance is given by an offset value
	*		<li><tt>CLEARANCE_GEOMETRY</tt> i.e. clearance is given by a geometry
	*		<li><tt>CLEARANCE_CENTEREDPLYDROP</tt> i.e. centers the slope on the reference element
	*		<li><tt>CLEARANCE_CENTERED_AT_PLIES_CREATION</tt> i.e. clearance is computed at plies generation so that plies generation so that slope is centered on the reference element
	*   </ul>
	*/
	virtual HRESULT SetNegativeDirClearanceMode(const RefElementClearanceType& iNegativeDirClearanceType) = 0;
	
	/**
	* @deprecated V5R28
	* Use @see #GetNegativeDirClearanceOffset(double& oNegativeDirClearanceOffset)  method instead.
	* Returns the clearance offset value for negative side.
	* @param ospNegativeDirClearanceOffset
	*	The clearance offset value.
	*/
	virtual HRESULT GetNegativeDirClearanceOffset(CATICkeParm_var& ospNegativeDirClearanceOffset) = 0;

	/**
	* @deprecated V5R28
	* Sets the clearance offset value for negative side in mm.
	* @param iNegativeDirClearanceOffset
	*	The clearance offset value.
	*/
	virtual HRESULT SetNegativeDirClearanceOffset(const double& iNegativeDirClearanceOffset) = 0;

	/**
	* @deprecated V5R28
	* Sets the clearance geometry for negative side.
	* @param ispNegativeDirClearanceGeom
	*	The clearance geometry.
	* <br> WARNING: geometry must either by a point or a curve on the reference surface.
	*/
	virtual HRESULT SetNegativeDirClearanceGeom(const CATIMmiMechanicalFeature_var& ispNegativeDirClearanceGeom) = 0;

	/**
	* @deprecated V5R28
	* Sets the type of ramp support slope definition mode for negative side.
	* @param iRampSupportSlopeType
	*   The ramp support slope definition mode.
	*   <br><b>Legal values</b>:
	*   <ul>
	*		<li><tt>RAMPSUPPORT_SLOPE_RATE</tt> if slope is defined with a rate (then use @href #GetPositiveDirSlopeRate)
	*		<li><tt>RAMPSUPPORT_SLOPE_STEP</tt> if slope is defined with a step (then use @href #GetPositiveDirSlopeStep)
	*		<li><tt>RAMPSUPPORT_SLOPE_ANGLE</tt> if slope is defined with an angle (then use @href #GetPositiveDirSlopeAngle)
	*   </ul>
	*/
	virtual HRESULT SetNegativeDirSlopeType(const RampSupportSlopeType& iRampSupportSlopeType) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetNegativeDirSlopeRate(int& oNegativeDirSlopeRate)  method instead.
	* Returns the slope rate for negative side.
	* @param ospNegativeDirSlope
	*	The slope rate.
	*/
	virtual HRESULT GetNegativeDirSlopeRate(CATICkeParm_var& ospNegativeDirSlopeRate) = 0;

	/**
	* @deprecated V5R28
	* Sets the slope rate for negative side.
	* @param iNegativeDirSlope
	*	The slope rate.
	*/
	virtual HRESULT SetNegativeDirSlopeRate(const int& iNegativeDirSlopeRate) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetNegativeDirSlopeStep(double& oNegativeDirStep)  method instead.
	* Returns the slope step for negative side.
	* @param ospNegativeDirStep
	*	The slope step.
	*/
	virtual HRESULT GetNegativeDirSlopeStep(CATICkeParm_var& ospNegativeDirStep) = 0;

	/**
	* @deprecated V5R28
	* Sets the slope step for negative side in mm.
	* @param iNegativeDirStep
	*	The slope step.
	*/
	virtual HRESULT SetNegativeDirSlopeStep(const double& iNegativeDirStep) = 0;

	/**
	* @deprecated V5R28
	* Use @see #GetNegativeDirSlopeAngle(double& oNegativeDirAngle)  method instead.
	* Returns the slope angle for negative side.
	* @param ospNegativeDirAngle
	*	The slope angle.
	*/
	virtual HRESULT GetNegativeDirSlopeAngle(CATICkeParm_var& ospNegativeDirAngle) = 0;

	/**
	* @deprecated V5R28
	* Sets the slope angle for negative side in radians.
	* @param iNegativeDirAngle
	*	The slope angle.
	*/
	virtual HRESULT SetNegativeDirSlopeAngle(const double& iNegativeDirAngle) = 0;

};

CATDeclareHandler(CATICciGridElemRef, CATBaseUnknown);

//------------------------------------------------------------------

#endif
