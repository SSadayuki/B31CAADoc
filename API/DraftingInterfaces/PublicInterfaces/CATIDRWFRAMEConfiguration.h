// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#ifndef CATIDRWFRAMEConfiguration_h
#define CATIDRWFRAMEConfiguration_h

#include "CATIWorkbench.h"
#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDRWFRAMEConfiguration;
#else
extern "C" const IID IID_CATIDRWFRAMEConfiguration;
#endif
/**
 * Interface to create a new workbench of the Drawing document.
 * <p>Role</b>: To create a new workbench of the Drawing document,
 * implement this interface.
 * @see CATIWorkbench
 */
class ExportedByDraftingItfCPP CATIDRWFRAMEConfiguration : public CATIWorkbench
{
  CATDeclareInterface;
  
  public:
};

#endif
