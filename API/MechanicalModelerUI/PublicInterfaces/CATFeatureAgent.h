#ifndef __CATFeatureAgent_h__
#define __CATFeatureAgent_h__

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATPathElementAgent.h"
#include "CATMechanicalModelerUI.h"

#include "CATMathTransformation.h"
#include "CATPathElement.h"

#include "CATMfBRepDefs.h"


class CATMmuPartAgentImpl;
class CATISpecImportManager;

/**
* CATFeatureAgent behaviors.
* <b>Role:</b>In the @href CATFeatureAgent#CATFeatureAgent or in 
* the @href CATFeatureAgent#SetAgentBehavior methods, a specific behavior can
* be set for the @href CATFeatureAgent selection agent.
* @param CATFAgDecodeResultNotKept
*   To deactivate the optimization mode which keeps the decode result.
* @param CATFAgAllowSelectionInContext
*  In assembly context, it means that the current document is a 
*  Product document, you can authorize end users to select geometry in 
*  another component (a Part or a Product) that the current one. The default behavior is
*  to prohibit this kind of "external" selection, whereas <tt>CATFAgAllowSelectionInContext</tt> authorizes
*  that.
*  <br>Outside the assembly context, the behavior of the agent is like the @href CATPathElementAgent , 
*  the end user can select anywhere in the current document. 
*/
typedef unsigned long CATFeatureAgentBehavior;

/** @nodoc */
#define CATFAgDecodeResultNotKept     (1<<0)
/** @nodoc */
#define CATFAgAllowSelectionInContext (1<<2)


/**
* Class to select in Mechanical context.
* <b>Role</b>:This agent of selection is dedicated for mechanical features. In addition to the 
*  @href CATPathElementAgent possibilities, this agent enables you to:
*  <ul>
*   <li>Featurize the selected object and manage the featurization options</li>
*   <li>Authorize or not, in assembly context, the selection outside the current component. 
*       ( see @href CATFeatureAgentBehavior )</li>
*  </ul>
*  In addition, this agent automatically transforms a document in Visu mode in Design mode, 
*  when the end user selects one element of this document.
*  <p>The featurization of the selected object should be used only if it is necessary. This
*  feature is named a BRep feature. It implements at least the <tt>CATIMfBRep</tt> interface. 
*  The @href #FeaturizeElement method enables you to know if the selected object
*  ( @href #GetElementValue ) has been
*  featurized. Once the BRep feature has been created you have only two possibilities:
*  <ul>
*  <li>Keep the feature: It must be aggregated, with the <tt>CATIDescendants</tt> interface, 
*   in order to manage its automatic deletion. </li>
*  <li>Delete the feature: The <tt>CATICutAndPastable</tt> interface must be used.</li>
*  </ul>
*  </p>
*/

class ExportedByCATMechanicalModelerUI CATFeatureAgent: public CATPathElementAgent
{
   /** @nodoc */
   friend class CATMmuPartAgentImpl;

   /** @nodoc */
   CATDeclareClass;

public:

   /**
   * Constructs a path element agent.
   * @param iId
   *   The agent identifier. It is used to retrieve the undo/redo titles in 
   *   the command resource file.
   * @param iType
   *   The type of the expected objects.
   *   The type corresponds to an interface implemented by the object. 
   *   <br><b><Legal values></b>If it is NULL, all the objects
   *   are accepted.
   *   <br>You can add interfaces with @href CATPathElementAgent#AddElementType or 
   *   you can specified later an ordered list thanks to the 
   *   @href CATPathElementAgent#SetOrderedTypeType method.
   * @param iBehavior
   *   The agent behavior. The behavior is given in the form of a
   *   concatenation of the facet values using the | character. Refer to the @href CATPathElementAgent#CATPathElementAgent method
   *    for details about the valid facets. 
   *    <br>However, for the two following facets the default value is the opposite 
   *    of the <tt>CATPathElementAgent</tt> class.
   *   <ul>
   *   <li>Tooltip: <tt>CATDlgEngWithTooltip</tt> is the default and not
   *   <tt>CATDlgEngWithoutTooltip</tt>.</li>
   *   <li>User Selection Filter: <tt>CATDlgEngWithUserSelectionFilter</tt> is the default and not
   *   <tt>CATDlgEngWithoutUserSelectionFilter</tt>.</li>
   *   </ul>
   *   <br>The behavior may be specified later with the @href CATDialogAgent#SetBehavior method.
   * @param iMode
   *   The featurization mode to featurized the selected geometry.
   *   <br><b>Legal values</b>: The featurization mode is defined with options
   *   separeted with the | character.
   *   <br>e.g.: <code>MfRelimitedFeaturization|MfPermanentBody</code>
   *   <br>The default featurization mode is the <tt>MfNoFeaturization</tt> option (=0).
   *   <br>The featurization mode may be specified later with the @href #SetAgentBehavior method.
   * @param iSupport
   *   The support of the featurized object.
   *   <br><b>Legal values</b>: 
   *    <ul>
   *     <li> NULL_var when <tt>iMode</tt> is <tt>MfNoFeaturization</tt> or
   *   <tt>MfFunctionalFeaturization</tt>.</li>
   *    <li>Otherwise a feature, if it required by the featurization option.</li>
   *    </ul>
   *   <br>The support of the featurized object may be specified later with 
   *   the @href #SetAgentBehavior method.
   * @param iAgBehavior
   *   The specific agent behavior. The default behavior (NULL) means:
   *    <ul>
   *      <li>The optimization mode which keeps the decode result is activated.</li>
   *      <li>In assembly context, selection of geometry outside the current component is prohibited. The
   *       @href #SetActiveObjectPath method enables you to change the current component 
   *        which is by default the current UI active object.</li>
   *    </ul>
   *   <br>This behavior may be specified later with the @href #SetAgentBehavior method.
   */
   CATFeatureAgent(const CATString&          iId,
                   CATClassId                iType       = NULL,
                   CATDlgEngBehavior         iBehavior   = NULL,
                   CATMfFeaturizeMode        iMode       = 0,
                   const CATBaseUnknown_var& iSupport    = NULL_var,
                   CATFeatureAgentBehavior   iAgBehavior = NULL);

