#ifndef CATEASchAppRouteDialog_H
#define CATEASchAppRouteDialog_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATSchItfCPP.h"

class CATISchAppRouteCATDlgFrame;
class CATDialog;

/**
 * Super class to derive implementation for interface CATISchAppRouteDialog.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppRouteDialog : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppRouteDialog.
   */
  CATEASchAppRouteDialog();
  virtual ~CATEASchAppRouteDialog();

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
    const char *iAppRouteType, CATISchAppRouteCATDlgFrame **oAppCATDlgFrame);

  private:
  // do not implement
  CATEASchAppRouteDialog (CATEASchAppRouteDialog &);
  CATEASchAppRouteDialog& operator=(CATEASchAppRouteDialog&);

};

#endif
