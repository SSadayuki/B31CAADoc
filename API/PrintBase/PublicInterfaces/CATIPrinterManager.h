#ifndef CATIPRINTERMANAGER_H
#define CATIPRINTERMANAGER_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATPrinter.h"

class CATUnicodeString;
class CATPrinter;
class CATPrintParameters;
class CATPrintImage;
class CATPrinterDevice;
class CATDialog;
class CATDlgWindow;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPrintBase IID IID_CATIPrinterManager;
#else
extern "C" const IID IID_CATIPrinterManager;
#endif

/**
 * Interface for external Printer Managers.
 */
class ExportedByCATPrintBase CATIPrinterManager : public CATBaseUnknown
{
    CATDeclareInterface;
public:
    /** 
     * Gets the list of available printers .
     * @param ioPrinterList
     *   The list to be filled (initially empty). 
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetPrinterList(CATLISTP(CATPrinter)& ioPrinterList) = 0;

    /** 
     * Builds a configuration dialog for the given printer.
     * @param iParent
     *   The parent dialog.
     * @param iPrinter
     *   The printer for which the dialog is to be displayed.
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetConfigurationDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) = 0;

    /** 
     * Gets the status of the given printer.
     * @param iPrinter
     *   The printer for which the dialog is to be displayed.
     * @param oStatus
     *   A string describing the status of the printer (Idle, Busy, etc.).
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetPrinterStatus(CATPrinter& iPrinter, CATUnicodeString& oStatus) = 0;

    /** 
     * Builds a status dialog for the given printer.
     * @param iParent
     *   The parent dialog.
     * @param iPrinter
     *   The printer for which the dialog is to be displayed.
     * @param oDialog
     *   A pointer to the dialog.
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetStatusDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) = 0;

    /** 
     * Asks for extented options support (scheduling,...).
     * @return
     *   S_OK if extented options support.
     *   E_FAIL if no extented options support.
     */
    virtual HRESULT IsExtendedOptionsSupport(void) = 0;

    /** 
     * Builds a dialog box for extended options (scheduling,...) 
     * for the given printer.
     * @param iParent
     *   The parent dialog.
     * @param iPrinter
     *   The printer for which the dialog is to be displayed.
     * @param oDialog
     *   A pointer to the dialog.
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetExtendedOptionsDialog(CATDialog* iParent, CATPrinter& iPrinter, CATDlgWindow*& oDialog) = 0;

    /** 
     * Gets information on extended options of the given printer.
     * @param iPrinter
     *   The printer for which the information is to be displayed.
     * @param oStatus
     *   A string describing information about extended options 
     *   (scheduling mode activated, ...).
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetExtendedOptionsInfos(CATPrinter& iPrinter, CATUnicodeString& oStatus) = 0;

    /** 
     * Builds the printer manager dialog.
     * @param iParent
     *   The parent dialog.
     * @param oDialog
     *   A pointer to the dialog.
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetPrinterManagerDialog(CATDialog* iParent, CATDlgWindow*& oDialog) = 0;

    /** 
     * Prints an image on a printer with given parameters.
     * @param iDevice
     *   The device on which the image is to be printed.
     * @param iParameters
     *   The parameters applied to the printout.
     * @param iImage
     *   The image to be printed.
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT Print(CATPrinterDevice& iDevice, const CATPrintParameters& iParameters, CATPrintImage* iImage) = 0;

    /** 
     * Gets the last error message.
     * @param oError
     *   The error messsage.
     * @return
     *   S_OK upon successful execution.
     */
    virtual HRESULT GetLastError(CATUnicodeString &oError) = 0;
};

CATDeclareHandler(CATIPrinterManager, CATBaseUnknown);

#endif
