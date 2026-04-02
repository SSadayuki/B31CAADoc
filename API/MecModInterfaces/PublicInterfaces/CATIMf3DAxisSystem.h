// COPYRIGHT DASSAULT SYSTEMES 2001
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#ifndef CATIMf3DAxisSystem_H
#define CATIMf3DAxisSystem_H

#include "CATBaseUnknown.h"
#include "CATIAV5Level.h"

class CATMathPoint;
class CATMathVector;
class CATMathAxis;
class CATICkeParm_var;
class CATIBRepAccess_var;
class CATCell_var;
class CATUnicodeString;

#include "CATCORBABoolean.h"
#include "CATBoolean.h"

#include "MecModItfCPP.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMf3DAxisSystem;
#else
extern "C" const IID IID_CATIMf3DAxisSystem;
#endif

/**
 * The axis system type.
 * <b>Role:</b> This type defines the type of an axis system 
 * created by the @href CATIMf3DAxisSystemFactory interface. Except the 
 * <tt>CATAxisSystemExplicit</tt> case, the axis system type defines the way 
 * to compute its three axis directions.   
 * <br>This axis system type can be changed thanks to the 
 * @href CATIMf3DAxisSystem#SetAxisSystemType method and retrieved by the 
 * @href CATIMf3DAxisSystem#GetAxisSystemType method.
 *
 * @param CATAxisSystemStandard
 * The three axis directions are explicitely given either by coordinates or 
 * by geometrical features. See @href CATIMf3DAxisSystem#SetVectors , 
 * @href CATIMf3DAxisSystem#SetMathAxis or 
 * @href CATIMf3DAxisSystem#SetAxisDirection .
 *
 * @param CATAxisSystemAxisRotation
 * <ul>
 * <li>The first axis (X, Y or Z) is the rotation's axis. Its direction is 
 * defined either by coordinates or by a geometrical feature. 
 * The two other axes will be in the orthogonal plane to the first one.</li>
 * <li>The second axis direction is defined by a rotation about the first 
 * axis. The rotation is defined from a reference. This reference is a 
 * geometrical feature. The  @href CATIMf3DAxisSystem#GetAxisRotationParm 
 * method enables you to known or modify the angle of rotation. 
 * The @href CATIMf3DAxisSystem#SetAxisRotationReference method enables 
 * you to change the geometry whereas the 
 * @href CATIMf3DAxisSystem#GetAxisRotationReference method enables you
 * to retrieve it.</li>
 * <li>The third axis direction is computed to have an orthogonal axis 
 *     system. </li>
 * </ul>
 *
 * @param CATAxisSystemEulerAngles
 * The three axis directions are defined with three angle values as follows.
 * <ul>
 * <li> Angle1 = (X,N) , a rotation about Z transforming vector X into vector N.</li>
 * <li> Angle2 = (Z,W) , a rotation about vector N transforming vector Z into 
 *                       vector W.</li>
 * <li> Angle3 = (N,U) , a rotation about vector W.</li>
 * </ul>
 *
 * @param CATAxisSystemExplicit
 * The axis system is isolated. It means that its geometry (a <tt>CATBody</tt>) 
 * cannot be modified. 
 * @see CATIMf3DAxisSystem , CATIMf3DAxisSystemManager
 */
enum CATAxisSystemType
{  
   CATAxisSystemStandard = 0,  
   CATAxisSystemAxisRotation = 1, 
   CATAxisSystemEulerAngles = 2, 
   CATAxisSystemExplicit = 30 
};

/**
 * The axis number.  
 * <b>Role:</b> In an axis system created by the @href CATIMf3DAxisSystemFactory  interface, 
 * each axis is defined by a number. This number is useful for some methods of 
 * the @href CATIMf3DAxisSystem interface such as @href CATIMf3DAxisSystem#SetAxisDirection , 
 * @href CATIMf3DAxisSystem#GetAxisType ...
 *
 * @param CATAxisSystemXNumber
 * The number of the X axis. 
 * @param CATAxisSystemYNumber
 * The number of the Y axis.
 * @param CATAxisSystemZNumber
 * The number of the Z axis.
 * @see CATIMf3DAxisSystem , CATIMf3DAxisSystemManager
 */
enum CATAxisSystemXYZNumber
{  
	CATAxisSystemXNumber = 1,  CATAxisSystemYNumber = 2, 	CATAxisSystemZNumber = 3 
};


/**
* The axis direction definition mode.
* <b>Role:</b> This type is the way to define an axis direction of an axis 
* system created by the @href CATIMf3DAxisSystemFactory interface. Each axis 
* direction can be defined either by coordinates or with a geometrical feature.
* This information can be retrieved by the 
* @href CATIMf3DAxisSystem#GetAxisType method and defined by 
* the @href CATIMf3DAxisSystem#SetAxisType method.
*
* @param CATAxisSystemSameDirection
* The axis direction is defined with a geometrical feature (point, line, plane normal) 
* and with the same direction of it. 
* @param CATAxisSystemCoordinatesDirection
* The axis direction is defined by vector coordinates. 
* @param CATAxisSystemOppositeDirection
* The axis direction is defined with a geometrical feature (point, line, plane normal) 
* and with the reverse direction of it.
* @param CATAxisSystemDefaultComputedDirection
* The axis direction is defined by default computed direction. 
* @see CATIMf3DAxisSystem , CATIMf3DAxisSystemManager
*/

