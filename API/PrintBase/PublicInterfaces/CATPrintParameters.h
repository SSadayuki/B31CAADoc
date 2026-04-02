#ifndef CATPRINTPARAMETERS_H
#define CATPRINTPARAMETERS_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATPrintForm.h"
#include "CATUnicodeString.h"
#include "CATBoolean.h"
#include "CATMMediaVertexOption.h"

class CATPrintVisuParameters;

// Print parameters enums

/**
 * Rotation angle.
 * @param CATPRINTCCW_0
 *   The angle is 0 degree measured counterclockwise from the horizontal.
 * @param CATPRINTCCW_90
 *   The angle is 90 degrees measured counterclockwise from the horizontal.
 * @param CATPRINTCCW_180
 *   The angle is 180 degrees measured counterclockwise from the horizontal.
 * @param CATPRINTCCW_270
 *   The angle is 270 degrees measured counterclockwise from the horizontal.
 */
enum CATPrintRotation          {CATPRINTCCW_0, CATPRINTCCW_90, CATPRINTCCW_180, CATPRINTCCW_270, CATPRINTCCW_BEST_ROTATION};

/**
 * Color mode.
 * @param CATPRINTRGB
 *   The three components red, green and blue are used.
 * @param CATPRINTGREYSCALE
 *   The grey scale color is obtain by the formula : 0.3f*red + 0.59f*green + 0.11f*blue.
 * @param CATPRINTMONO
 *   Only black or white color.
 */
enum CATPrintColorMode         {CATPRINTRGB, CATPRINTGREYSCALE, CATPRINTMONO};

/**
 * Banner position.
 * @param CATPRINTNONE
 *   Without banner.
 * @param CATPRINT_TOP
 *   The banner is at the top of the image printed.
 * @param CATPRINT_BOTTOM
 *   The banner is at the bottom of the image printed.
 * @param CATPRINT_LEFT
 *   The banner is at the left of the image printed.
 * @param CATPRINT_RIGHT
 *   The banner is at the right of the image printed.
 */
enum CATPrintBannerPosition    {CATPRINT_NONE, CATPRINT_TOP, CATPRINT_BOTTOM, CATPRINT_LEFT, CATPRINT_RIGHT};

/**
 * Line specification.
 * @param CATPRINT_ABSOLUTE
 *   The line width and the line type are independant of the image scale.
 * @param CATPRINT_SCALED
 *   The line width and the line type depend of the image scale.
 * @param CATPRINT_NOTHICKNESS
 *   The line width is 0.
 */
enum CATPrintLineSpecification {CATPRINT_ABSOLUTE, CATPRINT_SCALED, CATPRINT_NOTHICKNESS};

/**
 * Line cap.
 * @param CATPRINT_FLAT
 *   The line ends are flat.
 * @param CATPRINT_SQUARE
 *   The line ends are squared.
 * @param CATPRINT_ROUND
 *   The line ends are round.
 */
enum CATPrintLineCap           {CATPRINT_FLAT, CATPRINT_SQUARE, CATPRINT_ROUND};

/**
 * Standard used.
 * @param CATPRINT_ISO
 *   The ISO standard is used.
 * @param CATPRINT_ANSI
 *   The ANSI standard is used.
 * @param CATPRINT_JIS
 *   The JIS standard is used.
 */
enum CATPrintStandard          {CATPRINT_ISO, CATPRINT_ANSI, CATPRINT_JIS};

/**
 * Area printed.
 * @param CATPRINT_WHOLE_DOCUMENT
 *   The whole document is printed.
 * @param CATPRINT_DISPLAY
 *   The display is printed.
 * @param CATPRINT_SELECTION
 *   @nodoc
 * @param CATPRINT_DRAFTING_AREA
 *   @nodoc
 */
enum CATPrintArea {CATPRINT_WHOLE_DOCUMENT, CATPRINT_DISPLAY, CATPRINT_SELECTION, CATPRINT_DRAFTING_AREA};

/**
 * Class to create a CATPrintParameters object.
 * <br><b>Role</b>: This class aggregates print parameters such as paper 
 * format, margins, image position, image scale, image rotation, mapping to 
 * paper flag, print quality, printing offset, ...
 * <br>Derive from this class and add new methods to manage others parameters 
 * using in an overridden @href CATPrintGenerator.
 */
class ExportedByCATPrintBase CATPrintParameters : public CATBaseUnknown
{

    CATDeclareClass;

