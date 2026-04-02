/* -*-c++-*- */
#ifndef _DS_COMPUTE_SERVER
#ifndef CATIShapeDesignWorkshopAddin_h
#define CATIShapeDesignWorkshopAddin_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include <CATIWorkbenchAddin.h>
#include "CATGSMUseItfExportedBy.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIShapeDesignWorkshopAddin;
#else
extern "C" const IID IID_CATIShapeDesignWorkshopAddin;
#endif

/**
  * ShapeDesign workshop extension. 
  * <b>Role</b>:  Allows to add a command in ShapeDesign workshop
  * @see CATIWorkbench
  */
class ExportedByCATGSMUseItf CATIShapeDesignWorkshopAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};
CATDeclareHandler( CATIShapeDesignWorkshopAddin, CATIWorkbenchAddin );

#endif
#endif