enum CATAxisSystemDirectionType
{  
  CATAxisSystemSameDirection = 0,  
  CATAxisSystemCoordinatesDirection = 1, 	
  CATAxisSystemOppositeDirection = 2,
  CATAxisSystemDefaultComputedDirection = 3
};

/**
 * The axis system origin definition mode. 
 * <b>Role:</b> This type is the way to define the origin of an axis system 
 * created by the @href CATIMf3DAxisSystemFactory interface. An origin can be 
 * defined either by coordinates or with a geometrical feature. This 
 * information can be retrieved by the @href CATIMf3DAxisSystem#GetOriginType
 * method and defined by the @href CATIMf3DAxisSystem#SetOriginType method.
 * 
 * @param CATAxisSystemPoint
 * The origin is defined with a geometrical feature (a point or a featurized vertex). 
 * @param CATAxisSystemCoordinatesPoint
 * The origin is defined by coordinates. 
 * @param CATAxisSystemDefaultComputedPoint
 * The origin is default computed.
 * @see CATIMf3DAxisSystem , CATIMf3DAxisSystemManager
 */
enum CATAxisSystemPointType
{  
	CATAxisSystemPoint = 0,  CATAxisSystemCoordinatesPoint = 1 , CATAxisSystemDefaultComputedPoint = 2
};

/**
 * The axis system orientation.
 * <b>Role:</b>This type defines the orientation of an axis system 
 * created by the @href CATIMf3DAxisSystemFactory interface. You retrieve 
 * this information thanks to the @href CATIMf3DAxisSystem#IsDirect method.
 * 
 * @param CATAxisSystemIndirect
 * The axis system is left-handed.
 * @param CATAxisSystemDirect
 * The axis system is right-handed.
 * @param CATAxisSystemNotOrthogonal
 * The axis system is not orthogonal. In this case, the axis system's update 
 * returns an error.
 * @see CATIMf3DAxisSystem , CATIMf3DAxisSystemManager
 */
enum CATAxisSystemIsDirect
{  
	CATAxisSystemIndirect = 0,  CATAxisSystemDirect = 1 , CATAxisSystemNotOrthogonal = 2 
};


