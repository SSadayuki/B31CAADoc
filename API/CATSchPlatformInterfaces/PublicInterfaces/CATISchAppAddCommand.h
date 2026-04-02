#ifndef CATISchAppAddCommand_H
#define CATISchAppAddCommand_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppAddCommand
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"
#include "CATCommand.h"

extern "C" const IID IID_CATISchAppAddCommand ;

class CATISchAppAddCATStateCommand;

class CATDialog;

/**
 * Interface to add application command for the platform generic command. 
 * Application must derived implementation of this interface 
 * from CATEASchAppAddCommand.
 * <b>Role</b>: To allow application to enhance Schematic Platform generic commands.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppAddCommand : public IUnknown
{
  public:  
  
  /**
  * Provide the application sub-class of CATStateCommand to enhance the schematic 
  * platform commands.
  * @param iCommandMode
  *   pointer to the parent dialog object
  * @param iApplicationName
  *   the application name that is sent to the generic commmand
  * @param oAppCATStateCommand
  *   pointer to application CATStateCommand that ties to CATISchAppAddCATStateCommand
  *   interface. The caller must allocate memory for the first level pointer 
  *   (i.e. oAppCATStateCommand) and release the second level
  *   pointer (i.e. *oAppCATStateCommand) after usage.
  */
  virtual HRESULT AppGetApplicationCommand (CATCommandMode *iCommandMode,
    const char *iApplicationName, CATISchAppAddCATStateCommand **oAppCATStateCommand) = 0;
};

#endif
