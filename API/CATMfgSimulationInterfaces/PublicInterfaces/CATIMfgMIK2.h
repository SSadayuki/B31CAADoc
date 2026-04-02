// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATIMfgMIK2.h
//
//===================================================================
#ifndef CATIMfgMIK2_H
#define CATIMfgMIK2_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
*/

#include "CATMfgSimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgMIK2;
#else
extern "C" const IID IID_CATIMfgMIK2 ;
#endif

//------------------------------------------------------------------

class ExportedByCATMfgSimulationItfCPP CATIMfgMIK2: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
	
	  virtual HRESULT MIKInit(int iMode, CATUnicodeString iFilePath) = 0;

	  virtual HRESULT MIKCreateDOFTable(double iTimeIncr) = 0;

	  virtual HRESULT MIKExit() = 0 ;

};

CATDeclareHandler( CATIMfgMIK2, CATBaseUnknown) ;

#endif