/**
 * Interface for an axis system.
 * <b>Role:</b>This interface enables you to modify or retrieve the 
 * characterictics of an axis system created by the @href CATIMf3DAxisSystemFactory interface. 
 * An axis system is a feature defined by an origin and three axis directions. 
 *
 * <p><b>Axis System Origin</b>
 * <br>An axis system is located at a position in the absolute axis system 
 * which represents the origin. This location can be defined either by three 
 * coordinates , see @href #SetOrigin / @href #SetMathAxis , it can be 
 * defined by a geometrical feature, or it can be at the origin of the three 
 * axis directions. For the last two cases, refer to the @href #SetOriginPoint 
 * method.</p>
 *
 * <p><b>Axis Directions</b>
 * <br>An axis system is defined by three orthonormal axis 
 * directions. If the three axis directions are not orthogonal, the update 
 * operation on the feature will generate an error.
 * <br>There are three ways to define the axis directions of an axis system, 
 * each of them depends on the axis system type 
 * ( @href CATAxisSystemType ):
 * <ul>
 * <li><b>Standard</b> Axis System :</b></li>
 *
 * <p>The three directions are defined either by coordinates, see 
 * @href #SetVectors / @href #SetMathAxis or with geometrical features 
 * thanks to the @href #SetAxisDirection method. </p>
 *
 * <li><b>Axis Rotation</b> Axis System:</b></li>
 *
 * <p>The rotation's axis direction is defined either by coordinates or with a 
 * geometrical feature like any axis with the <tt>Standard</tt> way. 
 * The rotation about this axis is defined by the rotation of a geometry 
 * projected in the orthogonal plane to the rotation's axis. The rotation's 
 * angle value is a knowledge parameter consultable and modifiable with the 
 * @href #GetAxisRotationParm method. The geometry is a geometrical 
 * feature, named reference, that you can set with the 
 * @href #SetAxisRotationReference method and that you can retrieve with the 
 * @href #GetAxisRotationReference method.</p>
 *
 * <li><b>Euler Angles Axis</b> System:</li> 
 * <p>The three directions are automatically computed thanks to three 
 * angle values. You retrieve the knowledge parameters to consult the angle values 
 * or modify them thanks to the @href #GetEulerAnglesParm method. In this case,
 * the axis system already forms an orthonormal and right-handed axis system.</p>
 * </ul></p>
 *
 * <p><b> The Axis System Internal Data</b>
 * <br>An axis system is internally defined by twelve knowledge parameters 
 * that you can retrieve by the @href #GetParm methods. 
 * These parameters are computed from the origin and the axes valuations.
 *
 * <p><b> The Axis Order </b>
 * <br>The axis order enables to compute an ortho-normal axis system if its internal data
 * do not form one. Except the Euler axis system where the axis order is not customizable, it 
 * can be important to control the axis order. 
 * <ul>
 * <li>In the <tt>Standard</tt> axis system, the first direction 
 * is never modified, the second and the third axis directions can be 
 * re-computed to have an orthogonal axis system</li>
 * <li>In the <tt>Axis Rotation</tt> axis system,
 * the axis of rotation is defined by the first axis direction. The second axis direction
 * is the rotation's reference and the third can be 
 * re-computed to have an orthogonal axis system</li>
 * </ul>
 * To change the axis direction order there are two steps to follow:
 * <ol>
 * <li>Call for each axis direction the @href #SetAxisType method 
 * with the <tt>CATAxisSystemSameDirection</tt> value</li>
 * <li>Call the @href #SetAxisDirection method with the 
 * @href CATAxisSystemXYZNumber in the order</li>
 * </ol>
 * Refer to the article entitled "Creating Axis Systems" in the CAA Encyclopedia 
 * for more details about the axis order implementation.
 *
 * <p><b> The Axis System Orientation </b>
 * <br>The axis system orientation is consultable with the @href #IsDirect 
 * method. Except the Euler axis system which is always right-handed, you can 
 * control the axis system orientation. It is enough to control the vector 
 * coordinates or to control the geometrical feature direction. 
 * In this last case, with the @href #SetAxisType method you can inverse an 
 * axis direction with <tt>CATAxisSystemOppositeDirection</tt> option.</p>
 *
 * <p><b> The Explicit Axis System</b>
 * <br>It is possible to "fix" the geometry, the associated <tt>CATBody</tt>, 
 * of the feature. In this case, the feature is isolated and you cannot modify 
 * it. See the @href #SetAxisSystemType method. 
 *
 * <p><b> The Axis System Sub-Elements </b>
 * <br>The sub-elements are the three planes, the three axes and the origin 
 * point of the axis system. There are BRep objects, in other words objects
 * handled by the @href CATIBRepAccess interface. You retrieve them by the 
 * @href #GetPlaneBRepAccess , @href #GetAxisBRepAccess and 
 * @href #GetOriginPointBRepAccess methods respectively. You should featurize 
 * them ( @href CATIFeaturize ) before using them as input of features.</p>
 */
class ExportedByMecModItfCPP CATIMf3DAxisSystem: public CATBaseUnknown
{
  CATDeclareInterface;

	public :

	// --------------------------------------------------------------
	// Mathematics entities
	// --------------------------------------------------------------

	/**
	* Valuates the origin location with a mathematical point.
    * <br><b>Role:</b>This method enables you to locate the axis system origin
    * with a mathematical point. This method automatically changes the origin 
    * definition mode to become <tt>CATAxisSystemCoordinatesPoint</tt> and 
    * unset the geometry. The @href #GetOriginPoint method returns 
    * <tt>NULL_var</tt> after this call.
    *  
    *   @param iOriginPoint
    *      The mathematical point of the origin.
    *   @return
    *    <ul>
    *      <li>E_FAIL: If an internal error or if the axis system is explicit 
    *         ( @href CATAxisSystemType ), </li>
    *      <li>S_OK: otherwise. </li>
    *    </ul>
    */
	virtual HRESULT SetOrigin(const CATMathPoint& iOriginPoint)	=0; 

	/**
    * Retrieves the origin location with a mathematical point.
    * <br><b>Role:</b>This method retrieves from the axis system parameters the 
    * location of the axis system origin. Any way the origin has been 
    * defined, with a mathematical point, with a geometry or at 
    * the origin of the three axis, this method returns the location of the 
    * origin. But attention, the result can be false if the origin is 
    * geometry dependant. An axis system update ensures the result. 
    * 
    *   @param oOriginPoint
    *      The mathematical point of the origin.
    */
	virtual HRESULT GetOrigin(CATMathPoint& oOriginPoint) const	=0;

	/**
	* Valuates the axis directions.
	* <br><b>Role:</b>This method Valuates the axis directions with mathematical vectors  
    * to define a right-handed axis system. 
    * <br><b>Role:</b>This method enables you to valuate the three axes from 
    * two mathematical vectors. The third axis is equal to the vectorial 
    * product of these two vectors. This method automatically changes each axis 
    * direction definition mode to become <tt>CATAxisSystemCoordinatesDirection</tt>
    * and unset the geometry. So after this call, the 
    * @href #GetAxisDirection method returns <tt>NULL_var</tt> for the three 
    * axis directions.
    *   @param iVectorX
    *      The mathematical vector of the X axis
	*   @param iVectorY
    *      The mathematical vector of the Y axis
    *   @return
    *      <ul>
    *      <li>E_FAIL: If an internal error or if the axis system is explicit 
    *         ( @href CATAxisSystemType ), </li>
    *      <li>E_INVALIDARG: If the two vectors are not orthogonal, </li>
    *      <li>S_OK: otherwise. </li>
    *      </ul>
    */
	virtual HRESULT SetVectors(const CATMathVector& iVectorX, const CATMathVector& iVectorY)	=0; 

