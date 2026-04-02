#ifndef CATPRINTIMAGE_H
#define CATPRINTIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#ifdef _WINDOWS_SOURCE
#include <wtypes.h>
#endif

class CATPrintDevice;
class CATPrintGenerator;
class CATPrintParameters;
class CATDlgBox;
class CATDlgFrame;

/**
 * @nodoc
 */
#define CATPRINTDECODE_BEGIN   0x0001
/**
 * @nodoc
 */
#define CATPRINTDECODE_ADD     0x0002
/**
 * @nodoc
 */
#define CATPRINTDECODE_END     0x0004
/**
 * @nodoc
 */
typedef unsigned short CATPrintDecodeType;

/**
 * Abstract class to build a print image.
 * <br><b>Role</b>: This class has to be derived to build an image.
 * The @href #GetSize and @href #Decode methods must be overridden.
 * <br>The @href #Print method can be overriden. By default, it initializes the
 * device, calls @href #Decode method and ends the device.
 */
class ExportedByCATPrintBase CATPrintImage : public CATBaseUnknown
{
    CATDeclareClass;

public:

/**
 * Constructs a CATPrintImage.
 */
    CATPrintImage();
    virtual ~CATPrintImage();

/**
 * Sets the description of the image.
 * @param iDescription 
 *   The description of the image.
 */
    virtual void SetDescription(const CATUnicodeString& iDescription);

/**
 * Returns the description of the image.
 * @return
 *   The description of the image.
 */
    virtual const CATUnicodeString& GetDescription(void);

/**
 * Sets the title of the image.
 * @param iTitle
 *   The title of the image.
 */
    virtual void SetTitle(const CATUnicodeString& iTitle);

/**
 * Returns the title of the image.
 * @param oTitle
 *   The title of the image.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int GetTitle(CATUnicodeString& oTitle);

/**
 * Retrieves the size of the file image (virtual pure method).
 * <br>This method must be overridden.
 * @param oWidth
 *   The width of the image.
 * @param oHeight
 *   The height of the image.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int GetSize(float& oWidth, float& oHeight) = 0;

/**
 * Computes the print image with the appropriate generator 
 * and parameters (virtual pure method).
 * <br>This method must be overridden.
 * @param iGenerator
 *   The generator.
 * @param iParameters
 *   The print parameters.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters& iParameters) = 0;

/**
 * Initializes the device, decodes and prints the image.
 * @param iDevice
 *   The device on which the image will be printed.
 * @param iParameters
 *   The print parameters.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int Print(CATPrintDevice *iDevice, const CATPrintParameters& iParameters);


#ifdef _WINDOWS_SOURCE
/**
 * Initializes the device, decodes and prints the image.
 * @param iHDC
 *   The current HDC.
 * @param iFnMapMode
 *   The mapping mode.
 *   <br><b>Legal values</b>: MM_HIMETRIC specific for Windows NT, MM_LOMETRIC
 *   specific for Windows 98 or MM_ANISOTROPIC for both. The default is 
 *   MM_ANISOTROPIC.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int Print(HDC iHDC, int iFnMapMode = MM_ANISOTROPIC);

/**
 * Initializes the device, decodes and prints the image.
 * @param iHDC
 *   The current HDC.
 * @param iParameters
 *   The print parameters.
 * @param iFnMapMode
 *   The mapping mode.
 *   <br><b>Legal values</b>: MM_HIMETRIC specific for Windows NT, MM_LOMETRIC
 *   specific for Windows 98 or MM_ANISOTROPIC for both. The default is 
 *   MM_ANISOTROPIC.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int Print(HDC iHDC, const CATPrintParameters& iParameters, int iFnMapMode = MM_ANISOTROPIC);

/**
 * Renders to the specified clipboard format.
 * @param iClipFormat
 *   The clipboard format.
 *   <br><b>Legal values</b>: CF_METAFILEPICT for Windows Metafile, 
 *   CF_ENHMETAFILE for Enhanced Metafile, or CF_BITMAP for Bitmap Format.
 * @param iScale
 *   The applicated scale.
 *   <br><b>Legal values</b>: The default is 0 then the scale is calculated.
 * @return
 *   The handle on the clipboard format.
 */
    virtual HANDLE RenderFormat(CLIPFORMAT iClipFormat, float iScale = 0.f);

/**
 * @nodoc
 */
    virtual HGLOBAL RenderToMetaFile(LPCTSTR iFileName = NULL);
#endif

/**
 * Creates a CATIPrintable implementation.
 * @return
 *   The CATPrintImage created.
 */
    virtual CATPrintImage* CreatePrintableImage(void);
    
/**
 * @nodoc
 */
    virtual int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters & iParameters, CATPrintDecodeType decodeType);

protected:

/**
 * @nodoc
 */
    float _width, _height;

/**
 * @nodoc
 */
    int _windowsMetafile;
    
private:

    CATUnicodeString _description;
    CATUnicodeString _title;
};

#endif

