/* -*-c++-*- */
#ifndef CATIGSMPlaneTangent_H
#define CATIGSMPlaneTangent_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"

#include "CATBaseUnknown.h"

class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlaneTangent;
#else
extern "C" const IID IID_CATIGSMPlaneTangent;
#endif

/**
 * Interface to tangency plane feature.
 * <b>Role</b>: Allows you to access data of the the plane feature tangent to a
 * surface at a given point.
 * @see CATIGSMFactory#CreatePlaneTangent
 */
class ExportedByCATGitInterfaces CATIGSMPlaneTangent : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the surface to which the plane is to be tangent.
        *   @param oSupport 
 *      reference surface
 */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;
 /**
 * Sets the surface to which the plane is to be tangent.
        *   @param iSupport 
 *      reference surface
 */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;
 /**
 * Gets the tangency point.
        *   @param oPoint 
 *      tangency point 
 */
 virtual HRESULT GetTangencyPoint(CATISpecObject_var& oPoint) = 0;
 /**
 * Sets the tangency point.
        *   @param iPoint 
 *      tangency point 
 */
 virtual HRESULT SetTangencyPoint(const CATISpecObject_var iPoint) = 0;

};

CATDeclareHandler (CATIGSMPlaneTangent, CATBaseUnknown);

#endif