	/**
    * Retrieves the X axis and Y axis directions.
    * <br><b>Role:</b>This method retrieves from the axis system parameters the 
    * mathematical vectors wich define the X axis and the Y axis directions. 
    * Any way the axis directions has been defined, 
    * with mathematical vectors, with geometries or automatically computed, 
    * this method returns the vector coordinates. But attention, the result can 
    * be false if an axis direction is geometry dependant. An axis system 
    * update ensures the result. 
    * 
    *   @param oVectorX
    *      The mathematical vector of the X axis
	*   @param oVectorY
    *      The mathematical vector of the Y axis
    *   
    */
	virtual HRESULT GetVectors(CATMathVector& oVectorX, CATMathVector& oVectorY) const	=0;

	/**
	* Valuates the axis system with a mathematical axis system. 
    * <br><b>Role:</b>This method enables you to valuate the axis system with 
    * a mathematical axis system. This method automatically unset the geometry 
    * (origin / three axis directions) and changes the type ( origin/ three axis direction) to become 
    * <tt>CATAxisSystemCoordinatesPoint</tt> and 
    * <tt>CATAxisSystemCoordinatesDirection</tt> respectively.
    * So after this call, the @href #GetAxisDirection method returns <tt>NULL_var</tt> for the three axis 
    * directions and the @href #GetOriginPoint method returns <tt>NULL_var</tt> for the origin.
	* <br>A mathematical axis system is by construction orthonormal. So the 
    * axis system is orthonormal. But like any @href CATMathAxis object, it may
    * be right-handed or left-handed.
    *   @param iMathAxis
    *      The mathematical axis system. If <tt>iMathAxis</tt> is not valid 
    *      (a NULL vector or two colinear vectors) the axis system update will 
    *      generate an error. The @href CATAxisSystemIsDirect
    *      value becomes <tt>CATAxisSystemNorOrthogonal</tt>
    *   @return
    *    <ul>
    *      <li>E_FAIL: If an internal error or if the axis system is explicit 
    *         ( @href CATAxisSystemType ), </li>
    *      <li>S_OK: otherwise. </li>
    *    </ul>
    */
	virtual HRESULT SetMathAxis(const CATMathAxis& iMathAxis)	=0; 

	/**
	* Retrieves the mathematical axis system.
    * <br><b>Role:</b>This method retrieves from the axis system parameters
    * a mathematical axis system.  Any way the axis directions or the origin has 
    * been defined, this method returns a mathematical axis system. But attention, 
    * the result can be false if an axis direction or the origin is 
    * geometry dependant. An axis system update ensures the result. 
    *   @param oMathAxis
    *      The mathematical axis
    */
	virtual HRESULT GetMathAxis(CATMathAxis& oMathAxis) const	=0;	

	// --------------------------------------------------------------
	// Geometric elements defining the Axis System
	// --------------------------------------------------------------

	/**
	* Sets the origin definition mode. 
	* <br><b>Role:</b>The origin point can be defined either by a geometrical 
    * point or by coordinates.
    *   @param iPointType
    *      The origin definition mode. 
    *     <ul>
	*		<li>iPointType=<tt>CATAxisSystemCoordinatesPoint</tt>: </li>
    *           Its specifies that the origin stays at the position defined by 
    *           its coordinates.
	*		<li>iPointType=<tt>CATAxisSystemPoint</tt> and @href #GetOriginPoint returns <tt>NULL_var</tt></li>
    *          <br>Its specifies that the origin will be located at the 
    *              intersection of the three axes.
	*		<li>iPointType=<tt>CATAxisSystemPoint</tt> and @href #GetOriginPoint returns a feature </li>
    *          <br>its specifies that the origin stands at the position defined
    *              by the point feature.
    *     </ul>
    *   @return
    *    <ul>
    *      <li>E_FAIL: If an internal error or if the axis system is explicit 
    *         ( @href CATAxisSystemType ), </li>
    *      <li>S_OK: otherwise. </li>
    *    </ul>
    */
	virtual HRESULT SetOriginType(const CATAxisSystemPointType iPointType) =0;

	/**
	* Retrieves the origin definition mode. 
    *   @param oPointType
    *       The definition type of the origin.
    */
	virtual HRESULT GetOriginType(CATAxisSystemPointType& oPointType) const =0;

