/* -*-c++-*- */
#ifndef CATIGSMUsePlaneOffsetPt_H
#define CATIGSMUsePlaneOffsetPt_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"

#include "CATBaseUnknown.h"

class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlaneOffsetPt;
#else
extern "C" const IID IID_CATIGSMUsePlaneOffsetPt;
#endif
/**
 * Interface to offset plane feature with point reference.   
 * <b>Role</b>: Allows you to access data of the plane feature parallel to 
 * another plane and passing through a Point.
 * @see CATIGSMUseFactory#CreatePlaneOffsetPt
 */
class ExportedByCATGSMUseItf CATIGSMUsePlaneOffsetPt : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the reference plane.
        *   @param oSupport 
 *      reference  Plane 
 */
 virtual HRESULT GetReferencePlane(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
 * Sets the reference plane.
        *   @param iSupport 
 *      reference  plane 
 */
 virtual HRESULT SetReferencePlane(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
 * Gets the reference point.
        *   @param oReferencePoint
 *      reference  point 
 */
 virtual HRESULT GetReferencePoint(CATIMmiMechanicalFeature_var& oReferencePoint) = 0;

 /**
 * Sets the reference point.
        *   @param iReferencePoint
 *      reference  point 
 */
 virtual HRESULT SetReferencePoint(const CATIMmiMechanicalFeature_var  iReferencePoint) = 0;
};
CATDeclareHandler (CATIGSMUsePlaneOffsetPt, CATBaseUnknown);
#endif
