#ifndef CATSchListServices_H
#define CATSchListServices_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Tools to manage list of pointers used in schematic platform interface.
 * <b>Role</b>: For creation and modification list of pointers.
 */

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATSchItfCPP.h"

class CATIUnknownList;
class CATICStringList;

//-----------------------------------------------------------------------------
class ExportedByCATSchItfCPP CATSchListServices 
{
  public:

  /**
  * Create CATIUnknownList object for a list of IUnknown interface pointers.
  * @param oLUnknown
  *   A list of interface pointers.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  HRESULT CreateCATIUnknownList (CATIUnknownList **oLUnknown);

  /**
  * Create CATICStringList object for a list of character strings.
  * @param oLCString
  *   A list of character string pointers.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  HRESULT CreateCATICStringList (CATICStringList **oLCString);
    
  /**
  * Locate a target IUnknown from a List of IUnknown interface pointers.
  * @param iLUnknown
  *   A list of IUnknown pointers
  * @param iTargetUnknown
  *   The IUnknown interface pointers to be located.
  * @return
  *   The position of the target in the list. Set to -1 if not found
  */
  int Locate (CATIUnknownList *iLUnknown, IUnknown* iTargetUnknown);  
  
  /**
  * Locate a target string from a List of character string interface pointers.
  * @param iLCString
  *   A list of character string pointers
  * @param iTarget
  *   The character string pointer to be located.
  * @return
  *   The position of the target in the list. Set to -1 if not found
  */
  int Locate (CATICStringList *iLCString, const char* iTarget);  

  /**
  * Compare the 2 input interface pointers and return TRUE if the 
  * implementations are the same.
  * @param iIntfPtr1
  *   Interface pointer 1
  * @param iIntfPtr1
  *   Interface pointer 2
  * @return
  *   TRUE if the implementations are the same
  */
  CATBoolean IsSameImpl (IUnknown *iIntfPtr1, IUnknown *iIntfPt2);
};
#endif
