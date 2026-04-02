#ifndef CATISamImageDisplayManager_H
#define CATISamImageDisplayManager_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System prereqs
#include "CATBaseUnknown.h"

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamImageDisplayManager;

/**
 * Analysis Images display management.
 * <b>Role:</b> Query this interface on the post-processor container to manage
 * the display of Analysis <b>Images</b>.
 */ 

class ExportedByCATSamVisuUUID CATISamImageDisplayManager : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

   /**
    * Activates or deactivates visualization of images.
    * @param iNewMode
    *  new display mode :
    * <br><b>Legal values</b>: 
    * <ul>
    *   <li> <font color="red">0</font color="red"> : no image is visualized
    *   <li> <font color="red">1</font color="red"> : images are visualized ( default ) 
    * </ul>
    */
    virtual HRESULT SetDisplayMode ( int iNewMode ) = 0;

   /**
    * Retrieves the current display mode.
    * @param oCurrentMode
    *  current display mode
    */
    virtual HRESULT GetDisplayMode ( int & oCurrentMode ) = 0;

   /**
    * Activates or deactivates automatic switch of geometry visualization.
    * @param iNewMode
    *  new switch mode :
    * <br><b>Legal values</b>: 
    * <ul>
    *   <li> <font color="red">0</font color="red"> : no switch is performed 
    *   <li> <font color="red">1</font color="red"> : geometry is hidden when at least one image is displayed ( default ) 
    * </ul>
    */
    virtual HRESULT SetVisuSwitchMode ( int iNewMode ) = 0;

   /**
    * Retrieves the current visualization switch mode.
    * @param oCurrentMode
    *  current switch mode
    */
    virtual HRESULT GetVisuSwitchMode ( int & oCurrentMode ) = 0;

   /**
    * Sets a new deformation mode for all images.
    * @param iNewMode
    *  new deformation mode :
    * <br><b>Legal values</b>: 
    * <ul>
    *   <li> <font color="red">0</font color="red"> : real deformation  ( default ) 
    *   <li> <font color="red">1</font color="red"> : amplified deformation 
    * </ul>
    */
    virtual HRESULT SetDeformationMode ( int iNewMode ) = 0;

   /**
    * Retrieves the current deformation mode used for all images.
    * @param oCurrentMode
    *  current deformation mode
    */
    virtual HRESULT GetDeformationMode ( int & oCurrentMode ) = 0;

   /**
    * Sets the default values for the amplification magnitude for the deformation visualization.
    * This will be available for all future created images.
    * @param iType
    * <br><b>Legal values</b>: 
    * <ul>
    *   <li> <font color="red">0</font color="red">  : defines a constant amplification factor.
    *   <li> <font color="red">1</font color="red">  : defines a constant amplification length. 
    *   <li> <font color="red">-1</font color="red"> : supresses constant amplification.
    * </ul>
    * @param iValue
    *  new amplification magnitude.
    */
    virtual HRESULT SetAmplificationMagnitude ( const int iType, const float iValue ) = 0;

   /**
    * Retrieves the current amplification magnitude for the deformation visualization.
    * @param oType
    *  current amplification magnitude type.
    * @param oValue
    *  current amplification magnitude value.
    */
    virtual HRESULT GetAmplificationMagnitude ( int& oType, float& oValue ) = 0;

   /**
    * Sets a new pre-hilight mode for all images.
    * @param iNewMode
    *  new pre-hilight mode :
    * <br><b>Legal values</b>: 
    * <ul>
    *   <li> <font color="red">0</font color="red"> : no pre-Hilight ( default )
    *   <li> <font color="red">1</font color="red"> : pre-hilight
    * </ul>
    */
    virtual HRESULT SetPreHilightMode ( int iNewMode ) = 0;

   /**
    * Retrieves the current pre-hilight mode used for all images.
    * @param oCurrentMode
    *  current pre-hilight mode.
    */
    virtual HRESULT GetPreHilightMode ( int & oCurrentMode ) = 0;

   /**
    * Restores the previous modes (before the last SetxxxMode())for both pre-hilight and deformation modes.
    * The recommended way to use this service is :
    * <ul>
    *   <li> Set the desired modes at the initialization of your Workbench ( Init() )
    *   <li> Call RestorePreviousModes() in the Dispose() method when leaving the Workbench
    * </ul>
    */
    virtual HRESULT RestorePreviousModes () = 0;

   /**
    * Deactivate all activated images, starting from a root object and using the CATINavigateObject interface.
    * @param iKeepShowNoShowState
    *  to specify wether images Show/NoShow attributes must be preserved.
    * @see CATINavigateObject , CATISamImage 
    */
    virtual HRESULT HideAllImages ( CATBaseUnknown * iRootObject ,
                                    int iKeepShowNoShowState = 1 ) = 0;
   /**
    * Activate all deactivated images that are in Show mode, <br>
    * starting from a root object and using the CATINavigateObject interface.
    * @param iRootObject
    *  the starting object. If NULL then all images are taken into account.
    * @see CATINavigateObject , CATISamImage 
    */
    virtual HRESULT RollBackToShowImages ( CATBaseUnknown * iRootObject ) = 0;
};

CATDeclareHandler(CATISamImageDisplayManager,CATBaseUnknown);

#endif
