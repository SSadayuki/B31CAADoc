// COPYRIGHT Dassault Systemes 2005
//===================================================================
//
// CATIBatchGridUI.h
// Define the CATIBatchGridUI interface
//
//===================================================================
//
// Usage notes:
//   
//
//===================================================================
//
//  June 05 Creation:  jnm
//===================================================================
#ifndef CATIBatchGridUI_H
#define CATIBatchGridUI_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATBatCAAGrid.h"
#include "CATErrorDef.h"

#include "CATBatchGridDefinitions.h"


extern "C" const IID IID_CATIBatchGridUI;

class CATDlgDialog;

class ExportedByCATBatCAAGrid CATIBatchGridUI: public CATBaseUnknown
{
	public:
	
  CATDeclareInterface;

  virtual HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName, CATDlgDialog* father) = 0;
  
  virtual HRESULT  GetResourceName(CATUnicodeString& name) = 0;
  
  

};

//------------------------------------------------------------------

#endif
