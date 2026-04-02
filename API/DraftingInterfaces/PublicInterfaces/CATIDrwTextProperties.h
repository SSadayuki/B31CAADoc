#ifndef CATIDrwTextProperties_H
#define CATIDrwTextProperties_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @deprecated V5R31 replacement CATIDftTextProperties
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "DraftingItfCPP.h"
#include "CATIDrwProperties.h"
#include "CATDrwTextPropertiesEnum.h"
#include "CATDrwUtility.h"
#include "CATUnicodeString.h"
#include "CATCollec.h"
#include "CATCORBABoolean.h"
#include "CATDftTextBoxDisplay.h"

class CATIDrwTextProperties_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwTextProperties;
#else
extern "C" const IID IID_CATIDrwTextProperties;
#endif

/**
* Interface to modify font and layout properties of any object that can be seen as a text block.
* <b>Role</b>: You can manage all the properties related to the font (font name and size, scoring, color, etc)
* or to the layout (justification, orientation, frame, etc) of any object that can be seen as a text block
* using this interface.
*/
class ExportedByDraftingItfCPP CATIDrwTextProperties : public CATIDrwProperties
{
  CATDeclareInterface;

  public:

   /**
   * Gets the short name of the font. 
   * @param oFontName
   *    The short name of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATFont
   */
   virtual HRESULT GetFontName( CATUnicodeString & oFontName ) = 0;

   /**
   * Sets the short name of the font.
   * @param iFontName
   *    The short name of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATFont
   */
   virtual HRESULT SetFontName( const CATUnicodeString & iFontName ) = 0;

   /**
   * Gets the size of the font in millimeter (mm).
   * @param oFontSize
   *    The size of the font in millimeter (mm).
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFontSize( double & oFontSize ) = 0;

   /**
   * Sets the size of the font in millimeter (mm).
   * @param iFontSize
   *    The size of the font in millimeter (mm).
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFontSize( const double & iFontSize ) = 0;

   /**
   * Gets the Color of the font.
   * @param oRed
   *    The red component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oGreen
   *    The green component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oBlue
   *    The blue component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oAlpha
   *    The alpha component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFontColor( unsigned int & oRed, unsigned int & oGreen, unsigned int & oBlue, unsigned int & oAlpha ) = 0;
   /**
   * @nodoc
   */
   virtual HRESULT GetColor( unsigned int & oRed, unsigned int & oGreen, unsigned int & oBlue, unsigned int & oAlpha ) = 0;

   /**
   * Sets the Color of the font.
   * @param iRed
   *    The red component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iGreen
   *    The green component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iBlue
   *    The blue component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iAlpha
   *    The alpha component of the font color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFontColor( const unsigned int & iRed, const unsigned int & iGreen, const unsigned int & iBlue, const unsigned int & iAlpha = 255 ) = 0;
   /**
   * @nodoc
   * This method is now replaced by @href CATIDrwTextProperties#SetFontColor
   */
   virtual HRESULT SetColor( const unsigned int & iRed, const unsigned int & iGreen, const unsigned int & iBlue, const unsigned int & iAlpha = 255 ) = 0;

