/* -*-c++-*- */
#ifndef CATIGSMPointTangent_H
#define CATIGSMPointTangent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
class CATIGSMDirection_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPointTangent;
#else
extern "C" const IID IID_CATIGSMPointTangent;
#endif

/**
 * Interface to point tangent feature. 
 * <b>Role</b>: Allows you to access data of the point feature created as follow :
 * The tangent to the curve at this point is colinear to a given direction.
 * The resulting feature can contain several points.
 * @see CATIGSMFactory#CreatePoint
 */
class ExportedByCATGitInterfaces CATIGSMPointTangent : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
    * Gets the curve.
    *   @param oCurve 
    *      Support curve 
    */
 virtual HRESULT GetCurve(CATISpecObject_var& oCurve) = 0;
  /**
    *  Set the curve.
    *   @param iCurve 
    *      Supportting curve 
    */
 virtual HRESULT SetCurve(const CATISpecObject_var iCurve) = 0;
  /**
    * Gets the direction.
    * @Param oDirection
    *  Direction
    * @see CATIGSMDirection
    */
 virtual HRESULT GetDirection(CATIGSMDirection_var& oDirection) = 0;

  /**
    * Sets the direction.
    * @Param iDirection
    *  Direction
    * @see CATIGSMDirection
    */
 virtual HRESULT SetDirection(const CATIGSMDirection_var iDirection) = 0;
};
CATDeclareHandler (CATIGSMPointTangent, CATBaseUnknown);
#endif
