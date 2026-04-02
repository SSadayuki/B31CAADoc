#ifndef CATIPspClass_H
#define CATIPspClass_H

//	COPYRIGHT DASSAULT SYSTEMES 2001
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"

class CATICStringList;

extern "C" const IID IID_CATIPspClass ;

/**
 * Interface to list the start up object classes of an application.
 * <b>Role</b>: List application object classes.
 */

class CATIPspClass : public IUnknown
{
  public:  
  
  /**
  * List start-up physical object classes.
  * @param oListOfPhysicalParts [out, IUnknown#Release]
  *   A list of application physical object classes.
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
  virtual HRESULT ListStartUpPhysicalParts ( CATICStringList **oListOfPhysicalParts ) = 0;

  /**
  * List start-up functional part object classes.
  * @param oListOfFunctionParts [out, IUnknown#Release]
  *   A list of application function object classes.
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
  virtual HRESULT ListStartUpFunctionParts ( CATICStringList **oListOfFunctionParts ) = 0;

  /**
  * List start-up connector object classes.
  * @param oListOfConnectors [out, IUnknown#Release]
  *   A list of application connector object classes.
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
  virtual HRESULT ListStartUpConnectors ( CATICStringList **oListOfConnectors ) = 0;

  /**
  * List start-up connection object classes.
  * @param oListOfConnections [out, IUnknown#Release]
  *   A list of application connection object classes.
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
  virtual HRESULT ListStartUpConnections ( CATICStringList **oListOfConnections ) = 0;

  /**
  * List start-up zone classes.
  * @param oListOfZones [out, IUnknown#Release]
  *   A list of application zone object classes.
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
  virtual HRESULT ListStartUpZones ( CATICStringList **oListOfZones ) = 0;

  /**
  * List the branch function types.
  * @param oListOfBranchFunc [out, IUnknown#Release]
  *   A list of application branch function classes
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
  virtual HRESULT ListBranchFunctionTypes ( CATICStringList **oListOfBranchFunc ) = 0;

  /**
  * List start-up logical line object classes.
  * @param oListOfLogicalLines [out, IUnknown#Release]
  *   A list of application logical line classes.
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
  virtual HRESULT ListStartUpLogicalLines ( CATICStringList **oListOfLogicalLines ) = 0;
};
#endif
