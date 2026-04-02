/* -*-c++-*- */
#ifndef CATI2DImportedGeometry_h
#define CATI2DImportedGeometry_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATI2DOutParameters.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DImportedGeometry;
#else
extern "C" const IID IID_CATI2DImportedGeometry;
#endif

class ExportedByCATSketcherInterfaces CATI2DImportedGeometry : public CATI2DOutParameters
{
  CATDeclareInterface;

public: 

};

CATDeclareHandler(CATI2DImportedGeometry,CATI2DOutParameters);

#endif
