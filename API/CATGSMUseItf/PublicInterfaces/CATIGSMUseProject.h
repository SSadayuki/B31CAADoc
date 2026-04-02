/* -*-c++-*- */
#ifndef CATIGSMUseProject_H
#define CATIGSMUseProject_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATIGSMUseDirection.h"
#include "CATGSMProjectDef.h"
#include "CATGSMTolerantModelingDef.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseProject;
#else
extern "C" const IID IID_CATIGSMUseProject;
#endif

/**
 * Interface to project feature.
 * <b>Role</b>: Allows you to access data of the Project feature created by using 
 * an element, a support and a direction.
 * The direction is used if the projection is not normal.
 * Note  
 *    Solution Type: 0 -> Nearest solution
 *    Solution Type: 1 -> All solutions
 * @see CATGSMProjectSolutionType
 * @see CATIGSMUseFactory#CreateProject
 */
class ExportedByCATGSMUseItf CATIGSMUseProject : public CATBaseUnknown
{
   CATDeclareInterface;
public:
 
  /**
    * Gets the feature to project (a point or a curve).
    *   @param oElem
    *      new feature to project
    */
 virtual    HRESULT GetElemToProject(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
    * Sets the feature to project (a point or a curve).
    *   @param iElem
    *      new feature to project
    */
 virtual    HRESULT SetElemToProject(const CATIMmiMechanicalFeature_var iElem) = 0;
 
  /**
    * Gets the projection direction.
    * The direction is used if normal mode is off.
    *   @param oElem
    *      projection direction
    *   @see CATIGSMUseDirection
 */
 virtual    HRESULT GetDirection(CATIGSMUseDirection_var & oElem) = 0;

  /**
    * Sets the projection direction.
    * The direction is used if normal mode is off.
    *   @param iElem
    *      projection direction
 *   @see CATIGSMUseDirection
    */
 virtual    HRESULT SetDirection(const CATIGSMUseDirection_var iElem) = 0;
 
  /**
    * Gets the support feature (a plane or a surface).
    *   @param oElem
    *      support feature
    */
 virtual    HRESULT GetSupport(CATIMmiMechanicalFeature_var & oElem) = 0;

  /**
    * Sets the support feature (a plane or a surface).
    *   @param iElem
    *      support feature
    */
 virtual    HRESULT SetSupport(const CATIMmiMechanicalFeature_var iElem) = 0;
 
  /**
    * Queries if normal mode is on (Normal is set to TRUE if normal mode is on).
    *   @param oNormal
    *      Normal mode
    */
 virtual    HRESULT IsNormal(CATBoolean & oNormal) = 0;

  /**
    * Sets normal mode (Normal is set to TRUE if normal mode is on).
    *   @param iNormal
    *      Normal mode 
    */
 virtual    HRESULT SetNormal(CATBoolean iNormal) = 0;
 
  /**
    * Gets Solution type for projection.
    * <br>  All solutions or Nearest solution (only nearest projection 
    * is kept when more than one solution is possible).
    *   @param oType
    *      Solution type
    *       : 0 -> Nearest solution
    *       : 1 -> All solutions
    *   @see CATGSMProjectSolutionType
 */
 virtual    HRESULT GetSolutionType(CATGSMProjectSolutionType & oType) = 0;

  /**
    * Sets Solution type. 
    * <br> Sets the extrapolation mode to 'None' when the solution type 
    * being set is 'All solutions'. 
    * <br> All solutions or Nearest solution (only nearest projection 
    * is kept when more than one solution is possible).
    *   @param iType
    *      Solution type
    *       : 0 -> Nearest solution
    *       : 1 -> All solutions
 *   @see CATGSMProjectSolutionType
    */
 virtual    HRESULT SetSolutionType(CATGSMProjectSolutionType iType) = 0;

  /**
    * Sets Smoothing Type. 
    * <br>
    *   @param iType
    *      Smoothing type
    *       : TM_None -> No Smoothing
    *       : TM_G1 -> G1 Smoothing : Enhance current continuity to tangent continuity
	*		: TM_G2 -> G2 Smoothing : Enhance current continuity to curvature continuity
	*   @see CATGSMTolerantModelingSmoothingType
    */
 virtual    HRESULT SetSmoothingType(CATGSMTolerantModelingSmoothingType iType) = 0;

   /**
    * Gets Smoothing Type.
    * <br>
    *   @param oType
    *      Smoothing type
    *       : TM_None -> No Smoothing
    *       : TM_G1 -> G1 Smoothing : Enhance current continuity to tangent continuity
	*		: TM_G2 -> G2 Smoothing : Enhance current continuity to curvature continuity
    *   @see CATGSMTolerantModelingSmoothingType
	*/
 virtual    HRESULT GetSmoothingType(CATGSMTolerantModelingSmoothingType & oType) = 0;

 /**
 * Sets the maximum deviation allowed for smoothing operation. 
 * <br> Sets in  distance unit, it corresponds to the radius of a
 * pipe around the input curve in which the result is allowed to be.
 *   @param Elem
 *      Maximum deviation literal feature
 */
 virtual    HRESULT SetDeviationValue (const CATICkeParm_var & iDeviation) = 0;

 /**
 * Sets the maximum deviation allowed for smoothing operation.
 * <br> Sets in distance unit, it corresponds to the radius of a 
 * pipe around the input curve in which the result is allowed to be.
 *   @param val
 *      Maximum deviation value
 */
 virtual    HRESULT SetDeviationValue (const double iDeviation) = 0;

 /**
 * Gets the maximum deviation allowed for smoothing operation.
 * <br> Gets in distance unit, it corresponds to the radius of a 
 * pipe around the input curve in which the result is allowed to be.
 *   @param Elem
 *      Maximum deviation literal feature
 */
 virtual    HRESULT GetDeviationValue (CATICkeParm_var& oDeviation) = 0;

 /**
 * Gets the maximum deviation allowed for smoothing operation.
 * <br> Gets in distance unit, it corresponds to the radius of a 
 * pipe around the input curve in which the result is allowed to be.
 *   @param val
 *      Maximum deviation value
 */
 virtual    HRESULT GetDeviationValue (double& oDeviation) = 0;

 /**
 * Sets or unsets the '3D Smoothing' activation for smoothing operation.
 * Available only for tangent or curvature smoothing type
 *   @param i3DSmoothing
 *      TRUE  : Smoothing performed without specifying support
 *      FALSE : Smoothing performed with specific support (retrieved by GetSupport)
 */
 virtual    HRESULT Set3DSmoothing  (CATBoolean i3DSmoothing) = 0;

 /**
 * Queries whether '3D Smoothing' for smoothing operation is activated or not.
 * Available only for tangent or curvature smoothing type
 *   @param o3DSmoothing
 *      TRUE  : Smoothing performed without specifying support
 *      FALSE : Smoothing performed with specific support (retrieved by GetSupport)
 */
 virtual    HRESULT Get3DSmoothing  (CATBoolean & o3DSmoothing) = 0;

 /**
 * Gets the extrapolation mode.
 *   @see CATGSMProjectExtrapolationMode
 */
 virtual  HRESULT GetExtrapolationMode(CATGSMProjectExtrapolationMode & oExtrapolationMode) = 0;

 /**
 * Sets the extrapolation mode when the solution type is 'Nearest solution' 
 * or when the extrapolation mode being set is 'None', otherwise fails. 
 *   @return
 *      <b>Legal values</b>:
 *      <ul>
 *         <li>S_OK   : The method has succeeded. iExtrapolationMode has well been set.</li>
 *         <li>E_FAIL : The method has failed. iExtrapolationMode could not be set.</li>
 *      </ul>
 *   @see CATGSMProjectExtrapolationMode
 */
 virtual  HRESULT SetExtrapolationMode(const CATGSMProjectExtrapolationMode & iExtrapolationMode) = 0;

};
CATDeclareHandler (CATIGSMUseProject, CATBaseUnknown);
#endif // CATIGSMUseProject_H
