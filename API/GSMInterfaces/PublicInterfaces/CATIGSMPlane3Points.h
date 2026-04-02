/* -*-c++-*- */
#ifndef CATIGSMPlane3Points_H
#define CATIGSMPlane3Points_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlane3Points;
#else
extern "C" const IID IID_CATIGSMPlane3Points;
#endif
/**
 * Interface to plane  through three points feature.
 * <b>Role</b>: Allows you to access data of the plane feature passing though three points.
 * @see CATIGSMFactory#CreatePlane
 */
class ExportedByCATGitInterfaces CATIGSMPlane3Points : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

      /**
 * Gets the first point.
        *   @param oFirstPoint
        *     first point 
 */
 virtual HRESULT GetFirstPoint(CATISpecObject_var& oFirstPoint) = 0;

      /**
 * Sets the first point.
        *   @param iFirstPoint
        *     first point 
 */
 virtual HRESULT SetFirstPoint(const CATISpecObject_var iFirstPoint) = 0;
     
      /**
 * Gets the second point.
        *   @param oSecondPoint
        *     second point 
 */
 virtual HRESULT GetSecondPoint(CATISpecObject_var& oSecondPoint) = 0;

      /**
 * Sets the second point.
        *   @param iSecondPoint
        *     second  point 
 */
 virtual HRESULT SetSecondPoint(const CATISpecObject_var iSecondPoint) = 0;

       /**
 * Gets the third point.
        *   @param oThirdPoint
        *     third  point 
 */
 virtual HRESULT GetThirdPoint(CATISpecObject_var& oThirdPoint) = 0;

      /**
 * Sets the third point.
        *   @param iThirdPoint
        *     third  point 
 */
 virtual HRESULT SetThirdPoint(const CATISpecObject_var iThirdPoint) = 0;
};
CATDeclareHandler (CATIGSMPlane3Points, CATBaseUnknown);
#endif
