// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIIKConstraint_h
#define _SWKIIKConstraint_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//
//    SWKIIKConstraint interface.
//    This interface offers non-IDL IK constraint services.
//    An IK constraint is an object that assigns a specific location
//    in the 3D environment to a segment of the manikin (end-effecor).
//    We say the the constraint is resolved if the end-effector has
//    reached, or has otherwise taken a posture that satisfies the
//    values of the parameters in the constraint.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKIManikinPart
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    Initialize
//    GetID
//    GetName
//    SetName
//    GetTargetType
//    SetTargetType
//    GetUserType
//    SetTargetPosition
//    SetTargetLine
//    SetTargetMatrix
//    GetTargetMatrix
//    SetTargetObject
//    GetTargetObject
//    GetTargetPointObject
//    GetTargetLineObject
//    GetTargetPlaneObject
//    GetLineConstraintStartPoint
//    GetLineConstraintEndPoint
//    IsPartRelation
//    GetEndEffector
//    SetEndEffector
//    GetShortNameOfEndEffector
//    GetStartSegment
//    SetStartSegment
//    GetShortNameOfStartSegment
//    IsActive
//    Activate
//    Deactivate
//    GetWeight
//    SetWeight
//    Update
//    GetManikin
//    IsResolved
//    SetResolved
//    RefreshRepColor
//    RefreshRepLineType
//    RefreshRepLineThickness
//    Synchronize
//    InitializeOffsetAngle
//    ResetTarget
//    GetRotationOffsetAngle
//    SetRotationOffsetAngle
//    ToDelete
//    IsToDelete
//    GetCstOffset
//    SetCstOffset
//    GetEndEffectorOffset
//    SetEndEffectorOffset
//    GetPositionPotential
//    GetRotationPotential
//    IsSuccessByCriteria
//    GetDistanceCriteria
//    SetDistanceCriteria
//    GetAngleCriteria
//    SetAngleCriteria
//    GetDistanceToTarget
//    GetAngleToTarget
//    GetCriteriaToConsider
//    GetPointOnObject
//    GetPointOnEndEffector
//    GetTargetGeometry
//    RedrawNodeAndVisu
//    SetProperty
//    GetProperty
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 28/05/01
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKIManikinPart.h"
#include "SWShortNames.h"
//
// --- System
#include "CATBooleanDef.h"
//
// --- DNBHumanModeling
class SWIKConstraint;
//
// --- DNBHumanModelingInterfaces
class SWKIBodyElement;
class SWKIManikin;
class SWKISegment;
//
// --- GeometricObjects
class CATLine;
class CATPoint;
class CATPlane;
class CATGeometry;
//
// --- Mathematics
class CATMathAxis;
class CATMathPoint;
//
// --- ProductStructure
class CATIMovable;
//
// --- System
class CATString;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIIKConstraint;
#else
extern "C" const IID IID_SWKIIKConstraint;
#endif

// Definition of various constraint types
#define SWK_IKCONSTRAINT_POS   000010 // Position constraint
#define SWK_IKCONSTRAINT_ROT   000120 // Orientation constraint
#define SWK_IKCONSTRAINT_FRA   000130 // Frame constraint (position and orientation)
#define SWK_IKCONSTRAINT_POI   000200 // Pointing constraint
#define SWK_IKCONSTRAINT_LIN   000211 // Segment Line constraint
#define SWK_IKCONSTRAINT_LIND  000230 // Segment Line constraint with direction
#define SWK_IKCONSTRAINT_LIN2  000213 // Infinite Line constraint
#define SWK_IKCONSTRAINT_DIR   001210 // Direction constraint
#define SWK_IKCONSTRAINT_PLA   002210 // Plane constraint
#define SWK_IKCONSTRAINT_HSP   002200 // HalfSpace constraint
#define SWK_IKCONSTRAINT_PLAZ  003210 // Plane constraint + Z Direction constraint

class ExportedBySWKHumanModelingItf SWKIIKConstraint : public SWKIManikinPart
{
	CATDeclareInterface;

