/* -*-c++-*- */
#ifndef CATI2DGeomReport_h
#define CATI2DGeomReport_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
#include "CATListOfInt.h"

class CATString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DGeomReport;
#else
extern "C" const IID IID_CATI2DGeomReport;
#endif

class ExportedByCATSketcherInterfaces CATI2DGeomReport : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

  virtual HRESULT GetReportName(CATString& name) = 0;

  virtual HRESULT GetReportName(CATListOfInt& name) = 0;

  virtual HRESULT SetReportName(const CATListOfInt& name)=0;

};

CATDeclareHandler(CATI2DGeomReport,CATBaseUnknown);

#endif
