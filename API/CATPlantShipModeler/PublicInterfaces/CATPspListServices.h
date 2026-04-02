
#ifdef _WINDOWS_SOURCE
#ifdef __CATPspUtilities
/** @nodoc */
#define ExportedByCATPspUtilities  __declspec(dllexport)
#else
/** @nodoc */
#define ExportedByCATPspUtilities __declspec(dllimport)
#endif
#else
/** @nodoc */
#define ExportedByCATPspUtilities
#endif

// COPYRIGHT DASSAULT SYSTEMES  2000+ 
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Tools to manage list of pointers.
 * <b>Role</b>: For creation and query of list of pointers.
 */


#ifndef CATPspListServices_H
#define CATPspListServices_H

#include "CATBaseUnknown.h"

class CATIUnknownList;
class CATICStringList;
class CATIStringList;

//-----------------------------------------------------------------------------
class ExportedByCATPspUtilities CATPspListServices 
{
  public:

 /**
  * Create CATIUnknownList object for a list of IUnknown interface pointers.
  * @param oLUnknown  [out, IUnknown#Release]
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
  static HRESULT CreateCATIUnknownList (CATIUnknownList **oLUnknown);

  /**
  * Create CATICStringList object for a list of character strings.
  * @param oLCString  [out, IUnknown#Release]
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
  static HRESULT CreateCATICStringList (CATICStringList **oLCString);
  
  /**
  * Create CATIStringList object for a list of NLS strings.
  * @param oLString  [out, IUnknown#Release]
  *   CATIStringList interface pointer. (Limit Use for NLS Strings ONLY).
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
  static HRESULT CreateCATIStringList (CATIStringList **oLString);

  /**
  * Locate a target IUnknown from a List of IUnknown interface pointers.
  * @param iLUnknown 
  *    A list of IUnknown pointers.
  * @param iTargetUnknown 
  *    The IUnknown interface pointer to be located.
  * @return
  *   integer value. The position of the target in the list starting at 0. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>Less than 0</dt>
  *     <dd>Not found</dd>
  *     <dt>Greater than or equal to 0 </dt>
  *     <dd>found </dd>
  *   </dl>
  */
  static int Locate (CATIUnknownList *iLUnknown, IUnknown* iTargetUnknown);  
  
  /**
  * Locate a target string from a list of character string pointers.
  * @param iLCString 
  *    A list of character string pointers.
  * @param iTarget 
  *    The character string pointer to be located.
  * @return
  *   integer value. The position of the target in the list starting at 0. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>Less than 0</dt>
  *     <dd>Not found</dd>
  *     <dt>Greater than or equal to 0 </dt>
  *     <dd>found</dd>
  *   </dl>
  */
  static int Locate (CATICStringList *iLCString, const char* iTarget);  

  /**
  * Locate a target string from a list of NLS string pointers.
  * @param iLString 
  *    CATIStringList pointer.
  * @param iTarget 
  *    wchar_t character string to look for in iLString.
  * @return
  *   integer value. If string is found it gives the location index starting at 0. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>Less than 0</dt>
  *     <dd>Not found</dd>
  *     <dt>Greater than or equal to 0 </dt>
  *     <dd>found</dd>
  *   </dl>
  */
  static int Locate (CATIStringList *iLString, const wchar_t *iTarget);  

};
#endif
