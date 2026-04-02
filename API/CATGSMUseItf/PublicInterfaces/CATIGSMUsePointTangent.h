/* -*-c++-*- */
#ifndef CATIGSMUsePointTangent_H
#define CATIGSMUsePointTangent_H

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
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePointTangent;
#else
extern "C" const IID IID_CATIGSMUsePointTangent;
#endif

/**
 * Interface to point tangent feature. 
 * <b>Role</b>: Allows you to access data of the point feature created as follow :
 * The tangent to the curve at this point is colinear to a given direction.
 * The resulting feature can contain several points.
 * @see CATIGSMUseFactory#CreatePoint
 */
class ExportedByCATGSMUseItf CATIGSMUsePointTangent : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
    * Gets the curve.
    *   @param oCurve 
    *      Support curve 
    */
 virtual HRESULT GetCurve(CATIMmiMechanicalFeature_var& oCurve) = 0;
  /**
    *  Set the curve.
    *   @param iCurve 
    *      Supportting curve 
    */
 virtual HRESULT SetCurve(const CATIMmiMechanicalFeature_var iCurve) = 0;
  /**
    * Gets the direction.
    * @Param oDirection
    *  Direction
    * @see CATIGSMUseDirection
    */
 virtual HRESULT GetDirection(CATIGSMUseDirection_var& oDirection) = 0;

  /**
    * Sets the direction.
    * @Param iDirection
    *  Direction
    * @see CATIGSMUseDirection
    */
 virtual HRESULT SetDirection(const CATIGSMUseDirection_var iDirection) = 0;
};
CATDeclareHandler (CATIGSMUsePointTangent, CATBaseUnknown);
#endif
