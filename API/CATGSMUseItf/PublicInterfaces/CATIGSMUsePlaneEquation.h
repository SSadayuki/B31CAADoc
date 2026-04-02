/* -*-c++-*- */
#ifndef CATIGSMUsePlaneEquation_H
#define CATIGSMUsePlaneEquation_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//=============================================================================
//=============================================================================
// Usage Note:
//
//=============================================================================
#include "CATGSMUseItfExportedBy.h"
#include "CATICkeParm.h"

class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlaneEquation;
#else
extern "C" const IID IID_CATIGSMUsePlaneEquation;
#endif
/**
 * Interface to plane feature defined by an equation plane.
 * <b>Role</b>: Allows you to access data of the plane feature created by its
 * cartesian equation.
 * Plane equation is Ax+By+Cz = D.
 * @see CATIGSMUseFactory#CreatePlane
 */
class ExportedByCATGSMUseItf CATIGSMUsePlaneEquation : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets plane coefficients : A, B, C, D.
 * A, B, C are reals, D is a length.
        *   @param oA
        *      A Coefficient of cartesian plane 
        *   @param oB
        *      B Coefficient of cartesian plane 
        *   @param oC
        *      C Coefficient of cartesian plane 
        *   @param oD
        *      D Coefficient of cartesian plane 
 */
 virtual HRESULT GetCoefficients(CATICkeParm_var & oA,CATICkeParm_var & oB,CATICkeParm_var & oC,CATICkeParm_var & oD) = 0;

 /**
 * Sets plane coefficients : A, B, C, D.
 * A, B, C are reals, D is a length.
        *   @param iA
        *      A Coefficient of cartesian plane 
        *   @param iB
        *      B Coefficient of cartesian plane 
        *   @param iC
        *      C Coefficient of cartesian plane 
        *   @param iD
        *      D Coefficient of cartesian plane 
 */
 virtual HRESULT SetCoefficients(const CATICkeParm_var iA,const CATICkeParm_var iB,const CATICkeParm_var iC,const CATICkeParm_var iD) = 0;

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

 /**
  * Gets the reference Axis. 
  * This data is not mandatory, if oRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param oRefAxis
  *     Reference axis (oRefAxis = NULL_var is allowed).
  */
 virtual HRESULT GetReferenceAxis(CATIMmiMechanicalFeature_var& oRefAxis) = 0;

/**
  * Sets the reference Axis. 
  *    This data is not mandatory, if iRefAxis is null, then absolute axis system is considered as reference axis system.
  * @Param iRefAxis
  *     Reference Axis (iRefAxis = NULL_var is allowed).
  */
 virtual HRESULT SetReferenceAxis(const CATIMmiMechanicalFeature_var  &iRefAxis) = 0;

};
CATDeclareHandler (CATIGSMUsePlaneEquation, CATBaseUnknown);
#endif
