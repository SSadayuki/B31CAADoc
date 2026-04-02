/* -*-c++-*- */

#ifndef CATIExchangePParabola_H
#define CATIExchangePParabola_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePParabola ;
#else
extern "C" const IID IID_CATIExchangePParabola ;
#endif

/**
 * Interface to exchange Pparabolas.
 * <b>Role</b>: This interface is dedicated to get Pparabolas information.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePParabola: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the Pparabola's parameters.
 * @param oVertex
 *				Get the focus of the parabola.
 * @param oFocusAxis
 *				Get the unit vector of the focal axis of the parabola with |pFocusAxis| = focal distance (FD).
 */
  virtual HRESULT GetPParabolaData(double oVertex[2], double oFocusAxis[2] ) const = 0;
};
CATDeclareHandler( CATIExchangePParabola, CATBaseUnknown );

#endif
