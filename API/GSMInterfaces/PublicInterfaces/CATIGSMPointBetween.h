/* -*-c++-*- */
#ifndef CATIGSMPointBetween_H
#define CATIGSMPointBetween_H

// COPYRIGHT DASSAULT SYSTEMES 1997

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPointBetween;
#else
extern "C" const IID IID_CATIGSMPointBetween;
#endif
/**
 * Interface to point feature created between two other points. 
 * <b>Role</b>: Allows you to access data of the point feature created between two points.
 * @see CATIGSMFactory#CreatePointBetween
 */

class ExportedByCATGitInterfaces CATIGSMPointBetween : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the first reference point.
  * @Param oFirstPoint
  * first point.
  */
 virtual HRESULT GetFirstPoint(CATISpecObject_var& oFirstPoint) = 0;
 /**
  * Sets the first reference point.
  * @Param iFirstPoint
  * first point.
  */
 virtual HRESULT SetFirstPoint(const CATISpecObject_var iFirstPoint) = 0;
 /**
  * Gets the second reference point.
  * @Param oSecondPoint
  * second point
  */
 virtual HRESULT GetSecondPoint(CATISpecObject_var& oSecondPoint) = 0;
 /**
  * Sets the second reference point.
  * @Param iSecondPoint
  * second point 
  */
 virtual HRESULT SetSecondPoint(const CATISpecObject_var iSecondPoint) = 0;
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
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;
 /**
 * Sets the support curve or surface.
 * if a support is given, the input point should lie on the support.
        *   @param iSupport 
 *      support curve or surface
 */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;
};
CATDeclareHandler (CATIGSMPointBetween, CATBaseUnknown);
#endif
