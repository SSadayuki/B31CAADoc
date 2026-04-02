/* -*-c++-*- */
#ifndef CATIUdfFeature_H
#define CATIUdfFeature_H
// -------------------------------------------------------------------
// Copyright Dassault Systemes 1999
//---------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATUdfInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATUnicodeString;
class CATPathElement;
class CATILinkableObject_var;
class CATPixelImage;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATUdfInterfaces IID IID_CATIUdfFeature ;
#else
extern "C" const IID IID_CATIUdfFeature ;
#endif

//------------------------------------------------------------------
/**
  * Interface to define a User Feature or a Power Copy reference.
  * <b>Role:</b> This interface enables to define a user feature (or a power
  * copy) reference. 
  * <br> After the @href CATIUdfFactory#CreatePowerCopy or @href CATIUdfFactory#CreateUserFeature
  * you can define with this interface the content of the user feature (or the power copy)
  * reference.
  * <br><br>A feature is defined by its components. So by the @href #SetComponents method you 
  * define it. After this call, <b>and only after</b>, you can use these following methods:
  * <ul>
  * <li>About inputs:</li>
  * @href #GetInputsNumber , 
  * @href #GetListInputs , 
  * @href #GetInputRole , 
  * @href #SetInputRole , 
  * @href #GetInput . 
  * <li>About parameters:</li>
  * @href #GetInternalParameters , 
  * @href #GetParameters , 
  * @href #AddParameter , 
  * @href #RemoveParameter , 
  * @href #GetParameterRole , 
  * @href #SetParameterRole .
  * </ul>
  * The method @href #VerifyComponents can be used <b>before</b> the @href #SetComponents method.
  * If the result of the verification is OK you can call <tt>SetComponents</tt> with the same list 
  * of component. (It is certainely the best way) 
  * <br>But you can also call @href #VerifyComponents <b>after</b> the @href #SetComponents method. 
  * In this case its argument is NULL. But if the result of the verification is KO, 
  * you must delete this current reference and recreate a new one. <b>It is impossible to call 
  * twice the <tt>SetComponents</tt> method. </b>
  * <br>
  * <br><b>What is a role ?</b>
  * <br>For each input, or published parameter you can set a NLS string to define a role. It is 
  * a mean to understand the <tt>role</tt> of the input or the parameter. This string 
  * appears in the instantiate dialog box, and in the edit dialog box. 
  * In the case of the parameter, the role appears also in the specifications tree under the 
  * User Feature reference and under each User Feature instances. 
  * <br><br><b>Warning</b>
  * <ol>
  * <li>During the creation step, you can use all the methods of this interface, but never modify
  *  object given by the following methods: @href #GetReferenceComponents, @href #GetListInputs, 
  *  @href #GetInput, @href #GetInternalParameters, @href #GetParameters, @href #GetPreview </li>
  * <li>After the creation step, you can only used the <tt>Get</tt> methods, but with 
  * the same restriction for the methods given just above. </li>
  * </ol>
  */
class ExportedByCATUdfInterfaces CATIUdfFeature: public CATBaseUnknown
{
   CATDeclareInterface;
public:
   
   /** 
     * Update the list of components with the user selection.
     *<br><b>Role</b>:
     * This method enables to update the elements to add the the components
     * list definition. It checks if the element canbe selected for the selection
     * It's mainly used for interactive purpose.
     * @param iSelection
     *   The selection of the user.
     * @param ioComponents
     *   The components list that must be updated. This list is prefilled with the
     *   current components definition. Indeed an element can be added only if a
     *   another is already in the component list. 
     * @param oMessage
     *   NLS Message to explain why the element cannot be added.
     * <br>An error is returned if the element cannot be selected
     */
   virtual HRESULT AddComponents(const CATPathElement* iSelection,
                                 CATListValCATBaseUnknown_var& ioComponents,
                                 CATUnicodeString & oMessage) = 0;
   
   /**
     * Checks the validity of a list of components.
     *<br><b>Role</b>:
     * This method verifies that the instantiation will be OK with these components.
     * If the result is OK, you can call the @href #SetComponents with the same list.
     * <br>If you call this method after the @href #SetComponents , iComponent is NULL,
     * but if the result if KO, you must delete the reference and recreate an another one.
     * @param iComponents
     *   List of components to check, if NULL, we take the components already selected.
     * @param oMessage
     *   NLS Message to explain the fail.
     * <br>An error is returned if you try to include a link to a sub element which is not in the
     * selection, or if you try to include a feature without implementing Replace interfaces.
     */
   virtual HRESULT VerifyComponents (const CATListValCATBaseUnknown_var* iComponents,
                                     CATUnicodeString & oMessage) = 0;

