#ifndef CATIPrtCfgAddin_h
#define CATIPrtCfgAddin_h
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#include <CATIWorkbenchAddin.h>
#include <PartItf.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtCfgAddin;
#else
extern "C" const IID IID_CATIPrtCfgAddin;
#endif


/**
 * Interface to implement to add new functionalities.
 * <b>Role</b>: Allows users to add new functionalities to these provide in the Part Design workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByPartItf CATIPrtCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};

#endif
