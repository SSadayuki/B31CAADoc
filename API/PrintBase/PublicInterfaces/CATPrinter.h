#ifndef CATPRINTER_H
#define CATPRINTER_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATPrintForm.h"
#include "CATListOfCATPrintForm.h"
#include "CATListOfCATUnicodeString.h"
class CATPrintFileGenerator;


/**
 * Class to describe a printer and its attributes.
 * <br><b>Role</b>: The printer is defined by the user description, its 
 * language and its default and largest format sizes. A query on @href CATPrinterManager
 * allows to obtain the list of system printers.
 *
 * @see CATPrinterManager
 */
class ExportedByCATPrintBase CATPrinter : public CATBaseUnknown
{
    CATDeclareClass;

public:

/**
 * Constructs a CATPrinter. 
 */
    CATPrinter();

/**
 * Copy constructor.
 * @param iPrinter
 *   The printer to be copied.
 */
    CATPrinter(const CATPrinter& iPrinter);
    virtual ~CATPrinter();

/**
 * @nodoc
 */
    CATPrinter& operator=(const CATPrinter& iPrinter);
    
/**
 * Returns the default format.
 * @return
 *   The default format.
 */
    const CATPrintForm& GetDefaultForm(void) const;

/**
 * Sets the default format.
 * @param iForm
 *   The default format.
 */
    void SetDefaultForm(const CATPrintForm& iForm);

/**
 * Returns the largest format.
 * @return
 *   The largest format.
 */
    const CATPrintForm& GetMaxForm(void) const;

/**
 * Returns the name of the device.
 * @return
 *   The name of the device.
 */
    const CATUnicodeString& GetDeviceName(void) const;

/**
 * Returns the description of the device.
 * @return
 *   The description of the device.
 */
    const CATUnicodeString& GetDescription(void) const;

/**
 * Returns the language of the device.
 * @return
 *   The language of the device.
 */
    const CATUnicodeString& GetLanguage(void) const;

/**
 * Retrieves the default margins of the device.
 * @param oLeft
 *   The left margin.
 * @param oRight
 *   The right margin.
 * @param oTop
 *   The top margin.
 * @param oBottom
 *   The bottom margin.
 */
    void  GetDefaultMargins(float &oLeft,  float &oRight, float &oTop, float &oBottom) const;
    
/**
 * Defines the default margins of the device.
 * @param iLeft
 *   The left margin.
 * @param iRight
 *   The right margin.
 * @param iTop
 *   The top margin.
 * @param iBottom
 *   The bottom margin.
 */    
    void  SetDefaultMargins(float iLeft,  float iRight, float iTop, float iBottom);
   
/**
 * Retrieves the physical margins of the device.
 * @param oLeft
 *   The left margin.
 * @param oRight
 *   The right margin.
 * @param oTop
 *   The top margin.
 * @param oBottom
 *   The bottom margin.
 */
    void  GetPhysicalMargins(float &oLeft,  float &oRight, float &oTop, float &oBottom) const;
 
/**
 * Checks wether the printer is local or connected on a network.
 * @return
 *   <br><b>Legal values</b>: 1 = true, 0 = false.
 */
    int IsLocal(void) const;

/**
 * Returns the list of formats supported by the printer.
 * @return
 *   The list of supported formats.
 */
    const CATLISTV(CATPrintForm)& GetFormsList(void);

/**
 * @nodoc
 */
	const CATPrintFileGenerator* GetGenerator() const;

/**
 * @nodoc
 */
	CATPrintFileGenerator* GetGenerator();

/**
 * @nodoc
 */
	void SetGenerator(CATPrintFileGenerator* iGenerator);

/**
 * @nodoc
 */
    int RetrieveDescription(void);
/**
 * @nodoc
 */
	int RetrieveScript(void);
/**
 * @nodoc
 */
	int RetrieveGenerator(void);


/**
 * Defines the largest format.
 * @param iForm
 *   The largest format.
 */
    void SetMaxForm(const CATPrintForm& iForm);

/**
 * Defines the name of the device.
 * @param iName
 *   The name of the device.
 */
    void SetDeviceName(const CATUnicodeString& iName);

/**
 * Defines the description of the device.
 * @param iDescription
 *   The description of the device.
 */
    void SetDescription(const CATUnicodeString& iDescription);

/**
 * Defines the language of the device.
 * @param iLanguage
 *   The language of the device.
 */
    void SetLanguage(const CATUnicodeString& iLanguage);

/**
 * Gets the name of the icon that will appear in the printer list dialog.
 * @return
 *   The name of the icon.
 */
    virtual const char* GetIconName(void) const;

/**
 * Saves the description of the device. 
 */
    int SaveDescription() const;

/**
 * @nodoc
 */
    void SetExternal();

/**
 * @nodoc
 */
    int IsExternal() const;

/**
 * @nodoc
 */
    void SetDriverUnix();

/**
 * @nodoc
 */
    int IsDriverUnix() const;

/**
 * @nodoc
 */
    const CATLISTV(CATUnicodeString)& GetWindowsRuntimeScript() const; 

/**
 * @nodoc
 */
    const CATLISTV(CATUnicodeString)& GetUnixRuntimeScript() const;

/**
 * @nodoc
 */
    const CATLISTV(CATUnicodeString)& GetWindowsExecutionScript() const;

/**
 * @nodoc
 */
    const CATLISTV(CATUnicodeString)& GetUnixExecutionScript() const;

/**
 * @nodoc
 */
    const CATUnicodeString& GetExecDefault() const; 

/**
 * @nodoc
 */
    const CATUnicodeString& GetRunTimeDefault() const; 

/**
 * @nodoc
 */
    void SetWindowsRuntimeScript(const CATLISTV(CATUnicodeString)& windowsRuntimeScript); 

/**
 * @nodoc
 */
    void SetUnixRuntimeScript(const CATLISTV(CATUnicodeString)& unixRuntimeScript);

/**
 * @nodoc
 */
    void SetWindowsExecutionScript(const CATLISTV(CATUnicodeString)& windowsExecutionScript);

/**
 * @nodoc
 */
    void SetUnixExecutionScript(const CATLISTV(CATUnicodeString)& unixExecutionScript);

/**
 * @nodoc
 */
    void SetLock();

/**
 * @nodoc
 */
    int IsLock() const;

protected:
    friend class CATPrinterUtility;
    friend class CATPrinterManager;

