//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2010
//===================================================================

#ifndef CATIMfgCustomizeCSOFilter_H
#define CATIMfgCustomizeCSOFilter_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCustomizeCSOFilter;
#else
extern "C" const IID IID_CATIMfgCustomizeCSOFilter ;
#endif

/**
 * Interface to enable or disable contextual menu commands in machining workbenches.
 * <b>Role</b>: This interface offers services to implement the availability
 * of contextual menu Cut/Copy/Paste/Delete commands for CAA user features in machining workbenches.<br>
 */

class ExportedByMfgItfEnv CATIMfgCustomizeCSOFilter: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Returns command availability.
  * @param iHeaderID 
  *  command identifier (Cut, Copy, Paste or Delete).
  * @return 
  *   S_OK if command available otherwise S_FALSE.
  *   <br>E_FAIL if unexpected internal problem.
  */
  virtual HRESULT CommandIsAvailable (const char * iHeaderID) = 0;
};

//------------------------------------------------------------------
CATDeclareHandler(CATIMfgCustomizeCSOFilter, CATBaseUnknown) ;

#endif
