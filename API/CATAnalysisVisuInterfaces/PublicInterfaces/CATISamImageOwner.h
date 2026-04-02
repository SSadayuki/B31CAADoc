#ifndef CATISamImageOwner_H
#define CATISamImageOwner_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================
//
// CATISamImageOwner : interface to be implemented by the owner of the image,
//                     for example AnalysisSet or AnalysisEntity 
//                     under which we creates images.
//
//=============================================================================
// Mars 2003 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U4   CATESamImageOwner 
  */

#include "CATBaseUnknown.h"

// prereqs  System
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATBaseUnknown.h"
#include "CATBoolean.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageOwner;

/**
 * Analysis Images access and deformation availability.
 * <b>Role: </b> 
 * Query this interface in order to get all the <i>Images</i> plugged under this object;
 * or to verify the deformation availability.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */ 

class ExportedByCATSamVisuUUID CATISamImageOwner : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public :

  /**
    * Images connection.
    * Apecify a list of images which will be connected to this object.
    * @param iImageList.
    * the image list
    */
		virtual HRESULT ConnectImages (CATLISTV(CATBaseUnknown_var)& iImages) = 0;

  /**
    * Images access.
    * Retrieves the list of images which are connected to this object
    * @param oImageList.
    * the image list
    */
    virtual HRESULT GetConnectedImages(CATLISTV(CATBaseUnknown_var)& oImages) = 0;

  /**
    * Images disconnection.
    * Disconnect a list of images which are currently connected to this object.
    * @param iImageList.
    * the image list
    */
    virtual HRESULT DisconnectImages(CATLISTV(CATBaseUnknown_var)& iImages) = 0;

  /**
    * Images disconnection.
    * Disconnect all the images which are currently connected to this object.
    * @param oImageList.
    * the image list
    */
    virtual HRESULT DisconnectAllImages() = 0;

  /**
    * Deformation availability.
    * @param oIsAvailable.
    * TRUE if deformation is available
    */
    virtual HRESULT GetDeformationAvailability ( CATBoolean  & oIsAvailable) const = 0;
};

CATDeclareHandler(CATISamImageOwner, CATBaseUnknown);

#endif

