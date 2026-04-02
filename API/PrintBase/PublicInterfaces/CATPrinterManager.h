#ifndef CATPRINTERMANAGER_H
#define CATPRINTERMANAGER_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrintBase.h"
#include "CATUnicodeString.h"
#include "CATCallbackManager.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfCATPrinter.h"

class CATPrinter;
class CATPrintStream;
class CATPrintParameters;
class CATDialog;
class CATPrinterDevice;
class CATIPrinterManager;
class CATPrintLogManager;

#if defined(_WINDOWS_SOURCE) && defined(GetDefaultPrinter)
#undef GetDefaultPrinter
#endif

/**
 * Class to manage system printers.
 * <br>
 * <b>Role</b>: A printer manager can retrieve the list of available printers
 * and their attributes, it can retrieve the system default printer or can
 * send data to a specific printer.
 * <br>It's a pure static and OS-specific class.
 * <br>Calling @href #Begin at the beginning of the application is not compulsory.
 * Therefore, @href #End should be called at the end in order to release memory and
 * save default print parameters.
 */
class ExportedByCATPrintBase CATPrinterManager : public CATCallbackManager
{
    CATDeclareClass;

/**
 * @nodoc
 */
    CATDeclareCBEvent(PrinterChanged);
	CATDeclareCBEvent(ExtendedOptionsInfoChanged);

	friend class CATPrinterConfigureDialog;
    friend class l_CATPrinterManagerDialog;
    friend class CATPrinterDialog;
    friend class CATPrinterDevice;
    friend class CATPrintLogManager;
	friend class CATPrinterUtility;
	friend class ENOVWebPrintPrinterConfigureDlg;
	friend class ENOVWebPrintManager;
	


public:

/**
 * Constructs a CATPrinterManager.
 */
    CATPrinterManager();
    ~CATPrinterManager();


/**
 * Initializes and builts printer list. 
 * @param iDirectory
 *   The printers directory.
 *   <br><b>Legal values</b>: The default is <tt>$CATUserSettingPath/Printers</tt>.
 */
    static void Begin(const char* iDirectory=NULL);

/**
 * Terminates the using of printer management.
 */
    static void End(void);

/**
 * Returns the number of available printers.
 * @return 
 *   The number of available printers.
 */
    static int GetPrinterCount(void);

/**
 * Returns a printer from its index.
 * @param iIndex
 *   The index of the printer.
 * @return
 *   The printer which index is <tt>iIndex</tt>.
 */
    static     CATPrinter& GetPrinterFromIndex(int iIndex);

/**
 * Returns the list of available printers.
 * @return
 *   The list of available printers.
 */
    static const CATLISTP(CATPrinter)& GetPrinterList(void);

/**
 * Returns the default printer index.
 * @return 
 *   The the default printer index.
 */
    static int  GetDefaultPrinterIndex(void);

/**
 * Sets the default printer index.
 * @param iIndex
 *   The index of the default printer.
 */
    static void SetDefaultPrinterIndex(int iIndex);

/**
 * Returns the default printer.
 * @return 
 *   The default printer.
 */
    static CATPrinter& GetDefaultPrinter(void);

/**
 * Returns the default parameters.
 * @return
 *   The default parameters.
 */
    static const CATPrintParameters& GetDefaultParameters(void);

/**
 * Sets the default parameters.
 * @param iParameters
 *   The default parameters.
 */
    static void SetDefaultParameters(const CATPrintParameters& iParameters);

/**
 * Returns the default unit.
 * @return
 *   The default unit.
 */ 
    static CATPrintUnit GetDefaultUnit(void);

/**
 * Sets the default unit.
 * @param iUnit
 *   The default unit.
 */
    static void SetDefaultUnit(CATPrintUnit iUnit);
   
/**
 * Reads printer properties.
 * @param iPrinter
 *   The printer to scan.
 * @param ioProperties
 *   The properties of the printer.
 */
    static void ReadPrinterProperties (const CATPrinter* iPrinter, CATBaseUnknown* ioProperties);

/**
 * Writes printer properties.
 * @param iPrinter
 *   The printer to update.
 * @param iProperties
 *   The properties of the printer.
 */
    static void WritePrinterProperties(const CATPrinter* iPrinter, CATBaseUnknown* iProperties);

/**
 * Sends data to a printer.
 * @param iPrinter
 *   The printer where the data are sent.
 * @param iStream
 *   The data to send.
 * @param iNbcopies
 *   The number of copies. 
 *   <br><b>Legal values</b>: The defaut is 1.
 */
    static void Write(const CATPrinter& iPrinter, const CATPrintStream& iStream, int iNbcopies=1);

/**
 * Returns the user printers directory.
 * @return
 *   The printers directory.
 */ 
    static const CATString& GetUserPrintersDir(void);

/**
 * @nodoc
 */
    static void GetUserPrintersDir(CATUnicodeString& userPrintersDir);

/**
 * Returns the temporary directory.
 * @return
 *   The temporary directory.
 */
    static const char* GetTempDirectory(void); 

/**
 * Returns the instance of CATPrinterManager.
 * <br>Only one CATPrinterManager can be instancied.
 * @return
 *   The CATPrinterManager instance.
 */
    static CATPrinterManager* GetInstance();

/**
 * @nodoc
 */
    static CATIPrinterManager* GetIPrinterManager(void);

/**
 * @nodoc
 */
    static void GetDriverCfgPath(CATUnicodeString& driverCfgPath);

/**
 * @nodoc
 */
    static int GetPrinterGroupCount(void);

/**
 * @nodoc
 */
    static void GetPrinterGroupNameFromIndex(int iIndex, CATUnicodeString& oGroupName);

/**
 * @nodoc
 */
    static void GetPrinterGroupListFromIndex(int iIndex, CATListOfInt& oPrinterIndexList);

private:

    static void ReadPrinterList(void);
    static void ReadWindowsPrinterList(void);
    static void Read3DPLMPrinterList(void);
    static void ReadExternalPrinterList(void);
    
    static void ReadGroupList(void);
    
    static void RetrieveUserPrintersDir(const char* iDirectory = NULL);
    static void RetrievePrintersDirs();

    static int  CreatePrinter(const CATPrinter& printer);
    static int  CreatePrinter();
    static void RemovePrinter(int index);
    static void RetrievePrinterDescription(int index);
    static int  RetrievePrinterDescription(CATPrinter& printer);

    static void ReadDefaultParameters(void);
    static void WriteDefaultParameters(void);
    
    static CATString          _userPrintersDirString;
    static CATUnicodeString   _userPrintersDir;
    static CATLISTV(CATUnicodeString) _printersDirs;
    static CATListOfInt _printersDirsState;
    static int                _isOK;
    static int                _printerCount;
    static int                _defaultPrinter;
    static CATPrintParameters* _defaultParameters;
    static CATPrintUnit       _defaultUnit;
    static CATLISTP(CATPrinter)* _printerList;
    static CATPrinterManager*   _instance;
    static CATLISTV(CATUnicodeString) _groupNames;
    static CATLISTV(CATUnicodeString) _printerNamesByGroup;

    static CATIPrinterManager*  _pIPrinterManager;

    // driver UNIX : read the queue list
    static const CATLISTV(CATUnicodeString)& GetQueueList(void);
    static CATLISTV(CATUnicodeString) _queueList;

    // putenv management
    static void PutEnv(const char* str);
    static char** _env;
    static int _envIndex;
    static int _envSize;
};

#endif