	/**
	* Sets a geometrical feature to define the origin. 
    * <br><b>Role:</b>This method enables you two things:
    * <ul>
    * <li><tt>iOriginPoint</tt> is not <tt>NULL_var</tt>: To link the axis 
    * system origin position to a point feature position. In this case, the
    * method automatically changes the origin definition mode to become 
    * <tt>CATAxisSystemPoint</tt> </li>
    * <li><tt>iOriginPoint</tt> is <tt>NULL_var</tt>: If the 
    * origin definition mode is <tt>CATAxisSystemPoint</tt> the origin will
    * be located at the intersection of the three axes.</li>
    * </ul>
    * 
    *   @param iOriginPoint
    *      The geometrical point defining the origin. It should be a feature:
    *      <ul>
    *        <li>A point: @href CATPoint </li>
    *        <li>A vertex: @href CATIMfPoint. It is the BRep feature of a vertex. Refer to
    *           @href CATIBRepAccess and @href CATIFeaturize interfaces for 
    *            details about the BRep object featurization.</li>
    *      </ul>
    *   @return
    *    <ul>
    *      <li>E_FAIL: If an internal error or if the axis system is explicit 
    *         ( @href CATAxisSystemType ), </li>
    *      <li>S_OK: otherwise. </li>
    *    </ul>
    */
	virtual HRESULT SetOriginPoint(const CATBaseUnknown_var& iOriginPoint) =0; 

	/**
	* Retrieves the geometrical feature which defines the origin. 
    *   @param oOriginPoint
    *      The geometrical point ( @href CATPoint ) or vertex ( @href CATIMfPoint ) which defines 
    *      the origin. If the @href #SetOriginPoint method
	*      has never been called, the returned value is <tt>NULL_var</tt>.
    */
	virtual HRESULT GetOriginPoint(CATBaseUnknown_var& oOriginPoint)	const=0; 

	/**
	* Sets the axis direction definition mode. 
    * <br><b>Role:</b> An axis direction can be defined either by a 
    * geometrical feature or by coordinates.
    * <ul>
	* <li>iDirectionType= <tt>CATAxisSystemCoordinatesDirection</tt>: the axis 
    *       direction is defined by coordinates.</li>
    *      
	* <li>iDirectionType<><tt>CATAxisSystemCoordinatesDirection</tt> and @href #GetAxisDirection 
    *     returns no feature: the axis direction will be computed in order to
    *     build an orthogonal axis system with the two other axes.</li>
    *       
	* <li>iDirectionType= <tt>CATAxisSystemSameDirection</tt> 
    *       and @href #GetAxisDirection returns a feature: The axis is defined 
    *       by a geometry which can be.</li>
    *   <ul>  
	*   <li>A point, the axis direction is the vector from 
    *      the origin point to the point.</li>
	*   <li>A line, the axis direction is the line direction.</li>
	*   <li>A plane, the axis direction is the normal vector to the plane.</li>
    *   </ul>
    * <li>iDirectionType= <tt>CATAxisSystemOppositeDirection</tt>
    *       and @href #GetAxisDirection returns a feature: The axis is defined 
    *       by a geometry which can be.</li>
    *   <ul>  
	*   <li>A point, the axis direction is the vector from 
    *      the point to the origin point.</li>
	*   <li>A line, the axis direction is opposed to the line direction.</li>
	*   <li>A plane, the axis direction is opposed the normal vector to the 
    *     plane.</li>
    *   </ul>
    * </ul>
    *
    *   @param iAxisNumber
    *      The number of the axis direction.
	*   @param iDirectionType
    *      The axis direction type.
    *   @return
    *    <ul>
    *      <li>E_FAIL: an internal error or if the axis system is explicit 
    *         ( @href CATAxisSystemType ), </li>
    *      <li>S_OK: otherwise. </li>
    *    </ul>
    */

	virtual HRESULT SetAxisType(const CATAxisSystemXYZNumber iAxisNumber,const CATAxisSystemDirectionType iDirectionType) =0;
	
    /**
	* Retrieves the axis direction definition mode. 
	*   @param iAxisNumber
    *      The number of the axis direction.
    *   @param oDirectionType
    *       The axis direction definition mode.
    */
	virtual HRESULT GetAxisType(const CATAxisSystemXYZNumber iAxisNumber,CATAxisSystemDirectionType& oDirectionType) const=0;

