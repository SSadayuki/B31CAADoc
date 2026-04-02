/* -*-c++-*- */
#ifndef CATIGSMCircle3Points_H
#define CATIGSMCircle3Points_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "CATGitInterfacesExportedBy.h"

class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCircle3Points;
#else
extern "C" const IID IID_CATIGSMCircle3Points;
#endif
/**
 * Interface to circle trough three points feature. 
 * <b>Role</b>: Allows you to access data of the circle feature created by using 
 * three points.
 * @see CATIGSMFactory#CreateCircle
 */
class ExportedByCATGitInterfaces CATIGSMCircle3Points : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the first passing point.
        *   @param oFirsPoint 
 *      first point 
 */
 virtual HRESULT GetFirstPoint(CATISpecObject_var& oFirstPoint) = 0;

 /**
 * Sets the first passing point.
        *   @param iFirsPoint 
 *      first point 
 */

 virtual HRESULT SetFirstPoint(const CATISpecObject_var iFirstPoint) = 0;

 /**
 * Gets the second passing point.
        *   @param oSecondPoint 
 *      second point 
 */
 virtual HRESULT GetSecondPoint(CATISpecObject_var& oSecondPoint) = 0;

 /**
 * Sets the second passing point.
        *   @param iSecondPoint 
 *      second point 
 */
 virtual HRESULT SetSecondPoint(const CATISpecObject_var iSecondPoint) = 0;

 /**
 * Gets the third passing point.
        *   @param oThirdPoint 
 *      third point 
 */
 virtual HRESULT GetThirdPoint(CATISpecObject_var& oThirdPoint) = 0;

 /**
 * Sets the third passing point.
        *   @param iThirdPoint 
 *      third point 
 */
 virtual HRESULT SetThirdPoint(const CATISpecObject_var iThirdPoint) = 0;

 /**
 * Gets the support surface. 
        * If a surface is given, the circle will lie on this surface (geodesic circle).
        *   @param oSupport 
 *      the support surface.
 */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;

 /**
 * Sets the support surface. 
        * If a surface is given, the circle will lie on this surface (geodesic circle).
        *   @param iSupport 
 *      the support surface.
 */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;

 /**
 * Removes the support surface.
 */
 virtual HRESULT RemoveSupport() = 0;
};
CATDeclareHandler (CATIGSMCircle3Points, CATBaseUnknown);
#endif
