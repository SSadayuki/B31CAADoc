/* -*-c++-*- */
#ifndef CATIGSMPlaneOffsetPt_H
#define CATIGSMPlaneOffsetPt_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"

#include "CATBaseUnknown.h"

class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlaneOffsetPt;
#else
extern "C" const IID IID_CATIGSMPlaneOffsetPt;
#endif
/**
 * Interface to offset plane feature with point reference.   
 * <b>Role</b>: Allows you to access data of the plane feature parallel to 
 * another plane and passing through a Point.
 * @see CATIGSMFactory#CreatePlaneOffsetPt
 */
class ExportedByCATGitInterfaces CATIGSMPlaneOffsetPt : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the reference plane.
        *   @param oSupport 
 *      reference  Plane 
 */
 virtual HRESULT GetReferencePlane(CATISpecObject_var& oSupport) = 0;

 /**
 * Sets the reference plane.
        *   @param iSupport 
 *      reference  plane 
 */
 virtual HRESULT SetReferencePlane(const CATISpecObject_var iSupport) = 0;

 /**
 * Gets the reference point.
        *   @param oReferencePoint
 *      reference  point 
 */
 virtual HRESULT GetReferencePoint(CATISpecObject_var& oReferencePoint) = 0;

 /**
 * Sets the reference point.
        *   @param iReferencePoint
 *      reference  point 
 */
 virtual HRESULT SetReferencePoint(const CATISpecObject_var  iReferencePoint) = 0;
};
CATDeclareHandler (CATIGSMPlaneOffsetPt, CATBaseUnknown);
#endif