	/**
	* Sets a geometrical feature to define an axis direction.
    * <br><b>Role:</b>This method enables you two things:
    * <ul>
    * <li><tt>iPointLineOrPlane</tt> is not <tt>NULL_var</tt>: To link an axis 
    * direction to a geometry. In this case, the
    * method automatically changes the axis direction definition mode to become 
    * <tt>CATAxisSystemSameDirection</tt> if the mode is 
    * <tt>CATAxisSystemCoordinatesDirection</tt> otherwise the mode 
    * is not changed.</li>
    * <li><tt>iPointLineOrPlane</tt> is <tt>NULL_var</tt>: If the 
    * axis direction definition mode is not 
    * <tt>CATAxisSystemCoordinatesDirection</tt> the axis direction will
    * be build in order to have an orthogonal axis system </li>
    * </ul>
    * 
	*   @param iAxisNumber
    *      The number of the axis.
    *   @param iPointLineOrPlane
    *      It is a feature, in other words a @href CATISpecObject , which can 
    *     be:
    *    <ul>  
	*       <li>A point ( @href CATPoint or @href CATIMfPoint ) , 
    *        the axis direction is the vector from the origin point to the 
    *        point. (*)</li>
	*       <li>A line ( @href CATLine or @href CATIMfLine ), the axis direction
    *        is the line direction. (*)</li>
	*       <li>A plane ( @href CATPlane or @href CATIMfPlane ), the axis 
    *        direction is the normal vector to the plane. (*)</li>
    *    </ul>
    * (*)If the axis direction definition mode is <tt>CATAxisSystemSameDirection</tt> otherwise
    * the direction is opposed.
    * <br>The @href CATIMfLine, @href CATIMfPlane and @href CATIMfPoint features 
    * are the featurizations of a selecting object. They are called BRep 
    * features. Refer to the @href CATIBRepAccess and @href CATIFeaturize 
    * interfaces for more information about the BRep features.
    *  
    *   @return
    *    <ul>
    *      <li>E_FAIL: If an internal error or if the axis system is explicit 
    *         ( @href CATAxisSystemType ), </li>
    *      <li>S_OK: otherwise. </li>
    *    </ul>
    */
	virtual HRESULT SetAxisDirection(const CATAxisSystemXYZNumber iAxisNumber,const CATBaseUnknown_var& iPointLineOrPlane) =0; 

	/**
	* Retrieves the geometrical feature which defines an axis direction. 
	*   @param iAxisNumber
    *      The number of the axis.
    *   @param oPointLineOrPlane
    *      The geometrical element defining the axis. If the 
    *      @href #SetAxisDirection method has never been called,
	*      the returned value is <tt>NULL_var</tt>.
    */
	virtual HRESULT GetAxisDirection(const CATAxisSystemXYZNumber iAxisNumber,CATBaseUnknown_var& oPointLineOrPlane)	const=0; 

	// --------------------------------------------------------------
	// Literals 
	// --------------------------------------------------------------

	/**
    * @nodoc
	* Set the literals of the coordinates of the axis system.
	*   @param iCoord
	*			12 literals representing the 3 coordinates (x,y,z) of :<ul>
 	*			<li>1 point for the origin.</li>	
	*			<li>3 vectors for the X,Y Z axis defining an orthonormal axis system.
	*			The norm of a vector can be different from 1.</li></ul>
    * 
    * The parameters are not aggregated to the axis system.
    * They may have already a father because then the axis system has already got its own parameters.
	*   @return
    *      Error code of function.
    */
	virtual HRESULT SetParm(const CATICkeParm_var iCoord[4][3])	=0; 

	/**
	* Retrieves the internal parameters of the axis system.
    * <br><b>Role:</b>This method retrieves the internal parameters which 
    * define the origin and the three axes. The value of each parameter can be 
    * wrong if the axis system is not up to date. 
    * <br>If you modify a parameter, its value can be changed to have an 
    * orthogonal axis system. If the parameters form a null vector or form two
    * colinear vectors, the axis system is not valid. Its update generates an 
    * error.
    * 
    *   @param oCoord
    *	Twelve parameters representing the three coordinates (x,y,z) of :
    *    <ul>
    *      <li>The origin point</li>	
    *      <li>Three vectors,the X,Y Z axis respectively </li>
    *    </ul>  
    */
	virtual HRESULT GetParm(CATICkeParm_var oCoord[4][3]) const	=0;
	
	// --------------------------------------------------------------
	// Axis system types 
	// --------------------------------------------------------------

   /**
	* Sets the axis system type.
    * <br><b>Role:</b>This method enables you to modify the type of the axis 
    * system. This method modifies the internal data:
    * 
    * <ul>
    *  <li><tt>iAxisSystemType</tt> != <tt>CATAxisSystemAxisRotation</tt></li>
    *      <p>The parameters of the Axis Rotation type are lost: there is no more
    *     the angle parameter and the geometry is lost</p>
    *  <li><tt>iAxisSystemType</tt> != <tt>CATAxisSystemEulerAngles</tt></li>
    *     <p>The parameters of the Euler type are lost: there is no more
    *        the three angle parameters.</p>
    * </ul>
	*   @param iAxisSystemType
	*	   The axis system type.
	*/
	virtual HRESULT SetAxisSystemType(const CATAxisSystemType iAxisSystemType) =0;

   /**
	* Retrieves the axis system type.
	*   @param oAxisSystemType
	*			The axis system type.
	*/
	virtual HRESULT GetAxisSystemType(CATAxisSystemType& oAxisSystemType) const =0;

	// --------------------------------------------------------------
	// Axis system of type Axis rotation 
	// --------------------------------------------------------------
   /**
	* Retrieves the rotation angle parameter.
    * <br><b>Role:</b>This method returns the knowledge parameter which defines 
    * the rotation angle about the rotation's axis. You can change the 
    * parameter value to modify the angle value.
	*   @param oAngleParm
	*	   The parameter of the rotation angle.
	*   @return
    *   <ul>
    *		<li>E_FAIL: If an internal error or if the axis system is not 
    *               <tt>CATAxisSystemAxisRotation</tt>, </li>
    *       <li>S_OK: otherwise .</li>
    *   </ul>
	*/

