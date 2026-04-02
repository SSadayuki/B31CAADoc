/* -*-c++-*- */
#ifndef CATI2DImportedGeometrySet_h
#define CATI2DImportedGeometrySet_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATI2DOperator.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DImportedGeometrySet;
#else
extern "C" const IID IID_CATI2DImportedGeometrySet;
#endif

class ExportedByCATSketcherInterfaces CATI2DImportedGeometrySet : public CATI2DOperator
{
  CATDeclareInterface;

public: 

};

CATDeclareHandler(CATI2DImportedGeometrySet,CATI2DOperator);

#endif