   virtual ~CATFeatureAgent();

  /**
   * Sets the agent behavior.
   * @param iMode
   *   The featurization mode to featurize the selected geometry.
   * @param iSupport
   *   The support of the featurized object.
   *   <br><b>Legal values</b>: NULL_var when <tt>iMode</tt> is <tt>MfNoFeaturization</tt> or 
   *   <tt>MfFunctionalFeaturization</tt> otherwise the support feature if it is required by 
   *  the featurization option.
   * @param iAgBehavior
   *    <ul>
   *      <li>The optimization mode which keeps the decode result is activated.</li>
   *      <li>In assembly context, selection of geometry outside the current component is prohibited. The
   *       @href #SetActiveObjectPath method enables you to change the current component 
   *        which is by default the current UI active object.</li>
   *    </ul>
   */
   void SetAgentBehavior(CATMfFeaturizeMode        iMode,
                         const CATBaseUnknown_var& iSupport    = NULL_var,
                         CATFeatureAgentBehavior   iAgBehavior = NULL);


  /**
   * Gets the agent behavior.
   * @param ioMode
   *   The featurization mode to featurize the selected geometry.
   * @param ioSupport
   *   The support of the featurized object.
   * @param ioAgBehavior
   *    <ul>
   *      <li>The optimization mode which keeps the decode result is activated.</li>
   *      <li>In assembly context, selection of geometry outside the current component is prohibited. The
   *       @href #SetActiveObjectPath method enables you to change the current component 
   *        which is by default the current UI active object.</li>
   *    </ul>
   */
   void GetAgentBehavior(CATMfFeaturizeMode&      ioMode,
                         CATBaseUnknown_var&      ioSupport,
                         CATFeatureAgentBehavior& ioAgBehavior);

   /**
   * Returns the selected object.
   * <br><b>Role</b>: This method returns the leaf of the input path.
   * @param iPath
   *   The agent value that you retrieve with the @href CATPathElementAgent#GetValue (mono-sel)
   *   and the @href CATPathElementAgent#GetListOfValues (multi-sel)methods.
   *   If the value is NULL, the @href CATPathElementAgent#GetElementValue is used. 
   * @return
   *   The selected object.
   */
   virtual CATBaseUnknown* GetElementValue(CATPathElement* iPath); 

   /**
   * Sets the active object path.
   * <br><b>Role</b>: In assembly context, i.e. when the current document is a Product document,
   *  this method enables you to declare a context (a path) 
   *  different from the current User Interface active object one.
   *  <br>The role of this method is different from the classes and their behaviors:
   *  <ul>
   *  <li>For <tt>CATFeatureAgent</tt>:</li>
   *   The role of <tt>iPath</tt> depends on the agent behavior:( @href CATFeatureAgentBehavior )
   *    <ul>
   *    <li><tt>CATFAgAllowSelectionInContext</tt> is not set (default behavior): It is possible to select only 
   *    in the document whose the path is specified by <tt>iPath</tt>. 
   *    </li>
   *    <li><tt>CATFAgAllowSelectionInContext</tt> is set: This method is useless. It is possible
   *    to select anywhere. </li>
   *    </ul>
   *  <li>For @href CATFeatureImportAgent : <tt>iPath</tt> is the path of a Part
   * document where will be imported the selected objects. </li>
   *   </ul>
   * @param iPath
   *   The active object path. Its default value is the current UI active object, the value returned 
   *  by the @href CATFrmEditor#GetUIActiveObject method.
   */
   void SetActiveObjectPath(CATPathElement &iPath);

   /**
   * Returns the selection context.
   * <br><b>Role:</b>This methode enables you to know, in assembly context, if the 
   * the selection has been done in the current Part or outside. 
   * @param iPath
   *   The agent value that you retrieve with the @href CATPathElementAgent#GetValue (mono-sel)
   *   and the @href CATPathElementAgent#GetListOfValues (multi-sel)methods.
   * @return
   *   The selection context.
   *   <br><b>Legal values</b>: 
   *   <ul>
   *     <li><tt>0</tt>:the selected element is in the current Part.</li>
   *     <li><tt>1</tt>: the selected element is in another Part.</li>
   *   </ul>
   */
   virtual int ElementInContext(CATPathElement* iPath);

