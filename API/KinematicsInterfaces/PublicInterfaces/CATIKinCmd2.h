#ifndef CATIKinCmd2_H
#define CATIKinCmd2_H
//
// COPYRIGHT DASSAULT SYSTEMES 2008
//===================================================================
// 
// CATIKinCmd2.h
//   This interface allows to get kinematics command's information.
//
//===================================================================
//
// Organization : dg/rddfl/mps/mam
//
// This interface is the same as CATKinCmd
// It contains a new API SetANewInitialValue in order to close
// a TOYOTA requirement on R18SP5 - IR D0638799 
//===================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "KinematicsItf.h"
#include "CATKinDefs.h"
#include "CATBaseUnknown.h"

class CATIKinJoint;
class CATICkeParm;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByKinematicsItf IID IID_CATIKinCmd2;
#else
extern "C" const IID IID_CATIKinCmd2;
#endif

//------------------------------------------------------------------

/**
 * Interface to get kinematics command's information.
 * <b>Role</b>: A kinematics command has a type and drives a kinematics joint.
 * The methods provided by this interface allow to access this information.
 */
class ExportedByKinematicsItf CATIKinCmd2 : public CATBaseUnknown
{
  CATDeclareInterface;

  public :
    /**
     * Returns the kinematics joint associated to the command.
     * @param oJoint
     *    The kinematics joint.
     * @see CATIKinJoint
     */
    virtual HRESULT GetJoint(CATIKinJoint** oJoint) const=0;
    /**
     * Returns the type of the command.
     * @param oCmdType
     *    The type of the command (basic types are defined in CATKinDefs).
     */
    virtual HRESULT GetType(const char** oCmdType) const=0;
    /**
     * Returns the parameter of the command.
     * @param oCmdParameter
     *    The parameter of the command 
     */
    virtual HRESULT GetParameter(CATICkeParm** oCmdParameter) const=0;

    /**
     * This method allows to shift the current value for a given command, keeping
     * all the parts in their current position and making the appropriate update
     * for the associated joint.
     * This method only works with a command on Prismatic, Revolute, Screw or Cylindrical joint.
     * @iCmdValue The new current value of the command
     *    The parameter of the command 
     */
    virtual HRESULT SetANewInitialValue(double iCmdValue) =0;

};

//------------------------------------------------------------------
 
#endif

