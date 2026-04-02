#ifndef CATIKinCmd_H
#define CATIKinCmd_H
//
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
// 
// CATIKinCmd.h
//   This interface allows to get kinematics command's information.
//
//===================================================================
//
// Organization : dg/rddfl/mps/mam
//
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "KinematicsItf.h"
#include "CATKinDefs.h"
#include "CATBaseUnknown.h"

class CATIKinJoint;
class CATICkeParm;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByKinematicsItf IID IID_CATIKinCmd;
#else
extern "C" const IID IID_CATIKinCmd;
#endif

//------------------------------------------------------------------

/**
 * Interface to get kinematics command's information.
 * <b>Role</b>: A kinematics command has a type and drives a kinematics joint.
 * The methods provided by this interface allow to access this information.
 */
class ExportedByKinematicsItf CATIKinCmd : public CATBaseUnknown
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

};

//------------------------------------------------------------------
 
#endif