    CATPrintFileGenerator* _generator;
    CATUnicodeString  _deviceName, _description, _language;
    CATPrintForm _defaultForm, _maxForm;
    float  _leftMargin, _rightMargin, _topMargin, _bottomMargin;
    float  _physicalLeftMargin, _physicalRightMargin, _physicalTopMargin, _physicalBottomMargin;
    CATLISTV(CATPrintForm) _formsList;
    int _isLocal;
    int _external;
    int _driverUnix;
    int _lock;
    
#ifdef _WINDOWS_SOURCE
public:
    /**
	* Data on the print device.
    * The DEVMODE data structure contains information about the
    * device initialization and environment of a printer. 
    */
    DEVMODE *_pDevMode;
#endif

private:
    int RetrieveWindowsDescription(void);
    int Retrieve3DPLMDescription(void);

	const CATString& GetNameFromCode(int code);
	const CATString& GetNameFromSize(float width, float height);

	CATLISTV(CATUnicodeString) _unixExecutionScript;
	CATLISTV(CATUnicodeString) _unixRunTimeScript;
	CATLISTV(CATUnicodeString) _windowsExecutionScript;
	CATLISTV(CATUnicodeString) _windowsRunTimeScript;

	CATUnicodeString _execDefault;
	CATUnicodeString _runTimeDefault;
};

#endif
