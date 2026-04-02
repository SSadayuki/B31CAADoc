#ifndef CATISchAppClass_H
#define CATISchAppClass_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATICStringList;

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"

extern "C" const IID IID_CATISchAppClass ;

/**
 * Interface to map application object classes to Schematic basic set of 
 * object classes. 
 * <b>Role</b>: To identity an application class 
 * for each class of Schematic basic set of objects.
 */

class CATISchAppClass : public IUnknown
{
  public:  
  
  /**
  * Provide the application class names for the base component classes.
  * @param oLBaseCompClasses
  *   Class names of application base component classes.
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
  virtual HRESULT AppGetComponentBaseClass 
                  (CATICStringList **oLBaseCompClasses) = 0;
    
  /**
  * Provide the application class name for Schematic Route class.
  * @param oRouteClassName
  *   Class name of application class.
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
  virtual HRESULT AppGetRouteBaseClass (char **oRouteClassName) = 0;

  /**
  * Provide the application class name for Schematic Group class.
  * @param oGroupClassName
  *   Class name of application class.
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
  virtual HRESULT AppGetGroupBaseClass (char **oGroupClassName) = 0;

  /**
  * Provide the application class name for Schematic Zone class.
  * @param oZoneClassName
  *   Class name of application class.
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
  virtual HRESULT AppGetZoneBaseClass (char **oZoneClassName) = 0;

  /**
  * List the valid application route types allowed to be created.
  * @param oLValidRouteTypes
  *   A list of route class types allowed.
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
  virtual HRESULT AppListValidRouteTypes 
                  (CATICStringList **oLValidRouteTypes) = 0;
};

#endif
