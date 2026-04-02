#ifndef CATEASchAppMultiImageMaster_H
#define CATEASchAppMultiImageMaster_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATBooleanDef.h"
#include "CATUnicodeString.h"
#include "CATICStringList.h"
#include "CATIUnknownList.h"
#include "CATDocument.h"
#include "CATISchAppConnectable.h"
#include "CATISchAppMultiImage.h"

/**
 * Super class to derive implementation for interface CATISchAppMultiImageMaster
 * <b>Role</b>: Adaptor
 */
//class CATICStringList;
//class CATIUnknownList;
//class CATDocument;
//class CATISchAppConnectable;
//class CATISchAppMultiImage;

class ExportedByCATSchItfCPP CATEASchAppMultiImageMaster : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppMultiImageMaster.
   */
  CATEASchAppMultiImageMaster();
  virtual ~CATEASchAppMultiImageMaster();  

  public:

  /**
  * List the images of this master object.
	* @param iLFilter
  *   A list of image class names for filtering (can be NULL).
	* @param oLUKImages [out, IUnknown#Release]
	*   A list of image pointers (a list of CATISchAppMultiImage pointers).
  */
  virtual HRESULT AppListImages (
    const CATICStringList	*iLFilter, CATIUnknownList **oLUKImages);

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
    CATUnicodeString &oNLSFileName, CATUnicodeString &oNLSFileKeyToMessage);

  /**
  * Add an image for this master object.
	* @param iImage
  *   Pointer to the image to link this master to.
  */
  virtual HRESULT AppAddImage (const CATISchAppConnectable *iImage);

  private:
  // do not implement
  CATEASchAppMultiImageMaster (CATEASchAppMultiImageMaster &);
  CATEASchAppMultiImageMaster& operator=(CATEASchAppMultiImageMaster&);
};

#endif
