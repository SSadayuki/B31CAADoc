/* -*-c++-*- */
#ifndef CATIGSMUsePlaneOffset_H
#define CATIGSMUsePlaneOffset_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATICkeParm.h"

class CATIMmiMechanicalFeature_var; 


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlaneOffset;
#else
extern "C" const IID IID_CATIGSMUsePlaneOffset;
#endif
/**
 * Interface to offset plane feature.
 * <b>Role</b>: Allows you to access data of the plane feature created with
 * an offset to another plane.
 * @see CATIGSMUseFactory#CreatePlaneOffsetPt
 */
class ExportedByCATGSMUseItf CATIGSMUsePlaneOffset : public CATBaseUnknown
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
 *      reference  Plane 
 */
 virtual HRESULT SetReferencePlane(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
 * Gets the offset value.
        *   @param oOffset 
 *      offset value
 */
 virtual HRESULT GetOffset(CATICkeParm_var & oOffset) = 0;

 /**
 * Sets the offset value.
        *   @param iOffset 
 *      offset value
 */
 virtual HRESULT SetOffset(const CATICkeParm_var iOffset) = 0;
};
CATDeclareHandler (CATIGSMUsePlaneOffset, CATBaseUnknown);
#endif