   /**
   * Gets the Bold style of the font.
   * @param oBold
   *    The Bold style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetBold( boolean & oBold ) = 0;

   /**
   * Sets the Bold style of the font.
   * @param iBold
   *    The Bold style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetBold( const boolean & iBold ) = 0;

   /**
   * Gets the Italic style of the font.
   * @param oItalic
   *    The Italic style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetItalic( boolean & oItalic ) = 0;

   /**
   * Sets the Italic style of the font.
   * @param iItalic
   *    The Italic style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetItalic( const boolean & iItalic ) = 0;

   /**
   * Gets the Underline style of the font.
   *    <dd><i>Underline and Overline styles are usualy mutualy exclusive.</i>
   * @param oUnderline
   *    The Underline style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetUnderline( boolean & oUnderline ) = 0;

   /**
   * Sets the Underline style of the font.
   *    <dd><i>Underline and Overline styles are usualy mutualy exclusive.</i>
   * @param iUnderline
   *    The Underline style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetUnderline( const boolean & iUnderline ) = 0;

   /**
   * Gets the Overline style of the font.
   *    <dd><i>Underline and Overline styles are usualy mutualy exclusive.</i>
   * @param oOverline
   *    The Overline style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetOverline( boolean & oOverline ) = 0;

   /**
   * Sets the Overline style of the font.
   *    <dd><i>Underline and Overline styles are usualy mutualy exclusive.</i>
   * @param iOverline
   *    The Overline style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetOverline( const boolean & iOverline ) = 0;

   /**
   * Gets the StrikeThru style of the font.
   * @param oStrikeThru
   *    The StrikeThru style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetStrikeThru( boolean & oStrikeThru ) = 0;

   /**
   * Sets the StrikeThru style of the font.
   * @param iStrikeThru
   *    The StrikeThru style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetStrikeThru( const boolean & iStrikeThru ) = 0;

   /**
   * Gets the Superscript style of the font.
   *    <dd><i>Superscript and Subscript styles are mutualy exclusive.</i>
   * @param oSuperscript
   *    The Superscript style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSuperscript( boolean & oSuperscript ) = 0;

   /**
   * Sets the Superscript style of the font.
   *    <dd><i>Superscript and Subscript styles are mutualy exclusive.</i>
   * @param iSuperscript
   *    The Superscript style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetSuperscript( const boolean & iSuperscript ) = 0;

   /**
   * Gets the Subscript style of the font.
   *    <dd><i>Superscript and Subscript styles are mutualy exclusive.</i>
   * @param oSubscript
   *    The Subscript style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSubscript( boolean & oSubscript ) = 0;

   /**
   * Sets the Subscript style of the font.
   *    <dd><i>Superscript and Subscript styles are mutualy exclusive.</i>
   * @param iSubscript
   *    The Subscript style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetSubscript( const boolean & iSubscript ) = 0;

   /**
   * Gets the Justification of the text inside of its box.
   * @param oJustification
   *    The Justification of the text inside of its box.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwJustification
   */
   virtual HRESULT GetJustification( CATDrwJustification & oJustification ) = 0;

   /**
   * Sets the Justification of the text inside of its box.
   * @param iJustification
   *    The Justification of the text inside of its box.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwJustification
   */
   virtual HRESULT SetJustification( const CATDrwJustification & iJustification ) = 0;


 /**
   * Gets the kerning style of the font. 
   * @param oKerning
   *    The kerning style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetKerning( boolean & oKerning ) = 0;

 /**
   * Sets the Kerning style of the font.
   * @param iKerning
   *    The Kerning style of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetKerning( const boolean & iKerning ) = 0;

   /** 
   * Gets the wrapping text mode.
   * @param oMode
   *   Wrapping text mode.
   *   <br>Refer to CATDrwUtility. 
   */
   virtual HRESULT IsWrapped(CATDrwWrappingMode & oMode) = 0;
   
   /**
   * Sets or unset the wrapping width.
   * @param iMode 
   *   wrapping text mode.
   *   <br>Refer to CATDrwUtility. 
   * @param iWidth 
   *   Wrapping Width value. 
   */
   virtual HRESULT SetWrappingWidth(CATDrwWrappingMode imode = CATDrwWrappingAuto, double iWidth = 0.) = 0;
   
   /**
   * Gets the text wrapping width.
   * @param oWidth 
   *   Wrapping width value.
   */
   virtual HRESULT GetWrappingWidth(double & oWidth) = 0;

   /**
   * Gets the AnchorPoint of the text box.
   * @param oAnchorPoint
   *    The AnchorPoint of the text box.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwAnchorPoint
   */
   virtual HRESULT GetAnchorPoint( CATDrwAnchorPoint & oAnchorPoint ) = 0;

   /**
   * Sets the AnchorPoint of the text box.
   * @param iAnchorPoint
   *    The AnchorPoint of the text box.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwAnchorPoint
   */
   virtual HRESULT SetAnchorPoint( const CATDrwAnchorPoint & iAnchorPoint ) = 0;

   /**
   * Gets all the frame types supported by the text.
   * @param oNbOfSupportedFrameTypes
   *    The number of frame types supported by the text.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>-1
   *    <dd>Supports all frame types defined by CATDrwFrameType enum. 
   *    <dt>0
   *    <dd>No frame type supported.
   *    <dd>1+
   *    <dd>Number of frame types supported by the text.
   *    <dt>Their type is given in oSupportedFrameTypesArray.
   *    </dl>
   * @param oSupportedFrameTypesArray
   *    Array of all the CATDrwFrameType supported by the text. 
   *    Can be NULL.
   *    <dd><i>Must be allocated by the callee and deleted by the caller.</i>
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwFrameType
   */
   virtual HRESULT GetSupportedFrameTypes( int & oNbOfSupportedFrameTypes, CATDrwFrameType ** oSupportedFrameTypesArray ) = 0;

