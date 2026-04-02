/* -*-c++-*- */
#ifndef CATIUdfInstantiate_H
#define CATIUdfInstantiate_H
// -------------------------------------------------------------------
// Copyright Dassault Systemes 2000
//---------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATUdfInterfaces.h"
#include "CATBaseUnknown.h"

#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATListOfCATUnicodeString.h"
class CATIContainer_var;
class CATPathElement;
class CATBaseUnknown_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATUdfInterfaces IID IID_CATIUdfInstantiate ;
#else
extern "C" const IID IID_CATIUdfInstantiate ;
#endif

//------------------------------------------------------------------
/**
  * Interface to instantiate a template reference.
  * <br><b>Role</b>: Interface that enables the instantiation of a <tt>template</tt> reference.<br>
  * <p>The <tt>template</tt> can be a <tt>User Feature</tt>, a <tt>Power Copy</tt>, a <tt>Document Template</tt>,
  * and in that case, they have been created with the @href CATIUdfFactory interface and defined with the
  * @href CATIUdfFeature interface.<br>
  * But it can also be a <tt>Machining Process</tt>, an <tt>Action</tt>, or a
  * set of features like an <tt>Ordered Geometrical Set</tt>, a <tt>Body</tt>, ...
  * <p>The instantiation process depends on the reference: it can be based on a <tt>Copy/Paste</tt> mechanism,
  * or on an <tt>Instance/Reference</tt> mechanism.
  * Refer to the CAA Encyclopedia article entitled 'An Overview of Power Copies and User Features' for details
  * about the different mechanisms of instantiation in the case of <tt>Power Copies</tt> and <tt>User Features</tt>.<br>
  * <p>However the instantiation process remains identical: you need to call the methods of this interface in the right order:
  * <ol>
  * <li><b>First Step: Initialization</b>:<br>
  * It is the step where you define the destination of instantiation.<br>
  * There are two different methods: only one of them should be called depending on what you want to instantiate.<br>
  * <ul>
  * <li>@href #SetDestinationPath :<br>
  * This method should be called when you want to instantiate the reference <tt>template</tt>:<br>
  * <ul>
  * <li>in a Product context: where a new Part may be created on the fly.</li>
  * <li>in a Part context, when you do not need to indicate the location of insertion of the created objects.</li>
  * </ul></li>
  * <li>@href #SetDestinationPathOfInsertion :<br>
  * This method should be called when you want to instantiate the reference <tt>template</tt> in a Part context and indicate
  * the location of insertion of the created objects.<br>
  * You can retrieve the default destination using the @href #GetDefaultDestinationOfInsertion method.</li>
  * </ul></li>
  * <li><b>Second Step: Input valuation</b>:<br>
  * It is the step where you valuate the inputs, either manually or automatically.<br>
  * Use @href #GetOldInputs , @href #GetOldInput , @href #GetNewInput , @href #GetNewInputPathElement to retrieve the inputs values either on the reference or on the instance.<br>
  * Use @href #FilterInput , @href #SetNewInput , @href #UseIdenticalName to valuate the inputs.</li>
  * <li><b>Third Step: Parameters modification</b>:<br>
  * This step is optional: use the @href #GetParameters method to retrieve the published parameters and modify their values.</li>
  * <li><b>Fourth Step: Validation</b>:<br>
  * It is the step where the reference is instantiated. After the @href #Instantiate method, you can not modify the inputs and parameters values anymore.</li>
  * <li><b>Fith Step: Analyse</b><br>
  * This step is optional: use the @href #GetInstantiated method to retrieve the created feature, and @href #SetDisplayName to modify its name.<br>
  * To retrieve this name, use @href #GetDisplayName .</li>
  * <li><b>Sixth Step: Ending of the instantiation process</b>:<br>
  * Use @href #EndInstantiate method to end the instantiation process.</li>
  * <li><b>Seventh Step: Reset once the instantiation process is fully completed</b>:<br>
  * Use @href #Reset method to clean up data when instantiation is terminated.</li>
  * </ol>
  * </ul>
  * Only the third and fifth steps are optional, while all others are <b>mandatory</b>.<br>
  * Refer to the CAA Encyclopedia article entitled 'Instantiating a User Feature Reference'
  * for details  about the usage of this interface.
  * @see CATIUdfFactory, CATIUdfFeature 
  */
