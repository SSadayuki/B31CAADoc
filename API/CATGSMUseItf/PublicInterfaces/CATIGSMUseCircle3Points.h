/* -*-c++-*- */
#ifndef CATIGSMUseCircle3Points_H
#define CATIGSMUseCircle3Points_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "CATGSMUseItfExportedBy.h"

class CATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseCircle3Points;
#else
extern "C" const IID IID_CATIGSMUseCircle3Points;
#endif
/**
 * Interface to circle trough three points feature. 
 * <b>Role</b>: Allows you to access data of the circle feature created by using 
 * three points.
 * @see CATIGSMUseFactory#CreateCircle
 */
class ExportedByCATGSMUseItf CATIGSMUseCircle3Points : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the first passing point.
        *   @param oFirsPoint 
 *      first point 
 */
 virtual HRESULT GetFirstPoint(CATIMmiMechanicalFeature_var& oFirstPoint) = 0;

 /**
 * Sets the first passing point.
        *   @param iFirsPoint 
 *      first point 
 */

 virtual HRESULT SetFirstPoint(const CATIMmiMechanicalFeature_var iFirstPoint) = 0;

 /**
 * Gets the second passing point.
        *   @param oSecondPoint 
 *      second point 
 */
 virtual HRESULT GetSecondPoint(CATIMmiMechanicalFeature_var& oSecondPoint) = 0;

 /**
 * Sets the second passing point.
        *   @param iSecondPoint 
 *      second point 
 */
 virtual HRESULT SetSecondPoint(const CATIMmiMechanicalFeature_var iSecondPoint) = 0;

 /**
 * Gets the third passing point.
        *   @param oThirdPoint 
 *      third point 
 */
 virtual HRESULT GetThirdPoint(CATIMmiMechanicalFeature_var& oThirdPoint) = 0;

 /**
 * Sets the third passing point.
        *   @param iThirdPoint 
 *      third point 
 */
 virtual HRESULT SetThirdPoint(const CATIMmiMechanicalFeature_var iThirdPoint) = 0;

 /**
 * Gets the support surface. 
        * If a surface is given, the circle will lie on this surface (geodesic circle).
        *   @param oSupport 
 *      the support surface.
 */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
 * Sets the support surface. 
        * If a surface is given, the circle will lie on this surface (geodesic circle).
        *   @param iSupport 
 *      the support surface.
 */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
 * Removes the support surface.
 */
 virtual HRESULT RemoveSupport() = 0;
};
CATDeclareHandler (CATIGSMUseCircle3Points, CATBaseUnknown);
#endif
