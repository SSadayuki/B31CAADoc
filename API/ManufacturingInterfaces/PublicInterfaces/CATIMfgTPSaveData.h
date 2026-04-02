/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
#ifndef CATIMfgTPSaveData_H
#define CATIMfgTPSaveData_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPSaveData;
#else
extern "C" const IID IID_CATIMfgTPSaveData;
#endif

/**
* Interface useful to save data of tool path in current document.
* "SaveData" method must be called when tool path contains a 
* MultipleMotion object.
*/

class ExportedByMfgItfEnv CATIMfgTPSaveData : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
/**
*   Saves data of tool path in the current document.<br>
**/	  
	  virtual CATBoolean  SaveData () = 0;
};

CATDeclareHandler(CATIMfgTPSaveData, CATBaseUnknown);

#endif







