//===================================================================
// COPYRIGHT Dassault Systemes 2000
//===================================================================
#ifndef CATISamVisibility_H
#define CATISamVisibility_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamVisibility ;
#else
extern "C" const IID IID_CATISamVisibility ;
#endif

/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisVisibility
  */
/**
 * Structure  CATSamVisibility to set-up the parameters in CATISamVisibility Interface.
 * <b>Role:</b> In order to set-up analysis feature visualization.
 * <p>
 * <b>Legal Values:</b>
 * <ul>
 * <li><b>NoVisu</b>:    No Graph and No 3D Visualization.</li>
 * <li><b>VisuGraph</b>  Graph And No 3D Visualization.</li>
 * <li><b>Visu3D</b>     No Graph And 3D Visualization.</li>
 * <li><b>VisuGraphAnd3D</b> Graph And 3D Visualization.</li>
 * <li><b>HideUpToDateState</b> If Graph is visible, hide the Not UptoDate Symbole. 
 * The use is limited for Analysis Case, Analysis Set and Analysis Entity.
 * </li></ul>
 *
 */

enum CATSamVisibility
{
   NoVisu = 0,
   VisuGraph = 1,
   Visu3D = 2,
   VisuGraphAnd3D = 3,
   VisuGraphAndHideUpToDateState = 5,
   VisuGraphAndHideUpToDateStateAnd3D = 7
};

//------------------------------------------------------------------

/**
 * Management of the interactive display for analysis features.
 * <p>
 * This interface allows to setup or modify dynamically the interactive parameters 
 * of an analysis feature.<br>
 * This includes 3D display and tree visualisation.
 *
 * <p><b>BOA information</b>: this interface can be implemented using the BOA (Basic Object Adapter).
 * Use a Data extension for using <b>CATEAnalysisVisibility</b> adaptor.
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>

 */
class ExportedByCATAnalysisInterface CATISamVisibility: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Defines the Visibility attribute of an analysis feature.
 *   @param iVisibility Value for Visibility. @href CATSamVisibility
 */
		virtual void SetVisibilityProperty(CATSamVisibility iVisibility) = 0;

/**
 * Returns the Visibility attribute of an analysis feature.
 *   @return iVisibility Value for Visibility. @href CATSamVisibility
 */

	virtual CATSamVisibility GetVisibilityProperty() = 0;

/**
 * Returns the Visibility attribute of an analysis feature in the feature tree.
 *   @return True if the feature is connected to the tree. @href CATSamVisibility
 */

		virtual CATBoolean IsVisibleInGraph() = 0;

 /**
 * Returns the Visibility attribute of an analysis feature in the 3D Window.
 *   @return True if the feature will be visualize in the 3D Window . @href CATSamVisibility
 */

    virtual CATBoolean IsVisibleIn3D() = 0;

/**
 * Returns the Visibility is managed by persistent attribute.
 * @return True if the feature have a persistent attribute for this implementation.
 */

    virtual CATBoolean IsPersistent() const = 0;


};

//------------------------------------------------------------------

CATDeclareHandler( CATISamVisibility, CATBaseUnknown );

#endif
