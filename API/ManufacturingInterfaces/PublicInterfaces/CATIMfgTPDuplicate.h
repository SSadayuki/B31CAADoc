//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#ifndef CATIMfgTPDuplicate_H
#define CATIMfgTPDuplicate_H

#include "MfgItfEnv.h"
#include "CATErrorDef.h"
#include "CATDocument.h"
#include "CATIMfgToolPath.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPDuplicate;
#else
extern "C" const IID IID_CATIMfgTPDuplicate;
#endif

/**
* Interface to duplicate a tool path in a defined document.
*/

class ExportedByMfgItfEnv CATIMfgTPDuplicate : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
/**
*   Duplicates tool path in a defined document.<br>
*   @param iActivity
*      The operation where to store the duplicated tool path
*   @param iDoc
*      The document where to store the duplicated tool path
*   @param oToolPath
*      The duplicated tool path
*   @return
*      The return code
*      <br><b>Legal values</b>:
*      <ul>
*      <li>S_OK   : tool path successfully duplicated</li>
*      <li>S_FALSE : one sub-element of tool path has not been duplicated</li>
*      <li>other case : an error occured</li>
*      </ul>
**/	  
	  virtual HRESULT Duplicate (const CATBaseUnknown_var& iOperation,CATDocument* iDoc,CATIMfgToolPath_var& oToolPath) = 0;
};

CATDeclareHandler(CATIMfgTPDuplicate, CATBaseUnknown);

#endif