    friend class CATMarshalPrintParameters;
    
public:

/**
 * Constructs a CATPrintParameters object.
 */
    CATPrintParameters();

/**
 * Copy constructor.
 * @param iParameters
 *   The parameters to be copied.
 */
    CATPrintParameters(const CATPrintParameters& iParameters);
    ~CATPrintParameters();

/**
 * @nodoc
 */
    CATPrintParameters& operator= (const CATPrintParameters& iParameters);

/**
 * Returns the standard used in the parameters.
 * @return
 *   The standard used.
 */
    CATPrintStandard GetStandard(void) const;

/**
 * Sets the standard used in the parameters.
 * @param iStandard
 *   The standard used.
 *   <br><b>Legal values</b>: The default is CATPRINT_ISO.
 */
    void SetStandard(CATPrintStandard iStandard);

/**
 * Returns the current format.
 * @return 
 *   The current format.
 */
    const CATPrintForm& GetCurrentForm(void) const;

/**
 * Returns the current format.
 * @return 
 *   The current format.
 */
    CATPrintForm& GetCurrentForm(void);

/**
 * Sets the current format.
 * @param iForm
 *   The current format.
 *   <br><b>Legal values</b>: The default is A4 ISO. 
 */
    void SetCurrentForm(const CATPrintForm& iForm);

/**
 * Retrieves the image position.
 * @param oX
 *   The x coordinate of the image.
 * @param oY
 *   The y coordinate of the image.
 */
    void GetPosition(float& oX, float& oY) const;

/**
 * Sets the image position.
 * @param iX
 *   The x coordinate of the image.
 *   <br><b>Legal values</b>: The default is 0.
 * @param iY
 *   The y coordinate of the image.
 *   <br><b>Legal values</b>: The default is 0.
 */
    void SetPosition(float iX, float iY);

/**
 * Returns the image scale.
 * @return
 *   The image scale.
 */
    float GetScale(void) const;

/**
 * Sets the image scale.
 * @param iScale
 *   The image scale. It must be a positive float.
 *   <br><b>Legal values</b>: The default is 1.
 */
    void  SetScale(float iScale);

/**
 * Retrieves the margins.
 * @param oLeftMargin
 *   The left margin.
 * @param oRightMargin
 *   The right margin.
 * @param oTopMargin
 *   The top margin.
 * @param oBottomMargin
 *   The bottom margin.
 */
    void GetMargins(float& oLeftMargin, float& oRightMargin, float& oTopMargin, float& oBottomMargin) const;

/**
 * Sets the margins.
 * @param iLeftMargin
 *   The left margin.
 *   <br><b>Legal values</b>: The default is 10 mm.
 * @param iRightMargin
 *   The right margin.
 *   <br><b>Legal values</b>: The default is 10 mm.
 * @param iTopMargin
 *   The top margin.
 *   <br><b>Legal values</b>: The default is 10 mm.
 * @param iBottomMargin
 *   The bottom margin.
 *   <br><b>Legal values</b>: The default is 10 mm.
 */
    void SetMargins(float iLeftMargin, float iRightMargin, float iTopMargin, float iBottomMargin);

/**
 * Returns the image rotation.
 * @return
 *   The image rotation.
 */
    CATPrintRotation  GetRotation(void) const;

/**
 * Sets the image rotation.
 * @param iRotation
 *   The image rotation.
 *   <br><b>Legal values</b>: The default is CATPRINTCCW_0.
 */
    void SetRotation(CATPrintRotation iRotation);

/**
 * Returns the mapping to paper flag.
 * @return
 *   The mapping to paper flag (1 if true, 0 either).
 */ 
    int  GetMapToPaper(void) const;

/**
 * Sets the mapping to paper flag.
 * @param iMapToPaper
 *   The mapping to paper flag. 
 *   <br><b>Legal values</b>: 1 if true, 0 either. The default is 0.
 */ 
    void SetMapToPaper(int iMapToPaper);

/**
 * Returns the white pixel flag.
 * @return
 *   The white pixel flag (1 if printing in black, 0 either).
 */
    int  GetWhitePixel(void) const;

/**
 * Sets the white pixel flag.
 * @param iWhitePixel
 *   The white pixel flag.
 *   <br><b>Legal values</b>: 1 if printing in black, 0 either. The default is 1.
 */
    void SetWhitePixel(int iWhitePixel);

/**
 * Returns the banner postion.
 * @return
 *   The banner position.
 */
    CATPrintBannerPosition GetBannerPosition(void) const;

/**
 * Sets the banner postion.
 * @param iPosition
 *   The banner position.
 *   <br><b>Legal values</b>: The default is CATPRINT_NONE.
 */
    void SetBannerPosition(CATPrintBannerPosition iPosition);
 
/**
 * Returns the string banner.
 * @return
 *   The string banner.
 */
    const CATUnicodeString& GetBanner(void) const;

/**
 * Sets the string banner.
 * @param iBanner
 *   The string banner.
 *   <br><b>Legal values</b>: The default is : Printed by $USER on $DATE $TIME
 */
    void SetBanner(const CATUnicodeString& iBanner);

/**
 * Returns the string banner with all keywords replaced by their value.
 * @return
 *   The expanded string banner.
 */
    CATUnicodeString GetExpandedBanner(void) const;

/**
 * Returns the logo visibility flag.
 * @return
 *   The logo visibility (1 if being seen, 0 either).
 */
    int GetLogoVisibility(void) const;

/**
 * Sets the logo visibility flag.
 * @param iFlag
 *   The logo visibility.
 *   <br><b>Legal values</b>: 1 if being seen, 0 either. The default is 0.
 */
    void SetLogoVisibility(int iFlag);

/**
 * Returns the path of the logo file name.
 * @return
 *   The path of the logo file name.
 */
    const CATString& GetLogoFileName(void) const;

/**
 * Sets the path of the logo file name.
 * @param iPath
 *   The path of the logo file name.
 *   <br><b>Legal values</b>: The default is blank path.
 */
    void SetLogoFileName(const CATString& iPath);
    
/**
 * Returns the print color mode.
 * @return
 *   The print color mode.
 */
    CATPrintColorMode GetColorMode(void) const;

/**
 * Sets the print color mode.
 * @param iColorMode
 *   The print color mode.
 *   <br><b>Legal values</b>: The default is CATPRINTRGB.
 */
    void SetColorMode(CATPrintColorMode iColorMode);

/**
 * Returns the print quality.
 * @return
 *   The print quality (between 0 to 100).
 */
    int  GetQuality(void) const;

/**
 * Sets the print quality.
 * @param iQuality
 *   The print quality 
 *   <br><b>Legal values</b>: between 0 to 100. The default is the minimum = 0.
 */
    void SetQuality(int iQuality);
    
/**
 * Returns the gamma correction.
 * @return
 *   The gamma correction.
 */
    float GetGamma(void) const;

/**
 * Sets the gamma correction.
 * @param iGamma
 *   The gamma correction (positive float).
 *   <br><b>Legal values</b>: The default is 1.
 */
    void  SetGamma(float iGamma);

/**
 * Returns the line with specification mode.
 * @return
 *   The line with specification mode.
 */
    CATPrintLineSpecification GetLineWidthSpecificationMode(void) const;

/**
 * Sets the line with specification mode.
 * @param iLwSpec 
 *   The line with specification mode.
 *   <br><b>Legal values</b>: The default is CATPRINT_ABSOLUTE.
 */
    void SetLineWidthSpecificationMode(CATPrintLineSpecification iLwSpec);

/**
 * Returns the line type specification mode.
 * @return
 *   The line type specification mode.
 */
    CATPrintLineSpecification GetLineTypeSpecificationMode(void) const;

/**
 * Sets the line type specification mode.
 * @param iLtSpec 
 *   The line type specification mode.
 *   <br><b>Legal values</b>: The default is CATPRINT_ABSOLUTE.
 */
    void SetLineTypeSpecificationMode(CATPrintLineSpecification iLtSpec);

/**
 * Returns the line cap. 
 * @return
 *   The line cap.
 */	
    CATPrintLineCap GetLineCap(void) const;

/**
 * Sets the line cap. 
 * @param iLineCap
 *   The line cap.
 *   <br><b>Legal values</b>: The default is CATPRINT_FLAT.
 */
    void SetLineCap(CATPrintLineCap iLineCap);

/**
 * Retrieves the background color. 
 * @param oRed
 *   The red component of the background color.
 * @param oGreen
 *   The green component of the background color.
 * @param oBlue
 *   The blue component of the background color.
 */	
    void GetBackgroundColor(float &oRed, float &oGreen, float &oBlue) const;

/**
 * Sets the background color. 
 * @param iRed
 *   The red component of the background color.
 *   <br><b>Legal values</b>: The default is 1.
 * @param iGreen
 *   The green component of the background color.
 *   <br><b>Legal values</b>: The default is 1.
 * @param iBlue
 *   The blue component of the background color.
 *   <br><b>Legal values</b>: The default is 1.
 */	
    void SetBackgroundColor(float iRed, float iGreen, float iBlue);

/**
 * Returns the Dot Per Inch (DPI). 
 * @return
 *   The DPI.
 */	
    int  GetDPI(void) const;

/**
 * Sets the Dot Per Inch (DPI). 
 * @param iDpi
 *   The DPI.
 * <br><b>Legal values</b>: The default is 150 dpi.
 */
    void SetDPI(int iDpi); 
   
/**
 * Returns the area printed.
 * @return
 *   The area printed.
 */
   CATPrintArea GetArea(void) const;

/**
 * Sets the area printed.
 * @param iArea
 *   <br><b>Legal values</b>: The default is CATPRINT_WHOLE_DOCUMENT.
 */
   void SetArea(CATPrintArea iArea);

/**
 * Returns the visualization parameters.
 * @return
 *   The visualization parameters.
 */
    CATPrintVisuParameters* GetVisuParameters(void);

/**
 * Sets the visualization parameters.
 * @param iVisuParameters
 *   <br><b>Legal values</b>: The default is CATPRINT_WHOLE_DOCUMENT.
 */
    void SetVisuParameters(CATPrintVisuParameters* iVisuParameters);

/**
 * Sets the use of the custom quality, the DPI will be used instead of the print quality. 
 * @param iUseCustomQuality
 *   <br><b>Legal values</b>: The default is FALSE.
 */
    void SetUseCustomQuality(CATBoolean iUseCustomQuality);

/**
 * Returns the use or not of the custom quality.
 * @return
 *   The use of the custom quality.
 */
    CATBoolean GetUseCustomQuality(void) const;

/**
 * Returns the use or not of image format as current format.
 * @return
 *   The use of the image format.
 */
	CATBoolean GetImageFormatUse(void) const;

/**
 * Sets the use of image format as current format.
 * @param iImageFormatUse
 *   <br><b>Legal values</b>: The default is FALSE.
 */
	void SetImageFormatUse(CATBoolean iImageFormatUse);

/**
 * Returns the use or not of blanking under texts.
 * @return
 *   The use of text blanking.
 */
    CATBoolean GetTextBlanking(void) const;

/**
 * Sets the use of blanking under texts.
 * @param iTextBlanking
 *   <br><b>Legal values</b>: The default is FALSE.
 */
    void SetTextBlanking(CATBoolean iTextBlanking);

/**
 * @nodoc
 * <br><b>Role:</b>This method sets the Line Type Overlap check parameter.
 * There was a problem happening when two lines with different line styles overlap.
 * The combined output did not show the correct line style of either of the two overlapped lines.
 * The LTO check algorithm is meant to fix this problem.
 * You can check the difference like this:
 * <ol>
 * <li>Make a drawing with a circle (2d drawing generated from some 3d cylinder part maybe).</li>
 * <li>Make a center line for this circle. Now center lines have a dash dot dash line style. </li>
 * <li>Now add a section line for this circle through the center (this will overlap the center line).
 * The section line will also have a dash dot dash style. </li>
 * </ol>
 * When the two lines overlap the resulting line is a solid line because the patterns overlap.
 * The LTO check algorithm fixes this problem in the print only.
 *
 * @param iLTOCheck
 *    The Line Type Overlap check parameter. 
 *    <br><tt>TRUE</tt>: The print preview and the actual print will show
 *       the correct line style of the line based on the depth of the overlapped lines.
 *       The visualization of the drawing still shows the error.
 *    <br><tt>FALSE</tt>: The print preview and the actual print are such as the 
 *                        visualization aspect.
 */
    void SetLTOCheck(CATBoolean iLTOCheck);

/**
 * @nodoc
 * <br><b>Role:</b> This method returns the Line Type Overlap check parameter state. Refer 
 *   to the @href #SetLTOCheck method for complete details on the L.T.O. check. 
 *     
 * @return
 *    The Line Type Overlap check parameter state. 
 */
    CATBoolean GetLTOCheck(void) const;

/**
 * Returns the image referential mode.
 * If the image referential is kept with vectorial save, the method returns TRUE.
 * If the vectorial save sets the image referential as the left bottom corner, the method returns FALSE.
 * @return
 *   The image referential mode.
 */
    CATBoolean GetSaveWithImageReferentialKept(void) const;

/**
 * Sets the image referential mode.
 * If iImageReferentialKept is set to TRUE, the image referential is kept with vectorial save.
 * If iImageReferentialKept is set to FALSE, the vectorial save sets the image referential as the left bottom corner.
 * @param iImageReferentialKept
 *   <br><b>Legal values</b>: The default is FALSE.
 */
    void SetSaveWithImageReferentialKept(CATBoolean iImageReferentialKept);

/**
 * Sets the banner size.
 * @param iBannerSizeAvailability
 * <br><b>Legal values</b>
 * <dl>
 *  <dt>TRUE</dt>
 *  <dd>the banner size is set to iBannerSize.</dd>
 *  <dt>FALSE</dt>
 *  <dd>the banner size is set to default value.</dd>
 * </dl>
 * @param iBannerSize
 *   The text height of the banner.
 */
	void SetBannerSize(CATBoolean iBannerSizeAvailability, float iBannerSize=2.0);

/**
 * Returns the banner size.
 * <br><b>Role:</b> This method returns the banner size if it has been set by user.
 * @param oBannerSizeAvailability
 * <br><b>Legal values</b>
 * <dl>
 *  <dt>TRUE</dt>
 *  <dd>the banner size is set to oBannerSize.</dd>
 *  <dt>FALSE</dt>
 *  <dd>the banner size is set to default value.</dd>
 * </dl>
 * @param oBannerSize
 *   The text height of the banner.
 */
	void GetBannerSize(CATBoolean& oBannerSizeAvailability, float& oBannerSize);

/**
 * Returns the use or not of the image title.
 * If the image title is saved into the generated file in case of save into a file, the method returns TRUE.
 * If the image title is not saved into the generated file in case of save into a file, the method returns FALSE.
 * @return
 *   The image title mode.
 */
    CATBoolean GetImageTitleUse(void) const;
    
/**
 * Sets the use or not of the image title.
 * If iImageTitleUse is set to TRUE, the image title is saved into the generated file in case of save into a file.
 * If iImageTitleUse is set to FALSE, the image title is not saved into the generated file in case of save into a file.
 * @param iImageTitleUse
 *   <br><b>Legal values</b>: The default is FALSE.
 */
    void SetImageTitleUse(CATBoolean iImageTitleUse);
/**
 * Sets the No Vertices option.
 * @param vertexOption
 * <br><b>Legal values</b>
 * <dl>
 *  <dt>CATPRINTVERTEX_ACTIVE</dt>
 *  <dd>No Vertices option is active.</dd>
 *  <dt>CATPRINTVERTEX_INACTIVE</dt>
 *  <dd>No Vertices option is inactive.</dd>
 *  <dt>CATPRINTVERTEX_DISABLE</dt>
 *  <dd>No Vertices option is disable.</dd>
 * </dl>
 */
    void SetVertexOption(CATPrintVertexOption vertexOption);

/**
 * Returns the No Vertices option.
 * @param vertexOption
 * <br><b>Legal values</b>
 * <dl>
 *  <dt>CATPRINTVERTEX_ACTIVE</dt>
 *  <dd>No Vertices option is active.</dd>
 *  <dt>CATPRINTVERTEX_INACTIVE</dt>
 *  <dd>No Vertices option is inactive.</dd>
 *  <dt>CATPRINTVERTEX_DISABLE</dt>
 *  <dd>No Vertices option is disable.</dd>
 * </dl>
 */
    CATPrintVertexOption GetVertexOption(void) const;

private:

