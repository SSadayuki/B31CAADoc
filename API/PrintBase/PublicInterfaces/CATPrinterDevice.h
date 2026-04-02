#ifndef CATPRINTERDEVICE_H
#define CATPRINTERDEVICE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrintBase.h"
#include "CATString.h"
#include "CATUnicodeString.h"
#include "CATPrintFileDevice.h"

#ifdef _WINDOWS_SOURCE
class CDC;
#endif

class CATString;
class CATPrinter;
class CATPrintStream;
class CATPrintFileDevice;

/**
 * Class to create a printer device.
 * <br>
 * <b>Role</b>: This class allows to create a device based on a printer, or for printing to a file 
 * instead sending data to the printer.
 * 
 * @see CATPrinter, CATPrintFileDevice
 */
class ExportedByCATPrintBase CATPrinterDevice : public CATPrintFileDevice
{
    CATDeclareClass; 
public:

/**
 * Constructs a CATPrinterDevice from a given printer.
 * @param iPrinter
 *   The device printer.
 */
    CATPrinterDevice( const CATPrinter* iPrinter = NULL );

/**
 * Constructs a CATPrinterDevice for printing to a file. 
 * @param iPrinter
 *   The device printer.
 * @param iFileName
 *   The file name where to print.
 */
    CATPrinterDevice( const CATPrinter* iPrinter, const CATUnicodeString& iFileName );
    virtual ~CATPrinterDevice();

/**
 * Initializes the printer device with given parameters.
 * @param iParameters
 *   The device parameters.
 * @return
 *   Check the status of the device.
 *   <br><b>Legal values</b>: 1 = OK, 0 = KO.
 */
    int  Begin(const CATPrintParameters& iParameters);

/**
 * Terminates the using of the printer device.
 */
    void End(void);

/**
 * Sets the number of copies.
 * @param iCopies
 *   The number of copies.
 */
    void SetCopies(int iCopies);

/**
 * Returns the number of copies.
 * @return
 *   The number of copies.
 */
    int  GetCopies(void);

/**
 * Returns the target printer.
 * @return
 *   The target printer.
 */
    const CATPrinter* GetTargetPrinter(void) const;

/**
 * Sets the file name of the printer device.
 * @param iFileName
 *   The file name of the printer device.
 */
    void SetFileName(const CATUnicodeString& iFileName);

/**
 * Returns the file name of the printer device.
 * @return 
 *   The file name of the printer device.
 */
    const CATUnicodeString*  GetFileName(void) const;
	
/**
 * Sets the document name.
 * @param iDocName
 *   The file name of the printer device.
 */
    void SetDocumentName(const CATUnicodeString& iDocName);

/**
 * @nodoc
 */
    void UsePrinterMargins(int iFlag);

private:

#ifdef _WINDOWS_SOURCE
    CDC     *_pDC;
    DOCINFO _docInfo;
#endif

    int          _printToFile, _copies;
    CATPrinter   *_printer;
    CATPrintStream     *_outputFile;
    CATUnicodeString   *_docName, *_fileName;
    int                _usePrinterMargins;
};

#endif
