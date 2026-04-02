// COPYRIGHT DASSAULT SYSTEMES	1999
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#ifndef CATIMf3DAxisSystemFactory_H
#define CATIMf3DAxisSystemFactory_H

#include "CATBaseUnknown.h"
#include "CATIMf3DAxisSystem.h"

class CATMathPoint;
class CATMathVector;
class CATMathAxis;
class CATICkeParm_var;

#include "MecModItfCPP.h" 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMf3DAxisSystemFactory;
#else
extern "C" const IID IID_CATIMf3DAxisSystemFactory;
#endif

/**
 * Interface to create an axis system. 
 * <b>Role:</b>This interface enables you to create an axis system in a Part document. 
 * You can retrieve or modify the newly axis system characteristics with the @href CATIMf3DAxisSystem 
 * interface. You can also set it the current one with the @href CATIMf3DAxisSystemManager interface.
 * <p>All the values (origin and vector coordinates, mathematical axis system and parameter values) 
 * are expressed in the absolute axis system. If some values are invalid (a null vector or colinear vectors) the
 * axis system is even created, but its update generates an error.</p>
 * <p>This interface is implemented by the specification container of the Part document 
 * that you retrieve by at least two means:
 * <ul>
 * <li>@href CATIContainerOfDocument#GetSpecContainer </li>
 * <li>@href CATInit#GetRootContainer </li>
 * </ul>
 * </p>
*/
class ExportedByMecModItfCPP CATIMf3DAxisSystemFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
   public :
   
   /**
   * Creates an axis system from one point and 2 vectors.
   * <br><b>Role:</b>This method creates an axis system from one point, the origin,
   * and 2 vectors for the axis directions. The third direction will be automatically computed 
   * to define a right-handed axis system. The axis directions are computed as follows:
   * <ul>
   * <li> X axis= <tt>iVectorX</tt> (normalized if necessary)
   * <li> Y axis is normalized and belongs to the plane (<tt>iVectorX</tt>,<tt>iVectorY</tt>) to be
   * X axis orthogonal. 
   * <li> Z axis  =  The vectorial product of the X axis by the Y axis (X axis ^ Y axis ) 
   * </ul>  
   *   @param iOriginPoint
   *      The mathematical point of the origin.
   *   @param iVectorX
   *      The mathematical vector of the X axis.
   *   @param iVectorY
   *      The mathematical vector of the Y axis.
   *   @param oAxisSystem
   *      The new axis system which is normalized, orthogonal and right-handed. Its type
   *      is <tt>CATAxisSystemStandard</tt> ( @href CATAxisSystemType ).
   */
   virtual HRESULT CreateAxisSystem(
      const CATMathPoint& iOriginPoint,	
      const CATMathVector& iVectorX,
      const CATMathVector& iVectorY,
      CATIMf3DAxisSystem_var& oAxisSystem)=0;
 
   /**
   * Creates an axis system from a mathematical axis system.
   * <br><b>Role:</b>This method creates an axis system from a mathematical axis system.
   * The new axis system is normalized and orthogonal. Its orientation (right or left-handed) depends
   * on the <tt>iMathAxis</tt> orientation.
   *   @param iMathAxis
   *      The mathematical axis system. 
   *   @param oAxisSystem
   *      The new axis system. Its type
   *      is <tt>CATAxisSystemStandard</tt> ( @href CATAxisSystemType ).
   */   
   virtual HRESULT CreateAxisSystem(
      const CATMathAxis& iMathAxis,
      CATIMf3DAxisSystem_var& oAxisSystem)=0;
   
   /**
   * Creates an axis system from knowledge parameters.
   * <br><b>Role:</b>These parameters are twelve and represent the coordinates 
   * of the origin and the three axes of the axis system. 
   * <br>An axis system has always twelve parameters as internal data. This way to create an
   * axis system enables you to affect your own parameters to define the new axis system.
   * But attention, these knowledge parameters will be aggregated
   * by the new axis system and so, will be deleted with the axis system destruction. 
   * Consequently, no parameter must already have a parent. In this case, the method
   * returns an error and the axis system is not created.
   *   @param iCoord
   *	Twelve parameters representing the three coordinates (x,y,z) of :
   *    <ul>
   *      <li>The origin point</li>	
   *      <li>Three vectors,the X,Y Z axis respectively </li>
   *    </ul>
   *    If the axis directions are not orthogonal, the parameter values will be 
   *    modified (by the update operation) to form an orthogonal axis system. 
   *   @param oAxisSystem
   *      The new axis system. Its type
   *      is <tt>CATAxisSystemStandard</tt> ( @href CATAxisSystemType ).
   * @return
   *  <ul>
   *    <li><tt>E_INVALIDARG</tt>: one parameter is null or has 
   *  already a parent, <tt>oAxisSystem</tt> is not valid</li>
   *    <li><tt>E_FAIL</tt>: Internal error, <tt>oAxisSystem</tt> is not valid</li>
   *    <li><tt>S_OK</tt>: <tt>oAxisSystem</tt> is valid </li>
   *  </ul>
   */   
   
   virtual HRESULT CreateAxisSystem(
      const CATICkeParm_var iCoord[4][3],
      CATIMf3DAxisSystem_var& oAxisSystem)=0;
  
   /**
   * Creates an axis system from another axis system.
   *   @param iAxisSystemToCopy
   *      The axis system to copy
   *   @param oAxisSystem
   *      The new axis system
   */   
   virtual HRESULT CreateAxisSystem(
      const CATIMf3DAxisSystem_var& iAxisSystemToCopy,
      CATIMf3DAxisSystem_var& oAxisSystem)=0;
   
   /**
   * Creates an explicit axis system.
   * <br><b>Role:</b>An explicit feature is an "isolated" feature. It means that
   * its geometry (<tt>CATBody</tt>) is fixed and you cannot change the axis system
   * characteristics. 
   * <br>The new axis system is located at the origin 0,0,0 and its three axis directions are
   * as follows:
   * <ul>
   *   <li>X axis is 1,0,0 </li>
   *   <li>Y axis is 0,1,0 </li>
   *   <li>Z axis is 0,0,1 </li>
   * </ul> 
   *   @param oAxisSystem
   *      The new explicit axis system. Its type
   *      is <tt>CATAxisSystemExplicit</tt> ( @href CATAxisSystemType ).
   */   
   virtual HRESULT CreateExplicitAxisSystem(
      CATIMf3DAxisSystem_var& oAxisSystem)=0;
   
   
};

CATDeclareHandler(CATIMf3DAxisSystemFactory, CATBaseUnknown);

#endif
