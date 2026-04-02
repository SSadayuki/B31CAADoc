#ifndef CATPRINTTEXTATTRIBUTE_H
#define CATPRINTTEXTATTRIBUTE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Text attribute.
 * @param CATPRINTTEXT_TYPEFACE
 *   The typeface of the text is defined in the available fonts below.
 *   <br><b>Legal values</b>: The default is CATPRINTTEXT_DEFAULTFONT.
 * @param CATPRINTTEXT_CHARSET
 *   The character set of the text is defined in the available charsets below.
 * @param CATPRINTTEXT_HEIGHT
 *   The font height. Its value must be a positive floating-point value.
 *   <br><b>Legal values</b>: The default is 4.
 * @param CATPRINTTEXT_WIDTH
 *   The font width. Its value must be a positive floating-point value.
 * @param CATPRINTTEXT_WEIGHT
 *   The font weight is defined in the available weights below.
 *   <br><b>Legal values</b>: The default is CATPRINTTEXT_NORMAL.
 * @param CATPRINTTEXT_SLANT
 *   The slant angle of the characters. Its value must be a floating-point value in counterclockwise degrees.
 *   <br><b>Legal values</b>: The default is 0.
 * @param CATPRINTTEXT_DIRECTION
 *   The direction angle of the text. Its value must be a floating-point value in counterclockwise degrees.
 *   <br><b>Legal values</b>: The default is 0.
 * @param CATPRINTTEXT_ALIGNMENT
 *   The alignment of the text is defined in the available alignments below.
 *   <br><b>Legal values</b>: The default is CATPRINTTEXT_BASELEFT.
 * @param CATPRINTTEXT_EXTRASPACING
 *   The extra spacing between chars only for Windows. Its value must be a floating-point value.
 *   <br><b>Legal values</b>: The default is 0.
 * @param CATPRINTTEXT_EXPANSION
 *   The character expansion factor. Its value must be a floating-point value.
 *   <br><b>Legal values</b>: The default is 1.
 * @param CATPRINTTEXT_SPACING
 *   The character spacing factor. Its value must be a floating-point value.
 *   <br><b>Legal values</b>: The default is -10000.
 * @param CATPRINTTEXT_DEFAULTFONT
 *   The typeface of the text is the default font.
 * @param CATPRINTTEXT_COURIER
 *   The typeface of the text is the Courier font.
 * @param CATPRINTTEXT_HELVETICA
 *   The typeface of the text is the Helvetica font.
 * @param CATPRINTTEXT_TIMES
 *   The typeface of the text is the Times Roman font.
 * @param CATPRINTTEXT_SYMBOL
 *   The typeface of the text is the Symbol font.
 * @param CATPRINTTEXT_AVANTGARDE
 *   The typeface of the text is the ITC Avant Garde Gothic Book font.
 * @param CATPRINTTEXT_BOOKMAN
 *   The typeface of the text is the ITC Bookman font.
 * @param CATPRINTTEXT_SCHOOLBOOK
 *   The typeface of the text is the New Century Schoolbook font.
 * @param CATPRINTTEXT_PALATINO
 *   The typeface of the text is the Palatino font.
 * @param CATPRINTTEXT_ZAPFCHANCERY
 *   The typeface of the text is the ITC Zapf Chancery font.
 * @param CATPRINTTEXT_ZAPFDINGBATS
 *   The typeface of the text is the ITC Zapf Dingbats font.
 * @param CATPRINTTEXT_OTHERFONT
 *   The typeface of the text is another font not precised.
 * @param CATPRINTTEXT_FIRSTFONT
 *   The typeface of the text is the first font defined = CATPRINTTEXT_DEFAULTFONT.
 * @param CATPRINTTEXT_LASTFONT
 *   The typeface of the text is the last font defined = CATPRINTTEXT_ZAPFDINGBATS.
 * @param CATRINTTEXT_STANDARD
 *   The charset of the font is the standard one.
 * @param CATPRINTTEXT_VERYLIGHT
 *   The weight of the font is very light.
 * @param CATPRINTTEXT_LIGHT
 *   The weight of the font is light.
 * @param CATPRINTTEXT_NORMAL
 *   The weight of the font is normal.
 * @param CATPRINTTEXT_BOLD
 *   The weight of the font is bold.
 * @param CATPRINTTEXT_VERYBOLD
 *   The weight of the font is very bold.
 * @param CATPRINTTEXT_BOTTOMLEFT
 *   The alignment of the text is bottom left.
 * @param CATPRINTTEXT_BASELEFT
 *   The alignment of the text is base left.
 * @param CATPRINTTEXT_HALFLEFT
 *   The alignment of the text is half left.
 * @param CATPRINTTEXT_TOPLEFT
 *   The alignment of the text is top left.
 * @param CATPRINTTEXT_BOTTOMCENTER
 *   The alignment of the text is bottom center.
 * @param CATPRINTTEXT_BASECENTER
 *   The alignment of the text is base center.
 * @param CATPRINTTEXT_HALFCENTER
 *   The alignment of the text is half center.
 * @param CATPRINTTEXT_TOPCENTER
 *   The alignment of the text is top center.
 * @param CATPRINTTEXT_BOTTOMRIGHT
 *   The alignment of the text is bottom right.
 * @param CATPRINTTEXT_BASERIGHT
 *   The alignment of the text is base right.
 * @param CATPRINTTEXT_HALFRIGHT
 *   The alignment of the text is half right.
 * @param CATPRINTTEXT_TOPRIGHT
 *   The alignment of the text is top right.
 * @param CATPRINTTEXT_PITCH
 *   internal use only.
 * @param CATPRINTTEXT_KERNING
 *   internal use only.
 *   Specify whether the font kerning is enabled. Its value may be 1 (enabled) or 0 (disabled).
 *   <br><b>Legal  values</b>:  The  default  is 0.
 * @param CATPRINTTEXT_VERSION
 *   internal use only.
 */
