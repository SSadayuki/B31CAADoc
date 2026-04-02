#ifndef CATISchAppToolsOptionsData_H
#define CATISchAppToolsOptionsData_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppToolsOptionsData
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchAppToolsOptionsData ;

/**
 * Interface to retrieve Tools/Options data for Schematic applications.
 * Application must derive implementation of this interface 
 * from CATEASchAppToolsOptionsData.
 * <b>Role</b>: To be used to retrieve application specific settings.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATISchAppToolsOptionsData : public IUnknown
{
  public:

  /**
  * Get the mode for the Show Branch Connectors flag. 
  * @param oBShow
  *   True if the connector show status is Show.
  *   False if the connector show status is NoShow.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>CATReturnSuccess</dt>
  *     <dd>operation is successful</dd>
  *     <dt>CATReturnFailure</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ShowBranchCtrs (CATBoolean *oBShow) = 0;

};
#endif