 public:

	/**
	  * Initialize the internal constraint.
	  * This method must not be called by the application.
	  **/
	virtual void Initialize(SWKIManikin * piManikin,
				SWIKConstraint * piInternalIKConstraint,
				SWKIBodyElement * piEndEffector,
				SWKISegment * piStartSegment) = 0;

	/**
	  * @return The ID of the constraint.
	  **/
	virtual CATString GetID() const = 0;

	/**
	  * @return The name of the constraint.
	  **/
	virtual CATUnicodeString GetName() const = 0;

	/**
	  * Give a user-defined name to the constraint.
	  **/
	virtual void SetName(const CATUnicodeString & piName) = 0;

	/**
	  * @return The type of the target (position, orientation, etc.)
	  * The value returned here will be one of the
	  * <strong><code>SWK_IKCONSTRAINT_xxx</code></strong>
	  * constants defined above.
	  **/
	virtual int GetTargetType() const = 0;

	/**
	  * Set the type of the target.
	  *
	  * @param piType The type of the target (position, orientation, etc.)
  	  * The value passed in here must be one of the
	  * <strong><code>SWK_IKCONSTRAINT_xxx</code></strong>
	  * constants defined above.
	  **/
	virtual HRESULT SetTargetType(const int piType) = 0;

	enum SWKUserType
	{
		SWKCstCoincidence  = 0,
		SWKCstContact      = 1,
		SWKCstFix          = 2,
		SWKCstFixOn        = 3,
		SWKCstNone         = 4
	};

	/**
	  * Get the user type of this constraint.
	  * The possible values are as described in the enum SWKUserType.
	  **/
	virtual SWKUserType GetUserType() const = 0;

	/**
	  * Set the target position.
	  *
	  * @param piTargetPosition The world coordinates of the target.
	  **/
	virtual HRESULT SetTargetPosition(const CATMathPoint & piTargetPosition) = 0;

	/** 
	  * Set the line parameter for a line constraint.
	  * This method must be used only for line constraints.
	  *
	  * @param piPoint1 The first point of the line.
	  * @param piPoint2 The second point of the line.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetTargetLine(const CATMathPoint & piPoint1,
									const CATMathPoint & piPoint2) = 0;

	/**
	  * Set the target matrix.
	  * @param piMatrix The transformation matrix of the target
	  **/	
	virtual HRESULT SetTargetMatrix(const CATMathAxis & piMatrix) = 0;

	/**
	  * @return The matrix of the target.
	  **/
	virtual CATMathAxis GetTargetMatrix() const = 0;

 	/**
	  * Set the target object to follow.
	  * This method establishes a <strong>part relation</strong>
	  * between the end effector and an object to follow.
	  *
	  * A part relation is a special kind of frame/position/orientation constraint,
	  * where the target matrix is dynamic (i.e. must be updated each time the
	  * target object moves).  For this to happen, the application must communicate
	  * to the constraint, the target object to follow, i.e. a reference to a
	  * <code>CATIMovable</code>, by the means of this method.
	  *
	  * When this part relation is in place, any call to methods
	  * <code>SetTargetPosition()</code>, <code>SetTargetOrientation()</code>
	  * or <code>SetTargetMatrix()</code> will have no effect, because the
	  * target matrix will be overwritten by the current position of the target
	  * object, each time the IK is about to resolve.
	  *
	  * If the part relation is created with type <code>SWK_IKCONSTRAINT_POS</code>,
	  * then this is a position constraint, and only the position of the target
	  * object will be taken into account.  If the part relation is created with
	  * type <code>SWK_IKCONSTRAINT_ROT</code>, then this is an orientation
	  * constraint, and only the orientation of the target object will be
	  * taken into account.  If the part relation is created with
	  * <code>SWK_IKCONSTRAINT_FRA</code>, then this is a frame constraint, and
	  * both position and orientation of the target object will be taken into account.
	  *
	  * @param piTargetObject The object to follow.
	  * This parameter cannot be a segment of the manikin on
	  * which the constraint is defined.
	  *
	  * @param piGeometry The geometry which underlies a point, a line or a plane.
	  *
	  * @return A status code indicating success or failure.
	  **/	
	virtual HRESULT SetTargetObject(CATIMovable * piTargetObject, CATGeometry * piGeometry = NULL) = 0;

