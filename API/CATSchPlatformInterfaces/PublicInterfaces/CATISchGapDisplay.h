#ifndef CATISchGapDisplay_H
#define CATISchGapDisplay_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;

extern "C" const IID IID_CATISchGapDisplay ;

/**
 * Interface to manage gap display attributes on routes. 
 * <b>Role</b>: To add/remove gap display attributes on routes.
 */

class CATISchGapDisplay : public IUnknown
{
  public:  
  
  /**
  * Add gap display attributes on the route.
  * @param iLUKRoutes
  *   A list of routes to be processed, default is NULL
  *   (if NULL, then all routes in model are processed). 
  *   Members are CATISchRoute interface pointers. 
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
  virtual HRESULT SetGap (CATIUnknownList *iLUKRoutes = NULL) = 0;
    
  /**
  * Remove gap display attributes on the route.
  *   A list of routes to be processed, default is NULL
  *   (if NULL, then all routes in model are processed). 
  *   Members are CATISchRoute interface pointers. 
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
  virtual HRESULT UnsetGap (CATIUnknownList *iLUKRoutes = NULL) = 0;

  /**
  * Query whether gaps are shown (gap attributes exist).
  * @param oBYes
  *   If TRUE,  then gaps are shown     (gap attributes exist).
  *   If FALSE, then gaps are not shown (gap attributes do not exist).
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
  virtual HRESULT IsGapShown (CATBoolean *oBYes) = 0;
};

#endif
