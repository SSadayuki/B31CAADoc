/* -*-c++-*- */
#ifndef CATIGSMUsePlaneTangent_H
#define CATIGSMUsePlaneTangent_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"

#include "CATBaseUnknown.h"

class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlaneTangent;
#else
extern "C" const IID IID_CATIGSMUsePlaneTangent;
#endif

/**
 * Interface to tangency plane feature.
 * <b>Role</b>: Allows you to access data of the the plane feature tangent to a
 * surface at a given point.
 * @see CATIGSMUseFactory#CreatePlaneTangent
 */
class ExportedByCATGSMUseItf CATIGSMUsePlaneTangent : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the surface to which the plane is to be tangent.
        *   @param oSupport 
 *      reference surface
 */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;
 /**
 * Sets the surface to which the plane is to be tangent.
        *   @param iSupport 
 *      reference surface
 */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;
 /**
 * Gets the tangency point.
        *   @param oPoint 
 *      tangency point 
 */
 virtual HRESULT GetTangencyPoint(CATIMmiMechanicalFeature_var& oPoint) = 0;
 /**
 * Sets the tangency point.
        *   @param iPoint 
 *      tangency point 
 */
 virtual HRESULT SetTangencyPoint(const CATIMmiMechanicalFeature_var iPoint) = 0;

};

CATDeclareHandler (CATIGSMUsePlaneTangent, CATBaseUnknown);

#endif
