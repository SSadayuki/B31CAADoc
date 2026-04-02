#ifndef CATISchConnectable_H
#define CATISchConnectable_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;
class CATICStringList;
class CATISchGRR;

extern "C" const IID IID_CATISchConnectable ;

/**
 * Interface to mangage schematic object behaviors in network analysis. 
 * <b>Role</b>: To specify schematic object behaviors such as
 * listing connectors on a specific graphical image.
 */

class CATISchConnectable : public IUnknown
{
  public:  
  
  /**
  * Find all the connectors of this schematic object on a specific
  * graphical image.
  *
  * @param oLCntrClassFilter
  *   A list of all the class types for filtering the output connector
  *   list.
  * @param iGRR
  *   Pointer to the graphical image
  * @param oLCntrs
  *   A list of connectors included in this connection.
  *   (members are CATISchAppConnector interface pointers).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListConnectors (CATICStringList *iLCntrClassFilter,
    CATISchGRR *iGRR, CATIUnknownList **oLCntrs) = 0;
};
#endif
