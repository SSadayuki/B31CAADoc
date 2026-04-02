#ifndef CATIMfgToolAssemblyTabPageDisplay_h
#define CATIMfgToolAssemblyTabPageDisplay_h

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

//module
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgToolAssemblyTabPageDisplay;
#else
extern "C" const IID IID_CATIMfgToolAssemblyTabPageDisplay;
#endif

/**   
 * Interface dedicated to a machining activity.
 * <b>Role</b>: This interface, if implemented on an object deriving from MfgUserDefinedMO,
 * allows the display of the tool assembly tab page in the activity editor.<br>
 */

class ExportedByMfgItfEnv CATIMfgToolAssemblyTabPageDisplay : public CATBaseUnknown
{
	CATDeclareInterface;

  public:
};
CATDeclareHandler( CATIMfgToolAssemblyTabPageDisplay, CATBaseUnknown) ;
#endif
