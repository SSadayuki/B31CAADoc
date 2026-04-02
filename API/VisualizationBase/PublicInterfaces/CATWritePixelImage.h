// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATWritePixelImage_H
#define CATWritePixelImage_H

//------------------------------------------------------------------------------
// Abstract: Functions to Write 
//           Color Pixel Image or Texture in memory. 
//
//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
//
//--------------------------------------------------------------------------

#include "CATViz.h"

class CATPixelImage;
class CATString;

/** @nodoc */
enum CodingFormat { TC_UNCOMPRESSED , TC_PACKBITCOMPRESSED , INDEXE_UNCOMPRESSED ,
                    INDEXE_PACKBITCOMPRESSED , RGB_UNCOMPRESSED,
                    RGBA_UNCOMPRESSED,
                    UNCOMPRESSED, PACKBITS, CCITT_G4, INDEXED_UNCOMPRESSED, INDEXED_PACKBITS };


// Write RGB file
// Allowed coding formats are RGB_UNCOMPRESSED and RGBA_UNCOMPRESSED
/** @nodoc */
ExportedByCATViz int WriteRGBPixelImage(const CATPixelImage*, const char* pathName, CodingFormat codingFormat = RGB_UNCOMPRESSED);

// Write TIFF file(True color, not compressed, 1 strip only)
/** @nodoc */
ExportedByCATViz int WriteTIFFPixelImage(const CATPixelImage*, const char* pathName, CodingFormat codingFormat = UNCOMPRESSED);

// Write HP/RTL file(a scale may be applied)
// gama is optional, if not specified(-1.0 value) then best gama is calculated. 
/** @nodoc */
ExportedByCATViz int WriteHPRTLPixelImage(const CATPixelImage* pRGBImage, const char* pathName, float scale, int dpi, float gama=-1.0);

// Write HP/RTL file with maximum size specified
// maxSize is the maximum dimension in mm 
/** @nodoc */
ExportedByCATViz int WriteFixedSizeHPRTLPixelImage(const CATPixelImage* pRGBImage, const char* pathName, float maxSize, int dpi, float gama=-1.0);

// return value is a return code equal to 0 if ok. 

// Write a BMP File
/** @nodoc */
// compression = 0: uncompressed
// compression = 1: compressed
ExportedByCATViz int WriteBMPPixelImage(const CATPixelImage* pRGBImage, const char* pathName, int compresion = 0);
  // return 9     : bad entry format
  // return 1     : Can't open file
  // return 2,3,4 : problem during writing
  // return 5     : can't close file
  // return 6     : X or Y size of image = 0
  



// @@@@@@@@@@@@@@@@@ Tiff Bilevel @@@@@@@@@@@@@@@@@@

// Compression =1 ---> PackBit
// Compression =0 ---> Non Compresse
  
/** @nodoc */
ExportedByCATViz int WriteTIFFBWPixelImage(const CATPixelImage* pRGBImage, const char* pathName, CodingFormat codingFormat = CCITT_G4);
  // return 0  : ok
  // return 1  : No RGB PixelImage
  // return 2  : Image size = 0;
  // return 3  : Compression flag incorrect;

// =============== Tiff Grey  ===============

// Compression =1 ---> PackBit
// Compression =0 ---> Non Compresse

/** @nodoc */
ExportedByCATViz int WriteTIFFGreyPixelImage(const CATPixelImage* pRGBImage, const char* pathName, CodingFormat codingFormat = PACKBITS);
  // return 0  : ok
  // return 1  : No RGB or L PixelImage
  // return 2  : Image size = 0;
  // return 3  : Compression flag incorrect;
  // return 4  : memory error


// Writes a CATPixelImage to a JPEG file.
// <b>Role</b>:
// @param iPixelImage
//   The CATPixelImage to save.
// @param iPathName
//   The path to save the file to.
// @param iQuality
//   JPEG quality.
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>One of the standard quality levels enumerated in jpg_quality or an integer value between 1 and 100.</dt>
//     <dd>Low values give a better compression on the expense of the quality of the reconstructed image.</dd>
//   </dl>
// @param iMode
//   JPEG output mode.
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>One of the jpg_mode enum.</dt>
//   </dl>
// @return
//   An integer value. 
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>9</dt>
//     <dd>Bad entry format</dd>
//     <dt>1</dt>
//     <dd>Cannot open file for writing</dd>
//     <dt>5</dt>
//     <dd>Cannot close file</dd>
//     <dt>6</dt>
//     <dd>X or Y size of image = 0</dd>
//     <dt>-1</dt>
//     <dd>Null entry</dd>
//   </dl>
// @see CATPixelImage, jpg_quality, jpg_mode
/** @nodoc */
ExportedByCATViz int WriteJPEGPixelImage(const CATPixelImage* iPixelImage, const char* iPathName,
                                                   int iQuality = 75, int iMode = 0);

