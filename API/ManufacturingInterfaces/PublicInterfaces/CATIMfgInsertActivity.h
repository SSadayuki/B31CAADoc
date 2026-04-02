#ifndef CATIMfgInsertActivity_H
#define CATIMfgInsertActivity_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2010
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgInsertActivity;
#else
extern "C" const IID IID_CATIMfgInsertActivity ;
#endif

/**   
 * Interface dedicated to user defined operation object to manage allowed lathe inserts.
 * <b>Role</b>: This interface mainly offers services to define allowed insert types on user defined operation.<br>
 */

class ExportedByMfgItfEnv CATIMfgInsertActivity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  public:
  /**
   *   Returns allowed insert types on user defined operation
   *   @param oInsertTypeList
   *	  The list of authorized insert types 
   **/
 	virtual HRESULT   GetAuthorizedInsertList (CATListOfCATUnicodeString &oInsertTypeList) =0;
};

CATDeclareHandler(CATIMfgInsertActivity, CATBaseUnknown) ;

#endif