   /**
   * Returns the featurization status.
   * @param iPath
   *   The agent value that you retrieve with the @href CATPathElementAgent#GetValue (mono-sel)
   *   and the @href CATPathElementAgent#GetListOfValues (multi-sel) methods.
   * @return
   *   The value.
   *   <br><b>Legal values</b>: <ul>
   *   <li>TRUE the selected element has been featurized. The value returned by 
   *    the @href #GetElementValue method is a BRep feature implementing the 
   *    <tt>CATIMfBRep</tt> interface.</li>
   *   <li>FALSE the selected element is not featurized.</li></ul>
   */
   virtual CATBoolean FeaturizedElement(CATPathElement* iPath);

   /**
   * Sets the agent value as the selection would do.
   * <br><b>Role</b>: The value is a path element to be treated.
   * <br>This method does not register an undo step.
   * <br><b>Postcondition</b>: Use the @href CATAcquisitionAgent#SetValuation
   * method to make the agent accept the value, otherwise this value is not
   * taken into account.
   * @param iValue
   *   The value.
   *   <br><b>Cyclic reference</b>: A copy of <tt>iValue</tt> is kept and  
   *   AddRef'ed. It is Released in the agent destructor.
   * @return
   *   1 if the path element was successfully treated, 0 otherwise.
   */
   int SetValueToSelect(CATPathElement * iValue);

   /**
   * Sets the agent list of values as the selection would do.
   * <br><b>Role</b>: This method is usable only on MultiAcquisition objects,
   * otherwise use the @href #SetValueToSelect method.
   * <br>This method does not register an undo step.
   * <br><b>Postcondition</b>: Use the @href CATAcquisitionAgent#SetValuation
   * method to make the agent accept the value list, otherwise this list is not
   * taken into account.
   * @param iList
   *   The list of values.
   *   <br><b>Cyclic reference</b>: A copy of <tt>iList</tt> is kept and 
   *   AddRef'ed. It is Released in the agent destructor.
   * @return
   *   The number of path element was successfully treated.
   */
   int SetListOfValuesToSelect(CATSO * iList);

   /**
   * Returns the agent error codes.
   * @return
   *   The value.
   *   <br><b>Legal values</b>: <ul>
   *   <li><tt>0</tt>: no error.</li>
   *   <li><tt>!=0</tt>: otherwise</li>
   *   </ul>
   */
   virtual int AgentError();

   /**
   * @nodoc
   * Returns the leaf element of the current path element.
   */
   virtual CATBaseUnknown* GetElementValue();

   /**
   * @nodoc 
   * Do not override DecodeNotification, use ExtraCheckPath and ExtraProcessPath.
   */
   virtual void * DecodeNotification(CATCommand* from, CATNotification* notif);

   /**
   * @nodoc 
   * Do not forget to invoke the father method when overriding.
   */
   virtual CATPathElement* PrecheckPath(CATPathElement* iPathToCheck);

   /**
   * @nodoc 
   * Do not override CheckPath, but ExtraCheckPath.
   */
   virtual CATPathElement* CheckPath(CATPathElement* iPath, int iElementTypeListPosition);

   /**
   * @nodoc 
   * Do not override ProcessPath, but ExtraProcessPath.
   */
   virtual CATPathElement* ProcessPath(CATPathElement* iPath, int iElementTypeListPosition);

   /** 
   * @nodoc 
   */
   virtual void StoreValue();
 
   /** @nodoc */
   void AgentDecodeInitialization();

   /** @nodoc */
   void DisableTreeSelection();

   /** @nodoc */
   void EnableTreeSelection();


protected:

   CATFeatureAgent(const CATString&          iId,
                   CATClassId                iType,
                   CATDlgEngBehavior         iBehavior,
                   CATMfFeaturizeMode        iMode,
                   const CATBaseUnknown_var& iSupport,
                   CATFeatureAgentBehavior   iAgBehavior,
                   void*                     iImplementation);

   virtual CATPathElement* DecodePath (CATPathElement* iPath, CATString& oEltType, int* oPos=NULL);

   CATBoolean         IsAnElementInCurrentPart(CATPathElement*iPath);
   CATBaseUnknown_var GiveSelectedElement(CATPathElement* iPath, int iElementTypeListPosition);


   CATMfFeaturizeMode         _Mode;
   int                        _Error;
   int                        _NbPathOK;
   CATULong                   _Context;
   CATBoolean                 _IsFeaturizedElement;
   int                        _NbElement;
   CATMathTransformation      _Matrice;
   CATBaseUnknown_var         _Support;
   CATPathElement             _PathUIActif;

   CATFeatureAgentBehavior    _AgBehavior;
   CATISpecImportManager    * _SpecImportManager;
   CATBoolean                 _IsSelRerouted;

   void                     * _Implementation;
};

#endif