   /**
   * @nodoc Not implemented yet.
   * Gets the list of supported frames. The list of frame names is ordered as defined in the standard
   */
   virtual HRESULT GetOrderedSupportedFrameNames(CATListOfCATUnicodeString &oOrderedSupportedFrameNames) = 0;

   /**
   * Gets the Type of the Frame surrounding the text.
   * @param oFrameType
   *    The Type of the Frame surrounding the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwFrameType
   */
   virtual HRESULT GetFrameType( CATDrwFrameType & oFrameType ) = 0;

   /**
   * Sets the Type of the Frame surrounding the text.
   * @param iFrameType
   *    The Type of the Frame surrounding the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwFrameType
   */
   virtual HRESULT SetFrameType( const CATDrwFrameType & iFrameType ) = 0;

   /**
   * @nodoc Not implemented yet.
   */
   virtual HRESULT GetFrameName(CATUnicodeString &oFrameName) = 0;

   /**
   * @nodoc Not implemented yet.
   */
   virtual HRESULT SetFrameName(const CATUnicodeString &iFrameName) = 0;

   /**
   * Gets the Color of the frame.
   * @param oRed
   *    The red component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oGreen
   *    The green component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oBlue
   *    The blue component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oAlpha
   *    The alpha component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFrameColor( unsigned int & oRed, unsigned int & oGreen, unsigned int & oBlue, unsigned int & oAlpha ) = 0;

   /**
   * Sets the Color of the frame.
   * @param iRed
   *    The red component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iGreen
   *    The green component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iBlue
   *    The blue component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iAlpha
   *    The alpha component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFrameColor( const unsigned int & iRed, const unsigned int & iGreen, const unsigned int & iBlue, const unsigned int & iAlpha = 255 ) = 0;

   /**
   * Gets the Thickness of the frame.
   * @param oThickness
   *    The indice defining the thickness of the frame.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT GetFrameThickness( unsigned int & oThickness ) = 0;

   /**
   * Sets the Thickness of the frame.
   * @param iThickness
   *    The indice defining the thickness of the frame.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT SetFrameThickness( const unsigned int & iThickness ) = 0;

   /**
   * Gets the LineType of the frame.
   * @param oLineType
   *    The indice defining the line type of the frame.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT GetFrameLineType( unsigned int & oLineType ) = 0;

   /**
   * Sets the LineType of the frame.
   * @param iLineType
   *    The indice defining the line type of the frame.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT SetFrameLineType( const unsigned int & iLineType ) = 0;

   /**
   * Gets the Type of the Frame surrounding the text.
   * @param oFill
   *    oFill = 0 -> Frame has no fill. 
   *    oFill = 1 -> Frame has a fill.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.  
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFrameFill( int & oFill ) = 0;

   /**
   * Sets the fill of the Frame surrounding the text.
   * @param iFill
   *    iFill has only 2 values : 
   *       - 0 : The frame has no fill. 
   *       - 1 : The frame has a fill.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFrameFill( const int & iFill ) = 0;

   /**
   * Gets the Color of the fill of the frame.
   * @param oRed
   *    The red component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oGreen
   *    The green component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oBlue
   *    The blue component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oAlpha
   *    The alpha component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFrameFillColor( unsigned int & oRed, unsigned int & oGreen, unsigned int & oBlue, unsigned int & oAlpha ) = 0;

   /**
   * Sets the Color of the fill of the frame.
   * @param iRed
   *    The red component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iGreen
   *    The green component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iBlue
   *    The blue component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iAlpha
   *    The alpha component of the frame color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFrameFillColor( const unsigned int & iRed, const unsigned int & iGreen, const unsigned int & iBlue, const unsigned int & iAlpha = 255 ) = 0;

   /**
   * Gets the Type of the Frame surrounding the text.
   * @param oMargin1
   * @param oMargin2
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.  
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFrameMargin( double & oMargin1, double & oMargin2) = 0;

   /**
   * Sets the fill of the Frame surrounding the text.
   * @param iMargin1
   * @param iMargin2
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFrameMargin( const double & iMargin1, const double & iMargin2) = 0;

   /**
   * Gets all the engineering symbols supported by the annotation.
   * @param oSupportedSymbolsArray
   *    Array of all the symbol supported by the annotation. 
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSupportedSymbols(CATListOfCATUnicodeString  & oSupportedSymbols ) = 0;
  
   /**
   * Gets the engineering symbol attached to the annotation.
   * @param oSymbol
   *    The engineering symbol attached to the annotation.
   *    The list of available symbols is obtained by the method GetSupportedSymbols.
   *    @see CATIDrwTextProperties#GetSupportedSymbols
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSymbol(CATUnicodeString & oSymbol ) = 0;

   /**
   * Sets the engineering symbol attached to the text.
   * @Precondition: The list of available symbols is obtained by the method GetSupportedSymbols
   *    @see CATIDrwTextProperties#GetSupportedSymbols
   * @param iSymbol
   *    The engineering symbol attached to the annotation.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetSymbol( const CATUnicodeString & iSymbol ) = 0;

   /**
   * @deprecated V5R17 use CATIDrwTextProperties#GetSupportedSymbols(CATListOfCATUnicodeString & oSupportedSymbolsArray)
   */
   virtual HRESULT GetSupportedSymbols( int & oNbOfSupportedSymbols, CATDrwSymbol ** oSupportedSymbolsArray ) = 0;
  
