#ifndef CATPRINTCAPTUREDIALOG_H
#define CATPRINTCAPTUREDIALOG_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT DASSAULT SYSTEMES 1999

#include "CATPrint.h"
#include "CATDlgInclude.h"

class l_CATPrintCaptureDialog;
class CATViewer;
class CATCallbackManager;

struct IMoniker;

/**
 * Dialog class to capture a selected zone in a viewer for print purpose.
 * <b>Role</b>: This class provides a dialog to capture and print, 
 * write in a file, or store in the album a selected zone on the attached
 * viewer.
 */
class ExportedByCATPrint CATPrintCaptureDialog : public CATDlgDialog 
{
   DeclareResource(CATPrintCaptureDialog, CATDlgDialog);

public:

/**
 * Constructs a CATPrintCaptureDialog.
 * @param iFather
 *   The father of the capture dialog.
 * @param iName
 *   The name of dialog.
 * @param iViewer
 *   The attached viewer.
 * @param iStyle
 *   The style of the dialog.
 */
    CATPrintCaptureDialog(CATDialog* iFather, const CATString& iName, CATViewer* iViewer, CATDlgStyle iStyle=NULL);
    virtual ~CATPrintCaptureDialog();

/**
 * Changes the viewer attached to the capture dialog.
 * @param iViewer
 *   The new attached viewer.
 */
    void AttachViewer(CATViewer* iViewer);

/**
 * Detaches the attached viewer from the capture dialog.
 */
    void DetachViewer(void);

/**
 * Returns the number of capture dialog instances.
 * @return 
 *   The number of instance.
 */
    static int GetNInstance(void);

#ifdef _WINDOWS_SOURCE
/**
 * @nodoc
 */
    void SetDataSource(IMoniker* iPmnk, IUnknown* oleDoc, const CLSID& iClsid, const CATUnicodeString& iObjectName, const CATUnicodeString& iFileName);
#else
/**
 * @nodoc
 */
    void SetDataSource(const CATUnicodeString& iFileName);
#endif

/**
 * @nodoc
 */
    CATCallbackManager* GetCallbackManager(void);

/**
 * @nodoc
 */
    void SetStyle(const CATUnicodeString& iStyle);
   
/**
 * @nodoc
 */
    CATDeclareCBEvent( SwapCompassVisibility );

/**
 * @nodoc
 */
    CATDeclareCBEvent( HideGraph );

/**
 * @nodoc
 */
    CATDeclareCBEvent( ShowGraph );

/**
 * @nodoc
 */
    CATDeclareCBEvent( ResetLODLevelOfGraph );

/**
 * @nodoc
 */
    CATDeclareCBEvent( RestaureLODLevelOfGraph );

/**
 * @nodoc
 */
    CATDeclareCBEvent( HideImmersiveUI );

/**
 * @nodoc
 */
    CATDeclareCBEvent( ShowImmersiveUI );

/**
 * @nodoc
 */
    // +++ AZX, DRM support in Print
    // Disable record button according to DRM Export permissions
    void SetStyleDRMExportBlocked(int iIsDRMExportBlocked);
    // --- AZX, DRM support in Print

private:
    void cb_Dismiss(CATCommand*, CATNotification*, CATCommandClientData);

    l_CATPrintCaptureDialog* _captureDialog;
    CATCallbackManager* _callbackManager;
};

#endif
