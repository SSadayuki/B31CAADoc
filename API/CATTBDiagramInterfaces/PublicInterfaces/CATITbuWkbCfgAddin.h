// COPYRIGHT DASSAULT SYSTEMES  2002 +
//=============================================================================
//
// CATITbuWkbCfgAddin
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
//
// Audit Trail:
//-----------------------------------------------------------------------------
//   Author     : Eddie Hersh 
//   Date       : 01/02
//   Chg id     :
//   Chg nature :
//-----------------------------------------------------------------------------
//   Modified   : 
//   Date       : 
//   Chg id     :
//   Chg nature : 
//=============================================================================
#ifndef CATITbuWkbCfgAddin_h 
#define CATITbuWkbCfgAddin_h 

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h" 
#include "CATTbdItfCPP.h"

extern ExportedByCATTbdItfCPP IID IID_CATITbuWkbCfgAddin; 

/**
 * Interface to add toolbars in the Tubing diagram workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATTbdItfCPP CATITbuWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

CATDeclareHandler(CATITbuWkbCfgAddin, CATIWorkbenchAddin); 

#endif



