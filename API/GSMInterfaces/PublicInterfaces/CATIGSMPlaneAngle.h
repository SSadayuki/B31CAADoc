/* -*-c++-*- */
#ifndef CATIGSMPlaneAngle_H
#define CATIGSMPlaneAngle_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//=============================================================================
// Usage Note: 
//
//=============================================================================
#include "CATGitInterfacesExportedBy.h"
#include "CATICkeParm.h"

class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlaneAngle;
#else
extern "C" const IID IID_CATIGSMPlaneAngle;
#endif
/**
 * Interface to plane feature defined from a reference plane, an axis and an angle. 
 * <b>Role</b>: Allows you to access data of the plane feature created with an
 * angle to another plane.
 * @see CATIGSMFactory#CreatePlane
 */
class ExportedByCATGitInterfaces CATIGSMPlaneAngle : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the reference plane.
        *   @param oPlane 
        *      reference plane 
        */
 virtual HRESULT GetReferencePlane(CATISpecObject_var& oPlane) = 0;

 /**
 * Sets the reference plane.
        *   @param iPlane 
        *      reference plane 
 */
 virtual HRESULT SetReferencePlane(const CATISpecObject_var  iPlane) = 0;

 /**
 * Gets the rotation axis.
        *   @param oAxis 
        *      rotation axis 
 */
 virtual HRESULT GetRotationAxis(CATISpecObject_var& oAxis) = 0;

 /**
 * Sets the rotation axis.
        *   @param iAxis 
        *      rotation axis 
 */
 virtual HRESULT SetRotationAxis(const CATISpecObject_var iAxis) = 0;

 /**
 * Gets the angle.
        *   @param oAngle 
        *      angle
 */
 virtual HRESULT GetAngle(CATICkeParm_var& oAngle) = 0;

 /**
 * Sets the angle.
        *   @param iAngle 
        *     angle
 */
 virtual HRESULT SetAngle(const CATICkeParm_var iAngle) = 0;

 /**
 * Sets the plane normal to the reference plane.
 * Same as Angle = 90deg.
 */
 virtual HRESULT SetNormal() = 0;

 /**
 * Gets ProjectionMode. 
 * <br>ProjectionMode = TRUE  implies that rotation axis will be projected on to reference plane.
 * <br>ProjectionMode = FALSE (default) implies that rotation axis will be as it is.
 *   @param oProjection
 *      Projection Mode
 */
 virtual HRESULT GetProjectionMode(CATBoolean & oProjection) = 0;

 /**
 * Sets ProjectionMode. 
 * <br>ProjectionMode = TRUE implies that rotation axis will be projected on to reference plane.
 * <br>ProjectionMode = FALSE (default) implies that rotation axis will be as it is.
 *   @param iProjection
 *      Projection Mode
 */
 virtual HRESULT SetProjectionMode(const CATBoolean iProjection) = 0;
};
CATDeclareHandler (CATIGSMPlaneAngle, CATBaseUnknown);
#endif

