/* -*-c++-*- */
#ifndef CATI2DOutParameters_h
#define CATI2DOutParameters_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
class CATI2DOperator;

/**
 * Interface de base des resultats des operateurs.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DOutParameters;
#else
extern "C" const IID IID_CATI2DOutParameters;
#endif

class ExportedByCATSketcherInterfaces CATI2DOutParameters : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  virtual HRESULT GetOperator(CATI2DOperator** oOperator) = 0;
};

CATDeclareHandler(CATI2DOutParameters,CATBaseUnknown);

#endif