   virtual HRESULT GetAxisRotationParm(CATICkeParm_var& oAngleParm) const =0;

   /**
	* Valuates the reference's geometry for the rotation about the rotation axis.
    * <br><b>Role:</b>This method enables you to affect a geometrical feature 
    * to represent the axis which will be projected in the orthogonal plane
    * to the rotation's axis. It represents the rotation's reference.
	*   @param iReference
	*	   It is a geometrical feature, in other words a @href CATISpecObject . It
    *       can be 
    *    <ul>  
	*       <li>A point ( @href CATPoint or @href CATIMfPoint ) : 
    *        the axis direction is the vector from the origin point to the point.(*)</li>
	*       <li>A line ( @href CATLine or @href CATIMfLine ): the axis direction is the 
    *        line direction.(*)</li>
	*       <li>A plane ( @href CATPlane or @href CATIMfPlane ): the axis 
    *          direction is the normal vector to the plane.(*)</li>
    *        
    *    </ul>
    * (*)If the axis direction definition mode is <tt>CATAxisSystemSameDirection</tt> otherwise
    * the direction is opposed.
    * <br>The @href CATIMfLine, @href CATIMfPlane and @href CATIMfPoint features are the 
    * featurizations of a selecting object. They are called BRep features. Refer to 
    * the @href CATIBRepAccess and @href CATIFeaturize interfaces for more information about the 
    * BRep features. 
    *   @return
    *      <ul>
    *       <li>E_FAIL: for an internal error or if the axis system is not 
    *               <tt>CATAxisSystemAxisRotation</tt></li>
    *       <li>E_INVALIDARG: the reference is not valid: it is not a @href CATPlane,
    *                          @href CATLine, @href CATPoint, @href CATIMfPlane,
    *                          @href CATIMfPoint or a @href CATIMfLine. </li>
    *                         
    *       <li>S_OK: otherwise</li>
    *     </ul>
	*/
   virtual HRESULT SetAxisRotationReference(const CATBaseUnknown_var& iReference) =0;

   /**
	* Retrieves the reference's geometry for the rotation about the rotation axis.
    * <br><b>Role:</b>This method returns the geometrical feature which represents the 
    * reference for the rotation about the rotation axis.
	*   @param oReference
    *   <ul>
    *		<li>E_FAIL: If an internal error or if the axis system is not 
    *               <tt>CATAxisSystemAxisRotation</tt>, </li>
    *       <li>S_OK: otherwise .</li>
    *   </ul>
	*/
   virtual HRESULT GetAxisRotationReference(CATBaseUnknown_var& oReference) const =0;
   
	// --------------------------------------------------------------
	// Axis system defined by the Euler angles
	// --------------------------------------------------------------
   /**
	* Retrieves the Euler angle parameters. 
    * <br><b>Role:</b>This method returns the three knowledge parameters which define the 
    * Euler angles. You can change the parameter values to modify the angle values.
    * 
	*   @param oEulerAngles
	*	    The three Euler angles parameters.
	*   @return
    *    <ul>
    *		<li>E_FAIL: If an internal error or if the axis system is not 
    *               <tt>CATAxisSystemEulerAngles</tt>, </li>
    *       <li>S_OK: otherwise. </li>
    *    </ul>
    */
	virtual HRESULT GetEulerAnglesParm(CATICkeParm_var oEulerAngles[3]) const =0;

	// --------------------------------------------------------------
	// BRep retrieval
 	// --------------------------------------------------------------             

	/**
    * Retrieves the BRep object of the origin point.
    * <br><b>Role:</b>
	*   @param oOriginPointBRepAccess
	*     The BRep object of the origin point.
	*   @return
    *     <ul>
    *	  <li>E_FAIL: If an internal error or if the topological body ( the <tt>CATBody</tt> ) 
    *            does not exist,</li>
    *     <li>S_OK: otherwise.</li>
    *     </ul>
	*/
	virtual HRESULT GetOriginPointBRepAccess(CATIBRepAccess_var& oOriginPointBRepAccess) const=0;

	/**
	* Retrieves the BRep object of the X, Y or Z axis.
	*   @param iAxisNumber
    *      The number of the axis.
	*   @param oAxisBRepAccess
	*	    The BRep object of the axis.
	*   @return
    *     <ul>
    *	  <li>E_FAIL: If an internal error or if the topological body ( the <tt>CATBody</tt> ) 
    *            does not exist,</li>
    *     <li>S_OK: otherwise.</li>
    *     </ul>
	*/
	virtual HRESULT GetAxisBRepAccess(const CATAxisSystemXYZNumber iAxisNumber,CATIBRepAccess_var& oAxisBRepAccess) const =0;

