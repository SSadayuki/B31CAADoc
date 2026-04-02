#ifndef CATISchAppRouteCATDlgFrame_H
#define CATISchAppRouteCATDlgFrame_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppRouteCATDlgFrame
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

class CATDlgFrame;
class CATEventSubscriber;

extern "C" const IID IID_CATISchAppRouteCATDlgFrame ;

/**
 * Interface to access data defined in application dialog. 
 * Application must derived implementation of this interface 
 * from CATEASchAppRouteCATDlgFrame.
 * <b>Role</b>: To allow application to customize the definition of the route.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppRouteCATDlgFrame : public IUnknown
{
  public:  
  
  /**
  * Provide the application sub-class of CATDlgFrame.
  * @param oAppCATDlgFrame
  *   pointer to application CATDlgFrame that implements this interface
  *   The caller must allocate memory for 
  *   the first level pointer (i.e. oAppCATDlgFrame) and release the second level
  *   pointer (i.e. *oAppCATDlgFrame) after usage.
  */
  virtual HRESULT AppGetCATDlgFrame 
                  (CATDlgFrame **oAppCATDlgFrame) = 0;     

};

#endif
