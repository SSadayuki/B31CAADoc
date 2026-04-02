#ifndef CATISchAppRoute_H
#define CATISchAppRoute_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchAppRoute;
class CATISchRoute;
class CATDocument;

extern "C" const IID IID_CATISchAppRoute ;

/**
 * Interface to manage an application route object. 
 * <b>Role</b>: Defines application route object behaviors
 */
class CATISchAppRoute : public IUnknown
{
  public: 

  /**
  * Make a local route reference in another document by copying an 
  * existing one in the current document.
  * @param iDocumentToPutCopyIn
  *   Pointer to the document to make the copy in
  * @param oSchAppRoute
  *   Pointer to the copy.
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
  virtual HRESULT AppCreateLocalReference (CATDocument *iDocumentToPutCopyIn, 
    CATISchAppRoute **oSchAppRoute) = 0; 

  /**
  * Post process after breaking an application route into 2 pieces. 
  * @param iOldAppRoute
  *   The old application route object
  * @param iNewAppRoute
  *   The new Application route object
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
  virtual HRESULT AppPostBreakProcess (CATISchRoute *iOldAppRoute, 
    CATISchRoute *iNewAppRoute) = 0;

  /**
  * Post process after concatenate 2 application routes into one.
  * @param iSchRoute2
  *   Second route 
  *   to be concatenate to this. This route will be deleted.
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
  virtual HRESULT AppPostConcatenateProcess (CATISchRoute *iSchRoute2) = 0;

  /**
  * Query whether it is OK to modify (add or remove) the points.
  * @param oBYes
  *   If TRUE, then it is OK to add or remove the points from the application
  *   route
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
  virtual HRESULT AppOKToModifyPoints (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to break.
  * @param oBYes
  *   If TRUE, then it is OK to break the application route
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
  virtual HRESULT AppOKToBreak (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to concatenate.
  * @param oBYes
  *   If TRUE, then it is OK to concatenate the application route
  *   with another
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
  virtual HRESULT AppOKToConcatenate (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to create branch.
  * @param iBranchClassType
  *   Class type of the branch to create.
  * @param oBYes
  *   If TRUE, then it is OK to create a branch from an application route
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
  virtual HRESULT AppOKToBranch (const char* iBranchClassType, CATBoolean *oBYes) = 0;

  /**
  * Break the application route into 2 routes.
  * @param oNewAppRoute
  *   New application route
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
  virtual HRESULT AppBreak (IUnknown **oNewAppRoute) = 0;
};
#endif