	/**
	  * @return The target object of the constraint (if any).
	  **/
	virtual CATIMovable * GetTargetObject() const = 0;

	/**
	  * @return The target object of the constraint (if any).
	  **/
	virtual CATPoint * GetTargetPointObject() const = 0;

	/**
	  * @return The target object of the constraint (if any).
	  **/
	virtual CATLine * GetTargetLineObject() const = 0;

	/**
	  * @return The target object of the constraint (if any).
	  **/
	virtual CATPlane * GetTargetPlaneObject() const = 0;

	/**
	  * @return The starting point of the line.  This method
	  * returns a valid point for line constraints only.
	  **/
	virtual CATMathPoint GetLineConstraintStartPoint() const = 0;

	/**
	  * @return The ending point of the line.  This method
	  * returns a valid point for line constraints only.
	  **/
	virtual CATMathPoint GetLineConstraintEndPoint() const = 0;

	/**
	  * @return <code><strong><font color = "blue">TRUE</font></strong></code>
	  * if this constraint is a part relation (i.e. if there is a non-NULL
	  * target object, <code><strong><font color = "blue">FALSE</font></strong></code>
	  * otherwise.
	  **/
	virtual boolean IsPartRelation() const = 0;

	/**
	  * @return The last segment (or line of sight) of the body to be driven
	  * by this constraint.
	  **/
	virtual SWKIBodyElement * GetEndEffector() const = 0;

	/**
	  * Set The last segment (or line of sight) of the body to be driven
	  * by this constraint.
	  *
	  * @param piEndEffector The new end effector(segment or line of sight).
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetEndEffector(SWKIBodyElement * piEndEffector) = 0;

	/**
	  * @return The short name of the end effector.
	  **/
	virtual SWShortName GetShortNameOfEndEffector() const = 0;

	/**
	  * @return The first segment of the body to be driven by this constraint.
	  **/
	virtual SWKISegment * GetStartSegment() const = 0;

	/**
	  * Set a new start segment for the constraint.
	  *
	  * @param piStartSegment The new start segment. This segment
	  * will redefine the IK chain of current constraint. and must
	  * be an ancestor of the current end effector.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetStartSegment(SWKISegment * piStartSegment) = 0;

	/**
	  * @return The short name of the start segment.
	  **/
	virtual SWShortName GetShortNameOfStartSegment() const = 0;

	/**
	  * @return The state of the constraint : active or inactive ?
	  **/
	virtual boolean IsActive() const = 0;

	/**
	  * Activate the constraint.
	  **/
	virtual HRESULT Activate() = 0;

	/**
	  * Deactivate the constraint.
	  **/
	virtual HRESULT Deactivate() = 0;


	/**
	  * @return The relative weight of the constraint.
	  * This weight is used to assign priority to a constraint.
      * The higher the weight, the more prioritary the constraint
	  * becomes.
	  **/
	virtual double GetWeight() const = 0;
	
	/**
	  * Set the relative weight of the constraint.
	  * This weight is used to assign priority to a constraint.
	  * 
	  * @param piWeight The new weight. The value of this parameter must be
	  * between 0.0 and 1.0 inclusive.<br>
	  * The higher the weight, the more prioritary the constraint
	  * becomes.
	  *
	  * @return <code>SWStatusSuccess</code> if no error, or
	  * an error code if the parameter goes out of bounds.
	  **/
	virtual HRESULT SetWeight(double piWeight) = 0;

	/**
	  * Update the internal state of the constraint.
	  * This method need not be called by the application.
	  **/
	virtual void Update() = 0;

