/* -*-c++-*- */
#ifndef CATISketchFactory_h
#define CATISketchFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketchFactory;
#else
extern "C" const IID IID_CATISketchFactory;
#endif

class CATISpecObject_var;
class CATI2DWFGeometry_var;

class ExportedByCATSketcherInterfaces CATISketchFactory : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * Creates a Sketch.
 */
  virtual CATISpecObject_var CreateSketch(const CATBaseUnknown_var& iSupportSurface=NULL_var,const int iUserType=0) = 0;

/**
 * Creates a Sketch.
 */
  virtual CATISpecObject_var CreateSketch(const double pOrigin[3], const double pHDirection[3], const double pVDirection[3], const int iUserType=0) = 0;

/** @nodoc */
  virtual CATISpecObject_var Convert2DGeometry(const CATI2DWFGeometry_var& i2DGeom) = 0;
};

CATDeclareHandler(CATISketchFactory,CATBaseUnknown);

#endif
