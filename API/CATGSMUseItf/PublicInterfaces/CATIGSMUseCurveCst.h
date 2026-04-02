/* -*-c++-*- */
#ifndef CATIGSMUseCurveCst_H
#define CATIGSMUseCurveCst_H

// COPYRIGHT DASSAULT SYSTEMES 2000

//===================================================================
//
// CATIGSMUseCurveCst.h
// Define the CATIGSMUseCurveCst interface
//
//===================================================================

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
class CATIMmiMechanicalFeature_var;
class CATIGSMUseDirection_var;
class CATICkeParm_var;

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseCurveCst;
#else
extern "C" const IID  IID_CATIGSMUseCurveCst;
#endif

/**
 * Curve Constraint (Ref points, Tangents, Curvatures).
 * <b>Role</b>: Allows to access data of the Curve Constraint feature created by using 
 * possibly a point, tangent datum defined by
 *   - direction,tension, sense,
 * and curvature datum defined by:
 *   - direction and value.
 * @see CATIGSMUseFactory#CreateCurveCst
 */
class ExportedByCATGSMUseItf CATIGSMUseCurveCst: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Gets the Point attribute of the Constraint.
 *   @param oPoint
 *       
 */
 virtual HRESULT GetPoint(CATIMmiMechanicalFeature_var & oPoint) = 0;

 /**
 * Sets the Point attribute of the constraint.
 *   @param iPoint 
 *      
 */
 virtual HRESULT SetPoint(const CATIMmiMechanicalFeature_var iPoint) = 0;

 /**
 * Gets the Tangent Direction at Point Location. 
 *   @param iPoint
 *       
 * @see CATIGSMUseDirection
 */
 virtual HRESULT GetTangentDirection(CATIGSMUseDirection_var & oTgtDir) = 0;

 /**
 * Sets the Tangent direction at Point Location.
 *   @param iSupport 
 *      support 
 * @see CATIGSMUseDirection
 */
 virtual HRESULT SetTangentDirection(const CATIGSMUseDirection_var iTgtDir) = 0;

 /**
 * Gets the x,y,z Tangent coordinates.
 *   @param ox
 *   @param oy
 *   @param oz 
 *      support 
 */
   virtual  HRESULT GetTangentCoordonates ( double & ox, double &oy, double &oz ) = 0;

 /**
 * Gets the Tangent Tension at Point Location. 
 *   @param oTgtTension
 *       
 * @see CATICkeParm
    */
 virtual   HRESULT GetTangentTension (CATICkeParm_var& oTgtTension) = 0;

 /**
 * Sets the Tangent Tension at Point Location.
 *   @param iTgtTension
 * @see CATICkeParm
 */
 virtual HRESULT SetTangentTension(const CATICkeParm_var iTgtTension) = 0;

 /**
 * Gets the Curvature Radius  Value  at Point Location.  
 *   @param oDirFlag
 */
 virtual   HRESULT GetTangentDirectionFlag( int & oDirFlag) = 0;

 /**
 * Sets the Curvature Radius Value at Point Location.
 *   @param iDirFlag
 */
 virtual HRESULT SetTangentDirectionFlag(const int iDirFlag) = 0;

 /**
 * Inverts the Direction of the Tangent.
 */
    virtual HRESULT SwitchTangentDirectionFlag() = 0;

 /**
 * Gets the Curvature Radius at Point Location.
 *   @param oRadDir
 *       
 * @see CATIGSMUseDirection
 */
 virtual HRESULT GetRadiusDirection(CATIGSMUseDirection_var & oRadDir) = 0;

 /**
 * Sets the Curvature Radius direction at Point Location.
 *
 *   @param iRadDir
 *      
 * @see CATIGSMUseDirection
 */
 virtual HRESULT SetRadiusDirection(const CATIGSMUseDirection_var iRadDir) = 0;


 /**
 * Gets the Curvature Radius  Value  at Point Location.  
 *   @param oRadValue
 *       
 * @see CATICkeParm
 */
 virtual   HRESULT GetRadiusValue (CATICkeParm_var& oRadValue) = 0;

 /**
 * Sets the Curvature Radius Value at Point Location.
 *   @param iRadValue
 *      
 * @see CATICkeParm
 */
 virtual HRESULT SetRadiusValue(const CATICkeParm_var iRadValue) = 0;

};

CATDeclareHandler( CATIGSMUseCurveCst, CATBaseUnknown );

#endif