   /**
   * @deprecated V5R17 use CATIDrwTextProperties#GetSymbol(CATUnicodeString & oSymbol)
   */
   virtual HRESULT GetSymbol( CATDrwSymbol & oSymbol ) = 0;

  /**
   * @deprecated V5R17 use CATIDrwTextProperties#SetSymbol(const CATUnicodeString & iSymbol)
   */
   virtual HRESULT SetSymbol( const CATDrwSymbol & iSymbol ) = 0;


   /**
   * Gets the AutoFlip style of the font.
   * @param oAutoFlip
   *    The AutoFlip style of the font.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>True 
   *    <dd>writing angle between -90 deg and +90 deg.
   *    <dt>False
   *    <dd>writing angle between   0 deg and 360 deg.
   *    </dl>
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetAutoFlip( boolean & oAutoFlip ) = 0;

   /**
   * Sets the AutoFlip style of the font.
   * @param iAutoFlip
   *    The AutoFlip style of the font.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>True 
   *    <dd>writing angle between -90 deg and +90 deg.
   *    <dt>False
   *    <dd>writing angle between   0 deg and 360 deg.
   *    </dl>
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetAutoFlip( const boolean & iAutoFlip ) = 0;

   /**
   * Gets the LineSpacing mode of the text.
   * @param oLineSpacingMode
   *    The LineSpacing mode of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwLineSpacingDefinition
   */
   virtual HRESULT GetLineSpacingMode( CATDrwLineSpacingDefinition & oLineSpacingMode ) = 0;

   /**
   * Sets the LineSpacing mode of the text.
   * @param iLineSpacingMode
   *    The LineSpacing mode of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwLineSpacingDefinition
   */
   virtual HRESULT SetLineSpacingMode( const CATDrwLineSpacingDefinition & iLineSpacingMode ) = 0;

   /**
   * Gets the LineSpacing value of the text.
   * @param oLineSpacing
   *    The LineSpacing value of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwLineSpacingDefinition
   */
   virtual HRESULT GetLineSpacing( double & oLineSpacing ) = 0;

   /**
   * Sets the LineSpacing value of the text.
   * @param iLineSpacing
   *    The LineSpacing value of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwLineSpacingDefinition
   */
   virtual HRESULT SetLineSpacing( const double & iLineSpacing ) = 0;

   /**
   * Gets the Mirroring style of the text.
   * @param oMirroring
   *    The Mirroring style of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwMirroringDefinition
   */
   virtual HRESULT GetMirroring( CATDrwMirroringDefinition & oMirroring ) = 0;

   /**
   * Sets the Mirroring style of the text.
   * @param iMirroring
   *    The Mirroring style of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwMirroringDefinition
   */
   virtual HRESULT SetMirroring( const CATDrwMirroringDefinition & iMirroring ) = 0;

