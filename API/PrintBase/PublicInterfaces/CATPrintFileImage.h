#ifndef CATPRINTFILEIMAGE_H
#define CATPRINTFILEIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
#include "CATPrintBase.h"
#include "CATPrintImage.h"
#include "CATString.h"

#ifdef _CAT_ANSI_STREAMS
/** @c++ansi aew 2004-08-02.20:36:05 [Replace forward declaration of standard streams with iosfwd.h] **/
 #include "iosfwd.h" 
#else //!_CAT_ANSI_STREAMS 
class istream;
#endif //_CAT_ANSI_STREAMS
class CATPrintInterpreter;
class CATPrintGenerator;
class CATPrintParameters;
class CATPrintInputStream;

/**
 * Class to create print file images.
 */
class ExportedByCATPrintBase CATPrintFileImage : public CATPrintImage
{
    CATDeclareClass;

public:
    
/**
 * Constructs a CATPrintFileImage from a file.
 * @param iPath
 *   The path of the file.
 * @param iLanguage
 *   The language. 
 *   <br>The available languages used in CATIA to create an image are "CGM", 
 *   "TIFF", "RGB", "JPEG", "BMP" on both Windows and UNIX systems and "PICTURE" only
 *   on UNIX.
 */   
    CATPrintFileImage(const CATString& iPath, const CATString& iLanguage);

/**
 * Constructs a CATPrintFileImage from memory.
 * @param iBuffer
 *   The buffer of memory.
 * @param iBufferSize
 *   The size of the buffer.
 * @param iLanguage
 *   The language.
 *   <br>The available languages used in CATIA to create an image are "CGM", 
 *   "TIFF", "RGB", "JPEG", "BMP" on both Windows and UNIX systems and "PICTURE" only
 *   on UNIX.
 */
    CATPrintFileImage(const char* iBuffer, int iBufferSize, const CATString& iLanguage); 
    virtual ~CATPrintFileImage();

/**
 * Copy constructor.
 * @param iFileImage
 *   An existing <tt>CATPrintFileImage</tt>.
 */
    CATPrintFileImage(const CATPrintFileImage& iFileImage);

/**
 * Retrieves the size of the file image.
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
 * Computes the print file image with the appropriate generator 
 * and parameters.
 * @param iGenerator
 *   The generator.
 * @param iParameters
 *   The print parameters.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
    int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters& iParameters);

/**
 * Computes the print file image with the appropriate generator 
 * and parameters.
 * @param iGenerator
 *   The generator.
 * @param iParameters
 *   The print parameters.
 * @param iDecodeType
 *   This parameter indicates if this image will be added as a new image or into the same image.
 * @return
 *   The status of the method.
 *   <br><b>Legal values</b>: 0 -> KO, 1 -> OK.
 */
	virtual int Decode(CATPrintGenerator* iGenerator, const CATPrintParameters& iParameters, CATPrintDecodeType iDecodeType);

/**
 * @nodoc
 */
    const CATString& GetPath(void) const;

/**
 * @nodoc
 */
    const CATString& GetLanguage(void) const;

/**
 * Returns the title of the image.
 * @return
 *   The title of the image.
 */
    int GetTitle(CATUnicodeString& oTitle);

protected:

/**
 * Allocates the interpreter associated to the language.
 * @param iLanguage
 *   The language.
 */
    virtual void GetInterpreter(const CATString& iLanguage);

/**
 * @nodoc
 */
    istream*  _input;

/**
 * @nodoc
 */
	CATPrintInputStream* _inputStream;

 /**
 * @nodoc
 */
    CATPrintInterpreter *_interpreter;

/**
 * @nodoc
 */
    CATString _path;

/**
 * @nodoc
 */
    CATString _language;
};

#endif
