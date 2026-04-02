/* -*-c++-*- */
#ifndef CATIGSMUsePlaneAngle_H
#define CATIGSMUsePlaneAngle_H
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
#include "CATGSMUseItfExportedBy.h"
#include "CATICkeParm.h"

class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlaneAngle;
#else
extern "C" const IID IID_CATIGSMUsePlaneAngle;
#endif
/**
 * Interface to plane feature defined from a reference plane, an axis and an angle. 
 * <b>Role</b>: Allows you to access data of the plane feature created with an
 * angle to another plane.
 * @see CATIGSMUseFactory#CreatePlane
 */
class ExportedByCATGSMUseItf CATIGSMUsePlaneAngle : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the reference plane.
        *   @param oPlane 
        *      reference plane 
        */
 virtual HRESULT GetReferencePlane(CATIMmiMechanicalFeature_var& oPlane) = 0;

 /**
 * Sets the reference plane.
        *   @param iPlane 
        *      reference plane 
 */
 virtual HRESULT SetReferencePlane(const CATIMmiMechanicalFeature_var  iPlane) = 0;

 /**
 * Gets the rotation axis.
        *   @param oAxis 
        *      rotation axis 
 */
 virtual HRESULT GetRotationAxis(CATIMmiMechanicalFeature_var& oAxis) = 0;

 /**
 * Sets the rotation axis.
        *   @param iAxis 
        *      rotation axis 
 */
 virtual HRESULT SetRotationAxis(const CATIMmiMechanicalFeature_var iAxis) = 0;

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
CATDeclareHandler (CATIGSMUsePlaneAngle, CATBaseUnknown);
#endif

