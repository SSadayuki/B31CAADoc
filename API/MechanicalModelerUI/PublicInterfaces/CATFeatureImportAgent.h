#ifndef CATFeatureImportAgent_h
#define CATFeatureImportAgent_h

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

// COPYRIGHT DASSAULT SYSTEMES 1999

#include "CATMechanicalModelerUI.h"
#include "CATFeatureAgent.h"

#include "CATSO.h"
#include "CATImportSettingBehavior.h"


/**
* CATFeatureImportAgent behaviors.
* <b>Role:</b>In the @href CATFeatureImportAgent#CATFeatureImportAgent or in 
* the @href CATFeatureImportAgent#SetAgentBehavior methods, a specific behavior can
* be set for the @href CATFeatureImportAgent selection agent.
*   @param CATFIAgDecodeResultNotKept
*    To deactivate the optimization mode which keeps the decode result
*   @param CATFIAgCheckTypesAfterImport
*     In assembly context, the imported selection is also checked with the interfaces
*      of type set with the @href CATPathElementAgent#AddElementType or the
*      @href CATPathElementAgent#SetOrderedTypeList methods. 
*/
typedef unsigned long CATImportAgentBehavior;

/** @nodoc */
#define CATFIAgCheckTypesAfterImport  (1<<1)


/**
* Class to select in Mechanical context with import possibilities.
* <b>Role</b>:This agent of selection is dedicated for mechanical features. In addition to the 
*  @href CATFeatureAgent possibilities, this agent enables you, in assembly context, to import in 
*  a Part, specified by @href CATFeatureAgent#SetActiveObjectPath , the selection done in another Part document. The imported object
*  is aggregated by the "External References" feature of a Part document. However contrary to the 
*  @href CATFeatureAgent, you cannot prohibit the selection outside the current component (a Part or a Product
*  of a Product document).
*  <p>The @href CATPathElementAgent#GetValue, for this agent, returns the path of the selected
* object. In case of import, it is the path of the imported object.</p>
*/

class ExportedByCATMechanicalModelerUI CATFeatureImportAgent : public CATFeatureAgent
{
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
    *   for details about the valid facets. 
    *   <br>However, for the two following facets the default value is the opposite 
    *   of the <tt>CATPathElementAgent</tt> class.
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
    *      <li>In assembly context, the imported selections are not checked with the
    *          interfaces of type.</li>
    *    </ul>
    *   <br>This behavior may be specified later with the @href #SetAgentBehavior
    *   method.
    */
   CATFeatureImportAgent(const CATString&          iId,
                         CATClassId                iType       = NULL,
                         CATDlgEngBehavior         iBehavior   = NULL,
                         CATMfFeaturizeMode        iMode       = NULL,
                         const CATBaseUnknown_var& iSupport    = NULL_var,
                         CATImportAgentBehavior    iAgBehavior = NULL);


   virtual ~CATFeatureImportAgent();

   /**
    * Sets the agent behavior.
    * @param iMode
    *   The featurization mode to featurized the selected geometry.
    *   See CATMfBRepDefs.h .
    * @param iSupport
    *   The support of the featurized object.
    *   <br><b>Legal values</b>: NULL_var when <tt>iMode</tt> is MfNoFeaturization or MfFunctionalFeaturization.
    *   Or the support feature if it is required by the featurization option and known.
    * @param iAgBehavior
    *   The specific agent behavior. The default behavior (NULL) means:
    *    <ul>
    *      <li>The optimization mode which keeps the decode result is activated.</li>
    *      <li>In assembly context, the imported selections are not checked with the
    *          interfaces of type.</li>
    *    </ul>
    */
   void SetAgentBehavior(CATMfFeaturizeMode        iMode,
                         const CATBaseUnknown_var& iSupport    = NULL_var,
                         CATImportAgentBehavior    iAgBehavior = NULL) ;

  /**
   * Sets an applicative identifier on the imported feature(s). 
   * <br><b>Role:</b> it enables to associate an identifier to the imported feature(s).
   * <br>This identifier allows to retrieve information on the mechanical import(s) using interface @href CATIMmiMechanicalImportApplicative . 
   * <br> This method only applies if option "Keep link"  is checked (in Tools/Options/Part Infrastructure).
   * @param iApplicativeId
   * The unique identifier generated by the application.
   * <ul>
   *   <li>on Windows, use : <tt>uuidgen -s</tt></li>
   *   <li>on Unix, use : <tt>uuid_gen -C</tt></li>
   * </ul>
   * Refer to the article "About Globally Unique IDentifiers" in the CAA encyclopedia for more details about these two ways of generating a GUID value. 
   * @return
   *   S_OK if iApplicativeId is accepted, E_FAIL otherwise.
   */
   HRESULT SetImportApplicativeId(const GUID & iApplicativeId);


   /**
     * Returns the count of elements created by the import.
     * @param iPath
     *   The agent value that you retrieve with the @href CATPathElementAgent#GetValue (mono-sel)
     *   and the @href CATPathElementAgent#GetListOfValues (multi-sel)methods.
     * @return
     *   The count of created elements.
     */
   int HowManyElementsCreated(CATPathElement* iPath);


protected:

   CATFeatureImportAgent(const CATString&          iId,
                         CATClassId                iType,
                         CATDlgEngBehavior         iBehavior,
                         CATMfFeaturizeMode        iMode,
                         const CATBaseUnknown_var& iSupport,
                         CATImportAgentBehavior    iAgBehavior,
                         void*                     iImplementation);
};

#endif
