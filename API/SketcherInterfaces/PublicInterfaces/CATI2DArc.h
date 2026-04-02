/* -*-c++-*- */
#ifndef CATI2DArc_h
#define CATI2DArc_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DArc;
#else
extern "C" const IID IID_CATI2DArc;
#endif

class ExportedByCATSketcherInterfaces CATI2DArc : public CATBaseUnknown
{
   CATDeclareInterface;

public: 
  
  /**
   * This method returns the Curve on which the Arc is lying.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oCurve</tt>
   * [out] Pointer to the support Curve.
   */
 virtual HRESULT GetSupportCurve(const IID &iIID, CATBaseUnknown **oCurve) = 0;

  /**
   * This method changes the Curve on which the Arc is lying.
   * @param <tt>iCurve</tt>
   * [in] Pointer to the new support Curve.
   */
 virtual HRESULT SetSupportCurve(CATBaseUnknown *iCurve) = 0;

};
#endif
