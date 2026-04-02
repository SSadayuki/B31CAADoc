#ifndef CATI2DLBackWkbAddin_H
#define CATI2DLBackWkbAddin_H
// COPYRIGHT DASSAULT SYSTEMES 2006
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#include "CATIWorkbenchAddin.h"
#include "CATDrafting2DLInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDrafting2DLItfCPP IID IID_CATI2DLBackWkbAddin;
#else
extern "C" const IID IID_CATI2DLBackWkbAddin;
#endif

//------------------------------------------------------------------

/**
 * Interface of 2D Layout For 3D Design workbench.
 * by implementing this interface you create an addin of Back workbench of Layout.
 * The toolbars and the item menu will be only available when the workbench is the current one.
 * CATIDrwAddin is the addin of the "Layout" background working view workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATDrafting2DLItfCPP CATI2DLBackWkbAddin: public CATIWorkbenchAddin
{
  CATDeclareInterface;

  public:
};

CATDeclareHandler(CATI2DLBackWkbAddin, CATBaseUnknown);

//------------------------------------------------------------------

#endif
