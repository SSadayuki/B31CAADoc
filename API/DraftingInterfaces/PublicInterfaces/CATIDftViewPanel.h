//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
# ifndef CATDftViewPanel_H
# define CATDftViewPanel_H

/**
* @CAA2Level L0
* @CAA2Usage U6
*/


/**
*  Basic class only used by CAA Interface to specialize interactive view behavior.
*  
*/
#include "CATBaseUnknown.h"
#include"DraftingItfCPP.h"

class CATUnicodeString;

class ExportedByDraftingItfCPP CATIDftViewPanel : public CATBaseUnknown
{

   public:

     /**
     * method to launch dedicated editor on the view by douclick on view frame.
     @return 
     */
     virtual HRESULT LaunchDedicatedEditor() = 0;

     /**
     * Get enable/disable status for command iCmdName.
     * This method allows to customize menu contextuel commands attached to interactive view object and
     *  tab pages attached to view properties window.
     * @param  iCmdName 
     *             (See below exhaustive list of commands on which this method is called
     *             - ActivateView
     *             - ForcePickMode
     *             - AddViewName
     *             - ViewPositioning
     *             - FeatureTabPage
     *             - GraphicTabPage
     *             - MoveValue 
     * @return 
     *        an  HRESULT  value.  
     *        <br><b>Legal  values</b>:  
     *        <ul>  
     *        <li>S_OK  Command is enabled </li>  
     *        <li>E_FAIL  Command is disabled </li>.  
     *        </ul>  
     */
     virtual HRESULT GetStatusCommand(CATUnicodeString iNameOfCmd) = 0;
} ;

# endif
