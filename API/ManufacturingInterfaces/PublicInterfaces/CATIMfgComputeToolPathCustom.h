// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================

#ifndef _CATIMfgComputeToolPathCustom_H
#define _CATIMfgComputeToolPathCustom_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "CATBaseUnknown.h"
#include "CATIContainer.h"
#include "CATIMfgToolPath.h"
#include "MfgItfEnv.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgComputeToolPathCustom;
#else
extern "C" const IID IID_CATIMfgComputeToolPathCustom;
#endif

/**
* Interface to implement to override standard tool path computation of a manufacturing operation.
*/

class ExportedByMfgItfEnv CATIMfgComputeToolPathCustom : public CATBaseUnknown
{
    CATDeclareInterface;
public:

   /**
   *   Computes the tool path.
   *   @param iContainer
   *	  The tool path container 
   *   @param oTP 
   *      The tool path computed
   *   @return
   *      The return code
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>S_OK   : tool path successfully computed</li>
   *      <li>S_FALSE and oTP == NULL_var : standard tool path computation is called</li>
   *      <li>other case : an error occured</li>
   *      </ul>
   **/
    virtual HRESULT  ComputeToolPath  (const CATIContainer_var& iContainer,CATIMfgToolPath_var& oTP) = 0;

};
CATDeclareHandler(CATIMfgComputeToolPathCustom, CATBaseUnknown);
#endif
