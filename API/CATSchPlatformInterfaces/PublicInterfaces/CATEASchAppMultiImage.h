#ifndef CATEASchAppMultiImage2_H
#define CATEASchAppMultiImage2_H

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

#include "CATSchMultiImageEnum.h"

class CATISchAppMultiImage;
class CATISchAppMultiImageMaster;
class CATDocument;

/**
 * Super class to derive implementation for interface CATISchAppReplace.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppMultiImage : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppReplace.
   */
  CATEASchAppMultiImage();
  virtual ~CATEASchAppMultiImage();

  public:  

  /**
  * Get the master object of this image.
  * @param oMasterImage [out, IUnknown#Release]
  *   Pointer to the master object.
  */
  virtual HRESULT AppGetMasterObject (CATISchAppMultiImageMaster **oMasterImage);

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
    CATUnicodeString &oDocumentName, CATUnicodeString	&oSymbolicLinkName);

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
  virtual HRESULT AppUpdate (const CATISchAppMultiImageMaster *iMasterImage,
    CATISchAppMultiImage **oImage);

  /**
  * Check if the image object is up-to-date.
  * @param oStatus
  *   Possible Enum values: Enum values need to be mapped to those provided by PSP.
  */
  virtual HRESULT AppIsUpToDate (CATSchMIOImageStatus &oStatus);

  private:
  // do not implement
  CATEASchAppMultiImage (CATEASchAppMultiImage &);
  CATEASchAppMultiImage& operator=(CATEASchAppMultiImage&);

};

#endif


