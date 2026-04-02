/* -*-c++-*- */
#ifndef CATIGSMUseCircleCtrPt_H
#define CATIGSMUseCircleCtrPt_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

class CATICkeParm_var; 
class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseCircleCtrPt;
#else
extern "C" const IID IID_CATIGSMUseCircleCtrPt;
#endif
/**
 * Interface to circle feature defined by a center and a passing point .
 * <b>Role</b>: Allows you to access data of the circle feature created by using 
 * its center and one passing point.
 * @see CATIGSMUseFactory#CreateCircle
 */
class ExportedByCATGSMUseItf CATIGSMUseCircleCtrPt : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the circle center.
  *   @param oCenter
  *      center point
  */
 virtual HRESULT GetCenter(CATIMmiMechanicalFeature_var& oCenter) = 0;
 /**
  * Sets the circle center.
  *   @param iCenter
  *      center point
  */
 virtual HRESULT SetCenter(const CATIMmiMechanicalFeature_var iCenter) = 0;

 /**
  * Gets the support surface.
  *   @param oSupport 
  *      the support surface
  */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
  * Sets the support surface.
  *   @param iSuppport 
  *      the support surface
  */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
  * Gets the passing point.
  *   @param oPoint 
  *      The point through which the circle is to pass.
  */
 virtual HRESULT GetPoint(CATIMmiMechanicalFeature_var& oPoint) = 0;

 /**
  * Sets the passing point.
  *   @param iPoint 
  *      The point through which the circle is to pass.
  */
 virtual HRESULT SetPoint(const CATIMmiMechanicalFeature_var iPoint) = 0;

 /**
  * Sets geodesic circle (Geodesic mode). 
  * <br> It puts the circle on the surface.
  */
 virtual HRESULT SetGeodesic() = 0;

 /**
  * Inactivates geodesic circle. 
  * <br>Note: The circle becomes euclidean, and the surface is used to compute the circle axis.
  */
 virtual HRESULT UnsetGeodesic() = 0;

 /**
  * Queries whether the circle is geodesic or not.
  *   @param oGeodesic 
  *      geodesic 
  */
 virtual HRESULT IsGeodesic(CATBoolean & oGeodesic) = 0;
};
CATDeclareHandler (CATIGSMUseCircleCtrPt, CATBaseUnknown);
#endif
