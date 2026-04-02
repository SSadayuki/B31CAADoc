/* -*-c++-*- */
#ifndef CATIGSOVariableOffsetGetAccess_H
#define CATIGSOVariableOffsetGetAccess_H
// COPYRIGHT Dassault Systemes 2009

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

//
// CATIGSOVariableOffsetGetAccess.h
// Define the CATIGSOVariableOffsetGetAccess interface
//

#include "ExportedByCATGotInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATGSOVariableOffsetDef.h"

class CATISpecObject_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGotInterfaces IID IID_CATIGSOVariableOffsetGetAccess;
#else
extern "C" const IID IID_CATIGSOVariableOffsetGetAccess;
#endif

//------------------------------------------------------------------
/**
* Interface to VariableOffset surface feature.
* <b>Role</b>: Allows you to access data of Variable Offset surfaces.
* @see CATIGSOFactory#CreateVariableOffset
*/

class ExportedByCATGotInterfaces CATIGSOVariableOffsetGetAccess: public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Gets the global surface to offset.
	*   @param oGlobalSurface
	*		the global surface
	*/
	virtual HRESULT GetGlobalSurface (CATISpecObject_var & oGlobalSurface)   = 0;

	/**
	* Gets the list of constraints.
	*   @param oListOfConstraints
	*		the list constraints
	*/
	virtual HRESULT GetListOfConstraints (CATLISTV(CATISpecObject_var) & oListOfConstraints)   = 0;

	/**
	* Gets the number of constraints.
	*   @param oNbConstraints
	*		the number of constraints
	*/
	virtual HRESULT GetNbConstraints (int & oNbConstraints)   = 0;

	/**
	* Gets the list of constant constraints.
	*   @param oListOfConstantConstraints
	*		the list of constant constraints
	*/
	virtual HRESULT GetListOfConstantConstraints (CATLISTV(CATISpecObject_var) & oListOfConstantConstraints)   = 0;

	/**
	* Gets the list of variable constraints.
	*   @param oListOfVariableConstraints
	*		the list of variable constraints
	*/
	virtual HRESULT GetListOfVariableConstraints (CATLISTV(CATISpecObject_var) & oListOfVariableConstraints)   = 0;

	/**
	* Gets the list of constraints.
	*   @param oListOfConstraints
	*		the list constraints
	*	@param oListOfTypes
	*		the associated list of constraints types
	*	param oListOfOffsetValues
	*		the associated list of offset values
	*	@see ConstraintType
	*/
	virtual HRESULT GetListOfConstraints (CATLISTV(CATISpecObject_var) & oListOfConstraints, CATListOfInt & oListOfTypes, CATLISTV(CATISpecObject_var) & oListOfOffsetValues)   = 0;

	/**
	* Gets the list of constant constraints.
	*   @param oListOfConstantConstraints
	*		the list of constant constraints
	*   @param oListOfTypes
	*		the associated list of constant constraints types
	*   @param oListOfOffsetValues
	*		the associated list of constant offset values
	*	@see ConstraintType
	*/
	virtual HRESULT GetListOfConstantConstraints (CATLISTV(CATISpecObject_var) & oListOfConstantConstraints, CATListOfInt & oListOfTypes, CATLISTV(CATISpecObject_var) & oListOfOffsetValues)   = 0;

	/**
	* Gets the list of variable constraints.
	*   @param oListOfVariableConstraints
	*		the list of variable constraints
	*	@param oListOfTypes
	*		the associated list of variable constraints types
	*	@see ConstraintType
	*/
	virtual HRESULT GetListOfVariableConstraints (CATLISTV(CATISpecObject_var) & oListOfVariableConstraints, CATListOfInt & oListOfTypes)   = 0;

	/**
	* Gets the constraint type a given constraint.
	*   @param iConstraint
	*		the given constraint
	*   @param oCst
	*		the constraint type
	*   @param iBeginSearchAt
	*		search init position in the global list of constraints
	*	@see ConstraintType
	*/
	virtual HRESULT GetConstraintType (const CATISpecObject_var iConstraint, ConstraintType & oCst, int iBeginSearchAt = 1)   = 0;

	/**
	* Gets the offset value for a given constant constraint.
	*   @param iConstantConstraint
	*		the given constant constraint
	*   @param oOffsetValue
	*		the offset value
	*   @param iBeginSearchAt
	*		search init position in the global list of constraints
	*/
	virtual HRESULT GetOffsetValue (const CATISpecObject_var iConstantConstraint, CATICkeParm_var &oOffsetValue, int iBeginSearchAt = 1)   = 0;

	/**
	* Gets the constraint type and its offset value for a given constraint.
	*   @param iConstraint
	*		the given constraint
	*   @param oCst
	*		the constraint type
	*   @param oOffsetValue
	*		the offset value
	*   @param iBeginSearchAt
	*		search init position in the global list of constraints
	*	@see ConstraintType
	*/
	virtual HRESULT GetConstraintTypeAndOffsetValue (const CATISpecObject_var iConstraint, ConstraintType &oCst, CATICkeParm_var &oOffsetValue, int iBeginSearchAt = 1)   = 0;

	/**
	* Gets the constraint from its index.
	*   @param iIndex
	*		the index position
	*	@param oConstraint
	*		the constraint at the given index
	*/
	virtual HRESULT GetConstraintFromIndex (int iIndex, CATISpecObject_var & oConstraint)   = 0;

	/**
	* Gets the constraint from its index.
	*   @param iIndex
	*		the index position
	*	@param oConstraint
	*		the constraint at the given index
	*	@param oCst
	*		the constraint type for the retrieved constraint
	*	@param oOffsetValue
	*		the offset value for the retrieved constraint
	*	@see ConstraintType
	*/
	virtual HRESULT GetConstraintFromIndex	(int iIndex, CATISpecObject_var & oConstraint, ConstraintType &oCst, CATICkeParm_var &oOffsetValue)   = 0;

	/**
	* Gets the orientation.
	*   @param oInvert
	*		False means that there is no invertion of the surface orientation 
	*       (orientation is the normal on the surface)
	*		True means orientation is inverted
	*/
	virtual HRESULT GetInvertDirection (CATBoolean & oInvert)   = 0;

	/**
	* Returns the tricky faces object on the object. 
	* @param oTrickyFaces 
	*		VariableOffset invalid faces
	*/ 
	virtual HRESULT GetTrickyFaces (CATLISTV(CATISpecObject_var) & oTrickyFaces)   = 0; 
};
CATDeclareHandler (CATIGSOVariableOffsetGetAccess, CATBaseUnknown);

//------------------------------------------------------------------

#endif
