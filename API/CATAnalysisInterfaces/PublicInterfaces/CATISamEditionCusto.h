// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
#ifndef CATISamEditionCusto_H
#define CATISamEditionCusto_H
/**
  * @CAA2Level L1
  * @CAA2Usage U4    CATEAnalysisEditionCusto
  */

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEditionCusto ;
#else
extern "C" const IID IID_CATISamEditionCusto ;
#endif

//------------------------------------------------------------------

/**
 * Interface to Customize CATSamCreateEntityCmd.
 * This generic commands allows to build a default user interface based on basic components for 
 * features deriving from AnalysisSet and AnalysisEntities.<br>
 * All the corresponding implementation have no corresponding for batch or VB treatements. 
 * You should not modify the model in your implementation. 
 * A good candidate for Apply action is for example Update the feature or display panel informations...<br>

 * By default this command allows to have Ok and Cancel actions.
 * By implementing this interface on your  "AnalysisFeature" late type, you are able to:
 * <ul><li>Add the Apply Action.</li>
 *     <li>Overload the methods called for OK , Apply or Cancel.</li></ul>
 *
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>

 */
class ExportedByCATAnalysisInterface CATISamEditionCusto: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Enumerate for typing the actions.
 * @param Ok For the OK Action.
 * @param Apply For the Apply Action.
 * @param Cancel For the Cancel Action.
 */
	  enum CATSamTypeActionPanel {Ok, Apply, Cancel};

/**
 * Allows the Apply Action.
 * @param iTypeAction the action to perform.
 */
    virtual CATBoolean AllowApply()  = 0;

/**
 * Implement actions for appropriate state.
 * No default Implementation is implemented. Applicative implementation is called before the
 * Global Undo of the CATStateCommand is called. Recomandation is to implement the Apply state for
 * lauching an Update or display some informations, but not to modify the model.<br>
 * @param iTypeAction the action to perform.
 */
    virtual HRESULT ActionPanel(CATSamTypeActionPanel iTypeAction) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATISamEditionCusto, CATBaseUnknown );

#endif