// Writes a CATPixelImage to a JPEG memory buffer.
// <b>Role</b>:
// @param iPixelImage
//   The CATPixelImage to save.
// @param oMemJPEGtoDelete
//   A pointer to the buffer the image has been saved in. The buffer must be de-allocated with delete[].
// @param oMemJPEGSize
//   The size of the generated JPEG buffer.
// @param iQuality
//   JPEG quality.
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>One of the standard quality levels enumerated in jpg_quality or an integer value between 1 and 100.</dt>
//     <dd>Low values give a better compression on the expense of the quality of the reconstructed image.</dd>
//   </dl>
// @param iMode
//   JPEG output mode.
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>One of the jpg_mode enum.</dt>
//   </dl>
// @return
//   An integer value. 
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>9</dt>
//     <dd>Bad entry format</dd>
//     <dt>1</dt>
//     <dd>Cannot open file for writing</dd>
//     <dt>5</dt>
//     <dd>Cannot close file</dd>
//     <dt>6</dt>
//     <dd>X or Y size of image = 0</dd>
//     <dt>-1</dt>
//     <dd>Null entry</dd>
//   </dl>
// @see CATPixelImage, jpg_quality, jpg_mode
/** @nodoc */
ExportedByCATViz int WriteToMemoryJPEGPixelImage(const CATPixelImage* iPixelImage, unsigned char** oMemJPEGtoDelete, int* oMemJPEGSize,
                                                           int iQuality = 75, int iMode = 0);

// Writes a CATPixelImage to a PNG memory buffer.
// <b>Role</b>:
// @param iPixelImage
//   The CATPixelImage to save.
// @param oMemPNGtoDelete
//   A pointer to the buffer the image has been saved in. The buffer must be de-allocated with delete[].
// @param oMemPNGSize
//   The size of the generated PNG buffer.
// @param iMode
//   PNG output mode.
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>One of the png_mode enum.</dt>
//   </dl>
// @return
//   An integer value. 
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>9</dt>
//     <dd>Bad entry format</dd>
//     <dt>1</dt>
//     <dd>Cannot open file for writing</dd>
//     <dt>5</dt>
//     <dd>Cannot close file</dd>
//     <dt>6</dt>
//     <dd>X or Y size of image = 0</dd>
//     <dt>-1</dt>
//     <dd>Null entry</dd>
//   </dl>
// @see CATPixelImage, png_quality, png_mode
/** @nodoc */
ExportedByCATViz int WriteToMemoryPNGPixelImage(const CATPixelImage* iPixelImage, unsigned char** oMemPNGtoDelete, int* oMemPNGSize,
                                                           int iMode = 0);

// Writes a CATPixelImage to a BMP memory buffer.
// <b>Role</b>:
// @param iPixelImage
//   The CATPixelImage to save.
// @param oMemBMPtoDelete
//   A pointer to the buffer the image has been saved in. The buffer must be de-allocated with delete[].
// @param oMemBMPSize
//   The size of the generated BMP buffer.
// @param iMode
//   BMP output mode.
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>One of the bmp_mode enum.</dt>
//   </dl>
// @return
//   An integer value. 
//   <br><b>Legal values</b>:
//   <dl>
//     <dt>9</dt>
//     <dd>Bad entry format</dd>
//     <dt>1</dt>
//     <dd>Cannot open file for writing</dd>
//     <dt>5</dt>
//     <dd>Cannot close file</dd>
//     <dt>6</dt>
//     <dd>X or Y size of image = 0</dd>
//     <dt>-1</dt>
//     <dd>Null entry</dd>
//   </dl>
// @see CATPixelImage, bmp_quality, bmp_mode
/** @nodoc */
ExportedByCATViz int WriteToMemoryBMPPixelImage(const CATPixelImage* iPixelImage, unsigned char** oMemJPEGtoDelete, int* oMemBMPSize,
                                                           int iMode = 0);

/** @nodoc */
ExportedByCATViz int WritePNGPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WriteCALSPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WriteIFFPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WriteIOCAPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WritePCXPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WritePICTPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WritePSDPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WriteRASTPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WriteTGAPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WriteXPMPixelImage(const CATPixelImage* pixelImage, const char* pathName);

/** @nodoc */
ExportedByCATViz int WriteXWDPixelImage(const CATPixelImage* pixelImage, const char* pathName);


#endif 
