/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2011
//
// Jan. 2011	IR-81253 CCP Custom to always duplicate feature		EO1
//=============================================================================
#ifndef CATIMfgCCPCustom_H
#define CATIMfgCCPCustom_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgCCPCustom;
#else
extern "C" const IID IID_CATIMfgCCPCustom;
#endif


/**
 * Interface to customize the Copy/Paste of an activity.
 * <b>Role</b>: If an activity implements this interface, during the copy/paste of it, we will get the returned value by the method
 * to know if the feature of the activity is copied or shared.
 * Must be implemented, no default implementation exists.
 */
class ExportedByMfgItfEnv CATIMfgCCPCustom : public CATBaseUnknown
{
  CATDeclareInterface ;  

	public :

		/**
		* Tells if during the copy/paste the feature of the activity will be shared.
		* @param oSharable
		*       If TRUE, the feature will be shared else the feature will be copied.
		*/

	  virtual HRESULT IsFeatureSharable(CATBoolean& oSharable) = 0;
};

CATDeclareHandler(CATIMfgCCPCustom, CATBaseUnknown);

#endif







