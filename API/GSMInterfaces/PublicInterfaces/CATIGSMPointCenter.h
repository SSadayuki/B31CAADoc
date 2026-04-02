/* -*-c++-*- */
#ifndef CATIGSMPointCenter_H
#define CATIGSMPointCenter_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPointCenter;
#else
extern "C" const IID IID_CATIGSMPointCenter;
#endif
/**
 * Interface to center point of a circle feature.
 * <b>Role</b>: Allows you to access data of the point feature created as
 * the center of a circle.
 * @see CATIGSMFactory#CreatePoint
 */
class ExportedByCATGitInterfaces CATIGSMPointCenter : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
  * Gets the element (a circle, an ellipsa, or a part of them or spherical surface).
  *   @param oElement
  *      circle,ellipse or spherical surface
  */
 virtual HRESULT GetElement(CATISpecObject_var& oElement) = 0;
 /**
  * Sets the element (a circle, an ellipsa, or a part of them or spherical surface).
  *   @param iElement
  *      circle,ellipse or spherical surface 
  */
 virtual HRESULT SetElement(const CATISpecObject_var iElement) = 0;

};
CATDeclareHandler (CATIGSMPointCenter, CATBaseUnknown);
#endif
