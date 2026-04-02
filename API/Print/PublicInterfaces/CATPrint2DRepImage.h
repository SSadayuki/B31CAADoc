#ifndef CATPRINT2DREPIMAGE_H
#define CATPRINT2DREPIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATPrintImage.h"

class CATPrintGenerator;
class CATPrintParameters;
class CATSupport;
class CAT2DViewpoint;
class CAT2DRep;
class CATPixelImage;

/**
 * Class to create a print image from a 2D-rep.
 */
class ExportedByCATPrint CATPrint2DRepImage : public CATPrintImage
{

public:

/**
 * Constructs a CATPrint2DRepImage.
 * @param i2DRep
 *   The 2D-rep to create the image.
 */
    CATPrint2DRepImage(CAT2DRep* i2DRep);
    virtual ~CATPrint2DRepImage();
    
/**
 * Retrieves the print image size.
 * @param oWidth
 *   The width of the image.
 * @param oHeight
 *   The height of the image.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    int GetSize(float& oWidth, float& oHeight);

/**
 * Computes the 2D-rep image with the appropriate generator and parameters.
 * @param iGenerator
 *   The generator.
 * @param iParameters
 *   The print parameters.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters & iParameters);

/**
 * @nodoc
 */
    int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters & iParameters, CATPrintDecodeType decodeType);

/**
 * Returns the support of the print image.
 * <br><b>Role:</b> The support can be a screen, a paper ...
 * @return 
 *   The support of the image.
 */
    CATSupport* GetSupport(void);

/**
 * Returns the 2D-viewpoint of the print image.
 * @return 
 *   The 2D-viewpoint of the image.
 */
    CAT2DViewpoint* GetViewpoint(void);

/**
 * Rasterizes the print image. 
 * @param iPixelSize
 *   The largest side of the generated CATPixelImage. 
 *    <br><b>Legal values</b>: The default is 320.
 * @return
 *   The generated CATPixelImage.
 */
    CATPixelImage* Rasterize(int iPixelSize = 320);

protected:
      CAT2DRep       *_rep;
    CATSupport     *_support;
    CAT2DViewpoint *_viewpoint2D;
};

#endif   
