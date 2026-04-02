/* -*-c++-*- */
#ifndef CATIGSMPlane1Curve_H
#define CATIGSMPlane1Curve_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlane1Curve;
#else
extern "C" const IID IID_CATIGSMPlane1Curve;
#endif
/**
 * Interface to plane through a curve feature.  
 * <b>Role</b>: Allows you to access data of the plane feature passing though 
 * a planar curve.
 * @see CATIGSMFactory#CreatePlane
 */
class ExportedByCATGitInterfaces CATIGSMPlane1Curve : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the planar curve.
        *   @param oCurve 
        *     curve 
 */
 virtual HRESULT GetPlanarCurve(CATISpecObject_var& oCurve) = 0;
 /**
 * Sets the planar curve.
        *   @param iCurve 
        *     curve 
 */
 virtual HRESULT SetPlanarCurve(const CATISpecObject_var iCurve) = 0;
};
CATDeclareHandler (CATIGSMPlane1Curve, CATBaseUnknown);
#endif