	/**
	  * @return TRUE if the constraint is under a manikin, FALSE otherwise.
	  **/
	virtual boolean IsUnderManikin() const = 0;

	/**
	  * @return The manikin which owns this constraint.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * @return TRUE if the constraint is resolved and FALSE otherwise.
	  **/
	virtual boolean IsResolved() const = 0;

	/**
	  * Set to TRUE if the "Update all command" is done or
	  * set to FALSE if the scene is changed.
	  **/
	virtual void SetResolved(boolean piResolved) = 0;

	/**
	  * Refresh the color of the constraint representation depending on 
	  * the resolved status.
	  **/
	virtual void RefreshRepColor() = 0;

    /**
      * Refresh the line type of the constraint representation 
      * depending on the resolved status.
      **/
    virtual void RefreshRepLineType() = 0;

    /**
      * Refresh the line thickness of the constraint representation 
      * depending on the resolved status.
      **/
    virtual void RefreshRepLineThickness() = 0;

	/**
	  * Synchronize the target object of the IK constraint after an Undo event.
	  * This method is to be called by the system only.
	  **/
	virtual void Synchronize() = 0;

	/**
	  * Initialize the rotation offset angle of 3D plant constraint.
	  **/	
	virtual HRESULT InitializeOffsetAngle() = 0;

	/**
	  * Reset the offset of the target object.
	  **/
	virtual void ResetTarget() = 0;

	/**
	  * @return The rotation offset for the 3D plane constraint.
	  * This rotation offset angle is used to adjust 3D plane constraint.
	  **/
	virtual double GetRotationOffsetAngle() const = 0;
	
	/**
	  * Set rotation offset angle for the 3D plane constraint.
	  * 
	  * @param piAngle The new offset angle. The value of this parameter must
	  * be between -PI_M and PI_M inclusive.<br>
	  *
	  * @return <code>SWStatusSuccess</code> if no error, or
	  * an error code if the parameter goes out of bounds.
	  **/
	virtual HRESULT SetRotationOffsetAngle(double piAngle) = 0;

	/**
	  * This function is called in the CATIConstraintCutAndPasteImpl::BoundaryRemove
	  * the constraint will be deleted in the next call to 
	  * CATIManikinCutAndPasteImpl::Remove.
	  **/
	virtual void ToDelete(boolean piIsToDelete) = 0;

	/**
	  * Return TRUE if the constraint must be deleted in the next call to
	  * CATIManikinCutAndPasteImpl::Remove or FALSE otherwise.
	  **/
	virtual boolean IsToDelete() const =0;

	/**
	  * @return The offset for this constraint.
	  **/
	virtual CATMathAxis GetCstOffset() const = 0;

	/**
	  * Set an offset for the constraint.
	  * This offset will make it possible to create constraints of type fix.
	  **/
	virtual void SetCstOffset(const CATMathAxis & piOffset) = 0;

	/**
	  * @return The offset to use for the end effector when resolving this constraint.
	  **/
	virtual CATMathAxis GetEndEffectorOffset() const = 0;

	/**
	  * Set an offset for the end effector, which will be used at resolution time.
	  **/
	virtual void SetEndEffectorOffset(const CATMathAxis & piOffset) = 0;

	/**
	  * @return The position potential resident value after IK resolve.
	  * This value is used to define the succes or fail of resolve of this constraint.
      * If the combine of rotation and position potential bigger then the IK
	  * Tolerance, this resolve is failed for this constraint
	  **/
	virtual double GetPositionPotential() const = 0;
	/**
	  * @return The rotation potential resident value after IK resolve.
	  * This value is used to define the succes or fail of resolve of this constraint.
 	  **/
	virtual double GetRotationPotential() const = 0;

	/**
	  * Return TRUE is the constraint has fullfilled the criteria,
	  * that is, is the distance between the end effector and target
	  * is lower than the distance criteria, or if the angle between
	  * the end effector and target is lower than the angle criteria
	  * or both (if both criteria are considered).
	  **/
	virtual boolean IsSuccessByCriteria() const = 0;

