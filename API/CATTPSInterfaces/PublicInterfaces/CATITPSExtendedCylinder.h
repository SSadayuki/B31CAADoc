#ifndef CATITPSExtendedCylinder_H
#define CATITPSExtendedCylinder_H

// COPYRIGHT DASSAULT SYSTEMES 2014

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

class CATITTRS;
class CATMathPoint;
class CATUnicodeString;

/**
* Interface for the TPSCGExtendedCylinder object. The purpose of the interface
  is to Get and Get the various attributes of the TPSCGExtendedCylinder feature.
  The interface can be retrieved by doing a QI on the TPSCGExtendedCylinder component.
*/

extern ExportedByCATTPSItfCPP  IID IID_CATITPSExtendedCylinder;
class ExportedByCATTPSItfCPP CATITPSExtendedCylinder: public CATBaseUnknown
{
CATDeclareInterface;

public:

  /**
  * Gets the center point of the extended cylinder.
  *  @param oPoint [ out ]
  *   canter point of the extended cylinder.
  *  returns S_OK when the point has been correctly retrieved, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT GetPosition(CATMathPoint &oPoint) const = 0;

  /**
  * Sets the center point of the extended cylinder.
  *  @param iPoint [ in ]
  *   canter point of the extended cylinder.
  *  returns S_OK when the point has been correctly set, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT SetPosition(const CATMathPoint &iPoint) = 0;

  /**
  * Gets the start point of the extended cylinder.
  *  @param oStartPoint [ out ]
  *   start point of the extended cylinder.
  *  returns S_OK when the point has been correctly retrieved, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT GetStartPoint(CATMathPoint &oStartPoint) const = 0;

  /**
  * Sets the start point of the extended cylinder.
  *  @param iStartPoint [ in ]
  *   start point of the extended cylinder.
  *  returns S_OK when the point has been correctly set, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT SetStartPoint(const CATMathPoint &iStartPoint) = 0;

  /**
  * Gets the end point of the extended cylinder.
  *  @param oEndPoint [ out ]
  *   end point of the extended cylinder.
  *  returns S_OK when the point has been correctly retrieved, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT GetEndPoint(CATMathPoint &oEndPoint) const = 0;

  /**
  * Sets the end point of the extended cylinder.
  *  @param iEndPoint [ in ]
  *   End point of the extended cylinder.
  *  returns S_OK when the point has been correctly set, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT SetEndPoint(const CATMathPoint &iEndPoint) = 0;

  /**
  * Gets the offset of the extended cylinder.
  *  @param oOffset [ out ]
  *   offset of the extended cylinder (unit is mm).
  *  returns S_OK when the offset has been correctly retrieved, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT GetOffset(double &oOffset) = 0;

  /**
  * Sets the offset of the extended cylinder.
  *  @param iOffset [ in ]
  *   offset of the extended cylinder expressed in millimeters.
  *  returns S_OK when the offset has been correctly set, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT SetOffset(const double &iOffset) = 0;

  /**
  * Gets the length of the extended cylinder.
  *  @param oLength [ out ]
  *   length of the extended cylinder (unit is mm).
  *  returns S_OK when the length has been correctly retrieved, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT GetLength(double &oLength) = 0;

  /**
  * Sets the length of the extended cylinder.
  *  @param iLength [ in ]
  *   Length of the extended cylinder expressed in millimeters.
  *  returns S_OK when the length has been correctly set, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT SetLength(const double &iLength) = 0;

  /**
  * Gets the reference plane TTRS of the extended cylinder.
  *  @param opiReferencePlaneTTRS [ out, IUnknown#Release ]
  *   Reference plane TTRS of the extended cylinder.
  *  returns S_OK when the TTRS has been correctly retrieved, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT GetReferencePlaneTTRS(CATITTRS **opiReferencePlaneTTRS) = 0;

  /**
  * Sets the reference plane TTRS of the extended cylinder.
  *  @param ipiReferencePlaneTTRS [ in ]
  *   Reference plane TTRS to set.
  *  returns S_OK when the TTRS has been correctly set, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT SetReferencePlaneTTRS(CATITTRS *ipiReferencePlaneTTRS) = 0;

  /**
  * Gets the represented TTRS of the extended cylinder.
  *  @param opiRepresentedCylinderTTRS [ out, IUnknown#Release ]
  *   Represented TTRS of the extended cylinder.
  *  returns S_OK when the TTRS has been correctly retrieved, 
  *  returns E_FAIL otherwise.
  */
  virtual HRESULT GetRepresentedCylinderTTRS(CATITTRS **opiRepresentedCylinderTTRS) = 0;
};
//-----------------------------------------------------------------------
CATDeclareHandler(CATITPSExtendedCylinder, CATBaseUnknown);
#endif
