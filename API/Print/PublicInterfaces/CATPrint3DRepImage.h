#ifndef CATPRINT3DREPIMAGE_H
#define CATPRINT3DREPIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATPrintImage.h"

class CATPrintGenerator;
class CATPrintParameters;
class CAT3DRep;
class CAT2DViewpoint;
class CAT3DViewpoint;
class CAT3DLightSourceRep;
class CATPixelImage;
class CATSupport;

/**
 * Class to create a print image from a 3D-rep.
 */
class ExportedByCATPrint CATPrint3DRepImage : public CATPrintImage   
{

public:

/**
 * Constructs a CATPrint3DRepImage.
 * @param i3DRep
 *   The 3D-rep to create the image.
 * @param iSupportWidth
 *   The width of the support. The default is 400.
 * @param iSupportHeight
 *   The height of the support. The default is 300. 
 */
    CATPrint3DRepImage(CAT3DRep* i3DRep, int iSupportWidth = 400, int iSupportHeight = 300);
    virtual ~CATPrint3DRepImage();
    
/**
 * Gets the print image size.
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
 * Computes the 3D-rep image with the appropriate generator and parameters.
 * @param iGenerator
 *   The generator (see CATPrintGenerator).
 * @param iParameters
 *   The print parameters (see CATPrintParameters).
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
 * Gets the support of the print image.
 * @return 
 *   The support of the image.
 */
    CATSupport* GetSupport(void);

/**
 * Gets the 3D-viewpoint of the print image.
 * @return 
 *   The 3D-viewpoint of the image.
 */
    CAT3DViewpoint* GetViewpoint(void);

/**
 * Rasterizes the print image. 
 * @return
 *   The generated CATPixelImage.
 */
    CATPixelImage* Rasterize(void);

#ifdef _WINDOWS_SOURCE
/**
 * @nodoc
 */
    HANDLE RenderFormat(CLIPFORMAT iClipFormat, float iScale = 0.f);
#endif

private:
    CATSupport     *_support;
    CAT2DViewpoint *_viewpoint2D;
    CAT3DViewpoint *_viewpoint3D;
    CAT3DLightSourceRep *_light;
};

#endif   