class ExportedByCATUdfInterfaces CATIUdfInstantiate: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:

   /**
     * Sets the destination path for the instantiation.
     * <br><b>Role:</b> This is the first step of the instantiation process.<br>
     * Use this method when you want to instantiate a <tt>template</tt> reference in a Product context
     * or if you want to instantiate it in a Part context without specifying the location of insertion of the created features.<br>
     * If you want to set this location, you should use the other method @href #SetDestinationPathOfInsertion .
     * @param iPath
     *  It is the complete path of a Part or a Product where the instantiated elements will be created.<br>
     *  The created features will be set in the current set of features of the active Part.<br>
     *  <ul><li>If <tt>iPath</tt> represents the path of a Part, this Part is the destination Part.</li>
     *  <li>If <tt>iPath</tt> represents the path of a Product, a new Part may be automatically created depending on the reference.</li></ul>
     * @param oDestinationPath
     *  <ul>
     *  <li>This value is NULL if <tt>iPath</tt> is the complete path of a Part</li>
     *  <li>This value is the complete path of the created Part (when it exists).<tt>iPath</tt> is then the complete path of a Product.</li>
     *  </ul>
     *  The command must UIactivate this new path before modifying the inputs, this is mandatory
     *  to create links between documents (<tt>Reference Elements</tt> in the Part).
     * @param oDestination
     *  <ul>
     *  <li>This value is NULL_var if <tt>iPath</tt> is the complete path of a Part.</li>
     *  <li>This Value is the pointer of the created Part (when it exists). <tt>iPath</tt> is then complete path of a Product.</li>
     *  </ul>
     */
   virtual HRESULT SetDestinationPath (CATPathElement* iPath,
                                       CATPathElement*& oDestinationPath,
                                       CATBaseUnknown_var& oDestination) = 0;

   /** 
     * Sets the destination path and position for the instantiation.
     * <br><b>Role</b>: This is the first step of the instantiation process.<br>
     * Use this method when you want to instantiate a <tt>template</tt> reference in a Part context and specify the location
     * of insertion of the created features.<br>
     * If you do not need to specify the location of insertion, or if you want to instantiate the <tt>template</tt> reference in a 
     * Product context, you should use the other @href #SetDestinationPath method.
     * @param iPathOfInsertion
     *  The complete path of the feature where you want to insert the result of the instantiation.<br>
     *  <ul><li>If this destination feature is a set of features (like a <tt>Geometrical Set</tt>, a <tt>Body</tt>, ...), the instantiation is done
     *  either inside or after it, depending on the <tt>iRelativePosition</tt> argument.</li>
     *  <li>Otherwise if the destination feature is not a set of features, the instantiation is done after it and the <tt>iRelativePosition</tt> is
     *  imperatively positioned on <tt>After</tt>.</li></ul>
     * @param iRelativePosition
     *  The position of insertion relatively to the destination feature.<br>
     *  For mechanical features, it is either <tt>After</tt> or <tt>Inside</tt>, depending on the destination feature.
     * @return
     *  <ul><li><code>S_OK</code> when the destination of insertion is valid.</li>
     *  <li><code>E_FAIL</code> when the destination of insertion is not valid. An error message is then raised with a CATError.<br>
     *  It is the case for example when you set a <tt>Body</tt> as destination of insertion of a <tt>Power Copy</tt> that contains a
     *  <tt>Geometrical Set</tt> and you use the <tt>Inside</tt> position. As a <tt>Geometrical Set</tt> can not be inserted inside a <tt>Body</tt>,
     * the method returns E_FAIL and an error message explaining why the destination is not possible is raised.</li></ul>
     */
   virtual HRESULT SetDestinationPathOfInsertion (CATPathElement* iPathOfInsertion,
                                                  const CATUnicodeString& iRelativePosition) = 0;
   /** 
     * Retrieves the default destination path and its relative position.
     * <br><b>Role</b>: This method is used in combination with @href #SetDestinationPathOfInsertion . Use it to retrieve the default destination
     * feature and the default position of the insertion when it is defined.<br>
     * For example, in case of mechanical features, the default destination is the current feature. If this feature is a set of features, the relative
     * position is <tt>Inside</tt>, otherwise it is <tt>After</tt>.
     * @param iPartPath
     *  The complete path of a Part where the instantiated elements will be created.<br>
     * @param oDefaultDestinatioPath
     *  The complete path of the default destination feature.
     * @param oDefaultRelativePosition
     *  The default destination position.
     * @return
     *  <ul><li><code>S_OK</code> when the default destination path is retrieved.</li>
     *  <li><code>E_FAIL</code> when no default destination is valid. In that case, a CATError is raised, explining why there is no valid destination.</li></ul>
     */
   virtual HRESULT GetDefaultDestinationOfInsertion (CATPathElement* iPartPath, CATPathElement*& oDefaultDestinatioPath,
                                                     CATUnicodeString& oDefaultRelativePosition) = 0;

   /**
     * @nodoc 
     * Lists all available formats for the instantiation.
     * @param oFormatList
     *   List of format
     */
   virtual HRESULT GetListAvalaibleFormat (CATListOfCATUnicodeString*& oFormatList) = 0;

   /**
     * @nodoc 
     * Select format for duplication, these format are the same as Copy format
     * @param iFormat
     *   Format to select
     */
   virtual HRESULT SetCurrentFormat (const CATUnicodeString& iFormat) = 0;

   /**
     * @nodoc 
     * Read format for duplication, these format are the same as Copy format
     * @param oFormat
     *   Selected format
     */
   virtual HRESULT GetCurrentFormat (CATUnicodeString& oFormat) = 0;

   /**
     * @nodoc 
     * deprecated : use GetOldInputs
     */
   virtual HRESULT GetListInputs (CATListValCATISpecObject_var*& oInputList,
                                  CATListOfCATUnicodeString*& oRoleList) = 0;

   /**
     * Retrieves the list of all the inputs of the reference along with their role.
     * <br><b>Role</b>: Use this method to retrieve the inputs of the reference <tt>template</tt>
     * along with their role (defined by the @href CATIUdfFeature#SetInputRole method).
     * @param oOldValues
     *  The list of inputs of the reference <tt>template</tt>.
     * @param oRoleList
     *  The list of NLS texts to help the user to better understand the inputs.
     *  This list has always the same size as the oOldValues list.
     * @return
     *  <code>S_OK</code> if the inputs are retrieved correctly, <code>E_FAIL</code> if there is a problem while retrieving the inputs.
     */
   virtual HRESULT GetOldInputs (CATListValCATBaseUnknown_var*& oOldValues,
                                 CATListOfCATUnicodeString*& oRoleList) = 0;

   /**
     * Retrieves one input of the reference template.
     * <br><b>Role</b>: Use this method to retrieve the input of the reference <tt>template</tt> located at the <tt>iPos</tt> position.<br>
     * You get the same result when getting the <tt>iPos</tt>th element of the list given by the @href #GetOldInputs method. 
     * @param iPos
     *  Input position, from 1 to the size of the list returned by @href #GetOldInputs 
     * @return
     *   The <tt>iPos</tt>th input feature.
     */
   virtual CATBaseUnknown_var GetOldInput (const int iPos) = 0;

   /**
     * Retrieves one input of the instance.
     * <br><b>Role</b>: Use this method to retrieve the input set by the @href #SetNewInput method or 
     * after the @href #UseIdenticalName method.
     * @param iPos
     *  Input position, from 1 to the size of the list returned by @href #GetOldInputs 
     * @return
     *   NULL_var if the <tt>iPos</tt>th input is not valuated otherwise the input of the current instance.
     */
   virtual CATBaseUnknown_var GetNewInput (const int iPos) = 0;

   /**
     * Retrieves the path of one input of the instance.
     * <br><b>Role</b>: Use this method to retrieve the path of an input set by the @href #SetNewInput method or 
     * after the @href #UseIdenticalName method.<br>
     * Warning, this path can be different from the one set in the @href #SetNewInput method: for example, the new input can be the result of an import 
     * of the given input. 
     * @param iPos
     *  The input position, from 1 to the size of the list returned by @href #GetOldInputs
     * @param oPath
     *  The returned path element. It has to be released after use if method returs S_OK.
     * @return
     *   E_FAIL if <tt>iPos</tt> position is outside the authorized range, otherwise S_OK.
     */
   virtual HRESULT GetNewInputPathElement(int iPos, CATPathElement *&oPath) = 0;

   /**
     * Filters the selection for the valuation of one input of the instance.
     * <br><b>Role</b>: This method is called during the selection made by the user to valuate a given input at the <tt>iPos</tt> position.
     * The filter is done on <tt>Replace</tt> compliancy.
     * The output of this method is a new CATPathElement, <tt>oFilteredSelection</tt>, and if this path is not empty it is the new input.
     * @param iPos
     *  Input position, from 1 to the size of the list returned by @href #GetOldInputs 
     * @param iSelection
     *  A <tt>CATPathElement</tt> with the new object, this path must contain the full selection
     *   path for a valid import mechanism in multidocument context.
     * @param oFilteredSelection
     *  A subpath of <tt>iSelection</tt> containing the authorized feature for the @href #SetNewInput method.
     * @return
     *  <code>E_FAIL</code> if the selection is not valid for the input valuation, <code>S_OK</code> otherwise.
    */
   virtual HRESULT FilterInput (const int iPos,
                                CATPathElement* iSelection,
                                CATPathElement** oFilteredSelection) = 0;

   /**
   * Gets an information message explaining the FilterInput failure.
   * <br><b>Role:</b> This method is called by standard instantiation command after the call of @href #FilterInput . The goal is to
   * customize the tooltip shown on selection agent to provide more information to the user. This can be used in customized
   * instantiation commands to help the user in the instantiation process. 
   * @param oMsg
   * The message that can be used as an help for the end user. 
   * In the standard instantiation command, if this message is not empty after the call of this method,
   * the tooltip of the selection agent is modified with it
   * @return
   * S_OK if the method succeeds, E_FAIL otherwise
   */
	virtual HRESULT GetFilterInputMessage(CATUnicodeString &oMsg) = 0;

   /**
     * Sets one input of the instance at a given position.
     * <br><b>Role</b>: Use this method to valuate the input located at the <tt>iPos</tt> position of the instance.
     * @param iPos
     *  Input position, from 1 to the size of the list returned by @href #GetOldInputs 
     * @param iSelection
     *  A <tt>CATPathElement</tt> with the object. This path must contain the full selection
     *  path for a valid import mechanism in multidocument context.
     * @return
     *  <code>E_FAIL</code> if the valuation fails, <code>S_OK</code> otherwise.
     */
   virtual HRESULT SetNewInput (const int iPos,
                                CATPathElement* iSelection) = 0;

   /**
     * Valuates automatically all the inputs of the instance.
     * <br><b>Role</b>: This method tries to find a feature for each input, looking for features having
     * the same @href CATIAlias name than the role of the input.
     * <br>After this method, some inputs may be still unvaluated. Test the valuation 
     * with the @href #GetNewInput method. 
     * @param iRoot
     *  The location where to search for the inputs.
     * @return
     *  <code>E_FAIL</code> if the <tt>iRoot</tt> argument is not valid, <code>S_OK</code> otherwise.
     */
   virtual HRESULT UseIdenticalName (const CATBaseUnknown_var iRoot) = 0;

   /**
     * Retrieves the list of all published parameters along with their role.
     * <br><b>Role</b>: Use this method to retrieve all published parameters in order to change their value.
     * But it is not necessary to modify them.
     * @param oParamList
     *  The list of published parameters.
     * @param oRoleList
     *  The list of roles dedicated to each published parameter. The list has the same size as <tt>oParamList</tt>.
     */
   virtual HRESULT GetParameters (CATListValCATBaseUnknown_var*& oParamList,
                                  CATListOfCATUnicodeString*& oRoleList) = 0;

   /**
     * @nodoc 
     * Read all external links on selected components.<br>
     * @param oExternalLinks
     *   liste of CATIExternalLink*
     */
   virtual HRESULT GetExternalLinks (CATListValCATBaseUnknown_var*& oExternalLinks) = 0;

   /**
     * @nodoc 
     *   Update the preview feature after a parameter modification.
     */
   virtual HRESULT UpdatePreview() = 0;

   /**
     * Validates the instantiation.
     * <br><b>Role</b>: The new instance is now created, you can get a pointer to this instance when it exists,
     * using the @href #GetInstantiated method (Indeed, for <tt>Power Copy</tt> instantiation in <tt>One Step</tt> mode,
     * no instance is created).<br>
     * After this call you can not modify its inputs and its parameters anymore.
     * @param iDestination
     *  The Part destination of instantiation.<br>
     *  <ul><li>For User Feature, there is no need to set a destination. Then the <tt>iDestination</tt> argument is NULL_var.</li>
     *  <li>For Power Copy, the destination is the Part where the instantiation should be done.<br>
     *  <ul><li>In case you use the @href #SetDestinationPath method, it is the first argument of this method if it is a Part,
     *  otherwise it is the last argument of the method if the first agument is a Product.</li>
     *  <li>In case you use the @href #SetDestinationPathOfInsertion method, it is the Part containing the destination feature of the first
     *  argument of this method.</li></ul></ul>
     * @return
     *  <code>E_FAIL</code> if the instantiation fails, <code>S_OK</code> otherwise.
     */
   virtual HRESULT Instantiate (const CATBaseUnknown_var& iDestination) = 0;

   /**
     * Retrieves the instantiated feature.
     * <br><b>Role</b>: Use this method to retrieve a pointer to the new instance.<br>
     * You can call this method only after the @href #Instantiate method, and only before the @href #EndInstantiate method.<br>
     * Use this method <b>only</b> in the case of a <tt>User Feature</tt> instantiation.  
     * @param iFrom
     *   This.
     * @return
     *   The instantiated object.
     */
   virtual CATBaseUnknown_var GetInstantiated (const CATBaseUnknown_var iFrom) = 0;

   /**
     * Sets the name of the instantiated feature.
     * <br><b>Role</b>: Use this method to modify the name of the instance in the case of a <tt>User Feature</tt> instantiation.<br>
     * The default name is the name of the <tt>User Feature</tt> reference followed by a number. This name is returned by @href #GetDisplayName .<br>
     * This method is available <b>only</b> if the reference object is a single object (not available for <tt>PowerCopy</tt> with multiple features
     * for example).
     * @param iName
     *  The new name of the instance.
     * @return
     *  <code>S_OK</code>
     */
   virtual HRESULT SetDisplayName (const CATUnicodeString& iName) = 0;

   /**
     * Ends the instantiation process.
     * <br><b>Role</b>: After this call, the instantiation is ended.<br>
     * All the links to the reference are broken.
     * In case of <tt>User Feature</tt> instantiation, you can modify the created instance using the @href CATIUdfFeatureInstance interface.
     * @return
     */
   virtual HRESULT EndInstantiate() = 0;

   /** 
   * This method has to be called at the end of the instantiation.
   * <br><b>Role</b>: It cleans memory, resets the template so that it can be re-instantiated. 
   * Its call is mandatory for Document Templates instantiation.
   * @return
   *   <code>S_OK</code>
   */
   virtual HRESULT Reset() = 0;

   /**
     * Retrieves the name of the reference template.
     * @param iReferenceName
     *  It is the name of the reference <tt>template</tt>.<br>
     *  Note that this name is not modifiable even if you use the @href #SetDisplayName method as this last method applies on the instance and not on
     * the reference.
     * @return
     */
   virtual HRESULT GetDisplayName (CATUnicodeString& iReferenceName) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler (CATIUdfInstantiate, CATBaseUnknown);

#endif
