#ifndef CATISchCompConnector_H
#define CATISchCompConnector_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRRComp;
class CATISchAppConnector;
class CATIUnknownList;

extern "C" const IID IID_CATISchCompConnector ;

/**
 * Interface to mangage Schematic object ability to make connections. 
 * <b>Role</b>: To add or remove connectors.
 */

class CATISchCompConnector : public IUnknown
{
  public:   
  
  /**
  * Add a connector.
  * @param iClassType 
  *   Class type of the connector to be added.
  * @param iGRR
  *   The graphical image of the component to add the connector to.
  *   If NULL, connector will be added to all representations.
  * @param iDb2CntrPosition
  *   The position of the connector (optional, it could be NULL).
  * @param oNewSchCntr
  *   The new Schematic Connector object created.
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
  virtual HRESULT AddConnector (const char *iClassType,
    CATISchGRRComp *iGRR, double *iDb2CntrPosition,
    CATISchAppConnector **oNewSchCntr) = 0;

  /**
  * Add a dynamic connector.
  * @param iClassType 
  *   Class type of the connector to be added.
  * @param iGRR
  *   The graphical image of the component to add the connector to.
  *   If NULL, connector will be added to all representations.
  * @param iDb2CntrPosition
  *   The position of the connector (optional, it could be NULL).
  * @param oNewSchCntr
  *   The new Schematic Connector object created.
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
  virtual HRESULT AddDynamicConnector (const char *iClassType,
    CATISchGRRComp *iGRR, double *iDb2CntrPosition,
    CATISchAppConnector **oNewSchCntr) = 0;
  /**
  * Remove a connector.
  * @param iCntrToRemove
  *    The schematic connector object to be removed 
  * @param iGRR
  *   The graphical image of the component to remove the connector from.
  *   If NULL, connector will be removed from all representations.
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
  virtual HRESULT RemoveConnector (CATISchGRRComp *iGRR,
    CATISchAppConnector *iCntrToRemove) = 0;

};
#endif
