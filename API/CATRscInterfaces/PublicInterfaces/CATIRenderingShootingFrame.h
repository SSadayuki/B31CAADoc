#ifndef CATIRenderingShootingFrame_h
#define CATIRenderingShootingFrame_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATRenderingEnum.h"
#include "CATIRenderingEnvironment.h"
#include "CATI3DCamera.h"
#include "CATLISTV_CATBaseUnknown.h"




#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingShootingFrame;
#else
extern "C" const IID IID_CATIRenderingShootingFrame;
#endif

/** 
  * Interface to manage frame parameters for shooting objects.
  * @see CATIRenderingShooting, CATIRenderingShootingFactory
  */


class ExportedByCATRscItfCPP CATIRenderingShootingFrame : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 *  Returns the image size of a shooting object.
 *  The image width and height ranges from 10 to 8000 pixels.
 */
    virtual void GetImageSize(int &oWidth, int &oHeight) const = 0;

/** 
 *  Set the the image size of a shooting object
 *  The image width and height ranges from 10 to 8000 pixels.
 */
    virtual HRESULT SetImageSize(const int iWidth, const int iHeight) = 0;

/**
 *  Returns the image output type of a shooting object.
 * @return
 *   An integer value. 
 * <br><b>Legal values</b>:
 * <br>1: Calculated image is displayed on screen.
 * <br>2: Calculated image is stored on disk.
 */
    virtual int GetImageOutputType() const = 0;

/** 
 *  Set the image output type of a shooting object.
 * @param iType
 *   The image output type 
 * <br><b>Legal values</b>:
 * <br>1: Calculated image is displayed on screen.
 * <br>2: Calculated image is stored on disk.
 */
    virtual HRESULT SetImageOutputType(const int iType) = 0;

/**
 *  Returns the image output location of a shooting object.
 * @param oDirectory
 *   The image output directory path. 
 * @param oName
 *   The image output name. 
 * @param oFormat
 *   The image output format. 
 * <ul> <b>Legal values</b>:
 *   <li>  1    TIFF True Color (*.tif) </li>
 *   <li>  2    TIFF True Color Packbits (*.tif) </li>
 *   <li>  3    SGI Format (*.rgb) </li>
 *   <li>  4    Windows Bitmap (*.bmp) </li>
 *   <li>  5    JPEG Fair Quality (*.jpg) </li>
 *   <li>  6    JPEG Medium Quality (*.jpg) </li>
 *   <li>  7    JPEG High Quality (*.jpg) </li>
 *   <li>  8    Apple Macintosh Format (*.pic) </li>
 *   <li>  9    Adobe Photoshop Format (*.psd) </li>
 *   <li>  10   Portable Network Graphics (*.png) </li>
 *   <li>  11   Truevision Targa (*.tga) </li>
 *   </ul>
 */
    virtual void GetImageOutputLocation(CATUnicodeString &oDirectory, CATUnicodeString &oName, int &oFormat) const = 0;

/** 
 *  Set the image output location of a shooting object.
 * @param iDirectory
 *   The image output directory path. 
 * @param iName
 *   The image output name. 
 * @param iFormat
 *   The image output format. 
 * <ul> <b>Legal values</b>:
 *   <li>  1    TIFF True Color (*.tif) </li>
 *   <li>  2    TIFF True Color Packbits (*.tif) </li>
 *   <li>  3    SGI Format (*.rgb) </li>
 *   <li>  4    Windows Bitmap (*.bmp) </li>
 *   <li>  5    JPEG Fair Quality (*.jpg) </li>
 *   <li>  6    JPEG Medium Quality (*.jpg) </li>
 *   <li>  7    JPEG High Quality (*.jpg) </li>
 *   <li>  8    Apple Macintosh Format (*.pic) </li>
 *   <li>  9    Adobe Photoshop Format (*.psd) </li>
 *   <li>  10   Portable Network Graphics (*.png) </li>
 *   <li>  11   Truevision Targa (*.tga) </li>
 *   </ul>
 */
    virtual HRESULT SetImageOutputLocation(const CATUnicodeString iDirectory, const CATUnicodeString iName, const int iFormat) = 0;
};

CATDeclareHandler(CATIRenderingShootingFrame, CATBaseUnknown);

#endif
