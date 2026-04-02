#ifndef __CATISchInPlaceSiteVeto_h
#define __CATISchInPlaceSiteVeto_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

class CATFrmEditor;
class CATPathElement;

/**
 * Interface to specify ui-activation behavior of schematic objects.
 * <b>Role</b>: To decide whether a schematic can be ui-activated.
 */
class ExportedByCATSchItfCPP CATISchInPlaceSiteVeto : public CATBaseUnknown {

	CATDeclareInterface;

  public:

  /**
  * To determine whether a schematic object can be ui-activated.
  * @param iPathToActivate
  *   CATPathElement containing the object to be ui-activated.
  * @param iInEditor
  *   Document editor.
  * returns E_FAIL if the object cannot be ui-actived.
  */
	virtual HRESULT CanInPlaceActivate (
		CATPathElement * iPathToActivate,
		CATFrmEditor   * iInEditor
		) = 0;

};


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATSchItfCPP IID_CATISchInPlaceSiteVeto;
#else
extern "C" const IID IID_CATISchInPlaceSiteVeto;
#endif
CATDeclareHandler (CATISchInPlaceSiteVeto, CATBaseUnknown);

#endif//__CATISchInPlaceSiteVeto_h
