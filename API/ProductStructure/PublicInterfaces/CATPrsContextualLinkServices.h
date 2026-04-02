#ifndef  CATPrsContextualLinkServices_H  
#define  CATPrsContextualLinkServices_H

// COPYRIGHT Dassault Systemes 2018
//===================================================================
//
// CATPrsContextualLinkServices.h
//
//===================================================================
//
// Usage notes:
//   Returns the list of Parts with broken contextual links under a given RootProduct
//   It's available only under PX1 licence.
//
//===================================================================
// Creation -                                                Nov 2018 
//===================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "AS0STARTUP.h"

class CATIProduct_var;
class ExportedByAS0STARTUP CATPrsContextualLinkServices
{
public:
/**
* This method returns the list of Parts with broken contextual links under a given RootProduct
  *
  * @param iProd [ in ]
  * Root product under which Parts with broken links to be searched
  *
  * @param oListBrokenParts [ out ]
  * The list of parts with broken contextual links
  *
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>Parts with broken links retrieved.</dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Unable to retrieve parts with broken links.</dd>
  *   </dl>
  */
   static HRESULT GetBrokenContextualLinks(const CATIProduct_var &iProd, CATListValCATBaseUnknown_var &oListBrokenParts);

private:  
	CATPrsContextualLinkServices();  
	~CATPrsContextualLinkServices();    
};
#endif
