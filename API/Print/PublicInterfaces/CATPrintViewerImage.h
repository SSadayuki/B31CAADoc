#ifndef CATPRINTVIEWERIMAGE_H
#define CATPRINTVIEWERIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATPrintSupportImage.h"

class CATViewer;
class CAT2DViewpoint;
class CATMathPoint2Df;
class CATPixelImage;
class CATPrintImage;

/**
 * Class to create an image for viewer printing.
 */
class ExportedByCATPrint CATPrintViewerImage : public CATPrintImage   
{
    CATDeclareClass;

public:

/**
 * Constructs a print viewer image.
 * @param iViewer
 *   The viewer to print.
 * @param iMode
 *   The printing render mode. @href CATPrintRenderMode. 
 *   <br><b>Legal values</b>: The default is CATPRINTRENDER_DEFAULT.
 * @param iCaptureSize
 *   The capture printing size is 0 (model size) or 1 (display size).
 *	 The default is 0.	
 */
    CATPrintViewerImage(CATViewer* iViewer, int iMode = CATPRINTRENDER_DEFAULT, int iCaptureSize = 0);

/**
 * Constructs a print viewer image with two points in pixel coordinates.
 * @param iViewer
 *   The viewer to print.
 * @param i2DViewpoint
 *   The 2D-viewpoint for printing the viewer.
 * @param iBottomLeft
 *   The bottom left point. See CATMathPoint2Df.
 * @param iTopRight
 *   The top right point. See CATMathPoint2Df.
 * @param iMode
 *   The printing render mode. @href CATPrintRenderMode. 
 *   <br><b>Legal values</b>: The default is CATPRINTRENDER_DEFAULT.
 * @param iCaptureSize
 *   The capture printing size is 0 (model size) or 1 (display size).
 *	 The default is 0.	
 */
    CATPrintViewerImage(CATViewer* iViewer, CAT2DViewpoint* i2DViewpoint, const CATMathPoint2Df& iBottomLeft, const CATMathPoint2Df& iTopRight, int iMode = CATPRINTRENDER_DEFAULT, int iCaptureSize = 0);
    virtual ~CATPrintViewerImage();

/**
 * Retrieves the size of the print viewer image.
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
 * Computes the print viewer image with the appropriate generator 
 * and parameters.
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
 * Returns the viewer to print.
 * @return 
 *   The viewer to print.
 */
    CATViewer* GetViewer(void);

/**
 * Returns the 2D-viewpoint.
 * @return 
 *   The 2D-viewpoint.
 */
    CAT2DViewpoint* GetViewpoint(void);

/**
 * Returns The printing render mode.
 * @return 
 *   The printing render mode. @href CATPrintRenderMode.
 */
    int GetMode(void);

/**
 * @nodoc
 */
    void SetColorMode(int colorMode);

/**
 * @nodoc
 */
    void SetWhitePixel(int whitePixel);

/**
 * @nodoc
 */
    void SetSelection(CAT2DViewpoint* i2DViewpoint, const CATMathPoint2Df& iBottomLeft, const CATMathPoint2Df& iTopRight);
   
private:
/**
 * @nodoc
 */
    void GetProjectionViewpoint(void);

    CATPrintImage* _image;
    CATPixelImage* _screenCapture;
    CATViewer*     _viewer;
    CAT2DViewpoint* _projectionViewpoint;
    int _mode;
    int _colorMode;
    int _whitePixel;
	int _captureSize; 
};

#endif   
