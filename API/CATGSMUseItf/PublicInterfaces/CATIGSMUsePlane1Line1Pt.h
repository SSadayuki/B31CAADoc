/* -*-c++-*- */
#ifndef CATIGSMUsePlane1Line1Pt_H
#define CATIGSMUsePlane1Line1Pt_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

class CATIMmiMechanicalFeature_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlane1Line1Pt;
#else
extern "C" const IID IID_CATIGSMUsePlane1Line1Pt;
#endif
/**
 * Interface to plane feature defined by a line and a point.
 * <b>Role</b>: Allows you to access data of the plane feature passing though 
 * one line and one point
 * @see CATIGSMUseFactory#CreatePlane1Line1Pt
 */
class ExportedByCATGSMUseItf CATIGSMUsePlane1Line1Pt : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the passing point.
 *   @param oPoint 
 *     point 
 */
 virtual HRESULT GetPoint(CATIMmiMechanicalFeature_var& oPoint) = 0;
 /**
 * Sets the passing point.
 *   @param iPoint 
 *     point 
 */
 virtual HRESULT SetPoint(const CATIMmiMechanicalFeature_var iPoint) = 0;
 /**
 * Gets the passing line.
 *   @param oline 
 *     line
 */
 virtual HRESULT GetLine(CATIMmiMechanicalFeature_var& oLine) = 0;
 /**
 * Sets the passing line.
 *   @param iLine  
 *      line
 */
 virtual HRESULT SetLine(const CATIMmiMechanicalFeature_var iLine) = 0;
};
CATDeclareHandler (CATIGSMUsePlane1Line1Pt, CATBaseUnknown);
#endif
