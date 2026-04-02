#ifndef CATIKinJoint_H
#define CATIKinJoint_H
//
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
// 
// CATIKinJoint.h
//   This interface allows to get kinematics joint''s information.
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
#include "CATInterfaceObject.h"
#include "CATListOfCATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByKinematicsItf IID IID_CATIKinJoint;
#else
extern "C" const IID IID_CATIKinJoint;
#endif

//------------------------------------------------------------------

/**
 * Interface to get and set kinematics joint's information.
 * <b>Role</b>: A kinematics joint has a type, involves up to three parts, has frames
 * and parameters which are limited.
 * The methods provided by this interface allow to access this information.
 */
class ExportedByKinematicsItf CATIKinJoint : public CATBaseUnknown
{
  CATDeclareInterface;

  public :
  
    /**
     * Returns the type of the joint.
     * @param oJointType
     *    The type of the joint (basic types are defined in CATKinDefs).
     */
    virtual HRESULT GetType(const char** oJointType) const=0;
  
    /**
     * Returns the ratio of the joint.
     *  (applies only to the following types: gear, rack, cable, screw) 
     * @param oRatio
     *    The ratio (or pitch) of the joint
     */
    virtual HRESULT GetRatio(double* oRatio) const=0;

    /** 
     * Returns the products involved in the joint.
     * @param oProductList
     *    The list of products involved in the joint (allocated by the method)
     * @see CATLISTP(CATBaseUnknown)
     */
    virtual HRESULT GetProductList(CATLISTP(CATBaseUnknown)** oProductList) const=0;

    /**
     * Returns the connectors of the joint.
     * @param oConnectors
     *    The list of connectors involved in the joint (allocated by the method).
     * @see CATLISTP(CATBaseUnknown)
     */
    virtual HRESULT GetConnectors(CATLISTP(CATBaseUnknown)** oConnectors) const=0;

    /** 
     * Returns the parameter values of the joint.
     * @param oValues
     *   The list of values (allocated by the method).
     * @param oSize
     *   The size of the list.
     */
    virtual HRESULT GetJointValues(double** oValues, int* oSize) const=0;

    /** 
     * Returns a frame from the joint definition.
     * @param iFrameNumber
     *    The index of the frame you want to get (1,2,3 or 4)
     * @param oFrame
     *    The frame defined by a 12 double vector (allocated by the method) set as following :
     * <dir>
     *  <li>Position 0 to 2  : the first vector coordinates
     *  <li>Position 3 to 5  : the second vector coordinates
     *  <li>Position 6 to 8 :  the third vector coordinates
     *  <li>Position 9 to 11 : the origin coordinates
     * </dir>
     */
    virtual HRESULT GetFrame(int iFrameNumber, double** oFrame) const=0;

    /**
     * Sets the lower limit of the joint, for the first parameter.
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits, and on which parameter:
     *  Revolute:         1
     *  Prismatic:        1
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     *  PointOnCurve:     1
     *  RollCurve:        1
     */
    virtual HRESULT SetLowerLimit1(double iLimitValue) const=0;
    /**
     * Sets the upper limit of the joint, for the first parameter.
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits, and on which parameter:
     *  Revolute:         1
     *  Prismatic:        1
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     *  PointOnCurve:     1
     *  RollCurve:        1
     */
    virtual HRESULT SetUpperLimit1(double iLimitValue) const=0;   

    /**
     * Sets the lower limit of the joint, for the second parameter.
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits on the second parameter:
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     */
    virtual HRESULT SetLowerLimit2(double iLimitValue) const=0;

    /**
     * Sets the upper limit of the joint, for the second parameter.
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits on the second parameter:
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     */
    virtual HRESULT SetUpperLimit2(double iLimitValue) const=0;

    /**
     * Unsets the lower limit of the joint, for the first parameter.
     */
    virtual HRESULT UnsetLowerLimit1() const=0;

    /**
     * Unsets the upper limit of the joint, for the first parameter.
     */
    virtual HRESULT UnsetUpperLimit1() const=0;

    /**
     * Unsets the lower limit of the joint, for the second parameter.
     */
    virtual HRESULT UnsetLowerLimit2() const=0;

    /**
     * Unsets the upper limit of the joint, for the second parameter.
     */
    virtual HRESULT UnsetUpperLimit2() const=0;

    /**
     * Gets the lower limit existence and value
     *  for the first parameter of the joint.
     * @param isLimited
     *    isLimited equals 1 if the limit is defined, 0 otherwise
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits, and on which paramter:
     *  Revolute:         1
     *  Prismatic:        1
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     *  PointOnCurve:     1
     *  RollCurve:        1
     */
    virtual HRESULT GetLowerLimit1(int* isLimited, double * iLimitValue) const=0;

    /**
     * Gets the upper limit existence and value
     *  for the first parameter of the joint.
     * @param isLimited
     *    isLimited equals 1 if the limit is defined, 0 otherwise
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits, and on which paramter:
     *  Revolute:         1
     *  Prismatic:        1
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     *  PointOnCurve:     1
     *  RollCurve:        1
     */
    virtual HRESULT GetUpperLimit1(int* isLimited, double * iLimitValue) const=0;

    /**
     * Gets the lower limit existence and value
     *  for the second parameter of the joint.
     * @param isLimited
     *    isLimited equals 1 if the limit is defined, 0 otherwise
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits, and on which paramter:
     *  Revolute:         1
     *  Prismatic:        1
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     *  PointOnCurve:     1
     *  RollCurve:        1
     */
    virtual HRESULT GetLowerLimit2(int* isLimited, double * iLimitValue) const=0;

    /**
     * Gets the upper limit existence and value
     *  for the second parameter of the joint.
     * @param isLimited
     *    isLimited equals 1 if the limit is defined, 0 otherwise
     * @param iLimitValue 
     *    The value for the limit
     *    Table of joints that can have limits, and on which paramter:
     *  Revolute:         1
     *  Prismatic:        1
     *  Cylindrical:      1    2 
     *  Screw:            1    2 
     *  Gear:             1    2
     *  Rack:             1    2
     *  Cable:            1    2
     *  PointOnCurve:     1
     *  RollCurve:        1
     */
    virtual HRESULT GetUpperLimit2(int* isLimited, double * iLimitValue) const=0;

    /**
     * Returns the constraints of the joint.
     * @param oConstraints
     *    The list of constraints involved in the joint (allocated by the method).
     * @see CATLISTP(CATBaseUnknown)
     */
    virtual HRESULT GetConstraints(CATLISTP(CATBaseUnknown)** oConstraints) const=0;

    /**
     * Returns the available command types for the joint.
     * @param oListTypes
     *    The list (allocated by the method) of types (the basic types are defined in CATKinDefs).
     * @param oSize
     *    The size of the list.
     */
    virtual HRESULT GetCmdTypes(const char** oListTypes, int *oSize) const=0;

    /**
     * Sets the ratio of the joint.
     *  (applies only to the following types: gear, rack, cable, screw) 
     * @param iRatio
     *    The ratio (or pitch) to set. It must be different to 0.
     */
    virtual HRESULT SetRatio(double iRatio) const=0;


} ; 

#endif