   /**
     * Sets a list of components.
     * <br><b>Role:</b> Define the content of the reference.
     * <br><b>Warning</b> You can call this method only once. see @href #VerifyComponents 
     * @param iListe
     *   new list of feature to include in the Power Copy or User Feature reference
     */
   virtual HRESULT SetComponents (CATListValCATBaseUnknown_var* iListe) = 0;

   /**
     * Retrieves all referenced components.
     * <br><b>Role:</b>These features are the components selecting during de creation step.
     * <br><b>Warning</b>:The content of the list is not necessary the same as the list 
     * given to @href #SetComponents, and the order can also be modified.
     * @return
     *   List of components. The list is NULL while the @href #SetComponents method is not called.
     */
   virtual CATLISTV(CATBaseUnknown_var)* GetReferenceComponents() = 0;

   /**
     * Retrieves all inputs and their role.
     * @param oInputList
     *   List of all inputs.
     * @param oInputRoleList
     *   list of the role of all inputs.
     */
   virtual HRESULT GetListInputs (CATListValCATBaseUnknown_var*& oInputList,
                                  CATListOfCATUnicodeString*& oInputRoleList) = 0;

   /**
     * Retrieves inputs count.
     * @param oInputCount
     *   Count of inputs.
     */
   virtual HRESULT GetInputsNumber (int& oInputCount) = 0;

   /**
     * Retrieves the role of one input.
     * @param iPos
     *   input position, from 1 to @href #GetInputsNumber.
     * @param oRole
     *   The role of the iPos input.
     */
   virtual HRESULT GetInputRole (const int iPos,
                                 CATUnicodeString & oRole) = 0;

   /**
     * Modifies the role of one input.
     * @param iPos
     *   input position, from 1 to @href #GetInputsNumber.
     * @param iRole
     *  The role of the iPos input.
     */
   virtual HRESULT SetInputRole (const int iPos,
                                 const CATUnicodeString &iRole) = 0;

   /**
     * Retrieves one input.
     * @param iPos
     *   input position, from 1 to @href #GetInputsNumber.
     * @param oInputValue
     *   The iPos input.
    */
   virtual HRESULT GetInput (const int iPos,
                             CATBaseUnknown_var& oInputValue) = 0;

   /**
     * Retrieves all available parameters.
     * @param oParamList
     *   liste of available parameters
     */
   virtual HRESULT GetInternalParameters (CATListValCATBaseUnknown_var* &  oParamList) = 0;

   /**
     * Retrieves all published parameters.
     * @param oPublishedParamList
     *   List of published parameters. 
     *   <br>A parameter is published thanks to the 
     *   @href #AddParameter method.
     *   <br>This list is a sub-list of the list given by @href #GetInternalParameters. 
     *
     */
   virtual HRESULT GetParameters (CATListValCATBaseUnknown_var* & oPublishedParamList) = 0;

   /**
     * Publishes a parameter.
     * @param iParamToPublish
     *   This parameter should be in the list given by @href #GetInternalParameters.
     */
   virtual HRESULT AddParameter (const CATBaseUnknown_var& iParamToPublish) = 0;

   /**
     * Un-Publishes a parameter.
     * @param iParamToUnpublish
     *   This parameter should be in the list given by @href #GetInternalParameters.
     */
   virtual HRESULT RemoveParameter (const CATBaseUnknown_var& iParamToUnpublish) = 0;

   /**
     * Retrieves the role of one published parameter. 
     * @param iSpec
     *   A published parameter. iSpec must be in the list returned by the @href #GetParameters
     *   method.
     * @param oRole
     *   The role of the iSpec parameter
     */
   virtual HRESULT GetParameterRole (const CATBaseUnknown_var& iSpec,
                                     CATUnicodeString & oRole) = 0;

   /**
     * Modifies the role of one published parameter. 
     * @param iSpec
     *   A published parameter. iSpec must be in the list returned by the @href #GetParameters
     *   method.
     * @param iRole
     *   The role of the iSpec parameter
     */
   virtual HRESULT SetParameterRole (const CATBaseUnknown_var& iSpec,
                                     const CATUnicodeString &iRole) = 0;
   /**
     * @nodoc 
     * Retrieves all external links.
     * @param oExternalLinks
     *   liste of CATIExternalLink*
     */
   virtual HRESULT GetExternalLinks (CATListValCATBaseUnknown_var*& oExternalLinks) = 0;

   /**
     * Sets a pixel image as preview.
     * <br><b>Role</b>:This pixelimage will be embedded and used for preview in catalog. These
     * catalog are <tt>.catalog</tt> files.
     * @param iImage
     *   A pixel image with 130*110 size.
     */
   virtual HRESULT SetPreview (CATPixelImage* iImage) = 0;

   /**
     * Retrieves the associated pixel image as preview.
     * @param oImage
     *   A pixel image with 130*110 size.
     */
   virtual HRESULT GetPreview (CATPixelImage*& oImage) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler (CATIUdfFeature, CATBaseUnknown);

#endif
