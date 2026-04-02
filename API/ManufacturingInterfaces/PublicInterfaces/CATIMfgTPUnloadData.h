/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATIMfgTPUnloadData
//
//=============================================================================
#ifndef CATIMfgTPUnloadData_H
#define CATIMfgTPUnloadData_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPUnloadData;
#else
extern "C" const IID IID_CATIMfgTPUnloadData;
#endif

/**
* Interface usefull to manage memory when manipulating or modifying tool path objects.
* <b>Role</b>: Tool path datas are stored in the model. When  manipulating or modifying tool path,
*              these datas are also stored in objects representing instance of classes.
*              At the end of these actions, it's necessary to deallocate datas. 
*              Before be sure to have saved the tool path with CATIMfgTPSaveData.<br>
*
* @see CATIMfgTPSaveData
*/

class ExportedByMfgItfEnv CATIMfgTPUnloadData : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

/**
*   Free the memory of tool path datas.
*   Datas of tool path are always stored int the model.
*   These method can be called at the end of every command using tool path datas<br>
*   @return
*    Return code.
*   <br><b>Legal values</b>:
*   <ul>
*   <li>TRUE:  UnloadData has succeeded</li>
*   <li>FALSE: UnloadData has failed</li>
**/
	  virtual CATBoolean  UnloadData () = 0;
};

CATDeclareHandler(CATIMfgTPUnloadData, CATBaseUnknown);

#endif







