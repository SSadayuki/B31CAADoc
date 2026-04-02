/* -*-c++-*- */
#ifndef CATIGSMCurveCst_H
#define CATIGSMCurveCst_H

// COPYRIGHT DASSAULT SYSTEMES 2000

//===================================================================
//
// CATIGSMCurveCst.h
// Define the CATIGSMCurveCst interface
//
//===================================================================

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
class CATISpecObject_var;
class CATIGSMDirection_var;
class CATICkeParm_var;

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMCurveCst;
#else
extern "C" const IID  IID_CATIGSMCurveCst;
#endif

/**
 * Curve Constraint (Ref points, Tangents, Curvatures).
 * <b>Role</b>: Allows to access data of the Curve Constraint feature created by using 
 * possibly a point, tangent datum defined by
 *   - direction,tension, sense,
 * and curvature datum defined by:
 *   - direction and value.
 * @see CATIGSMFactory#CreateCurveCst
 */
class ExportedByCATGitInterfaces CATIGSMCurveCst: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Gets the Point attribute of the Constraint.
 *   @param oPoint
 *       
 */
 virtual HRESULT GetPoint(CATISpecObject_var & oPoint) = 0;

 /**
 * Sets the Point attribute of the constraint.
 *   @param iPoint 
 *      
 */
 virtual HRESULT SetPoint(const CATISpecObject_var iPoint) = 0;

 /**
 * Gets the Tangent Direction at Point Location. 
 *   @param iPoint
 *       
 * @see CATIGSMDirection
 */
 virtual HRESULT GetTangentDirection(CATIGSMDirection_var & oTgtDir) = 0;

 /**
 * Sets the Tangent direction at Point Location.
 *   @param iSupport 
 *      support 
 * @see CATIGSMDirection
 */
 virtual HRESULT SetTangentDirection(const CATIGSMDirection_var iTgtDir) = 0;

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
 * @see CATIGSMDirection
 */
 virtual HRESULT GetRadiusDirection(CATIGSMDirection_var & oRadDir) = 0;

 /**
 * Sets the Curvature Radius direction at Point Location.
 *
 *   @param iRadDir
 *      
 * @see CATIGSMDirection
 */
 virtual HRESULT SetRadiusDirection(const CATIGSMDirection_var iRadDir) = 0;


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

CATDeclareHandler( CATIGSMCurveCst, CATBaseUnknown );

#endif


