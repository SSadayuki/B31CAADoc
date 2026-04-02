#ifndef CATIMfgCustomParameters_H
#define CATIMfgCustomParameters_H

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
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgCustomParameters ;
#else
extern "C" const IID IID_CATIMfgCustomParameters ;
#endif


/**   
 * Interface dedicated to Activity object.
 * <b>Role</b>: This interface offers services to compute syntax parameters on Activity object.<br>
 *
 */

class ExportedByMfgItfEnv CATIMfgCustomParameters : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
 *	GetExtendedValue on the object.
 *  @param iParmName     The Parameter name
 *  @param oTypeValue    The value type (1:Integer,2:Double,3:String)
 *  @param oIntegerValue Integer value
 *  @param oDoubleValue  Double  value
 *  @param oStringValue  String  value
 */
	virtual HRESULT GetExtendedValue(const CATUnicodeString &iParmName,
									 int                    &oTypeValue,
									 int                    &oIntegerValue,
									 double                 &oDoubleValue,
									 CATUnicodeString       &oStringValue)=0;

};

CATDeclareHandler(CATIMfgCustomParameters, CATBaseUnknown) ;

#endif







