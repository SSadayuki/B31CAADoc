#ifndef CATPRINTSUPPORTIMAGE_H
#define CATPRINTSUPPORTIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATPrintImage.h"
#include "CATMathPoint2Df.h"
#include "CATIAV5Level.h"
#include "CATPrintRenderMode.h"

class CATSupport;
class CAT2DViewpoint;
class CATPrintGenerator;
class CATPrintParameters;
class CATPixelImage;


/**
 * Class to create an image for support printing.
 */
class ExportedByCATPrint CATPrintSupportImage : public CATPrintImage   
{
    CATDeclareClass;

public:

/**
 * Constructs a print support image.
 * @param iSupport
 *   The support to print.
 * @param i2DViewpoint
 *   The 2D-viewpoint for printing the support.
 * @param iMode
 *   The printing render mode. @href CATPrintRenderMode. 
 *   <br><b>Legal values</b>: The default is CATPRINTRENDER_DEFAULT.  
 */
    CATPrintSupportImage(CATSupport* iSupport, CAT2DViewpoint* i2DViewpoint, int iMode = CATPRINTRENDER_DEFAULT);

/**
 * Constructs a print support image with two points.
 * @param iSupport
 *   The support to print.
 * @param i2DViewpoint
 *   The 2D-viewpoint for printing the support.
 * @param iBottomLeft
 *   The bottom left point.
 * @param iTopRight
 *   The top right point.
 * @param iMode
 *   The printing render mode. @href CATPrintRenderMode. 
 *   <br><b>Legal values</b>: The default is CATPRINTRENDER_DEFAULT.
 */
    CATPrintSupportImage(CATSupport* iSupport, CAT2DViewpoint* i2DViewpoint, const CATMathPoint2Df& iBottomLeft, const CATMathPoint2Df& iTopRight , int iMode = CATPRINTRENDER_DEFAULT);
    virtual ~CATPrintSupportImage();
    
/**
 * Retrieves the size of the print support image.
 * @param oWidth
 *   The width of the image.
 * @param oHeight
 *   The height of the image.
 * @return
 *   The status of the method. Always 1.
 */
    virtual int GetSize(float& oWidth, float& oHeight);

/**
 * Computes the print support image with the appropriate generator 
 * and parameters.
 * @param iGenerator
 *   The generator 
 * @param iParameters
 *   The print parameters 
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    virtual int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters & iParameters);
 
/**
 * @nodoc
 */
    virtual int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters & iParameters, CATPrintDecodeType iDecodeType);

/**
 * Returns the support of the print support image.
 * @return 
 *   The support of the image.
 */
    virtual CATSupport* GetSupport(void);

/**
 * Returns the 2D-viewpoint of the print support image.
 * @return 
 *   The 2D-viewpoint of the image.
 */
    virtual CAT2DViewpoint* GetViewpoint(void);

/**
 * Clips the print support image with two points.
 * @param iBottomLeft
 *   The bottom left point.
 * @param iTopRight
 *   The top right point.
 */
    virtual void SetSelection(const CATMathPoint2Df& iBottomLeft, const CATMathPoint2Df& iTopRight);

private:

    int IsAllocationForRasterGeneratorPossible(CATPrintGenerator *iGenerator, CATPrintParameters& iParameters);
    int RasterizeAccordingToQuality(CATPrintGenerator* iGenerator, const CATPrintParameters & iParameters);
    void ReframeOnClipFrame(float& ioWidthSupport, float& ioHeightSupport, CAT2DViewpoint*& oProjectionViewpoint);
    int RasterizeAccordingToDPI300Max(CATPrintGenerator* iGenerator,const CATPrintParameters & iParameters);
    int RasterizeAccordingToDPI300Min(CATPrintGenerator* iGenerator,const CATPrintParameters & iParameters);
    int RasterizeAccordingToTiling(CATPrintGenerator* iGenerator,const CATPrintParameters & iParameters);
    int Rasterize(const CATPrintParameters & iParameters);
    
    int _quality, _mode, _clip, _whitePixel, _dpi;
	CATBoolean _useCustomQuality;
    CATSupport     *_support;
    CAT2DViewpoint *_viewpoint;
    CATPixelImage *_raster;
    CATMathPoint2Df _bottomLeft; 
    CATMathPoint2Df _topRight;
};

#endif   






