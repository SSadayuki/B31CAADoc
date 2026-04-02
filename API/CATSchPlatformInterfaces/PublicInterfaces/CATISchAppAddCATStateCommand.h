#ifndef CATISchAppAddCATStateCommand_H
#define CATISchAppAddCATStateCommand_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppAddCATStateCommand
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

class CATStateCommand;

extern "C" const IID IID_CATISchAppAddCATStateCommand ;

/**
 * Interface to access data defined in application "Add-in" CATStateCommand.
 * Application must derived implementation of this interface 
 * from CATEASchAppAddCATStateCommand.
 * <b>Role</b>: To allow application to enhance Schematic Platform generic commands.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppAddCATStateCommand : public IUnknown
{
  public:  
  
  /**
  * Provide the application CATStateCommand.
  * @param oAppCATStateCommand
  *   pointer to application CATStateCommand that implements this interface
  *   The caller must allocate memory for the first level pointer 
  *   (i.e. oAppCATStateCommand) and release the second level
  *   pointer (i.e. *oAppCATStateCommand) after usage.
  */
  virtual HRESULT AppGetCATStateCommand
                  (CATStateCommand **oAppCATStateCommand) = 0;     

};

#endif
