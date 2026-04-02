// COPYRIGHT DASSAULT SYSTEMES  2002
//-------------------------------------------------------------
//
// Adapter for the implementation of the CATIOptAlgorithmUIFactory interface.
// It allows the algorithm to be visible in the Optimizer UI.

// The default algorithm UI is NO frame and NO stop dialog.
//
// If you need to display your own algorithm settings and to allow the
// algorithm interruption, you will have to
// implement CATIOptAlgorithmUIFactory by inheriting from this adapter.
//
//-------------------------------------------------------------

#ifndef _CATOptAlgorithmUIFactoryAdapter_
#define _CATOptAlgorithmUIFactoryAdapter_

#include "CATBaseUnknown.h"

// OptimizationInterfaces
#include "CATIOptOptimization.h"
#include "CATIOptAlgorithmUIFactory.h"

// Dialog
class CATDlgFrame;
class CATDlgDialog;
class CATDialog;

/** 
 * @CAA2Level L1
 * @CAA2Usage U2 
*/

//----------------------------------------------------------------------
/**   
 * CAA Adapter to CATIOptAlgorithmUIFactory Interface.
 * <b>Role</b>: This class should be derived to implement features extension to @href CATIOptAlgorithmUIFactory.<br>
 * It allows the algorithm to be visible in the Optimizer UI. The default algorithm UI is NO frame and NO stop dialog. 
 * If you need to display your own algorithm settings and to allow the algorithm interruption, you will have to implement
 * @href CATIOptAlgorithmUIFactory by inheriting from this adapter.
 * @see CATIOptAlgorithmUIFactory
 */
class ExportedByOptimizationItfCPP CATOptAlgorithmUIFactoryAdapter : public CATIOptAlgorithmUIFactory
{

  public:

	CATOptAlgorithmUIFactoryAdapter();
	virtual ~CATOptAlgorithmUIFactoryAdapter();

	/**
    * Creates the settings frame of a user algorithm.
	* Default implementation of @href CATIOptAlgorithmUIFactory#CreateAlgoSettingsFrame.
	* This method returns NULL. You must overload it.
	* This method should build/instanciate a frame allowing
	* interactiv changes of the algorithm settings (Radio buttons, checks, 
	* text editor...).
	* @param iFather
	* the father dialog object of the instanciated frame . This object is automatically
	* given by the Optimizer UI as soon as you choose an algorithm in the algorithms list.
	* @param iStyle
	* the style of the instanciated frame . It is automatically
	* given by the Optimizer UI as soon as you choose an algorithm
	* in the algorithms list in order to be in accordance with the dialog configuration.
	* @return
	* the instanciated frame.
    */
	CATDlgFrame* CreateAlgoSettingsFrame(CATDialog* iFather, unsigned long iStyle = 786433);


	/**
    * Creates the stop dialog of a user algorithm.
	* Default implementation of @href CATIOptAlgorithmUIFactory#CreateStopAlgoDialog
	* This method returns NULL. You must overload it.
	* This method should build/instanciate a dialog allowing the algorithm run interruption.
	* @param iFather
	* the father dialog object of the instanciated dialog object . The father is automatically
	* given by the Optimizer UI as soon as you launch an algorithm.
	* @param iStyle
	* the style of the instanciated dialog . It is automatically
	* given by the Optimizer UI as soon as you launch an algorithm
	* in order to be in accordance with the dialog configuration.
  * @param iOptim
  * The interface of the optimization concerned with this stop dialog.
	* @return
	* the instanciated stop dialog.
	*/
	CATDlgDialog* CreateStopAlgoDialog(CATDialog* iFather, unsigned long iStyle,const CATIOptOptimization_var& iOptim);
  
  private:

};

//----------------------------------------------------------------------

#endif
