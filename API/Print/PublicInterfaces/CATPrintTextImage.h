#ifndef CATPRINTTEXTIMAGE_H
#define CATPRINTTEXTIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATPrintImage.h"
#include "CATPrintParameters.h"
#include "CATUnicodeString.h"

class CATPrintGenerator;
class CATFont;

/**
 * @nodoc
 */
enum CATPRINTTEXT_ENCODING {CATPRINTTEXT_ASCII, CATPRINTTEXT_UNICODE, CATPRINTTEXT_UNICODE_BIG_ENDIAN};


/**
 * Class used to print text files.
 */
class ExportedByCATPrint CATPrintTextImage : public CATPrintImage
{
public:

/**
 * Constructs a CATPrintTextImage of a given language.
 * The available text encoding are ASCII and Unicode (Windows only).
 * @param iFileName
 *   The name of the file to print.
 */
    CATPrintTextImage(const CATUnicodeString& iFileName);
    virtual ~CATPrintTextImage();

/**
 * Set the title.
 * @param iTitle
 *   The title printed in the header of each page.
 */
    void SetTitle(const CATUnicodeString& iTitle);

/**
 * Set the font used to print the text.
 * @param iFont
 *   The font used.
 */
    void SetFont(const CATFont* iFont);

/**
 * Set the font size used to print the text.
 * @param iFontSize
 *   The font size used.
 * @param iUnit
 *   The unit used for font size.
 *   <br><b>Legal values</b>: The default is CATPRINTUNIT_MM.
 */
    void SetFontSize(float iFontSize, const CATPrintUnit& iUnit = CATPRINTUNIT_MM);

/**
 * Retrieves the size of the text image.
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
 * @nodoc
 */
    int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters& iParameters);

private:

	int DrawTextFile();
	int DrawASCIITextFile();
	int DrawUnicodeTextFile();
	int DrawUnicodeBigEndianTextFile();
    void Put(CATUnicodeString& s);
    void NewLine(void);
    void NewPage(void);

    CATPrintGenerator *_generator;
    CATPrintParameters _parameters;
    CATUnicodeString _fileName;
    CATUnicodeString _title;
	CATFont* _font;
    float _fontSize, _textWidth, _textHeight,
          _xMax, _yMax, _xPos, _yPos, _xStep, _yStep;
    int   _page;
	CATPRINTTEXT_ENCODING _textEncoding;
};

#endif