   /**
   * Gets the FontRatio value of the text.
   * @param oFontRatio
   *    The font ratio (width/height) value of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFontRatio( double & oFontRatio ) = 0;

   /**
   * Sets the FontRatio value of the text.
   * @param iFontRatio
   *    The font ratio (width/height) value of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFontRatio( const double & iFontRatio ) = 0;

   /**
   * Gets the FontSlant value of the text.
   * @param oFontSlant
   *    The font slant (angle) value of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetFontSlant( double & oFontSlant ) = 0;

   /**
   * Sets the FontSlant value of the text.
   * @param iFontSlant
   *    The font slant (angle) value of the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetFontSlant( const double & iFontSlant ) = 0;

   /**
   * Gets the Pitch of the font.
   * @param oFontPitch
   *    The Pitch of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwPitchDefinition
   */
   virtual HRESULT GetFontPitch( CATDrwPitchDefinition & oFontPitch ) = 0;

   /**
   * Sets the Pitch of the font.
   * @param iFontPitch
   *    The Pitch of the font.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwPitchDefinition
   */
   virtual HRESULT SetFontPitch( const CATDrwPitchDefinition & iFontPitch ) = 0;

   /**
   * Gets the character spacing of the font.
   * @param oCharSpacing
   *    The space between two character.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetCharacterSpacing( double & oCharSpacing ) = 0;

   /**
   * Sets the character spacing of the font.
   * @param iCharSpacing
   *    The space between two character.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetCharacterSpacing( const double & iCharSpacing ) = 0;

   /**
   * Gets the unit display mode of the text.
   * @param oUnitDisplayMode
   *    The display mode of units in a text (if the text contains (a) parameter(s) with unit(s))
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwUnitDisplayMode
   */
   virtual HRESULT GetUnitDisplayMode( CATDrwUnitDisplayMode & oUnitDisplayMode ) = 0;

   /**
   * Sets the unit display mode of the text.
   * @param iUnitDisplayMode
   *    The display mode of units in a text (if the text contains (a) parameter(s) with unit(s))
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwUnitDisplayMode
   */
   virtual HRESULT SetUnitDisplayMode( const CATDrwUnitDisplayMode & iUnitDisplayMode ) = 0;

   /**
   * Gets the scale behaviour of text.
   * @param oScaleMode
   *    The scale mode for the text (does the text follow the view scale ?)
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwScaleMode
   */
   virtual HRESULT GetScaleMode( CATDrwScaleMode & oScaleMode ) = 0;

   /**
   * Sets the scale behaviour of text.
   * @param iScaleMode
   *    The scale mode for the text (should the text follow the view scale ?)
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwScaleMode
   */
   virtual HRESULT SetScaleMode( const CATDrwScaleMode & iScaleMode ) = 0;

   /**
   * Sets all possible property values according to the ones defined by iValue.
   * @param iValue
   *    The object which text properties will be copied.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetValue( const CATIDrwTextProperties_var & iValue ) = 0;

   
   /**
   * Gets the text visualization mode.
   * @param oModeDisplay
   *    The text visualization mode 
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetTextBoxDisplay(CATDftTextBoxDisplay &oModeDisplay) = 0;

   /**
   * Sets the text visualization mode.
   * @param iModeDisplay
   *    The text visualization mode 
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetTextBoxDisplay(const CATDftTextBoxDisplay &iModeDisplay) = 0;

   /**
   * Gets the text back field mode.
   * @param oValue
   *    The text back field mode.
   *    <br><b>Legal values</b>:
   *    <dl> 0
   *    <dd>Back field mode is unset. 
   *    <dl> 1
   *    <dd>Back field mode is set. 
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetTextBackField(int &oValue) = 0;

   /**
   * Sets the text back field mode.
   * @param iValue
   *    The text back field mode.
   *    <br><b>Legal values</b>:
   *    <dl> 0
   *    <dd>Back field mode unset. 
   *    <dl> 1
   *    <dd>Back field mode set. 
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetTextBackField(const int &iValue) = 0;

   /**
   * Gets superscript offset factor.
   * @param oValue.
   *    The superscript offset factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSuperscriptOffsetFactor(double &oValue) = 0;

   /**
   * Sets superscript offset factor.
   * @param iValue.
   *    The superscript offset factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetSuperscriptOffsetFactor(const double &iValue) = 0;

   /**
   * Gets subscript offset factor.
   * @param oValue.
   *    The subscript offset factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSubscriptOffsetFactor(double &oValue) = 0;

   /**
   * Sets superscript offset factor.
   * @param iValue.
   *    The superscript offset factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetSubscriptOffsetFactor(const double &iValue) = 0;

   /**
   * Gets superscript size factor.
   * @param oValue.
   *    The superscript size factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSuperscriptSizeFactor(double &oValue) = 0;

   /**
   * Sets superscript size factor.
   * @param iValue.
   *    The superscript size factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetSuperscriptSizeFactor(const double &iValue) = 0;

   /**
   * Gets subscript size factor.
   * @param oValue.
   *    The subscript size factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetSubscriptSizeFactor(double &oValue) = 0;

   /**
   * Sets superscript size factor.
   * @param iValue.
   *    The superscript size factor.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetSubscriptSizeFactor(const double &iValue) = 0;

   /**
   * Get the blanking activity.
   * @param oBlankingMode
   *    The active mode on the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwUnitDisplayMode
   */
   virtual HRESULT GetBlankingMode( CATDrwBlankingMode & oBlankingMode ) = 0;