    CATPrintForm _form;		  	// paper format

    float _xOffset, _yOffset,  		// position (relative to margins)
          _scale,              		// scale
          _leftMargin, _rightMargin,	// margins
          _topMargin, _bottomMargin,
          _gamma,                       // gamma factor
          _backgroundColor[3];

    int	  _mapToPaper,			// =1 in "map to paper" mode
          _whitePixel,			// =1 if white pixels are printed black,
          _quality,			    // from 1 to 100
          _logoVisibility,      // =1 to display logo
          _settingsVersion;     // =11  

    CATUnicodeString        _banner;
    CATPrintBannerPosition  _bannerPosition;
    CATString               _logoFileName;
    CATPrintRotation        _rotation;
    CATPrintColorMode       _colorMode;	
    CATPrintLineSpecification _lineTypeMode, _lineWidthMode;	
    CATPrintLineCap         _lineCap;
    int                     _dpi; 
    CATPrintStandard        _standard;
	CATPrintArea			_area;
	CATPrintVisuParameters* _visuParameters;
	CATBoolean				_useCustomQuality;
	CATBoolean				_imageFormatUse;
	CATBoolean				_textBlanking;
  // this is for checking the state of the LTO Check button -ETS
	CATBoolean        _ltoCheck;
	CATBoolean        _imageReferentialKept;
	CATBoolean _bannerSizeAvailability;
	float _bannerSize;
	CATBoolean _imageTitleUse;
	CATPrintVertexOption _vertexOption;
};

#endif
