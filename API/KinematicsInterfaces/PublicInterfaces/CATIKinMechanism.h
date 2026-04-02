#ifndef CATIKinMechanism_H
#define CATIKinMechanism_H
//
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
// 
// CATIKinMechanism.h
//   This interface allows to get and set kinematics mechanism's information.
//
//===================================================================
//
// Organization : dg/rddfl/mps/mam
//
// 09/12/03 :  UpdateAllJoints() method exposition - RKN
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "KinematicsItf.h"
#include "CATKinDefs.h"
#include "CATInterfaceObject.h"
#include "CATListOfCATBaseUnknown.h"

class CATIKinJoint;
class CATIKinCmd;
class CATIProduct;
class CATICkeParm;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByKinematicsItf IID IID_CATIKinMechanism;
#else
extern "C" const IID IID_CATIKinMechanism;
#endif

//------------------------------------------------------------------

/**
 * Interface to get and set mechanism's information.
 * <b>Role</b>: A mechanism has a name and is composed of Joints, Commands and a fixed part.
 * The state of the mechanism is represented by the values of its commands.
 * The methods provided by this interface allow to access this information.
 */

class ExportedByKinematicsItf CATIKinMechanism : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :

    /** 
     * Creates a new joint in a mechanism.
     * @param iJointType
     *    The type of joint to create (the basic types are defined in CATKinDefs).
     * @param iConnectorList
     * <table> 
     *    The list of elements on which the joint is created. The list of input elements connectors except for Rigid joint, which must be products. <br>
     *    Here is the table of elements you have to give for each type of joint : <br>
     *    e.g.: "Line (1)" means that the geometry type must be a line and must belong to the 1st product.<br>
     * </table> 
     * <table border> 
     * <tr> <th> Type </th> <th> Element 1 </th> <th> Element 2 </th> <th> Element 3 </th> <th> Element 4 </th> <th> Element 5 </th> <th> Element 6 </th> <th> Element 7 </th> <th> Element 8 </th></tr>
     * <tr> <td> Prismatic </td> <td> Line (1) </td> <td> Line (2) </td> <td> Plane (1) </td> <td> Plane (2) </td></tr> 
     * <tr> <td> Revolute </td> <td> Line (1) </td> <td> Line (2) </td> <td> Plane (1) </td> <td> Plane (2) </td></tr>
     * <tr> <td> Rigid </td> <td> Product (1) </td> <td> Product (2) </td></tr>
     * <tr> <td> Spherical </td> <td> Point (1) </td> <td> Point (2) </td></tr>
     * <tr> <td> Point Curve </td> <td> Point (1) </td> <td> Curve (2) </td></tr>
     * <tr> <td> Slide Curve </td> <td> Curve (1) </td> <td> Curve (2) </td></tr>
     * <tr> <td> Roll Curve </td> <td> Curve (1) </td> <td> Curve (2) </td></tr>
     * <tr> <td> Cylindrical </td> <td> Line (1) </td> <td> Line (2) </td></tr>
     * <tr> <td> Screw </td> <td> Line (1) </td> <td> Line (2) </td></tr>
     * <tr> <td> Universal </td> <td> Line (1) </td> <td> Line (2) </td> <td> Line (1 or 2), optional </td></tr>
     * <tr> <td> CV Joint </td> <td> Line (1) </td> <td> Line (2) </td> <td> Line (3) </td></tr>
     * <tr> <td> Point-Surface </td> <td> Point (1) </td> <td> Surface (2) </td> </tr>
     * <tr> <td> Planar Surface </td> <td> Plane (1) </td> <td> Plane (2) </td> </tr>
     * <tr> <td> Gear Joint </td> <td> Line (1) </td> <td> Line (3) </td> <td> Plane (1) </td> <td> Plane (3) </td> <td> Line (2) </td> <td> Line (3) </td> <td> Plane (2) </td> <td> Plane (3) </td></tr>
     * <tr> <td> Rack Joint </td> <td> Line (1) </td> <td> Line (3) </td> <td> Plane (1) </td> <td> Plane (3) </td> <td> Line (2) </td> <td> Line (3) </td> <td> Plane (2) </td> <td> Plane (3) </td></tr>
     * <tr> <td> Cable Joint </td> <td> Line (1) </td> <td> Line (3) </td> <td> Plane (1) </td> <td> Plane (3) </td> <td> Line (2) </td> <td> Line (3) </td> <td> Plane (2) </td> <td> Plane (3) </td></tr>
     * </table> 
     * <b>Notes :</b><br>
     * <dir>
     * <li>for Prismatic Joint : Plane 1 must contain Line 1 and Plane 2 must contain Line 2
     * <li>for Revolute Joint : Line 1 must be normal to Plane 1 and Line 2 must be normal to Plane2
     * <li>for Universal Joint : Connector 3 is the cross-pin axis. It must belong to product 1 or 2 and must be orthogonal to Line (1) or Line (2). <b>it is optional.</b>
     * <li>for CV Joint : the angle between Line (1) and Line (2) must be the same as the angle between Line (2) and Line (3)
     * <li>for Gear Joint : it is seen as a Revolute joint between Product 1 and Product 3, and a Revolute joint between Product 2 and Product 3
     * <li>for Rack Joint : it is seen as a Prismatic joint between Product 1 and Product 3, and a Revolute Joint between Product 2 and Product 3
     * <li>for Cable Joint : it is seen as a Prismatic joint between Product 1 and Product 3, and a Prismatic Joint between Product 2 and Product 3
     * </dir>
     * @param iCreateConstraints
     *    The boolean to set to TRUE if you want to create the associated assembly constraints
     *    and FALSE if not.
     * @param oJoint
     *    The created joint.
     * @see CATLISTP(CATBaseUnknown), CATIKinJoint
     */

    virtual HRESULT __stdcall AddJoint (const char* iJointType,
                                        CATLISTP(CATBaseUnknown)* iConnectorList,
                                        boolean iCreateConstraints,
                                        CATIKinJoint** oJoint) const=0;

    /** 
     * Returns the list of joints of the mechanism.
     * @param oJointList
     *    The list of joints (allocated by the method).
     * @see CATLISTP(CATBaseUnknown)
     */
    virtual HRESULT __stdcall GetJointList (CATLISTP(CATBaseUnknown)** oJointList) const=0;

    /** 
     * Sets a new fixed product on mechanism.
     * @param iFixedProduct
     *    The fixed product. 
     *    <br><b>Note :</b> if iFixedProduct is NULL, the Fixed Product is unset.
     * @param iCreateFixConstraint
     *    The boolean to set to TRUE if you want to create the associated assembly fix constraint
     *    and FALSE if not.
     * @see CATIProduct
     */
    virtual HRESULT __stdcall SetFixedProduct (CATIProduct* iFixedProduct,
                                               boolean iCreateFixConstraint) const=0;

    /** 
     * Returns the fixed product of the mechanism.
     * @param oFixedProduct
     *    The fixed product.
     * @see CATIProduct
     */
    virtual HRESULT  __stdcall GetFixedProduct (CATIProduct** oFixedProduct) const=0;

    /** 
     * Returns the list of the products involved in the mechanism.
     * @param oProductList
     *    The list of products (allocated by the method).
     * @see CATLISTP(CATBaseUnknown)
     */
    virtual HRESULT __stdcall GetProductList (CATLISTP(CATBaseUnknown)** oProductList) const=0;

    /** 
     * Creates a new command in a mechanism.
     * @param iJoint
     *    The joint supporting the command.
     * @param iCmdType
     *    The type of the command to create (the basic types are defined in CATKinDefs).
     * @param oCmd
     *    The created command.
     * @see CATIKinJoint, CATIKinCmd
     */
    virtual HRESULT __stdcall AddCommand (CATIKinJoint* iJoint,
                                          const char* iCmdType,
                                          CATIKinCmd** oCmd) const=0;

    /**
     * Returns the list of commands of the mechanism.
     * @param oCmdList
     *    The list of commands (allocated by the method).
     * @see CATLISTP(CATBaseUnknown)
     */
    virtual HRESULT __stdcall GetCmdList (CATLISTP(CATBaseUnknown)** oCmdlist) const=0;

    /** 
     * Returns the status of a mechanism.
     * @param oDOFWithoutCmd
     *    The degree of freedom without any command
     * @param oDOFWithCmd
     *    The degree of freedom with commands
     * @param oSimulationReady
     *    The boolean returning TRUE if the mechanism can be simulated and FALSE if not
     */
    virtual HRESULT __stdcall GetStatus (int* oDOFWithoutCmd,
                                         int* oDOFWithCmd,
                                         boolean *oSimulationReady) const=0;

    /** 
     * Returns the values of each command of the mechanism.
     * @param oSize
     *    The size of the list.
     * @param oCmdValues
     *    The list of values (allocated by the method).
     */
    virtual HRESULT __stdcall GetCmdValues (int* oSize, double** oCmdValues) const=0;

    /** 
     * Sets the values of each command of the mechanism and performs a solve with these values.
     * <br><b>Note :</b> to get the motion (displacement) of each product, use GetProductMotion
     * @param iSize
     *    The size of the list.
     * @param iCmdValues
     *    The list of values.
     */
    virtual HRESULT __stdcall SetCmdValues (int iSize, double* iCmdValues) const=0;

    /** 
     * Resets the values of each command of the mechanism to their initial position.
     * <br><b>Note :</b> to get the displacements of each product, use GetProductDisplacement
     */
    virtual HRESULT __stdcall ResetCmdValues () const=0;

    /** 
     * Gets the motion of one product after calling a Set or ResetCmdValues.
     * <br><b>Note :</b> the motion returned is always relative to the initial position
     * @param iProduct
     *    The product for which you want to know the motion
     * @param oMotion
     *    The motion of the product. The 12 double vector (allocated by the method) is set as following :
     * <dir>
     *  <li>Position 0 to 2  : the first column of the rotation matrix
     *  <li>Position 3 to 5  : the second column of the rotation matrix
     *  <li>Position 6 to 8 :  the third column of the rotation matrix
     *  <li>Position 9 to 11 : the tranlsation vector
     * </dir>
     */
    virtual HRESULT __stdcall GetProductMotion (CATIProduct* iProduct,
                                                double** oMotion) const=0;


    /** Returns the time parameter of the mechanism.
     * @param oTimeParameter
     *    The time parameter.
     * @see CATICkeParm
     */
    virtual HRESULT  __stdcall GetTimeParameter (CATICkeParm** oTimeParameter) const=0;


    /** 
     * Sets the values of the time parameter of the mechanism and performs a solve with these value (only if mechanism can be simulated with laws).
     * <br><b>Note :</b> to get the motion (displacement) of each product, use GetProductMotion
     * @param iTimeParameter
     *    The time parameter.
     */
    virtual HRESULT __stdcall SetTimeParameter (double iTimeParameter) const=0;

    /** 
     * Removes a joint in the mechanism .
     * @param iJoint
     *    The Joint to remove.
     */
    virtual HRESULT __stdcall RemoveJoint (CATIKinJoint * iJoint) const=0;

    /** 
     * Removes a command in the mechanism .
     * @param iCommand
     *    The Command to remove.
     */
    virtual HRESULT __stdcall RemoveCommand (CATIKinCmd * iCmd) const=0;

    /** 
     * Update all the mechanism joints.
     */
    virtual HRESULT __stdcall UpdateAllJoints () = 0;

    /** 
     * Reaches the command values in given number of steps and updates the visualization after each step.
     * @param iSize
     *    Number of commands in a mechanism
     * @param iCmdValues
     *    Array of target command values (position to achieve)
     * @param inbSteps
     *    Number of steps in witch the target command value is to be reached.  
     * <br><b>Legal values </b>
     *  <dl> <dt> inbSteps greater than 0 </dt> <dd> Number of step must be greater than zero.
     * @param oStepReached
     *    Number of steps reached successfully. This values is equal to iSize if this method does not fail.
     */
    virtual HRESULT __stdcall SetCmdValuesWithMultiSteps (int     iSize, 
                                                          double* iCmdValues, 
                                                          int     inbSteps, 
                                                          int     &oStepReached)const= 0;

 /**
   * Sets the command value to zero for the given command without disturbing part positions.
   * @param iCommand
   *    The command to reset to zero
   */
  virtual HRESULT __stdcall ResetCmdValueToZero (CATIKinCmd * iCmd) const=0;


};

#endif
