#ifndef CATPRINTPIXELIMAGEDEVICE_H
#define CATPRINTPIXELIMAGEDEVICE_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATPrint.h"
#include "CATPrintDevice.h"

class CATPixelImage;
class CATPrintParameters;

/**
 * Class to create CATPixelImage devices.
 */
class ExportedByCATPrint CATPrintPixelImageDevice : public CATPrintDevice
{

public:

/**
 * Constructs a CATPrintPixelImageDevice.
 */
    CATPrintPixelImageDevice();

/**
 * Constructs a CATPrintPixelImageDevice from a CATPixelImage object.
 * @param iPixelImage
 *   The pixel image associated to the device.
 */
    CATPrintPixelImageDevice(CATPixelImage* iPixelImage);

/**
 * Destructor.
 */
    virtual ~CATPrintPixelImageDevice();

/**
 * Sets the pixel image associated to the device.
 * @param iPixelImage
 *   The pixel image associated to the device.
 *   The pixel image could be allocated by default constructor.
 */
    void SetPixelImage(CATPixelImage* iPixelImage);

/**
 * Initializes the pixel image device.
 * @param iParameters
 *   The parameters of the generator.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 if device initialization failed, 
 *   1 otherwise.
 */
    int  Begin(const CATPrintParameters& iParameters);

/**
 * Ends the device.
 */
    void End(void);

private:

    CATPixelImage*  _paPixelImage;
};

#endif










