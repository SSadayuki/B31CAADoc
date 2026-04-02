#ifndef CATISchAppMultiImageMaster_H
#define CATISchAppMultiImageMaster_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppMultiImageMaster
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

extern "C" const IID IID_CATISchAppMultiImageMaster ;

/**
 * Interface to manage the master object in the Multi-Image-Object concept.
 * Application must derived implementation of this interface 
 * from CATEASchAppMultiImageMaster.
 * <b>Role</b>: Manage the master object responsibilities.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATICStringList;
class CATIUnknownList; 
class CATDocument;
class CATISchAppConnectable;
class CATISchAppMultiImage;
class CATISchAppMultiImageMaster : public IUnknown
{

  public:  

  /**
  * List the images of this master object.
	* @param iLFilter
  *   A list of image class names for filtering (can be NULL).
	* @param oLUKImages [out, IUnknown#Release]
	*   A list of image pointers (a list of CATISchAppMultiImage pointers).
  */
  virtual HRESULT AppListImages (
    const CATICStringList	*iLFilter, CATIUnknownList **oLUKImages) = 0;

  /**
  * Check if OK to create an image of this master object.
  * @param iImageDoc
  *   Pointer to the document the image is in.
	* @param oBYes
  *   TRUE if this object is valid to be the master of a MIO relationship. 
	* @param oNLSFileName
  *   File name for the NLS messages.
	* @param oNLSFileKeyToMessage
  *   Message key to the application specific diagnostics.
  */
  virtual HRESULT AppIsOKToCreateImage (
    const CATDocument	*iImageDoc, CATBoolean &oBYes,
    CATUnicodeString &oNLSFileName, CATUnicodeString &oNLSFileKeyToMessage) = 0;

  /**
  * Add an image for this master object.
	* @param iImage
  *   Pointer to the image to link this master to.
  */
  virtual HRESULT AppAddImage (const CATISchAppConnectable *iImage) = 0;

};
#endif
