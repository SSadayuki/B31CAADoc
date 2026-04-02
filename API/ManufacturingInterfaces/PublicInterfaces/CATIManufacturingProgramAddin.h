//
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
*/
//
// module

#ifndef CATIManufacturingProgramAddin_h
#define CATIManufacturingProgramAddin_h
#include "CATIWorkbenchAddin.h"
#include "MfgItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIManufacturingProgramAddin;
#else
extern "C" const IID IID_CATIManufacturingProgramAddin;
#endif

/**
 * Interface to customize PMG workbench. 
 * <b>Role</b>: This interface has to be implemented to provide new toolbars through addin mechanism.
 * @see CATIWorkbenchAddin 
 */
class ExportedByMfgItfEnv CATIManufacturingProgramAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};

#endif
