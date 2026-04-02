// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIIKManager_h
#define _SWKIIKManager_h

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
//    SWKIIKManager interface.
//    This interface offers non-IDL IKManager services.
//    It is the IK solver of the manikin is it attached to.
//    A pointer to this interface can be obtained via
//    a call to method <code>SWKIManikin::GetIKManager()</code>.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetInternalIKManager
//    GetManikin
//    GetNumberOfConstraints
//    GetConstraintAtIndex
//    GetConstraint
//    AddConstraint
//    SearchConstraintsOnIKChain
//    RemoveConstraint
//    RemoveConstraintAtIndex
//    RemoveAllConstraints
//    Resolve
//    ResolveRootWithFixedFeet
//    ResolveConstraints
//    SetMemo
//    GetMemo
//    DirectionReach
//    DirectionReachWithOffset
//    Reach
//    AdjustElbow
//    SetBehavior
//    GetBehavior
//    SetTolerance
//    GetTolerance
//    Synchronize
//    GetUnsolvedConstraints
//    GetStartSegmentShortName
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/09/29
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATListOfCATString.h"
//
// --- DNBHumanModelingInterfaces
#include "SWShortNames.h"
//
// --- DNBHumanModeling
class SWIKManager;
//
// --- DNBHumanModelingInterfaces
class SWKIBodyElement;
class SWKIIKConstraint;
class SWKIManikin;
class SWKISegment;
//
// --- Mathematics
class CATMathAxis;
//
// --- System
class CATUnicodeString;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIIKManager;
#else
extern "C" const IID IID_SWKIIKManager;
#endif

