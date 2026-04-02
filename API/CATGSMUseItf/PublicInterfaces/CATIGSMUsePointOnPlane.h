/* -*-c++-*- */
#ifndef CATIGSMUsePointOnPlane_H
#define CATIGSMUsePointOnPlane_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"

class CATIGSMUseDirection_var;
class CATMathDirection;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePointOnPlane;
#else
extern "C" const IID IID_CATIGSMUsePointOnPlane;
#endif
/**
 * Interface to point on a plane feature.
 * <b>Role</b>: Allows you to access data of the point feature created on
 * a plane with a reference point or not.
 * @see CATIGSMUseDirection 
 * @see CATIGSMUseFactory#CreatePoint
 */
class ExportedByCATGSMUseItf CATIGSMUsePointOnPlane : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the support plane.
  *   @param oSupport 
  *      support
  */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
  * Sets the support plane.
  *   @param iSupport 
  *      support
  */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
  * Gets the reference point. 
  * This data is not mandatory, if Point is
  * null, the projection of the origin point on the plane is taken.
  * (RefPoint = NULL_var is allowed).
  *   @param oRefPoint 
  *      reference point 
  */
 virtual HRESULT GetReferencePoint(CATIMmiMechanicalFeature_var& oRefPoint) = 0;

 /**
  * Sets the reference point. 
    * This data is not mandatory, if Point is
  * null, the projection of the origin point on the plane is taken.
  * (RefPoint = NULL_var is allowed).
  *   @param iRefPoint 
  *      reference point 
  */
 virtual HRESULT SetReferencePoint(const CATIMmiMechanicalFeature_var  iRefPoint) = 0;

 /**
  * Gets the X,Y cartesian coordinates in the plane.
  *   @param oX 
  *      X coordinates 
  *   @param oY 
  *      Y coordinates 
  */
 virtual HRESULT GetCoordinates(CATICkeParm_var & oX,CATICkeParm_var & oY) = 0;

 /**
  * Sets the X,Y cartesian coordinates in the plane.
  *   @param iX 
  *      X coordinates 
  *   @param iY 
  *      Y coordinates 
  */
 virtual HRESULT SetCoordinates(const CATICkeParm_var iX,const CATICkeParm_var iY) = 0;

 /**
  * Gets the first direction on the plane to compute the point (for stability).
  *   @param oDir
  *      first direction
  *      @see CATIGSMUseDirection 
  */
 virtual HRESULT GetFirstDirection(CATIGSMUseDirection_var & oDir) = 0;

 /**
  * Sets the first direction on the plane to compute the point (for stability).
  *   @param iDir
  *      first direction
  *      @see CATIGSMUseDirection 
  */
 virtual HRESULT SetFirstDirection(const CATIGSMUseDirection_var iDir) = 0;

 /**
  * Gets the second direction on the plane to compute the point (for stability).
  * <br>This direction has to be kept perpendicular to the first direction
  *   @param oDir
  *      second direction
  *      @see CATIGSMUseDirection 
  */
 virtual HRESULT GetSecondDirection(CATMathDirection& oDir) = 0;

 /**
  * Sets the second direction on the plane to compute the point (for stability).
  * <br>This direction has to be kept perpendicular to the first direction
  *   @param iDir
  *      second direction
  *      @see CATIGSMUseDirection 
  */
 virtual HRESULT SetSecondDirection(const CATMathDirection& iDir) = 0;

  /**
  * Gets the Projection Surface to compute the point 
  * This data is not mandatory, if Projection Surface is
  * null, the result is projection of the origin point or ref point on the plane is taken.
  * (oProjSur = NULL_var is allowed).
  *   @param oProjSur
  *      Projection Surface
  */
 virtual    HRESULT GetProjectionSurface (CATIMmiMechanicalFeature_var& oProjSur) = 0;

  /**
  * Sets the Projection Surface to compute the point 
  * This data is not mandatory, if Projection Surface is
  * null, the result is projection of the origin point or ref point on the plane is taken.
  * (iProjSur = NULL_var is allowed).
  *   @param iProjSur
  *      Projection Surface
  */
  virtual    HRESULT SetProjectionSurface  (const CATIMmiMechanicalFeature_var iProjSur) = 0;

};
CATDeclareHandler (CATIGSMUsePointOnPlane, CATBaseUnknown);
#endif