	/**
	  * Returns the distance criteria that is used to evaluate
	  * success or failure of the constraint resolution.
	  * If, after resolution, the distance between the constraint
	  * and the target is lower than the criteria, then the constraint
	  * is be considered resolved.  The criteria is returned in
	  * millimeters.
	  **/
	virtual double GetDistanceCriteria() const = 0;

	/**
	  * Sets the distance criteria that will be used to evaluate
	  * success or failure of the constraint resolution.
	  * If, after resolution, the distance between the constraint
	  * and the target is lower than the new criteria, then the constraint
	  * will be considered resolved.  This criteria must be specified
	  * in millimeters.
	  **/
	virtual HRESULT SetDistanceCriteria(double piCriteria) = 0;

	/**
	  * Returns the angle criteria that is used to evaluate
	  * success or failure of the constraint resolution.
	  * If, after resolution, the angle between the constraint
	  * and the target is lower than the criteria, then the constraint
	  * will be considered resolved.  The criteria is returned in
	  * radians.
	  **/
	virtual double GetAngleCriteria() const = 0;

	/**
	  * Sets the angle criteria that will be used to evaluate
	  *  success or failure of the constraint resolution.
	  * If, after resolution, the angle between the constraint
	  * and the target is lower than the new criteria, then the constraint
	  * will be considered resolved.  This criteria must be specified
	  * in radians.
	  **/
	virtual HRESULT SetAngleCriteria(double piCriteria) = 0;

	/**
	  * Returns the distance (in mm) from the constraint end effector
	  * to the target.
	  **/
	virtual double GetDistanceToTarget() const = 0;

	/**
	  * Returns the angle (in radians) from the constraint end effector
	  * to the target.
	  **/
	virtual double GetAngleToTarget() const = 0;

	/**
	  * Indicates witch criteria(s) is worth considering for the current
	  * constraint.
	  *
	  * @param poDistance If this value is output as <code>TRUE</code>,
	  * then this constraint considers a distance criteria.
	  *
	  * @param poAngle If this value is output as <code>TRUE</code>,
	  * then this constraint considers an angle criteria.
	  **/
	virtual void GetCriteriaToConsider(boolean &poDistance, boolean &poAngle) const = 0;

	/**
	  * Get the target end of the constraint, in the object reference system
	  **/
	virtual boolean GetPointOnObject(CATMathPoint & poPoint) const = 0;

	/**
	  * Get the position of the end effector
	  **/
	virtual boolean GetPointOnEndEffector(CATMathPoint & poPoint) const = 0;

	/**
	  * Get the geometry of the constraint (be it plane, point or line)
	  **/
	virtual CATGeometry * GetTargetGeometry() const = 0;

	/**
	  * Redraw the visualization of the constraint and the node in the tree.
	  **/
	virtual void RedrawNodeAndVisu() = 0;

	/**
	  * Set an application-specific property to this constraint.
	  *
	  * @param piPropertyName The name of the property.
	  *
	  * @param piPropertyValue The value of the property.
	  *
	  * @return A status code indicating whether the operation succeeded or failed.
	  **/
	virtual HRESULT SetProperty(const CATUnicodeString & piPropertyName,
							const CATUnicodeString & piPropertyValue) = 0;

	/**
	  * Retrieve the value of an existing property on the constraint.
	  *
	  * @param piPropertyName The name of the property to be retrieved.
	  *
	  * @param poPropertyValue The value of the specified property, or a string of the form
	  * "@Errorxxx", if the property is not defined or was not found.
	  *
	  * @return A status code indicating whether the operation succeeded or failed.
	  **/
	virtual HRESULT GetProperty(const CATUnicodeString & piPropertyName,
						CATUnicodeString & poPropertyValue) = 0;

	// To be removed
	virtual HRESULT SetTargetObject(CATIMovable * piTargetObject, class CATIConnector * piConnector) = 0;
};

CATDeclareHandler(SWKIIKConstraint, SWKIManikinPart);
#endif
