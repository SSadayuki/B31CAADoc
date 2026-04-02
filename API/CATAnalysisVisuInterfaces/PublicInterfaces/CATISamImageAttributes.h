#ifndef CATISamImageAttributes_H
#define CATISamImageAttributes_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATISamImageAttributes : interface designed to modify graphics attibutes of 
//                          "images"
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"

// System
#include "CATBoolean.h"

// This
#include "CATSamColorType.h"
#include "CATSamSymbolType.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageAttributes;

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> But modifications
 * may be done : <br> For example change the symbol iso or fringe attributes,...<br>
 * Query this interface in order to make some changes to an existing <i>Image</i>.
 */ 

class ExportedByCATSamVisuUUID CATISamImageAttributes : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
   /**
    * Gets information about the color of texts.
    * That is, if the color is Fixed or Variable. 
    * @param oColorType
    * The current type of color.
    * @see CATSamColorType
    */
  virtual HRESULT GetTextColorType(CATSamColorType& oColorType) = 0;

  /**
    * Defines the type of color for texts.
    * That is, if the color is Fixed or Variable. 
    * @param iColorType
    * The current type of color.
    * @see CATSamColorType
    */
  virtual HRESULT SetTextColorType(CATSamColorType  iColorType) = 0;

  /**
    * Gets the red, green, blue and alpha components color,
    * used when fixed color is choosen for texts.
    * @param oRedColor
    * The red component of the color.
    * @param oGreenColor
    * The green component of the color.
    * @param oBlueColor
    * The blue component of the color.
    * @param oAlphaColor
    * The alpha component of the color.
    */ 
  virtual HRESULT GetTextFixedColor(unsigned int& oRedColor,
                                    unsigned int& oGreenColor,
                                    unsigned int& oBlueColor,
                                    unsigned int& oAlphaColor) = 0;
  /**
    * Sets the red, green, blue and alpha components color,
    * used when fixed color is choosen for texts.
    * @param iRedColor
    * The red component of the color.<br>
    * <b>Legal values</b>: <tt>iRedColor</tt> ranges from 0 to 255.
    * @param iGreenColor
    * The green component of the color.<br>
    * <b>Legal values</b>: <tt>iGreenColor</tt> ranges from 0 to 255.
    * @param iBlueColor
    * The blue component of the color.<br>
    * <b>Legal values</b>: <tt>iBlueColor</tt> ranges from 0 to 255.
    * @param iAlphaColor
    * The alpha component of the color.<br>
    * <b>Legal values</b>: <tt>iAlphaColor</tt> ranges from 0 to 255.<br>
    * <b>Default value</b>: <tt>iAlphaColor</tt> is 255.
    */
  virtual HRESULT SetTextFixedColor(const unsigned int iRedColor,
                                    const unsigned int iGreenColor,
                                    const unsigned int iBlueColor,
                                    const unsigned int iAlphaColor=255) = 0;

   /**
    * Gets information about the color of symbols.
    * That is, if the color is Fixed or Variable. 
    * @param oColorType
    * The current type of color.
    * @see CATSamColorType
    */
  virtual HRESULT GetSymbolColorType(CATSamColorType& oColorType) = 0;

  /**
    * Defines the type of color for symbols.
    * That is, if the color is Fixed or Variable. 
    * @param iColorType
    * The current type of color.
    * @see CATSamColorType
    */
  virtual HRESULT SetSymbolColorType(CATSamColorType  iColorType) = 0;

  /**
    * Gets the red, green, blue and alpha components color,
    * used when fixed color is choosen for symbols.
    * @param oRedColor
    * The red component of the color.
    * @param oGreenColor
    * The green component of the color.
    * @param oBlueColor
    * The blue component of the color.
    * @param oAlphaColor
    * The alpha component of the color.
    */ 
  virtual HRESULT GetSymbolFixedColor(unsigned int& oRedColor,
                                      unsigned int& oGreenColor,
                                      unsigned int& oBlueColor,
                                      unsigned int& oAlphaColor) = 0;
  /**
    * Sets the red, green, blue and alpha components color,
    * used when fixed color is choosen for symbols.
    * @param iRedColor
    * The red component of the color.<br>
    * <b>Legal values</b>: <tt>iRedColor</tt> ranges from 0 to 255.
    * @param iGreenColor
    * The green component of the color.<br>
    * <b>Legal values</b>: <tt>iGreenColor</tt> ranges from 0 to 255.
    * @param iBlueColor
    * The blue component of the color.<br>
    * <b>Legal values</b>: <tt>iBlueColor</tt> ranges from 0 to 255.
    * @param iAlphaColor
    * The alpha component of the color.<br>
    * <b>Legal values</b>: <tt>iAlphaColor</tt> ranges from 0 to 255.<br>
    * <b>Default value</b>: <tt>iAlphaColor</tt> is 255.
    */
  virtual HRESULT SetSymbolFixedColor(const unsigned int iRedColor,
                                      const unsigned int iGreenColor,
                                      const unsigned int iBlueColor,
                                      const unsigned int iAlphaColor=255) = 0;

  /**
    * Retrieves the type of symbol displayed.(CATSamSymbolType_SingleArrow/CATSamSymbolType_DoubleArrow/...)
    * @param oSymbolType
    * The current type of symbol.
    * @see CATSamSymbolType
    */
  virtual HRESULT GetSymbolType(CATSamSymbolType& oSymbolType) = 0;

  /**
    * Defines the type of symbol to display. (CATSamSymbolType_SingleArrow/CATSamSymbolType_DoubleArrow/...)
    * @param iSymbolType
    * The current type of symbol.
    * @see CATSamSymbolType
    */
  virtual HRESULT SetSymbolType(CATSamSymbolType  iSymbolType) = 0;

  /**
    * Retrieves if the size of symbols displayed is fixed or variable.
    * @param oVariationTrueOrFalse
    * The size is VARIABLE or not 
    */
  virtual HRESULT GetSymbolLengthVariation(CATBoolean& oVariationTrueOrFalse) = 0;

  /**
    * Sets if the size of symbols to display is fixed or variable.
    * @param iVariationTrueOrFalse
    * The size is VARIABLE or not <br>
    * <b>Legal value</b>: <tt>VARIABLE Length</tt> is TRUE.<br>
    * <b>Legal value</b>: <tt>FIXED Length</tt> is FALSE.
    */
  virtual HRESULT SetSymbolLengthVariation(CATBoolean  iVariationTrueOrFalse) = 0;

  /**
    * Retrieves the min size of symbol displayed.
    * @param oMinSymbolLength
    * <b>This float represents</b>: <br> 
    *   the length associated to the smallest value if length is variable <br>
    */
  virtual HRESULT GetMinSymbolLength(float& oMinSymbolLength) = 0;

  /**
    * Defines the min size of symbol to display.
    * @param iMinSymbolLength
    * <b>This float represents</b>: <br> 
    *   the length associated to the smallest value if length is variable <br>
    */
  virtual HRESULT SetMinSymbolLength(float  iMinSymbolLength) = 0;

  /**
    * Retrieves the size of symbol displayed.
    * @param oSymbolLength
    * <b>This float represents</b>: <br> 
    *   the length associated to the biggest value if length is variable <br>
    *   the length associated to all the symbols if length is fixed
    */
  virtual HRESULT GetSymbolLength(float& oSymbolLength) = 0;

  /**
    * Defines the size of symbol to display.
    * @param iSymbolLength
    * <b>This float represents</b>: <br> 
    *   the length associated to the biggest value if length is variable <br>
    *   the length associated to all the symbols if length is fixed
    */
  virtual HRESULT SetSymbolLength(float  iSymbolLength) = 0;

  /**
    * Retrieves if the size of symbols displayed is fixed or not with Zoom
    * @param oSensitivityTrueOrFalse
    * The size changes with ZOOM or not 
    */
  virtual HRESULT GetZoomSensitivity(CATBoolean& oSensitivityTrueOrFalse) = 0;

  /**
    * Sets if the size of symbols to display is fixed or not with Zoom
    * @param iSensitivityTrueOrFalse
    * The size changes with ZOOM or not <br>
    * <b>Legal value</b>: <tt>sensitivity with ZOOM</tt> is TRUE.<br>
    * <b>Legal value</b>: <tt>NO sensitivity with ZOOM</tt> is FALSE.
    */
  virtual HRESULT SetZoomSensitivity(CATBoolean  iSensitivityTrueOrFalse) = 0;

   /**
    * Retrieves if elements (or faces)  without values are drawn.
    * This option is used for iso-pattern or fringe visu
    * (Color used for those elements is WHITE)
    * @param oDisplayTrueOrFalse
    * The display mode choosen
    */
  virtual HRESULT GetDisplayElementWithoutValue(CATBoolean& oDisplayTrueOrFalse) = 0;

   /**
    * Sets if elements (or faces) without values have to be drawn.
    * This option is used for iso-pattern or fringe visu
    * (Color used for those elements is WHITE)
    * @param iDisplayTrueOrFalse
    * <b>Legal value</b>: <tt>Element DISPLAYED</tt> is TRUE.<br>
    * <b>Legal value</b>: <tt>Element NOT DISPLAYED</tt> is FALSE.
    */
  virtual HRESULT SetDisplayElementWithoutValue(CATBoolean  iDisplayTrueOrFalse) = 0;

   /**
    * Retrieves if elements (or faces) outside selection are drawn.
    * This option is used for iso-pattern or fringe visu
    * (Color used for those elements is WHITE)
    * @param oDisplayTrueOrFalse
    * The display mode choosen
    */
  virtual HRESULT GetDisplayElementOutsideSelection(CATBoolean& oDisplayTrueOrFalse) = 0;

   /**
    * Sets if elements (or faces) outside selection have to be drawn.
    * This option is used for iso-pattern or fringe visu
    * (Color used for those elements is WHITE)
    * @param iDisplayTrueOrFalse
    * <b>Legal value</b>: <tt>Element DISPLAYED</tt> is TRUE.<br>
    * <b>Legal value</b>: <tt>Element NOT DISPLAYED</tt> is FALSE.
    */
  virtual HRESULT SetDisplayElementOutsideSelection(CATBoolean  iDisplayTrueOrFalse) = 0;

  /**
    * Retrieves the shrink coefficient.
    * @param oShrinkCoefficient
    * the shrink coefficient associated
    */
  virtual HRESULT GetShrinkCoefficient ( float & oShrinkCoefficient ) = 0;

  /**
    * Sets the shrink coefficient.
    * @param iShrinkCoefficient
    * the shrink coefficient to define
    */
  virtual HRESULT SetShrinkCoefficient ( float iShrinkCoefficient ) = 0;
};

CATDeclareHandler(CATISamImageAttributes, CATBaseUnknown);

#endif

