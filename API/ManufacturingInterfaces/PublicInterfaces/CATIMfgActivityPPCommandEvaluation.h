/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
#ifndef CATIMfgActivityPPCommandEvaluation_H
#define CATIMfgActivityPPCommandEvaluation_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "MfgItfEnv.h"

#include "CATICkeParm.h"

#include "CATBaseUnknown.h"

#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityPPCommandEvaluation;
#else
extern "C" const IID IID_CATIMfgActivityPPCommandEvaluation;
#endif

/**
*  Interface on the activity to evaluate the syntax associated to a PP Command.<br>
*  Current PP Table must be loaded.
*/

class ExportedByMfgItfEnv CATIMfgActivityPPCommandEvaluation : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
/**
*   Retrieves the syntax of a PP Command.
*   @param iPPCommandName
*      The name of the PP Command
*   @param iSequenceNumber
*      The number of sequence
*   @param oValue 
*      The value of syntax
**/
	  virtual HRESULT GetPPCommandEvaluation (CATListValCATUnicodeString&  oValue,
											  const CATUnicodeString&      iPPCommandName,
											  int                          iSequenceNumber=1) = 0 ;

/**
*   Set the feedrate value.
*   @param ihFeedrate
*      The feedrate parameter
*   @param iRatio
*      The ratio to apply to feedrate parameter
**/
	  virtual HRESULT SetFeedrate (const CATICkeParm_var & ihFeedrate, const double & iRatio) = 0 ;

/**
*   Set the spindle value.
*   @param ihSpindle
*      The spindle parameter
*   @param iRatio
*      The ratio to apply to spindle parameter
*   @param iRotationWay
*      The rotation way of the spindle parameter
**/
	  virtual HRESULT SetSpindle (const CATICkeParm_var & ihSpindle, const double & iRatio, const int & iRotationWay) = 0 ;

};

CATDeclareHandler(CATIMfgActivityPPCommandEvaluation, CATBaseUnknown);

#endif
