/* -*-c++-*- */
#ifndef CATIGSMUsePointCenter_H
#define CATIGSMUsePointCenter_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePointCenter;
#else
extern "C" const IID IID_CATIGSMUsePointCenter;
#endif
/**
 * Interface to center point of a circle feature.
 * <b>Role</b>: Allows you to access data of the point feature created as
 * the center of a circle.
 * @see CATIGSMUseFactory#CreatePoint
 */
class ExportedByCATGSMUseItf CATIGSMUsePointCenter : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
  * Gets the element (a circle, an ellipsa, or a part of them or spherical surface).
  *   @param oElement
  *      circle,ellipse or spherical surface
  */
 virtual HRESULT GetElement(CATIMmiMechanicalFeature_var& oElement) = 0;
 /**
  * Sets the element (a circle, an ellipsa, or a part of them or spherical surface).
  *   @param iElement
  *      circle,ellipse or spherical surface 
  */
 virtual HRESULT SetElement(const CATIMmiMechanicalFeature_var iElement) = 0;

};
CATDeclareHandler (CATIGSMUsePointCenter, CATBaseUnknown);
#endif
