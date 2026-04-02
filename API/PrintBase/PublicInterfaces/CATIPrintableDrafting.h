#ifndef CATIPRINTABLEDRAFTING_H
#define CATIPRINTABLEDRAFTING_H
/**
 * @quickReview PCD 02:06:10
 * @fullreview NSI PCD 01:07:02
 */

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPrintBase IID IID_CATIPrintableDrafting;
#else
extern "C" const IID IID_CATIPrintableDrafting;
#endif

#include "CATUnicodeString.h"
class CATPrintImage;

/**
 * Interface for printable objects.
 */
class ExportedByCATPrintBase CATIPrintableDrafting : public CATBaseUnknown
{
    CATDeclareInterface;

public:

/**
 * Creates a CATPrintImage from the printable object.
 * @param iClipToSheet
 *   The state of the ClipToSheet button.
 * <dl>
 * <dt> <tt>0</tt>  <dd> The created image corresponds to the whole drafting document.
 * <dt> <tt>1</tt>  <dd> The created image is restricted to the sheet size. Any object outside the sheet is discarded.
 * <dt> <tt>2</tt>  <dd> The created image is restricted to the defined print drafting area.
 * </dl>
 * @return 
 *   The image created.
 */
    virtual CATPrintImage* CreatePrintableImage( int iClipToSheet = 1 ) = 0;

/**
 * Clean the printable object environment.
 * @return 
 *   S_OK upon successful execution.
*/
    virtual HRESULT CleanPrintableImage( void ) = 0;

/**
 * Gets print image name.
 * @param oImageName
 *   The image name. 
 * @return 
 *   S_OK upon successful execution.
 */
    virtual HRESULT GetImageName( CATUnicodeString& oImageName ) = 0;

/**
 * Gets print image size.
 * @param oX
 *   The x image position.
 * @param oY
 *   The y image position.
 * @param oWidth
 *   The width image.
 * @param oHeight
 *   The height image.
 * @return 
 *   S_OK upon successful execution.
 */
    virtual HRESULT GetImageSize( float& oX, float& oY, float& oWidth, float& oHeight ) = 0;

/**
 * Retrieves a 2D print area defined on a sheet. Fills a table allocated by the caller.
 * Also communicates the activation state of the printing area.
 * @param <tt>double * oAreaData</tt>
 * [out] A four double table describing the parameter of the area box:
 * <dl>
 * <dt> oAreaData[0] as the low x coordinate of the area.
 * <dt> oAreaData[1] as the low y coordinate of the area.
 * <dt> oAreaData[2] as the width of the area.
 * <dt> oAreaData[3] as the heigth of the area.
 * <dt> All the values in the table are given in mm.
 * </dl>
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> A print area is defined on the sheet and it is currently activated. The data were successfully retrieved.
 * <dt> <tt>S_FALSE</tt>  <dd> A print area is defined on the sheet and it is currently de-activated. The data were successfully retrieved.
 * <dt> <tt>E_FAIL</tt>   <dd> No print area is defined on this sheet.
 * </dl>
 */
    virtual HRESULT GetPrintArea( double * oAreaData ) = 0;
};

CATDeclareHandler(CATIPrintableDrafting, CATBaseUnknown);

#endif
