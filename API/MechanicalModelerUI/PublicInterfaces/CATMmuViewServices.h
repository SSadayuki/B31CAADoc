#ifndef CATMmuViewServices_h
#define CATMmuViewServices_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMechanicalModelerUI.h" // to export
#include "IUnknown.h" //define HRESULT

class CATISpecObject ;
class CATUnicodeString ;

/**
* Class for view services.
*/

class ExportedByCATMechanicalModelerUI CATMmuViewServices
{

public :

   /**
   * Retrieves the view context.
   * <br><b>Role</b>:This method returns the view context in the current window. The view context is for example used in the @href CATIBodyRequest or the
   * @href CATIPartRequest interfaces. 
   * @param iObj
   *  The mechanical feature 
   * @param oViewContext
   *   The context of View
   * <br><b>Legal values</b>: 
   * <ul>
   * <li><b>"MfDefault3DView"</b>: for the default 3D view, </li>
   * <li><b>"MfUnfoldedView"</b> : for an unfolded 
   *  view in Sheet Metal applications,</li>
   *  </ul>
   * @return 
   *   The returned value:
   *   <ul>
   *  <li>S_OK: The returned view context is valid</li>
   *  <li>E_FAIL: The view context cannot be successfuly retrievied, however, the <tt> oViewContext</tt> value is the default one (MfDefault3DView)</li>
   * </ul>
   */
   static HRESULT GetViewContextInCurrentWindow(const CATISpecObject* iObj, CATUnicodeString& oViewContext);
                                    
  private:  
         CATMmuViewServices();  
         ~CATMmuViewServices();     
};
#endif

