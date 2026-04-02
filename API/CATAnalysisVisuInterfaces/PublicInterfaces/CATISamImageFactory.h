#ifndef CATISamImageFactory_H
#define CATISamImageFactory_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
//
// CATISamImageFactory : interface designed to create "images"
//
//=============================================================================
// June 2002 : Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// prereqs  System
#include "CATBaseUnknown.h"
#include "CATListOfCATBaseUnknown.h"
#include "CATBoolean.h"
class CATUnicodeString;
class CATString;

// prereqs SamVisuIterfaces 
class CATISamImage;

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageFactory;

/**
 * Analysis "images" creation.
 * <b>Role: </b> Analysis <i>Images</i> are 3D representation of analysis data.<br>
 * <i>Images</i> are defined in one or several XML files that describe :<br>
 * <li> allowed analysis data ( physical types, value type, ...)
 * <li> filters ( component, layer, ...)
 * <li> dress up attributes
 * <li> ...
 * Query this interface on the post-pro container to create new images<br>
 * or to add/remove XML image description files.
 * <br><u>Note :</u></b> if an image file named <i>MyFile.xml</i> is added, <br>
 * the images NLS names will be searched in the file <i>MyFile.CATNls</i>.
 */ 

class ExportedByCATSamVisuUUID CATISamImageFactory : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :
  
   /**
    * Add an XML image description file. <br>
    * If not called, the image description will be searched in the default files. 
    * @param iFilePath
    *   The path to the file to be added.
    */
    virtual HRESULT AddImageFile ( const CATUnicodeString & iFilePath ) = 0;

   /**
    * Remove an XML image description file.
    * @param iFilePath
    *   The path to the file to be removed.
    */
    virtual HRESULT RemoveImageFile ( const CATUnicodeString & iFilePath ) = 0;
    
   /**
    * Retrieve the list of loaded image files.
    * @param oNbImageFiles
    *   The number of loaded files
    * @param oFilePathes
    *   The pathes of loaded files
    */
    virtual HRESULT GetImageFiles ( int & oNbImageFiles , const CATUnicodeString * & oFilePathes ) = 0;

   /**
    * Create a new image.
    * @param iImageIdentifier
    *   the image's identifier (as found in the XML files).
    * @param iOwner
    *   the analysis set or entity under which the image will be plugged, and the created image
    *   will be added in the current Image Model.
    *   If NULL, <i>iValuesProviders</i> has to be specified and the created image will not be added 
    *   in the Image Model.
    * @param oNewImage
    *   the newly created image.
    * @param iValuesProviders
    *   the list of objects from which the values will be retrieved with the <br>
    *   CATICharacCollector interface. <br>
    *   If not specified (default), values will be retrieved from the <i>iOwner</i> parameter.
    * @param iDisplacementsProviders
    *   the list of objects from which the displacements will be retrieved with the <br>
    *   CATICharacCollector interface.
    *   If not specified (default), displacements will be retrieved from the <i>iOwner</i> parameter.
    * @param iUpdate
    *   specifies if the new created image must be updated or not.
    *   By default, the image will be updated.
    * @see CATISamImage
    * @see CATICharacCollector
    */
    virtual HRESULT CreateImage ( const CATString & iImageIdentifier ,
                                  const CATBaseUnknown * iOwner ,
                                  CATISamImage * & oNewImage ,
                                  const CATLISTP(CATBaseUnknown) * iValuesProviders = NULL ,
                                  const CATLISTP(CATBaseUnknown) * iDisplacementsProviders = NULL  ,
                                  const CATBoolean iUpdate = TRUE ) = 0;
};

CATDeclareHandler(CATISamImageFactory, CATBaseUnknown);

#endif

