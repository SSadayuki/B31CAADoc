// COPYRIGHT DASSAULT SYSTEMES 2001
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#ifndef CATIMf3DAxisSystemManager_H
#define CATIMf3DAxisSystemManager_H

#include "CATBaseUnknown.h"
#include "CATIMf3DAxisSystem.h"
#include "CATListOfCATIMf3DAxisSystem.h"
class CATMathTransformation;

#include "MecModItfCPP.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMf3DAxisSystemManager;
#else
extern "C" const IID IID_CATIMf3DAxisSystemManager;
#endif
//------------------------------------------------------------------

/**
 * Interface to manage the axis systems.
 * <b>Role:</b>This interface enables you:
 * <ul>
 * <li>To know all the axis systems created by the @href CATIMf3DAxisSystemFactory interface
 * into a Part document. See the @href #GetAxisSystems method. </li>
 * <li>To set or retrieve the current axis system.
 *  See @href #SetCurrentAxisSystem and 
 * @href #GetCurrentAxisSystem respectively. </li>
 * <li>To translate the coordinates of a point ( @href #ConvertPointCoordinates ) or a 
 *  vector ( @href #ConvertVectorCoordinates ) in the current axis system.</li>
 * </ul>
 * <br>This interface is implemented by the specification container of the Part document. You 
 * retrieve it by at least two means:
 * <ul>
 * <li>@href CATIContainerOfDocument#GetSpecContainer </li>
 * <li>@href CATInit#GetRootContainer </li>
 * </ul>
 * @see CATIMf3DAxisSystem, CATIMf3DAxisSystemFactory
 */
class ExportedByMecModItfCPP CATIMf3DAxisSystemManager: public CATBaseUnknown
{
   CATDeclareInterface;

public :

	/**
    * Retrieves all the axis systems of the Part document.
    *   @param oAxisSystemList
    *      The axis system list.
    */
	virtual HRESULT GetAxisSystems(CATLISTV(CATIMf3DAxisSystem_var)& oAxisSystemList) const =0; 
	
   /**
	* Sets an axis system as the current one.
	* <br><b>Role:</b>This method enables you to set an axis system as current. It
    * guarantees that only one axis system is current in the Part document. Set an axis 
    * system the current one can be useful:
    * <ul>
    * <li>To use the @href #ConvertPointCoordinates and @href #ConvertVectorCoordinates 
    * to translate the point/vector coordinates in this axis system.</li>
    * <li>In an interactive session, to control the current axis system which is used by 
    * some commands such as Point. These commands can display points (or vectors )
    * coordinates in the current axis system.</li>
    * </ul>
    *   @param iAxisSystem
    *      The new current axis system. If the value is NULL_var, there is no current axis 
    *      system, the coordinates are always displayed in the absolute axis system.
    * @return
    *  E_FAIL if the <tt>iAxisSystem</tt> is not orthogonal - @href CATAxisSystemIsDirect
    */
	virtual HRESULT SetCurrentAxisSystem(const CATIMf3DAxisSystem_var& iAxisSystem) const =0;

	/**
	* Retrieves the current axis system.
    *   @param oCurrentAxisSystem
    *      The current axis system. If the value is NULL_var, there is no current axis 
    *      system.
    */
	virtual HRESULT GetCurrentAxisSystem(CATIMf3DAxisSystem_var& oCurrentAxisSystem) const=0;


     /**
	 * Converts point coordinates in the current axis system.
     *   @param iAbsoluteToCurrent
     *     <ul>
     *      <li>If TRUE, converts the coordinates from the absolute axis system 
     *          to the current axis system. </li>
	 *      <li>If FALSE, converts the coordinates from the current axis systen 
     *          to the absolute axis system. </li>
     *     </ul>
	 *   @param iPointToConvert
	 *			The mathematical point to convert. 
	 *   @param oConvertedPoint
	 *			The converted mathematical point. 
     */
	virtual HRESULT ConvertPointCoordinates(
		const CATBoolean iAbsoluteToCurrent,
		const CATMathPoint& iPointToConvert, 
		CATMathPoint& oConvertedPoint) const=0;

	/**
     * Converts vector coordinates in the current axis system.
     *   @param iAbsoluteToCurrent
     *     <ul>
     *      <li>If TRUE, converts the coordinates from the absolute axis system 
     *          to the current axis system. </li>
	 *      <li>If FALSE, converts the coordinates from the current axis systen 
     *          to the absolute axis system. </li>
     *     </ul>
	 *   @param iVectorToConvert
	 *			The mathematical vector to convert. 
	 *   @param oConvertedVector
	 *			The converted mathematical vector. 
    */
	virtual HRESULT ConvertVectorCoordinates(
		const CATBoolean iAbsoluteToCurrent,
		const CATMathVector& iVectorToConvert, 
		CATMathVector& oConvertedVector) const=0;
	
};

CATDeclareHandler(CATIMf3DAxisSystemManager, CATBaseUnknown);

#endif
