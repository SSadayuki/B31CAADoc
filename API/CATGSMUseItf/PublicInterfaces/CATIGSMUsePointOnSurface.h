/* -*-c++-*- */
#ifndef CATIGSMUsePointOnSurface_H
#define CATIGSMUsePointOnSurface_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"
class CATIGSMUseDirection_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePointOnSurface;
#else
extern "C" const IID IID_CATIGSMUsePointOnSurface;
#endif

/**
 * Interface to point on surface feature. 
 * <b>Role</b>: Allows you to access data of the point feature created with a
 * geodesic distance in a direction to a reference point on a surface
 * @see CATIGSMUseFactory#CreatePoint
 */

class ExportedByCATGSMUseItf CATIGSMUsePointOnSurface : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
    * Gets the surface.
    *   @param oSupport 
    *      Support surface 
    */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;
  /**
    * Sets the surface.
    *   @param iSupport 
    *      Supportting surface 
    */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;

  /**
    * Gets the reference point. 
    * <br>This data is not mandatory.
    * <br>If no point is given, the middle point on the surface is taken.
    * (RefPoint = NULL_var is allowed).
    *   @param oRefPoint 
    *      Reference point 
    */
 virtual HRESULT GetReferencePoint(CATIMmiMechanicalFeature_var& oRefPoint) = 0;

  /**
    * Sets the reference point. 
    * <br>This data is not mandatory.
    * <br>If no point is given, the middle point on the surface is taken.
    * (RefPoint = NULL_var is allowed).
    *   @param iRefPoint 
    *      Reference point 
    */
 virtual HRESULT SetReferencePoint(const CATIMmiMechanicalFeature_var iRefPoint) = 0;

  /**
    * Gets the direction from the reference point in which the point is computed.
    *   @Param oDirection
    *      direction 
    *      @see CATIGSMUseDirection
    */
 virtual HRESULT GetDirection(CATIGSMUseDirection_var& oDirection) = 0;

  /**
    * Sets the direction from the reference point in which the point is computed.
    *   @Param iDirection
    *      direction 
    *    @see CATIGSMUseDirection
    */
 virtual HRESULT SetDirection(const CATIGSMUseDirection_var iDirection) = 0;

  /**
    * Gets the geodesic length.
    *   @Param oLength
    *      geodesic length
    */
 virtual HRESULT GetLength(CATICkeParm_var& oLength) = 0;

  /**
    * Sets the geodesic length.
    *   @Param iLength
    *      geodesic length
    */
 virtual HRESULT SetLength(const CATICkeParm_var iLength) = 0;
};
CATDeclareHandler (CATIGSMUsePointOnSurface, CATBaseUnknown);
#endif
