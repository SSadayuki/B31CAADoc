/* -*-c++-*- */
#ifndef CATIGSMPlaneOffset_H
#define CATIGSMPlaneOffset_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATICkeParm.h"

class CATISpecObject_var; 


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlaneOffset;
#else
extern "C" const IID IID_CATIGSMPlaneOffset;
#endif
/**
 * Interface to offset plane feature.
 * <b>Role</b>: Allows you to access data of the plane feature created with
 * an offset to another plane.
 * @see CATIGSMFactory#CreatePlaneOffsetPt
 */
class ExportedByCATGitInterfaces CATIGSMPlaneOffset : public CATBaseUnknown
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
 *      reference  Plane 
 */
 virtual HRESULT SetReferencePlane(const CATISpecObject_var iSupport) = 0;

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
CATDeclareHandler (CATIGSMPlaneOffset, CATBaseUnknown);
#endif
