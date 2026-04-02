/* -*-c++-*- */
#ifndef CATIGSMUsePlane3Points_H
#define CATIGSMUsePlane3Points_H
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
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlane3Points;
#else
extern "C" const IID IID_CATIGSMUsePlane3Points;
#endif
/**
 * Interface to plane  through three points feature.
 * <b>Role</b>: Allows you to access data of the plane feature passing though three points.
 * @see CATIGSMUseFactory#CreatePlane
 */
class ExportedByCATGSMUseItf CATIGSMUsePlane3Points : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

      /**
 * Gets the first point.
        *   @param oFirstPoint
        *     first point 
 */
 virtual HRESULT GetFirstPoint(CATIMmiMechanicalFeature_var& oFirstPoint) = 0;

      /**
 * Sets the first point.
        *   @param iFirstPoint
        *     first point 
 */
 virtual HRESULT SetFirstPoint(const CATIMmiMechanicalFeature_var iFirstPoint) = 0;
     
      /**
 * Gets the second point.
        *   @param oSecondPoint
        *     second point 
 */
 virtual HRESULT GetSecondPoint(CATIMmiMechanicalFeature_var& oSecondPoint) = 0;

      /**
 * Sets the second point.
        *   @param iSecondPoint
        *     second  point 
 */
 virtual HRESULT SetSecondPoint(const CATIMmiMechanicalFeature_var iSecondPoint) = 0;

       /**
 * Gets the third point.
        *   @param oThirdPoint
        *     third  point 
 */
 virtual HRESULT GetThirdPoint(CATIMmiMechanicalFeature_var& oThirdPoint) = 0;

      /**
 * Sets the third point.
        *   @param iThirdPoint
        *     third  point 
 */
 virtual HRESULT SetThirdPoint(const CATIMmiMechanicalFeature_var iThirdPoint) = 0;
};
CATDeclareHandler (CATIGSMUsePlane3Points, CATBaseUnknown);
#endif
