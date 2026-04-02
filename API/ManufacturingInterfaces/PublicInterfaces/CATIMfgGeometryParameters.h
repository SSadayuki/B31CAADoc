//===================================================================
// COPYRIGHT Dassault Systemes 2012
//===================================================================

#ifndef CATIMfgGeometryParameters_H
#define CATIMfgGeometryParameters_H

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

extern ExportedByMfgItfEnv  IID IID_CATIMfgGeometryParameters ;

/**
* This interface is used to handle with Geometry Parameters of Manufacturing Features.
**/
class ExportedByMfgItfEnv CATIMfgGeometryParameters : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	virtual HRESULT GetValue  (const CATUnicodeString &iName, boolean            &oValue)=0;
	virtual HRESULT GetValue  (const CATUnicodeString &iName, int                &oValue)=0;
	virtual HRESULT GetValue  (const CATUnicodeString &iName, double             &oValue, int iUnit=0)=0; 
	virtual HRESULT GetValue  (const CATUnicodeString &iName, CATBaseUnknown_var &oValue)=0; 
	virtual HRESULT GetValue  (const CATUnicodeString &iName, CATUnicodeString   &oValue)=0;

	virtual HRESULT SetValue  (const CATUnicodeString &iName, const boolean            iValue)=0;
	virtual HRESULT SetValue  (const CATUnicodeString &iName, const int                iValue)=0;
	virtual HRESULT SetValue  (const CATUnicodeString &iName, const double             iValue)=0; 
	virtual HRESULT SetValueWithUnit (const CATUnicodeString& iName, const double        iValue, int iUnit)=0; 
	virtual HRESULT SetValue  (const CATUnicodeString &iName, const CATBaseUnknown_var &iValue)=0; 
	virtual HRESULT SetValue  (const CATUnicodeString &iName, const CATUnicodeString   &iValue)=0;

};

CATDeclareHandler(CATIMfgGeometryParameters, CATBaseUnknown);

//-----------------------------------------------------------------------

#endif
