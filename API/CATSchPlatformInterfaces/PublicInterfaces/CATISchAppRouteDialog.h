#ifndef CATISchAppRouteDialog_H
#define CATISchAppRouteDialog_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppRouteDialog
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

extern "C" const IID IID_CATISchAppRouteDialog ;

class CATISchAppRouteCATDlgFrame;
class CATDialog;

/**
 * Interface to add application dialog for the platform route command.
 * Application must derived implementation of this interface 
 * from CATEASchAppRouteDialog.
 * <b>Role</b>: To allow application to customize the definition of the route.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppRouteDialog : public IUnknown
{
  public:  
  
  /**
  * Provide the application sub-class of CATDlgFrame to enhance the schematic 
  * platform route command.
  * @param iParentDialog
  *   pointer to the parent dialog object
  * @param iRouteType
  *   the application route type the dialog supports
  * @param oAppCATDlgFrame
  *   pointer to application CATDlgFrame that ties to CATISchAppRouteCATDlgFrame
  *   interface.The caller must allocate memory for 
  *   the first level pointer (i.e. oAppCATDlgFrame) and release the second level
  *   pointer (i.e. *oAppCATDlgFrame) after usage.
  */
  virtual HRESULT AppGetApplicationDialog (CATDialog *iParentDialog,
    const char *iAppRouteType, CATISchAppRouteCATDlgFrame **oAppCATDlgFrame) = 0;
};

#endif
