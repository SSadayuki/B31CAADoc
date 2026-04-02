/* -*-c++-*- */
#ifndef CATIGSMUsePointBetween_H
#define CATIGSMUsePointBetween_H

// COPYRIGHT DASSAULT SYSTEMES 1997

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePointBetween;
#else
extern "C" const IID IID_CATIGSMUsePointBetween;
#endif
/**
 * Interface to point feature created between two other points. 
 * <b>Role</b>: Allows you to access data of the point feature created between two points.
 * @see CATIGSMUseFactory#CreatePointBetween
 */

class ExportedByCATGSMUseItf CATIGSMUsePointBetween : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the first reference point.
  * @Param oFirstPoint
  * first point.
  */
 virtual HRESULT GetFirstPoint(CATIMmiMechanicalFeature_var& oFirstPoint) = 0;
 /**
  * Sets the first reference point.
  * @Param iFirstPoint
  * first point.
  */
 virtual HRESULT SetFirstPoint(const CATIMmiMechanicalFeature_var iFirstPoint) = 0;
 /**
  * Gets the second reference point.
  * @Param oSecondPoint
  * second point
  */
 virtual HRESULT GetSecondPoint(CATIMmiMechanicalFeature_var& oSecondPoint) = 0;
 /**
  * Sets the second reference point.
  * @Param iSecondPoint
  * second point 
  */
 virtual HRESULT SetSecondPoint(const CATIMmiMechanicalFeature_var iSecondPoint) = 0;
 /**
  * Gets the Ratio.
  * @Param oRatio
  *   Ratio can be equal to NULL_var, then the extremity defined by 
  *   Orientation parameter is taken.
  */
 virtual HRESULT GetRatio(CATICkeParm_var& oRatio) = 0;
 /**
  * Sets the Ratio.
  * @Param iRatio
  *   If no Ratio is given, the extremity defined by Orientation parameter 
  *   is taken (Distance = NULL_var is allowed).
  */
 virtual HRESULT SetRatio(const CATICkeParm_var iRatio) = 0;
 /**
  * Gets the orientation.
  * @Param oOrientation 
  * Orientation = CATGSMInvertOrientation means that distance is measured from the second point.
  */
 virtual HRESULT GetOrientation(CATGSMOrientation &oOrientation) = 0;
 /**
  * Sets the orientation.
  * @Param iOrientation 
  * Orientation = CATGSMInvertOrientation means that distance is measured from the second point.
  */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrientation) = 0;
 /**
  * Inverts the orientation.
  */
 virtual HRESULT InvertOrientation() = 0;
 /**
 *  Gets the support curve or surface.
 * if a support is given, the input point should lie on the support.
        *   @param oSupport 
 *      support curve or surface
 */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;
 /**
 * Sets the support curve or surface.
 * if a support is given, the input point should lie on the support.
        *   @param iSupport 
 *      support curve or surface
 */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;
};
CATDeclareHandler (CATIGSMUsePointBetween, CATBaseUnknown);
#endif
