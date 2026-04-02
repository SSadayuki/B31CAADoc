#ifndef CATEASchAppAddCommand_H
#define CATEASchAppAddCommand_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATCommand.h"
#include "CATSchItfCPP.h"

class CATISchAppAddCATStateCommand;
/**
 * Super class to derive implementation for interface CATISchAppAddCommand.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppAddCommand : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppAddCommand.
   */
  CATEASchAppAddCommand();
  virtual ~CATEASchAppAddCommand();  

  /**
  * Provide the application sub-class of CATDlgFrame to enhance the schematic 
  * platform route command.
  * @param iCommandMode
  *   pointer to the parent dialog object
  * @param iApplicationName
  *   the application name that sends to the generic commmand
  * @param oAppCATStateCommand
  *   pointer to application CATStateCommand that ties to CATISchAppAddCATStateCommand
  *   interface. The caller must allocate memory for the first level pointer 
  *   (i.e. oAppCATStateCommand) and release the second level
  *   pointer (i.e. *oAppCATStateCommand) after usage.
  */
  virtual HRESULT AppGetApplicationCommand (CATCommandMode *iCommandMode,
    const char *iApplicationName, CATISchAppAddCATStateCommand **oAppCATStateCommand);

  private:
  // do not implement
  CATEASchAppAddCommand (CATEASchAppAddCommand &);
  CATEASchAppAddCommand& operator=(CATEASchAppAddCommand&);
};

#endif