	/**
	* Retrieves the BRep object of the YZ, ZX or XY plane.
	*   @param iAxisNumber
    *      The number of the plane.
    *       <ul>
	*			<li><tt>CATAxisSystemXNumber</tt>: the plane YZ.</li>
    *			<li><tt>CATAxisSystemYNumber</tt>: the plane ZX.</li>
    *			<li><tt>CATAxisSystemZNumber</tt>: the plane XY.</li>
    *       </ul>
	*   @param oPlaneBRepAccess
	*			The Brep object of the plane.
	*   @return
    *     <ul>
    *	  <li>E_FAIL: If an internal error or if the topological body ( the <tt>CATBody</tt> ) 
    *            does not exist,</li>
    *     <li>S_OK: otherwise.</li>
    *     </ul>
	*/
	virtual HRESULT GetPlaneBRepAccess(const CATAxisSystemXYZNumber iAxisNumber,CATIBRepAccess_var& oPlaneBRepAccess) const =0;

	// --------------------------------------------------------------
	// Miscellaneous methods
	// --------------------------------------------------------------
	/**
	 * Retrieves if the axis system is the current one.
     * <br><b>Role:</b>An axis system can be the current one with the 
     * @href CATIMf3DAxisSystemManager#SetAxisSystemCurrent method. This method
     * allows you to know if this axis system is the current one.
     * 
	 *   @param oIsCurrent
	 *      Equal to TRUE if the axis system is the current one, else 
     *      equal to FALSE.
     *
	 */
	virtual HRESULT IsCurrent(CATBoolean& oIsCurrent) const=0;

	/**
	 * Retrieves the axis system orientation.
     * <br><b>Role:</b>This method enables you to know if the axis system is 
     * right-handed (direct) or left-handed (reverse) or not orthogonal. The 
     * update operation on a not orthogonal axis system generates an error.
	 *   @param oIsDirect
	 *			Right-handed, left-handed or not orthogonal.
	 */
	virtual HRESULT IsDirect(CATAxisSystemIsDirect& oIsDirect) const=0;

	/**
	* Retrieves the name of a BRep object of the axis system.
	*   @param iCell
    *	   A cell (vertex, edge or face) of the axis system. 
    *   @param oBRepName
    *      The name of the BRep object. 
    *   @return 
    *     <ul>
    *      <li>E_FAIL: If an internal error or if <tt>iCell</tt> is not a cell
    *           of the axis system,</li>
    *      <li>E_INVALIDARG: If <tt>iCell</tt> is equal to <tt>NULL_var</tt>,</li>
    *      <li>S_OK: otherwise. </li>
    *      </ul>
	*/
	virtual HRESULT GetBRepAlias(const CATCell_var& iCell, CATUnicodeString& oBRepName) const=0;

   /**
	* @nodoc 
	*/
   virtual HRESULT SetCurrent(const boolean isCurrent)=0;

	/**
	* @nodoc 
	*/
	virtual HRESULT SetSelectionOrder(const CATAxisSystemXYZNumber iAxisNumber, const CATBoolean iIsSelected)=0;

	/**
	* @nodoc 
	*/
	virtual HRESULT GetSelectionOrder(const CATAxisSystemXYZNumber iAxisNumber, int& oSelectionOrder) const=0;

    /**
	*   @param iComputed
	*   Equals to TRUE if deleted inputs are auto computed (old axis system ) 
    */
    virtual HRESULT SetComputed(const CATBoolean & iComputed )=0;
      
    /**
    *   @param oComputed
	*   Returns TRUE if deleted inputs are auto computed (old axis system ) 
    */
    virtual HRESULT GetComputed(CATBoolean & oComputed ) const=0;
		

#ifdef CATIAV5R26
    /**
    * Gets the reference Axis. 
    * This data is not mandatory, if oRefAxis is null, then absolute axis system is considered as reference axis system.
    * @Param oRefAxis
    *     Reference axis (oRefAxis = NULL_var is allowed).
    */
    virtual HRESULT GetRefAxisSystem(CATBaseUnknown_var& oRefAxis)const=0;

    /**
    * Sets the reference Axis. 
    *    This data is not mandatory, if iRefAxis is null, then absolute axis system is considered as reference axis system.
    * @Param iRefAxis
    *     Reference Axis (iRefAxis = NULL_var is allowed).
    */
    virtual HRESULT SetRefAxisSystem(const CATBaseUnknown_var& iRefAxis)=0;


    /**
    * Gets the reference Axis Mode. 
    *  if oIsRefAxis is 0, then absolute axis system is considered as reference axis system.
    * if isRefAxis is 1, then user must specify a reference axis system.
    * 
    */
    virtual HRESULT GetRefAxisSystemMode(int& oIsRefAxis )const=0;


    /**
    * Sets the reference Axis Mode. 
    *  if isRefAxis is 0, then absolute axis system is considered as reference axis system.
    *  if isRefAxis is 1, then user must specify a reference axis system.
    *     
    */
    virtual HRESULT SetRefAxisSystemMode(const int& isRefAxis ) =0 ;

#endif

};

CATDeclareHandler(CATIMf3DAxisSystem, CATBaseUnknown);

#endif