enum CATPrintTextAttribute
{
    CATPRINTTEXT_TYPEFACE,          // Typeface. See below for available fonts
    CATPRINTTEXT_CHARSET,           // Charset. See below for available charsets
    CATPRINTTEXT_HEIGHT,            // Font height. Positive, floating-point value
    CATPRINTTEXT_WIDTH,             // Font width. Positive, floating-point value
    CATPRINTTEXT_WEIGHT,            // Stroke weight. See below for available weights
    CATPRINTTEXT_SLANT,             // Floating-point angle (CCW, degrees)
    CATPRINTTEXT_DIRECTION,         // Floating-point angle (CCW, degrees)
    CATPRINTTEXT_ALIGNMENT,         // Alignment. See below for available alignments
    CATPRINTTEXT_EXTRASPACING,      // Extra spacing between chars
    CATPRINTTEXT_EXPANSION,         // Character expansion factor
    CATPRINTTEXT_SPACING,           // Character spacing factor

    // Available typefaces
    CATPRINTTEXT_DEFAULTFONT,       // Default font
    CATPRINTTEXT_COURIER,           // Courier
    CATPRINTTEXT_HELVETICA,         // Helvetica
    CATPRINTTEXT_TIMES,             // Times Roman
    CATPRINTTEXT_SYMBOL,            // Symbol
    CATPRINTTEXT_AVANTGARDE,        // ITC Avant Garde Gothic Book
    CATPRINTTEXT_BOOKMAN,           // ITC Bookman
    CATPRINTTEXT_SCHOOLBOOK,        // New Century Schoolbook
    CATPRINTTEXT_PALATINO,          // Palatino
    CATPRINTTEXT_ZAPFCHANCERY,      // ITC Zapf Chancery
    CATPRINTTEXT_ZAPFDINGBATS,      // ITC Zapf Dingbats
    CATPRINTTEXT_OTHERFONT,         // Other font

    CATPRINTTEXT_FIRSTFONT = CATPRINTTEXT_DEFAULTFONT,
    CATPRINTTEXT_LASTFONT  = CATPRINTTEXT_ZAPFDINGBATS,

    // Available charsets
    CATPRINTTEXT_STANDARD,

    // Available weights
    CATPRINTTEXT_VERYLIGHT,
    CATPRINTTEXT_LIGHT,
    CATPRINTTEXT_NORMAL,
    CATPRINTTEXT_BOLD,
    CATPRINTTEXT_VERYBOLD,

    // Available alignments
    CATPRINTTEXT_BOTTOMLEFT,
    CATPRINTTEXT_BASELEFT,
    CATPRINTTEXT_HALFLEFT,
    CATPRINTTEXT_TOPLEFT,
    CATPRINTTEXT_BOTTOMCENTER,
    CATPRINTTEXT_BASECENTER,
    CATPRINTTEXT_HALFCENTER,
    CATPRINTTEXT_TOPCENTER,
    CATPRINTTEXT_BOTTOMRIGHT,
    CATPRINTTEXT_BASERIGHT,
    CATPRINTTEXT_HALFRIGHT,
    CATPRINTTEXT_TOPRIGHT,

    CATPRINTTEXT_PITCH,            // Stroke pitch.
    CATPRINTTEXT_KERNING,
    CATPRINTTEXT_VERSION
};

#endif







