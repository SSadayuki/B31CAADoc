#ifndef CATPRINTERMANAGERDIALOG_H
#define CATPRINTERMANAGERDIALOG_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATDlgInclude.h"

class l_CATPrinterManagerDialog;

/**
 * Class to create a printer manager dialog.
 * <br> Note that the window is modal and not resizable.
 */
class ExportedByCATPrint CATPrinterManagerDialog : public CATDlgDialog
{
   DeclareResource(CATPrinterManagerDialog, CATDlgDialog);

    friend class l_CATPrinterManagerDialog;
   
public:

/**
 * Constructs a CATPrinterManagerDialog.
 * @param iFather
 *   The father of the printer manager dialog.
 * @param iName
 *   The name of dialog.
 * @param iStyle
 *   The style of the dialog.
 */
    CATPrinterManagerDialog(CATDialog* iFather, const CATString& iName, CATDlgStyle iStyle=NULL);
    virtual ~CATPrinterManagerDialog();

/**
 * Defines the visibilty of the dialog.
 * @param iVisibility
 *   The visibility of the dialog.
 *   <br><b>Legal values</b>: CATDlgShow to show the dialog, or CATDlgHide to
 *   hide the dialog.
 */
    void SetVisibility(CATULong iVisibility);

private:

/**
 * @nodoc
 */
    void cb_Dismiss(CATCommand*, CATNotification*, CATCommandClientData);

/**
 * @nodoc
 */
	void cb_CloseConfigure(CATCommand*, CATNotification*, CATCommandClientData);

    l_CATPrinterManagerDialog *_printerManagerDialog;
};

#endif