   /**
   * Sets the blanking activity.
   * @param iBlankingMode
   *    The mode to activate on the text.
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed. 
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATDrwBlankingMode
   */
   virtual HRESULT SetBlankingMode( const CATDrwBlankingMode & iBlankingMode ) = 0;


   /**
   * @nodoc
   */
   virtual HRESULT GetSupportedAnchorTypes(int &oNbSupportedAnchorTypes, CATDrwAnchorType **oSupportedAnchorTypes) = 0;

   /**
   * @nodoc
   * Gets the Color of the leader.
   * @param oRed
   *    The red component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oGreen
   *    The green component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oBlue
   *    The blue component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param oAlpha
   *    The alpha component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT GetShapesColor(unsigned int & oRed, unsigned int & oGreen, unsigned int & oBlue, unsigned int & oAlpha) = 0;

   /**
   * @nodoc
   * Sets the Color of the leader.
   * @param iRed
   *    The red component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iGreen
   *    The green component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iBlue
   *    The blue component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @param iAlpha
   *    The alpha component of the leader color.
   *    <br><b>Legal values</b>:
   *    <br>Between 0 and 255
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   */
   virtual HRESULT SetShapesColor(const unsigned int & iRed, const unsigned int & iGreen, const unsigned int & iBlue, const unsigned int & iAlpha = 255) = 0;

   /**
   *@nodoc
   * Gets the Thickness of the leader.
   * @param oThickness
   *    The indice defining the thickness of the leader.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT GetShapesThickness(unsigned int & oThickness) = 0;

   /**
   * @nodoc
   * Sets the Thickness of the leader.
   * @param iThickness
   *    The indice defining the thickness of the leader.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT SetShapesThickness(const unsigned int & iThickness) = 0;

   /**
   * @nodoc
   * Gets the LineType of the leader.
   * @param oLineType
   *    The indice defining the line type of the leader.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.
   *    <dd>No restriction.
   *    <dt>S_READONLY
   *    <dd>Method correctly executed.
   *    <dd>Returned value cannot be modified, it's read-only.
   *    <dd><i>Can be usefull when the property is fixed by a standard, etc.</i>
   *    <dt>S_UNDEFINED
   *    <dd>Method correctly executed.
   *    <dd>Returned value is undefined.
   *    <dd><i>Case of an object having several subparts supporting the same property with a different value.</i>
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT GetShapesLineType(unsigned int & oLineType) = 0;

   /**
   * @nodoc
   * Sets the LineType of the leader.
   * @param iLineType
   *    The indice defining the line type of the leader.
   *    <br><b>Legal values</b>:
   *    <br>Between 1 and 63
   * @return An HRESULT value.
   *    <br><b>Legal values</b>:
   *    <dl>
   *    <dt>S_OK
   *    <dd>Method correctly executed.
   *    <dd>No restriction.
   *    <dt>E_FAIL
   *    <dd>Method execution failed.
   *    <dd>Reasons of the failure are not given.
   *    <dt>E_IMPL
   *    <dd>No implementation available for this method.
   *    </dl>
   * @see CATVisPropertiesValues
   */
   virtual HRESULT SetShapesLineType(const unsigned int & iLineType) = 0;
};

CATDeclareHandler( CATIDrwTextProperties, CATIDrwProperties);

#endif
