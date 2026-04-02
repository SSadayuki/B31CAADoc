#ifndef CATIMfgActivityParameters_H
#define CATIMfgActivityParameters_H
/* -*-c++-*- */
////////////////////////////////////
// COPYRIGHT DASSAULT SYSTEMES  1998
////////////////////////////////////
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityParameters;
#else
extern "C" const IID IID_CATIMfgActivityParameters;
#endif

/**
* Interface to manage parameters of a manufacturing operation.
**/

class ExportedByMfgItfEnv CATIMfgActivityParameters : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:

/**
 * Retrieves the value for an integer type parameter on the manufacturing operation.
 * @param iName   
 *            The parameter name 
 * @param oValue
 *            The parameter value
 */
  virtual HRESULT GetValue      (const CATUnicodeString& iName, int                &oValue)=0;

/**
 * Retrieves the value for a double type parameter on the manufacturing operation.
 * @param iName   
 *            The parameter name 
 * @param oValue
 *            The parameter value
 */
  virtual HRESULT GetValue      (const CATUnicodeString& iName, double             &oValue)=0; 

/**
 * Retrieves the value for a string type parameter on the manufacturing operation.
 * @param iName   
 *            The parameter name 
 * @param oValue
 *            The parameter value
 */
  virtual HRESULT GetValue      (const CATUnicodeString& iName, CATUnicodeString   &oValue)=0;

/**
 * Sets the value for an integer type parameter on the manufacturing operation.
 * @param iName   
 *            The parameter name 
 * @param iValue
 *            The parameter value
 */
  virtual HRESULT SetValue      (const CATUnicodeString& iName, const int          iValue)=0;

/**
 * Sets the value for a double type parameter on the manufacturing operation.
 * @param iName   
 *            The parameter name 
 * @param iValue
 *            The parameter value
 */
  virtual HRESULT SetValue      (const CATUnicodeString& iName, const double       iValue)=0; 

/**
 * Sets the value for a string type parameter on the manufacturing operation.
 * @param iName   
 *            The parameter name 
 * @param iValue
 *            The parameter value
 */
  virtual HRESULT SetValue      (const CATUnicodeString& iName, const CATUnicodeString  &iValue) = 0;

/**
 * Retrieves , if possible , CKE object describing parameter on the manufacturing operation.
 * @param iName 
 *            The parameter name
 * @param oParm
 *            The parameter value modelized by a @href CATICkeParm
 */
  virtual HRESULT FindElement   (const CATUnicodeString& iName, CATBaseUnknown_var &oParm) = 0;
};

CATDeclareHandler( CATIMfgActivityParameters, CATBaseUnknown ) ;

#endif

