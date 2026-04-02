#ifndef CATIDegreesOfFreedom_H
#define CATIDegreesOfFreedom_H

// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//=====================
//  Jan 2004  Creation
//=====================

#include "MF0CST.h"

#include "CATBaseUnknown.h"
#include "CATDoFTypeEnum.h"
#include "CATDoFStatusEnum.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMF0CST IID IID_CATIDegreesOfFreedom;
#else
extern "C" const IID IID_CATIDegreesOfFreedom ;
#endif

/**
 * Interface to analyze the number of degrees of freedom of a component which implements CATIBloc.
 * <b>Role</b>: Any object which implements @href CATIBloc interface will also implement current CATIDegreesOfFreedom
 * interface. The analysis of degrees of freedom is done in the constraint network of the parent (GetFatherBloc)
 * of the current component 'this'. For example, any product inserted in a root product which contains constraints
 * is concerned by the current interface. The analysis is done within two steps : first step gives the number
 * of degrees, and the second one provides more details on each one of these degrees.
 */
class ExportedByMF0CST CATIDegreesOfFreedom: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
  * Retrieves the number of degrees of freedom of a CATIBloc.
  * @param oValidity
  * Validity of the request.
  *    <br><b>Legal values</b>:
  *    <br><tt>DoF_Acceptable</tt>   = the request is valid.
  *    <br><tt>DoF_KONotABloc</tt>   = this is not a @href CATIBloc (i.e. it should adhere to the CATIBloc Interface) 
  *    <br><tt>DoF_KONoFather</tt>   = this has no parent and cannot be in a constraint network (verify that this is not a root Product)
  *    <br><tt>DoF_KONotUpdated</tt> = this belong to a constraint network which is not up to date (some constraint are not satisfied)
  *    <br><tt>DoF_KOOthers</tt>     = internal error. Please report it as a bug
  *
  * @param oNbDegreesOfFreedom
  * Number of degrees of freedom of 'this' in the constraint network of its parent.
*/
   virtual HRESULT GetNbDegreesOfFreedom(CATDoFStatusEnum &oValidity,int & oNbDegreesOfFreedom) = 0;

 /**
   * Retrieves the type of a given degree of freedom.
   * @param iDegreeOfFreedom
   * Index of a degree of freedom (0 <= iDegreeOfFreedom < oNbDegreesOfFreedom).
   * @param oDoFType
   * type of the freedom.
   *    <br><b>Legal values</b>:
   *    <br><tt>DoF_Rotation</tt>    = the corresponding freedom is a rotation
   *    <br><tt>DoF_Translation</tt> = the corresponding freedom is a translation (along a vector)
   *    <br><tt>DoF_Screw</tt>       = the corresponding freedom is a Screw (Rotation + Translation along a rotation vector)
   *    <br><tt>DoF_NotDefinedType</tt> = problem on the corresponding degree of freedom (for example it does not exist)
   * @param oData
   * values defining the freedom. The value is returned with an accuracy to within 1E-6.
   * <table border=1 width="100%">
   *  <tr>
   *   <td> <b>Legal values for oDoFType</b></td>
   *   <td> <b>Values returned for oData</b></td>
   *  </tr>
   *  <tr>
   *   <td> DoF_Translation</td>
   *   <td> Vector = (oData[0], oData[1], oData[2])</td>
   *  </tr>
   *  <tr>
   *   <td> DoF_Rotation</td>
   *   <td> Direction = (oData[0], oData[1], oData[2])<br>
   *        Pole = (oData[3], oData[4], oData[5])</td>
   *  </tr>
   *  <tr>
   *   <td> DoF_Screw</td>
   *   <td> Direction = (oData[0], oData[1], oData[2])<br>
   *        Pole = (oData[3], oData[4], oData[5])<br>
   *        Pitch = oData[6]<br>
   *        Associated screw translation along axis is Pitch*(Angle of rotation)*Direction<br>
   *        The angle is measured counterclockwise in radians</td>
   *  </tr>
   * </table>
   */
   virtual HRESULT GetDegreesOfFreedom(int iDegreeOfFreedom, CATDoFTypeEnum &oDoFType, double oData[7])= 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATIDegreesOfFreedom, CATBaseUnknown);

//------------------------------------------------------------------

#endif
