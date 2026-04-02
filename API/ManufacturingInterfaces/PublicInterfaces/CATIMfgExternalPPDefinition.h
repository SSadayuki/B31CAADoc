#ifndef CATIMfgExternalPPDefinition_H
#define CATIMfgExternalPPDefinition_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

// module
#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATListPV.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgExternalPPDefinition;
#else
extern "C" const IID IID_CATIMfgExternalPPDefinition;
#endif

/**   
 * Interface dedicated to external PP integration.
 * <b>Role</b>: This interface offers services to provide list of external PP providers.<br>
 *
 */

class ExportedByMfgItfEnv CATIMfgExternalPPDefinition : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

 /**
 * Provides with external PP providers list. 
 * @param oListOfPostProcessorProviders.
 */
    virtual HRESULT GetListOfExternalPostProcessorProviders 
		            (CATListPV& oListOfPostProcessorProviders) =0;
  
};

CATDeclareHandler(CATIMfgExternalPPDefinition, CATBaseUnknown) ;

#endif







