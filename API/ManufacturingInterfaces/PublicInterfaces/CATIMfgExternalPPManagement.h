#ifndef CATIMfgExternalPPManagement_H
#define CATIMfgExternalPPManagement_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

// module
#include "CATBaseUnknown.h"
#include "MfgItfEnv.h"

#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATString.h"
#include "CATListOfCATString.h"

//=============================================================================
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgExternalPPManagement;
#else
extern "C" const IID IID_CATIMfgExternalPPManagement;
#endif

/**   
 * Interface dedicated to external PP integration.
 * <b>Role</b>: This interface offers services to provide for each external PP providers.<br>
 * <ul>
 * <li> Provider names (NLS name and a keyword name) 
 * <li> The list of available PPs (NLS names and keyword names for each PP)
 * <li> On line help
 * <li> PP execution 
 * </ul>
 *
 */

class ExportedByMfgItfEnv CATIMfgExternalPPManagement : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

 /**
 * Provides with external PP provider names. 
 * @param oNLSName and oKeywordName.
 */
  virtual HRESULT GetProviderNames ( CATUnicodeString& oNLSName     ,
				     CATString&        oKeywordName ) = 0;
 /**
 * Provides with external PP names. 
 * @param oNLSList and oKeywordPPList.
 */
  virtual HRESULT GetListOfPPs ( CATListOfCATUnicodeString& oNLSList       , 
				 CATListOfCATString&        oKeywordPPList ) = 0;
 /**
 * Provides with external PP on line help. 
 * @param iPPKeyword.
 */
  virtual HRESULT RunHelp      ( CATString& iPPKeyword ) = 0;
 /**
 * Provides with external PP execution. 
 * @param iPPParameters.
 * 1: Post Processor name (Keyword)
 * 2: NC input file (APT or Clfile)
 * 3: ISO output file
 */
  virtual HRESULT RunPP        ( CATListOfCATUnicodeString& iPPParameters ) = 0;
};

CATDeclareHandler (CATIMfgExternalPPManagement,CATBaseUnknown) ;
#endif
