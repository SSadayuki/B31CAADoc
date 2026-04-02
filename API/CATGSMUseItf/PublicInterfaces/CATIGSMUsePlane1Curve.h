/* -*-c++-*- */
#ifndef CATIGSMUsePlane1Curve_H
#define CATIGSMUsePlane1Curve_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlane1Curve;
#else
extern "C" const IID IID_CATIGSMUsePlane1Curve;
#endif
/**
 * Interface to plane through a curve feature.  
 * <b>Role</b>: Allows you to access data of the plane feature passing though 
 * a planar curve.
 * @see CATIGSMUseFactory#CreatePlane
 */
class ExportedByCATGSMUseItf CATIGSMUsePlane1Curve : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the planar curve.
        *   @param oCurve 
        *     curve 
 */
 virtual HRESULT GetPlanarCurve(CATIMmiMechanicalFeature_var& oCurve) = 0;
 /**
 * Sets the planar curve.
        *   @param iCurve 
        *     curve 
 */
 virtual HRESULT SetPlanarCurve(const CATIMmiMechanicalFeature_var iCurve) = 0;
};
CATDeclareHandler (CATIGSMUsePlane1Curve, CATBaseUnknown);
#endif
