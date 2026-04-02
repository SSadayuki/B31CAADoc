
#ifndef CATIMfgToolActivity_H
#define CATIMfgToolActivity_H

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
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgToolActivity;
#else
extern "C" const IID IID_CATIMfgToolActivity;
#endif

/**   
 * Interface dedicated to Activity object to manage tools.
 * <b>Role</b>: This interface mainly offers services to manage allowed and default tools on Activity.<br>
 */

class ExportedByMfgItfEnv CATIMfgToolActivity : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  /**
   *	 Gives informations relative to tools on the Activity object.
   *   @param oToolTypeList
   *	  The list of authorized tool types 
   **/
 	virtual HRESULT   GetAuthorizedToolTypeList (CATListOfCATUnicodeString &oToolTypeList) =0;
  /**
   *	 Creates default tool for an Activity object.
   *   @param oTool
   *	  The tool created 
   **/	
	virtual HRESULT   CreateDefaultTool (CATBaseUnknown_var &oTool) =0;
  /**
   *	 Gets the first tool compensation on an Activity object.
   *   @param oFirstNumber
   *	  The first tool compensation number
   **/	
	virtual HRESULT GetFirstToolCompensation(int &oFirstNumber)=0;
  /**
   *	 Gets the second tool compensation on an Activity object.
   *   @param oSecondNumber
   *	  The second tool compensation number
   **/
  virtual HRESULT GetSecondToolCompensation(int &oSecondNumber)=0;
};

CATDeclareHandler(CATIMfgToolActivity, CATBaseUnknown) ;
#endif







