/* -*-c++-*- */
#ifndef CATIGSMPointOnPlane_H
#define CATIGSMPointOnPlane_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"

class CATIGSMDirection_var;
class CATMathDirection;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPointOnPlane;
#else
extern "C" const IID IID_CATIGSMPointOnPlane;
#endif
/**
 * Interface to point on a plane feature.
 * <b>Role</b>: Allows you to access data of the point feature created on
 * a plane with a reference point or not.
 * @see CATIGSMDirection 
 * @see CATIGSMFactory#CreatePoint
 */
class ExportedByCATGitInterfaces CATIGSMPointOnPlane : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the support plane.
  *   @param oSupport 
  *      support
  */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;

 /**
  * Sets the support plane.
  *   @param iSupport 
  *      support
  */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;

 /**
  * Gets the reference point. 
  * This data is not mandatory, if Point is
  * null, the projection of the origin point on the plane is taken.
  * (RefPoint = NULL_var is allowed).
  *   @param oRefPoint 
  *      reference point 
  */
 virtual HRESULT GetReferencePoint(CATISpecObject_var& oRefPoint) = 0;

 /**
  * Sets the reference point. 
    * This data is not mandatory, if Point is
  * null, the projection of the origin point on the plane is taken.
  * (RefPoint = NULL_var is allowed).
  *   @param iRefPoint 
  *      reference point 
  */
 virtual HRESULT SetReferencePoint(const CATISpecObject_var  iRefPoint) = 0;

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
  *      @see CATIGSMDirection 
  */
 virtual HRESULT GetFirstDirection(CATIGSMDirection_var & oDir) = 0;

 /**
  * Sets the first direction on the plane to compute the point (for stability).
  *   @param iDir
  *      first direction
  *      @see CATIGSMDirection 
  */
 virtual HRESULT SetFirstDirection(const CATIGSMDirection_var iDir) = 0;

 /**
  * Gets the second direction on the plane to compute the point (for stability).
  * <br>This direction has to be kept perpendicular to the first direction
  *   @param oDir
  *      second direction
  *      @see CATIGSMDirection 
  */
 virtual HRESULT GetSecondDirection(CATMathDirection& oDir) = 0;

 /**
  * Sets the second direction on the plane to compute the point (for stability).
  * <br>This direction has to be kept perpendicular to the first direction
  *   @param iDir
  *      second direction
  *      @see CATIGSMDirection 
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
 virtual    HRESULT GetProjectionSurface (CATISpecObject_var& oProjSur) = 0;

  /**
  * Sets the Projection Surface to compute the point 
  * This data is not mandatory, if Projection Surface is
  * null, the result is projection of the origin point or ref point on the plane is taken.
  * (iProjSur = NULL_var is allowed).
  *   @param iProjSur
  *      Projection Surface
  */
  virtual    HRESULT SetProjectionSurface  (const CATISpecObject_var iProjSur) = 0;

};
CATDeclareHandler (CATIGSMPointOnPlane, CATBaseUnknown);
#endif
