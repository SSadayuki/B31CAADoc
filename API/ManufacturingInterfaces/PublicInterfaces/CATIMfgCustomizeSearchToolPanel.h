//===================================================================
// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
#ifndef CATIMfgCustomizeSearchToolPanel_H
#define CATIMfgCustomizeSearchToolPanel_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#include "CATListOfInt.h"
#include "CATIMfgResourceQuery.h"

// Forward declaration
class CATDialog;
class CATDlgFrame;
class CATUnicodeString;
class CATDlgContextualMenu;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCustomizeSearchToolPanel;
#else
extern "C" const IID IID_CATIMfgCustomizeSearchToolPanel ;
#endif


/**
* Interface to customize the Search Tool and the Search Tool Assembly panels.
*
* <br><b>Role</b>: This interface has to be implemented on the resource query object,
* that is CATMfgResourceQuery. <br>
* It will be called in the Search Tool and the Search Tool Assembly panels to add new dialog items and behaviors.
* Dialog components can be added:<ul>
*	<li> below the Tool Type bar to specify sub types </li>
*	<li> in the Simple tabpage, between the « Name » field and the multi list that display results. 
*   For the Search Tool panel only, this new dialog replaces the Nominal Diameter entry field</li>
*</ul><br>
* Contextual menu items can be attached to the multi list rows.<br>
* Constraints for the Tool/Tool Assembly query can be added using @href CATIMfgResourceQuery.
*
* @see CATIMfgResourceQuery
*/
class ExportedByMfgItfEnv CATIMfgCustomizeSearchToolPanel: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Builds an additional frame below the Tool Type bar.
	 * Implement this method by creating any dialog items in a CATDlgFrame.
	 *
	 * @param iFather The father dialog
	 * @param iMainToolType The current selected Tool type
	 * @param oFrame The new frame that will be inserted in the Search panel
     */
	  virtual HRESULT BuildSubTypeButtons (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame) = 0;

	 /** 
	  * Builds an additional frame in the Simple tabpage to enter constraints.
	  * For the Search Tool panel only, this new dialog replaces the Nominal Diameter entry field.
	  * Implement this method by creating any dialog items in a CATDlgFrame.
	  *
	  * @param iFather The father dialog
	  * @param iMainToolType The current selected Tool type
	  * @param oFrame The new frame that will be inserted in the Simple tabpage 
	  */
	  virtual HRESULT BuildConstraintsFrame (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame) = 0;

	 /** 
	  * Updates the new frames when the current tool type changes.
	  * Implement this method by updating the dialog items in both new frames.
	  *
	  * @param iNewMainToolType The newly selected Tool type
	  */
	  virtual HRESULT UpdateFrames (CATUnicodeString& iNewMainToolType) = 0;

	 /** 
	  * Adds new commands in the contextual menu of the Search panel multi list.
	  * Implement this method by filling in the output list with the titles of the items to be shown in the contextual menu.
	  *
	  * @param oContextualMenuTitles The list of commands titles that will appear in the result list contextual menu.
	  * @param iResourceType The resource type of the selected row, it can be ToolAssembly, Tool or Insert.
	  * <br><b>Legal values</b>:
	  *  <ul><li>MfgCurrent: current type of resource defined with Initialize (Tool Assembly in Search Tool Assembly panel)
	  *      <li>MfgTool: tool component
	  *      <li>MfgInsert: insert component
	  *      </ul>
	  * 
	  * @see CATIMfgResourceQuery
	  */
	  virtual HRESULT GetContextualMenuTitles (CATListOfCATUnicodeString& oContextualMenuTitles,
											   CATIMfgResourceQuery::MfgResourceQueryType iResourceType) = 0;
     /**
      * Activates a command when a push item is selected in the contextual menu.
	  * Implement this method by creating a new Dialog according to the activated item and selected resource type.
	  *
	  * @param iActivatedCommand The title of the activated command in the contextual menu. This should be one of the names given by #GetContextualMenuTitles.
	  * @param iAuthorizedResourceTypes The list of authorized resource types in context of Manufacturing Operation. 
	  *                                 edition. This list contains all the possible resource types if the Search panel 
	  *                                 is not started from an operation editor.
	  * @param iSelectedLines The selected rows indexes in the result list. It allows to have the description
	  *                       of the selected Tools/Tools Assembly with @href CATIMfgResourceQuery#GetDescription
	  * @param iResourceType The resource type of the selected row, it can be ToolAssembly, Tool or Insert.
	  * <br><b>Legal values</b>:
	  *  <ul><li>MfgCurrent: current type of resource defined with Initialize (Tool Assembly in Search Tool Assembly panel)
	  *      <li>MfgTool: tool component
	  *      <li>MfgInsert: insert component
	  *      </ul>
	  *
	  * @see CATIMfgResourceQuery
      */
	  virtual HRESULT ActivateContextualMenu (CATUnicodeString& iActivatedCommand, 
											  CATListOfCATUnicodeString& iAuthorizedResourceTypes,
											  CATListOfInt& iSelectedLines,
											  CATIMfgResourceQuery::MfgResourceQueryType iResourceType) = 0;

	 /** 
	  * Adds new constraints on the resource query.
	  * Implement this method by calling @href CATIMfgResourceQuery#AddConstraint methods.
	  */
	  virtual HRESULT AddAdditionalConstraints () = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler( CATIMfgCustomizeSearchToolPanel, CATBaseUnknown ) ;

#endif
