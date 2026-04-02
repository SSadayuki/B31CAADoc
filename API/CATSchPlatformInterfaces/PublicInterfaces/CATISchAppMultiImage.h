#ifndef CATISchAppMultiImage_H
#define CATISchAppMultiImage_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppMultiImage
 */

// This framework
#include "CATSchMultiImageEnum.h"

// System
#include "IUnknown.h"
#include "CATUnicodeString.h"

extern "C" const IID IID_CATISchAppMultiImage ;

/**
 * Interface to manage the image object in the Multi-Image-Object concept.
 * Application must derived implementation of this interface 
 * from CATEASchAppMultiImage.
 * <b>Role</b>: Manage the image object.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATISchAppMultiImageMaster;
class CATDocument;
class CATISchAppMultiImage : public IUnknown
{

  public:  

  /**
  * Get the master object of this image.
  * @param oMasterImage [out, IUnknown#Release]
  *   Pointer to the master object.
  */
  virtual HRESULT AppGetMasterObject (CATISchAppMultiImageMaster **oMasterImage) = 0;

  /**
  * Get the document where the master of this image object resides.
  * @param oDocument
  *   Pointer to the document. Do not release output pointer (no AddRef is done).
  * @param oDocumentName
  *   Name of the document containing the master.
  *	@param oSymbolicLinkName
  *   Name of the symbolic link.
  */
  virtual HRESULT AppGetMasterDocument (CATDocument	*&oDocument,
    CATUnicodeString &oDocumentName, CATUnicodeString	&oSymbolicLinkName) = 0;

  /**
  * Update the image object.
  * @param iMasterImage
  *   This is an optional input. 
  *   Not NULL - the application has a handle on the master to update 
  *   this image (for example in DSA application, the application will 
  *   make sure the ID of this image is the same as the input master).
  *   NULL - the application will find the master based on the specific way
  *   it models the MIO concept.
  * Sample case: the application will make sure the ID of this image is the same as the input master.
  * @param oImage
  *   Pointer to a new image object created if existing image object has to be
  *   replaced during the update process.
  *   This pointer is NULL if the image object is not replaced.
  */
  virtual HRESULT AppUpdate (const CATISchAppMultiImageMaster	*iMasterImage,
    CATISchAppMultiImage **oImage) = 0;

  /**
  * Check if the image object is up-to-date.
  * @param oStatus
  *   Possible Enum values: Enum values need to be mapped to those provided by PSP.
  */
  virtual HRESULT AppIsUpToDate (CATSchMIOImageStatus	&oStatus) = 0;

};
#endif
