#ifndef CATICciETBS_H
#define CATICciETBS_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciETBS :
//   Interface to manage composites ETBS (Edge To Be Staggered).
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciETBS (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATICciZone.h"

class CATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciETBS;
#else
extern "C" const IID IID_CATICciETBS;
#endif

/**
 * Interface to ETBS.
 * <b>Role</b>: Allows to manage a Composites ETBS (Edge To Be Staggered) feature.
 */
class ExportedByCAACompositesItf CATICciETBS : public CATBaseUnknown
{
   CATDeclareInterface;

public :

   /**
   * Gets the two zones sharing the current ETBS.
   * @param oZone1
   *   First zone sharing the ETBS.
   * @param oZone2
   *   Second zone sharing the ETBS.
   */
   virtual HRESULT GetZones(CATICciZone_var & oZone1, CATICciZone_var & oZone2) = 0;

   /**
   * Gets the curve that used to create the contours of the 2 zones
   * connected by the current ETBS.
   * @param oCurve
   *   Underlying curve.
   */
   virtual HRESULT GetUnderlyingCurve(CATIMmiMechanicalFeature_var & oCurve) = 0;

   /**
   * @deprecated V5R26 
   * Use @see #GetUnderlyingCurve overloaded method instead.
   * Gets the curve that used to create the contours of the 2 zones
   * connected by the current ETBS.
   * @param oCurve
   *   Underlying curve.
   */
   virtual HRESULT GetUnderlyingCurve(CATISpecObject_var & oCurve) = 0;
};

CATDeclareHandler(CATICciETBS, CATBaseUnknown);

#endif
