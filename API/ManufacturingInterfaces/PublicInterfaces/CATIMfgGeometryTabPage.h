#ifndef CATIMfgGeometryTabPage_H
#define CATIMfgGeometryTabPage_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgGeometryTabPage;
#else
extern "C" const IID IID_CATIMfgGeometryTabPage;
#endif

/**   
 * Interface dedicated to FeedsAndSpeeds TabPage editor management.
 * <b>Role</b>: This interface offers services to show or hide the feeds and speeds TabPage
 *              in the operation editor.<br>
 * A default implementation is provided, the TabPage is shown.
 */
class ExportedByMfgItfEnv CATIMfgGeometryTabPage : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
 * Allows to show or hide the feeds and speeds TabPage in the operation editor.<br>
 * @param oIsAvailable
 *     Indicates if the TabPage will be shown or hidden.
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0: the TabPage is hidden</li>
 *   <li>1: the TabPage is shown</li>
 *   </ul>
 */
 	virtual HRESULT IsGeometryTabPageAvailable(int &oIsAvailable) = 0;

};

CATDeclareHandler(CATIMfgGeometryTabPage, CATBaseUnknown) ;
#endif







