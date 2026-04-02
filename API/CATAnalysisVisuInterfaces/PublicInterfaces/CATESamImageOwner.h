#ifndef CATESamImageOwner_h 
#define CATESamImageOwner_h

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U2 
 */

// System prereqs
#include "CATListOfCATBaseUnknown.h"
#include "CATBoolean.h"

// CATAnalysisVisuInterfaces prereqs
#include "CATSamVisuImpl.h"

/**
 * Adapter for the implementation of CATISamImageOwner interface.
 * @see CATISamImageOwner
 */

class ExportedByCATSamVisuImpl CATESamImageOwner : public CATBaseUnknown
{
  public:

  /**
   * Default constructor
   */
    CATESamImageOwner();

  /**
   * Destructor
   */
    virtual ~CATESamImageOwner();

  /**
    * Images connection.
    * Apecify a list of images which will be connected to this object.
    * @param iImageList.
    * the image list
    */
		HRESULT ConnectImages (CATLISTV(CATBaseUnknown_var)& iImages);

  /**
    * Images access.
    * Retrieves the list of images which are connected to this object
    * @param oImageList.
    * the image list
    */
    HRESULT GetConnectedImages(CATLISTV(CATBaseUnknown_var)& oImages);

  /**
    * Images disconnection.
    * Disconnect a list of images which are currently connected to this object.
    * @param iImageList.
    * the image list
    */
    HRESULT DisconnectImages(CATLISTV(CATBaseUnknown_var)& iImages);

  /**
    * Images disconnection.
    * Disconnect all the images which are currently connected to this object.
    * @param oImageList.
    * the image list
    */
    HRESULT DisconnectAllImages();

  /**
    * Deformation availability.
    * @param oIsAvailable.
    * TRUE if deformation is available
    */
    virtual HRESULT GetDeformationAvailability ( CATBoolean  & oIsAvailable) const;
};

#endif
