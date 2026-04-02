#ifndef CATEASchAppAddCATStateCommand_H
#define CATEASchAppAddCATStateCommand_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATSchItfCPP.h"

class CATStateCommand;

/**
 * Super class to derive implementation for interface CATISchAppAddCATStateCommand.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppAddCATStateCommand : public CATBaseUnknown
{
  public:  
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppAddCATStateCommand.
   */
  CATEASchAppAddCATStateCommand();
  virtual ~CATEASchAppAddCATStateCommand();  
  /**
  * Provide the application CATStateCommand.
  * @param oAppCATStateCommand
  *   pointer to application CATStateCommand that implements this interface
  *   The caller must allocate memory for the first level pointer 
  *   (i.e. oAppCATStateCommand) and release the second level
  *   pointer (i.e. *oAppCATStateCommand) after usage.
  */
  virtual HRESULT AppGetCATStateCommand
                  (CATStateCommand **oAppCATStateCommand);
  
  private:
  // do not implement
  CATEASchAppAddCATStateCommand (CATEASchAppAddCATStateCommand &);
  CATEASchAppAddCATStateCommand& operator=(CATEASchAppAddCATStateCommand&);

};

#endif
