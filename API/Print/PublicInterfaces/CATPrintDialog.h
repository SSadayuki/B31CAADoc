#ifndef CATPRINTDIALOG_H
#define CATPRINTDIALOG_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATDlgInclude.h"
#include "list.h"
#include "CATMathPoint2Df.h"

class CATPrinterDevice;
class CATPrintParameters;
class l_CATPrintDialog;
class CATViewer;

/**
 * Class to provide a standard graphic interface to choose a printer, specify 
 * the page layout and print an image.
 * <b>Note:</b>This window is modal and not resizable. 
 * <br>When the end user clicks OK or Cancel, the dialog box is 
 * automatically deleted.
 */
class ExportedByCATPrint CATPrintDialog : public CATDlgDialog
{
   DeclareResource(CATPrintDialog, CATDlgDialog);
       
public:

/**
 * Deprecated V5R20
 * In favor of  CATPrintDialog(CATInteractiveApplication* iFather, const CATString& iName, CATBaseUnknown* iImage, CATViewer* iSelectionViewer, CATDlgStyle iStyle=NULL,  CATBoolean isModal=TRUE);
 * Constructs a CATPrintDialog.
 * @param iFather
 *   The father of the print dialog.
 * @param iName
 *   The name of the dialog.
 * @param iImage
 *   The image object to be print
 * @param iStyle
 *   The style of the dialog.
 */
    CATPrintDialog(CATInteractiveApplication* iFather, const CATString& iName, CATBaseUnknown* iImage, CATDlgStyle iStyle=NULL);

/**
 * Deprecated V5R20
 * In favor of   CATPrintDialog(CATDialog* iFather, const CATString& iName, CATBaseUnknown* iImage, CATViewer* iSelectionViewer,CATDlgStyle iStyle=NULL, CATBoolean isModal=TRUE);
 * Constructs a CATPrintDialog.
 * @param iFather
 *   The father of the print dialog.
 * @param iName
 *   The name of the dialog.
 * @param iImage
 *   The image object to be print
 * @param iStyle
 *   The style of the dialog.
 */
    CATPrintDialog(CATDialog* iFather, const CATString& iName, CATBaseUnknown* iImage, CATDlgStyle iStyle=NULL);

/**
 * Constructs a CATPrintDialog.
 * @param iFather
 *   The father of the print dialog.
 * @param iName
 *   The name of the dialog.
 * @param iImage
 *   The image object to be print
 * @param iSelectionViewer
 *   The viewer associated to the print dialog for selection. If not set the selection button is disabled.
 * @param iStyle
 *   The style of the dialog.
 * @param iForceModal
 *   Allows the PrintDialog to be a modal dialog box or not 
 */
     CATPrintDialog(CATInteractiveApplication* iFather, const CATString& iName, CATBaseUnknown* iImage, CATViewer* iSelectionViewer, CATDlgStyle iStyle=NULL,  CATBoolean iForceModal=TRUE);

/**
 * Constructs a CATPrintDialog.
 * @param iFather
 *   The father of the print dialog.
 * @param iName
 *   The name of the dialog.
 * @param iImage
 *   The image object to be print
 * @param iSelectionViewer for selection. If not set the selection button is disabled.
 *   The viewer of the print dialog
 * @param iStyle
 *   The style of the dialog.
 * @param iForceModal
 *   Allows the PrintDialog to be a modal dialog box or not 
 */
     CATPrintDialog(CATDialog* iFather, const CATString& iName, CATBaseUnknown* iImage, CATViewer* iSelectionViewer,CATDlgStyle iStyle=NULL, CATBoolean iForceModal=TRUE);
     
     virtual ~CATPrintDialog();

/**
 * Prints the image object. It is called when pressing OK and APPLY. 
 * Overriding this method allows to get user print parameters specified 
 * in the dialog box. 
 * @param iObject 
 *   The printable object which implement the @href CATIPrintable interface.
 * @param iDevice
 *   The device where to print.
 * @param iParameters
 *   The parameters for printing.
 * @return 
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int Print(CATBaseUnknown* iObject, CATPrinterDevice* iDevice, const CATPrintParameters& iParameters);

/**
 * @nodoc
 */
   static int GetNInstance(void);  

/**
 * Deprecated V5R20	
 * @nodoc
 */
   void AttachViewer(CATViewer* viewer);

/**
 * Deprecated V5R20
 * @nodoc
 */
   void DetachViewer();

/**
 * @nodoc
 */
   void SetCaptureMode(int capture);

/**
 * @nodoc
 */
   void SetArea(CATMathPoint2Df p1, CATMathPoint2Df p2);

/**
 * @nodoc
 */
    CATDeclareCBEvent( BeginSelection );

/**
 * @nodoc
 */
    CATDeclareCBEvent( EndSelection );
   
protected:	

/**
 * Constructs a CATPrintDialog.
 * @param iFather
 *   The father of the print dialog.
 * @param iName
 *   The name of the dialog.
 * @param iImages
 *   The image objects to be print
 * @param iStyle
 *   The style of the dialog.
 */
    CATPrintDialog(CATDialog* iFather, const CATString& iName, list<CATBaseUnknown>* iImages, CATDlgStyle iStyle=NULL);

/**
 * @nodoc
 */
    l_CATPrintDialog *_printDialog;

private:

    void cb_OK(CATCommand*, CATNotification*, CATCommandClientData);
    void cb_APPLY(CATCommand*, CATNotification*, CATCommandClientData);
    void cb_CANCEL(CATCommand*, CATNotification*, CATCommandClientData);
    void cb_Visibility(CATCommand*, CATNotification*, CATCommandClientData);
};

#endif