class ExportedBySWKHumanModelingItf SWKIIKManager : public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  * Initialize the internal IKManager.
	  * <strong>This method is to be called by the system only</strong>.
	  **/
	virtual HRESULT SetInternalIKManager(SWIKManager * piInternalIKManager) = 0;

	/**
	  * @return The manikin owning this IK manager.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * @return The total number of constraints on the manikin.
	  **/
	virtual unsigned GetNumberOfConstraints() const = 0;

	/**
	  * Return the constraint at index piIndex.
	  *
	  * @param piIndex the index of the constraint to return.
	  * First element is at index <code>0</code>.
	  *
	  * @return The desired constraint, or <code>NULL</code> if
	  * the index goes out of bounds.<br>
	  **/
	virtual SWKIIKConstraint * GetConstraintAtIndex(unsigned piIndex) const = 0;

	/**
	  * @param piID the UUID of the constraint to return.
	  *
	  * @return A constraint from a specific ID, or <code>NULL</code>
	  * if no constraint is found.
	  **/
	virtual SWKIIKConstraint * GetConstraint(const CATString & piID) const = 0;

	/**
	  * Add a constraint with the given end effector and type.
	  *
	  * @param piEndEff The driven element of the manikin
	  * (i.e. the end of the IK chain, or end effector).
	  *
	  * @param piStartSegment The first segment to be driven by the constraint
	  * (i.e. the start of the chain).
	  *
	  * @param piType The type of the constraint (position, orientation, etc.)
	  * This parameter can take one of the <code>SWK_IKCONSTRAINT_xxx</code>
	  * defined in file <strong>SWKIIKConstraint.h</strong>.
	  *
	  * @param poCreatedConstraint The constraint created.
	  *
	  * @param piDisplayInSpecTree This parameter must be set to
	  * <code>TRUE</code> if the constraint is to be disaplayed
	  * below the manikin, in the specificaton tree.  The default
	  * behavior is that the constraint is not displayed in the TREE.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT AddConstraint(SWShortName piEndEffector,
								  SWShortName piStartSegment, int piType,
								  SWKIIKConstraint *& poCreatedConstraint,
								  boolean piDisplayInSpecTree = FALSE) = 0;

	/**
	  * Add a constraint to this manikin from the specifications
	  * of an existing constraint.
	  * 
	  * @param piConstraint The constraint to copy from.
	  *
	  * @param poCreatedConstraint The constraint created.
	  *
	  * @param piDisplayInSpecTree This parameter must be set to
	  * <code>TRUE</code> if the constraint is to be disaplayed
	  * below the manikin, in the specificaton tree.  The default
	  * behavior is that the constraint is not displayed in the TREE.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT AddConstraint(SWKIIKConstraint * piConstraint,
								  SWKIIKConstraint *& poCreatedConstraint,
								  boolean piDisplayInSpecTree = FALSE) = 0;

	/**
	  * Search constraint on the given IK chain.
	  *
	  * @param piStartSegment The start element of the IK chain
	  *
	  * @return The constraint on the IK chain.
	  **/
	virtual SWKIIKConstraint * SearchConstraintsOnIKChain(SWShortName piSegment) = 0;

	/**
	  * Remove the given constraint.
	  *
	  * @param piConstraintToRemove The constraint to remove.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT RemoveConstraint(SWKIIKConstraint * piConstraintToRemove) = 0;

	/**
	  * Remove the constraint at the specified index.
	  *
	  * @param piIndex The index of the constraint to remove.
	  * First constraint is at index 0.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT RemoveConstraintAtIndex(unsigned piIndex = 0) = 0;

	/**
	  * Remove all existing constraints on the manikin.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT RemoveAllConstraints() = 0;

	/**
	  * Launch the IK solver to minimize the potential functions of <br>
	  * the constraints (i&#x2e;e&#x2e; reach all defined targets).
	  * This method performs a multi-constraint resolution.
	  **/
	virtual HRESULT Resolve() = 0;

	/**
	  * Resolve manikin's root (pelvis) with feet fixed.
	  * This method performs a multi-constraint resolution.
	  * @param piPointToReach The axis expressing the point to reach,
	  * in global coordinates.<br>
	  * The coordinates are expressed in millimeters.
	  *
	  * @return <code>S_OK</code> on success, and another error code on failure.
	  **/
	virtual HRESULT ResolveRootWithFixedFeet(const CATMathAxis & piPointToReach,
		boolean piRecomputeClash = TRUE) = 0;

	/**
	  * Launch the IK solver to minimize the potential functions of <br>
	  * the selected constraints (i&#x2e;e&#x2e;).
	  * This method performs a multi-constraints resolution.
	  * @param piConsIDList The constraints need be solved,
	  *
	  * @return <code>S_OK</code> on success, and another error code on failure.
	  **/
	virtual HRESULT ResolveConstraints(CATListOfCATString& piConsIDList) = 0;

	/**
	  * Assign a memo to the IK.
	  * @param piMemo The text of the memo to assign to the part.
	  * @return <code>S_OK</code> on success, and another error code on failure.
	  **/
	virtual HRESULT SetMemo(const CATUnicodeString & piMemo) = 0;

	/**
	  * @return The memo previously assigned to the IK.
	  **/
	virtual CATUnicodeString GetMemo() const = 0;

	/**
	  * Make the hands reach a specified point.
	  *
	  * @param piEndEffector The short name of the end effector.
	  * Since this is a hand reach, this parameter must be either
	  * <code>SWRSHaCPr</code> or <code>SWLSHaCPr</code>.
	  *
	  * @param piStartSegment The starting segment, which will be starting point
	  * of the IK resolution.  This start segment must be a ancestor of the
	  * end effector.
	  *
	  * @param piPointToReach The axis expressing the point to reach,
	  * in global coordinates.<br>
	  * The coordinates are expressed in millimeters.
	  *
	  * @return <code>S_OK</code> if the point could be reached,
	  * <code><E_FAIL></code> otherwise.
	  **/
	virtual HRESULT DirectionReach(SWShortName piEndEffector,
						SWKISegment * piStartSegment,
						const CATMathAxis & piPointToReach) = 0; 

	/**
	  * Make the manikin reach a point in Z direction.
	  *
	  * @param piEndEffector The first part of the body to reach the target.
	  * @param piStartSegment The first segment of the kinematic chain.
	  * @param piOffset The offset attached to the end effector.
	  * @param piPointToReach The position of the target.
	  *
	  * @return <code>S_OK</code> if the point could be reached,
	  * <code><E_FAIL></code> otherwise.
	  **/
	virtual HRESULT DirectionReachWithOffset(SWShortName piEndEffector,
						SWKISegment * piStartSegment,
						const CATMathAxis & piOffset,
						const CATMathAxis & piPointToReach) = 0; 

	/**
	  * Make a particular body element reach a specified point.
	  *
	  * @param piEndEffector The end effector, i.e. the segment or line of sight<br>
	  * which will have to reach the specified point.
	  *
	  * @param piStartSegment The starting segment, which will be starting point
	  * of the IK resolution.  This start segment must be a ancestor of the
	  * end effector.
	  *
	  * @param piPointToReach The axis expressing the point to reach,
	  * in global coordinates.<br>
	  * The coordinates are expressed in millimeters.
	  *
	  * @param piRecomputeClash <code>TRUE</code> if the clash must be
	  * recomputed after the reach, <code>FALSE</code> otherwise.
	  *
	  * @return <code>S_OK</code> if the point could be reached, <code><E_FAIL></code>
	  * otherwise.
	  **/
	virtual HRESULT Reach(SWKIBodyElement * piEndEffector,
						  SWKISegment * piStartSegment,
						  const CATMathAxis & piPointToReach,
						  boolean piRecomputeClash = TRUE) = 0;

	/**
	  * Adjust the manikin's arm (rotate around axis from shoulder to elbow), while
	  * keeping the hand at a fixed location.
	  *
	  * @param piSegment The short name of the segment.
	  * Since this must be an arm, this parameter must be either
	  * <code>SWRSArAr</code> or <code>SWLSArAr</code>.
	  *
	  * @param piAngle The rotation increment of the arm.<br>
	  * This value is expressed in radians.
	  *
	  * @return <code>S_OK</code> if the rotation is done, <code><E_FAIL></code>
	  * otherwise.
	  **/
	virtual HRESULT AdjustElbow(SWShortName piSegment, double piAngle) = 0;

	/**
	  * Set an IK behavior to the manikin
	  * This behavior will affect the way the inverse kinematics is resolved.
	  *
	  * @param piNewBehavior The new behavior
	  * The value of this parameter must be constructed from the
	  * 'IK behavior' constants defined above.
	  *
	  * @return <code>S_OK</code> if the new behavior is accepted, or an error
	  * code in case it is rejected.
	  **/
	virtual HRESULT SetBehavior(int piNewBehavior) = 0; 

	/**
	  * @return The current IK behavior of the manikin.
	  **/
	virtual int GetBehavior() const = 0; 

	/**
	  * Set the tolerance of the IK solver.
	  * @param piTolerance to assign to the IK solver.
	  *
	  * @return <code>S_OK</code> if the new tolerance is accepted, or an error
	  * code in case it is rejected.
	  **/
	virtual HRESULT SetTolerance(double piNewTolerance) = 0;

	/**
	  * @return The current IK solver tolerance of the manikin.
	  **/
	virtual double  GetTolerance() const = 0;

	/**
	  * Synchronize the list of IK constraints after an Undo event.
	  * This method is to be called by the system only.
	  **/
	virtual void Synchronize() = 0;

	/**
	  * Get the list of unsolved IK constraints after IK resolve failed
	  *
	  **/
	virtual void GetUnsolvedConstraints(CATListOfCATString & poConsIDList) const = 0; 

	/**
	  * @param piSegment The end effector of the IK chain.
	  *
	  * @return the start segment of the IK chain for the given end effector
	  **/
	virtual SWShortName GetStartSegmentShortName(const SWShortName piSegment) const = 0;
};

CATDeclareHandler(SWKIIKManager, CATBaseUnknown);
#endif
