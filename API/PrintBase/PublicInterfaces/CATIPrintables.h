#ifndef CATIPRINTABLES_H
#define CATIPRINTABLES_H

// COPYRIGHT DASSAULT SYSTEMES 2001

#include "CATIAV5Level.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
class CATPrintImage;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPrintBase IID IID_CATIPrintables;
#else
extern "C" const IID IID_CATIPrintables;
#endif

/**
 * Interface for printable objects.
 * This interface is used for the multidocuments printing.
 * The implementation of this interface allows to use the print dialog window
 * for multidocuments.
 */
class ExportedByCATPrintBase CATIPrintables : public CATBaseUnknown
{
    CATDeclareInterface;

public:

/**
 * Creates a CATPrintImage from the printable object.
 * @param iImageNumber
 *   The number of the image to be printed.
 * @param iIsWholeDocumentMode
 *   The IsWholeDocumentMode parameter decides to print the whole document or the display.
 * @return 
 *   The image created.
 */
    virtual CATPrintImage* CreatePrintableImages( int iImageNumber, int iIsWholeDocumentMode = 0) = 0;

#ifdef CATIAV5R8
/**
 * Clean the printable object environment.
 * This method can only be implemented in V5R8.
 */
    virtual HRESULT CleanPrintableImage( void ) = 0;
#endif

/**
 * Gets the count of images in the document.
 * @param oImagesNumber
 *   The count of images in the document.
 */
    virtual HRESULT GetImagesNumber( int& oImagesNumber ) = 0;

/**
 * Gets the print image name.
 * @param iImageNumber
 *   The number of the image to be printed.
 * @param oImageName
 *   The name of the image to be printed.
 */
    virtual HRESULT GetImageName( int iImageNumber, CATUnicodeString& oImageName) = 0;

/**
 * Gets the current image number.
 * @param iCurrentImageNumber
 *   The number of the current image.
 */
    virtual HRESULT GetCurrentImageNumber( int& iCurrentImageNumber) = 0;
};

#endif
