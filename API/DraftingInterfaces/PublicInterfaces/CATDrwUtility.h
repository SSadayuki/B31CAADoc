#ifndef CATDrwUtility_H
#define CATDrwUtility_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATDrwTextPropertiesEnum.h"

/**
* Text properties.
* <br>These properties apply to a text sub-string or to whole text.
* @param CATDrwBold
*   Set or unset bold property.
*   <br>Expected values are 1 to set and 0 to unset.
* @param CATDrwItalic
*   Set or unset italic property.
*   <br>Expected values are 1 to set and 0 to unset.
* @param CATDrwUnderline
*   Set or unset underline property (Underline is exclusive with overline).
*   <br>Expected values are 1 to set and 0 to unset.
* @param CATDrwOverline
*   Set or unset overline property (Overline is exclusive with underline).
*   <br>Expected values are 1 to set and 0 to unset.
* @param CATDrwStrikethrough
*   Set or unset strikethrough property.
*   <br>Expected values are 1 to set and 0 to unset.
* @param CATDrwSubscript
*   Set or unset subscript property (Subscript is exclusive with superscript).
*   <br>Expected values are 1 to set and 0 to unset.
* @param CATDrwSuperscript
*   Set or unset superscript property (Superscript is exclusive with subscript).
*   <br>Expected values are 1 to set and 0 to unset.
* @param CATDrwFontSize
*   Set font size property.
*   <br>Size value must be a double values.
* @param CATDrwParagraph
*   Internal use only.
* @param CATDrwPlain
*   Internal use only.
* @param CATDrwColor
*   Set color property;
*   <br>Color is must be expressed in RGBA compacted in one integer.
* @param CATDrwFontName
*   Set font name.
* @param CATDrwBorder
*   Set or unset sub-string border property.
* @param CATDrwAlignment
*   Set paragraph alignment property.
*   <br>Expected values are 1 for left, 2 for center and 3 for right alignment.
* @param CATDrwVariable
*   Internal use only.
* @param CATDrwCharRatio
*   Character ratio property
* @param CATDrwTabChar
*   Internal use only.
* @param CATDrwKerning
*   Available only in CXR16 LA with var "DEVOTF_CXR16LA"
* @param CATDrwAppText
*   Internal use only.
* @see CATIDrwText, CATIDrwTextProperties
*/
enum CATDrwTextProperty { CATDrwBold          , CATDrwItalic        , CATDrwUnderline       , 
                          CATDrwOverline      , CATDrwStrikethrough , CATDrwSubscript       , 
                          CATDrwSuperscript   , CATDrwFontSize      , CATDrwParagraph       , 
                          CATDrwPlain         , CATDrwColor         , CATDrwFontName        , 
                          CATDrwBorder        , CATDrwAlignment     , CATDrwVariable        , 
                          CATDrwCharRatio     , CATDrwTabChar       , CATDrwCharacterSpacing, 
                          CATDrwKerning       , CATDrwSymbolName    , CATDrwAppText         ,
                          CATDrwAppKey};

/**
* Text properties.
* These properties apply to whole text. Do not use not documented values.
* @param CATDrwBorderMode
*   Allow to choose border with different margin.
* @param CATDrwAutoFlip
*   Allow to choose if the text will flip or not when rotated beyond 90 degrees.
* @param CATDrwLineSpacing
*   Allow to choose the line spacing.
* @param CATDrwLineSpacing
*   Allow to choose the character slant for slantable fonts (ie. stroke fonts).
* @param CATDrwCharSpacing
*   Allow to choose the inter character spacing.
* @param CATDrwFontPitch
*   Allow to choose if the font is fixed or variable
* @see CATIDrwText
*/
enum CATDrwTextSetting  { CATDrwBorderMode      , CATDrwAutoFlip        , CATDrwLineSpacing    , 
                          CATDrwCharSlant       , CATDrwCharSpacing     , CATDrwLineSpacingMode,
                          CATDrwMirroring       , CATDrwFontPitch       , CATDrwUnitDisplay,
                          CATDrwLinkedScale     , CATDrwBackField       , CATDrwSuperScriptOffset,
                          CATDrwSuperScriptSize , CATDrwSubScriptOffset , CATDrwSubScriptSize,
                          CATDrwBlankingActivity, CATDrwDisplayMode     , CATDrwVersion };
/**
* Text wrapping modes.
* @param CATDrwWrappingOff
*   Turn the text wrapping to off. The text will have no imposed width.
* @param CATDrwWrappingOn
*   Turn the text wrapping to on. 
* @param CATDrwWrappingAuto
*   Set the text width to the current width.
* @see CATIDrwText
*/
enum CATDrwWrappingMode { CATDrwWrappingOff   , CATDrwWrappingOn    , CATDrwWrappingAuto };   
                         
#endif
