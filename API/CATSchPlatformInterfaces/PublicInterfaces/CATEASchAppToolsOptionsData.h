#ifndef CATEASchAppToolsOptionsData_H
#define CATEASchAppToolsOptionsData_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATSchItfCPP.h"

/**
 * Super class to derive implementation for interface CATISchAppToolsOptionsData.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppToolsOptionsData : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppToolsOptionsData.
   */
  CATEASchAppToolsOptionsData();
  virtual ~CATEASchAppToolsOptionsData();  

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
  virtual HRESULT ShowBranchCtrs (CATBoolean *oBShow);

  private:
  // do not implement
  CATEASchAppToolsOptionsData (CATEASchAppToolsOptionsData &);
  CATEASchAppToolsOptionsData& operator=(CATEASchAppToolsOptionsData&);
};

#endif
