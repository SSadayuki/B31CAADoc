/* -*-c++-*- */
#ifndef CATIUdfFeatureInstance_H
#define CATIUdfFeatureInstance_H
//
// Copyright Dassault Systemes 1999
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATUdfInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATUnicodeString;
class CATPathElement;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATUdfInterfaces IID IID_CATIUdfFeatureInstance ;
#else
extern "C" const IID IID_CATIUdfFeatureInstance ;
#endif

//------------------------------------------------------------------
/**
  * Interface to edit a User Feature instance. 
  * <b>Role:</b> This interface is implemented on a User Feature to modify it. 
  * You can change its inputs or/and modify the value of its published parameters.
  * <br><b>Note:</b>Before any calls, you must call @href #Init, and the last call must be  @href #Reset.  
  * @see CATIUdfFactory
  */
class ExportedByCATUdfInterfaces CATIUdfFeatureInstance: public CATBaseUnknown
{
   CATDeclareInterface;
public:
   
   /**
     * Initializes the modification transaction.
	 * <br><b>Role:</b>
     * Need to be called before all other services in one transaction.
     * At the end of the transaction, call @href #Reset to clean internal data.
     */
   virtual HRESULT Init () = 0;

   /**
     * Retrieves the input count.
     * @param oInputCount
     *   Count of inputs. 
     *   <br><b>Note:</b>This value is the same for all instances, it is independant of
     *   the current instance. 
     */
   virtual HRESULT GetInputsNumber (int& oInputCount) = 0;

   /**
     * Retrieves the role of one input.
     * @param iPos
     *   Input position, from 1 to @href #GetInputsNumber 
     * @param oRole
     *   The role of the iPos input.
     *   <br>The role of an input, is the NLS String which appears in the instantiate 
     *   or in the edit dialog box.
     *   <br><b>Note:</b>The iPos role is the same for all instances, it is independant of
     *   the current instance.
     */
   virtual HRESULT GetInputRole (const int iPos,
                                 CATUnicodeString & oRole) = 0;

   /**
     * Retrieves one input.
     * <br><b>Role:</b>This method returns an input from its role. You can consult the returned input,
     * but don't try to modify it. Use the @href #SetNewInput method to change it.
     * @param iRole
     *   The role of the input.
     *   <br>The role of an input, is the NLS String which appears in the instantiate 
     *   or in the edit dialog box.
     * @param oInput
     *   The input. 
    */
   virtual HRESULT GetInput (const CATUnicodeString& iRole,
                             CATBaseUnknown_var& oInput) = 0;

   /**
     * Retrieves one input.
     * <br><b>Role:</b>This method returns the iPos input. You can consult the returned input,
     * but don't try to modify it. Use the @href #SetNewInput method to change it.
     * @param iPos
     *   Input position, from 1 to @href #GetInputsNumber 
     * @param oInput
     *   The iPos input. 
    */
   virtual HRESULT GetInput (const int iPos,
                             CATBaseUnknown_var& oInput) = 0;


   /**
     * Retrieves the source input.
     * <br><b>Role:</b>If the input is an external reference, it returns the reference of this external reference.
     * Otherwise it returns the input. See @href #GetInput.
     * @param iRole
     *   The role of the input.
     *   <br>The role of an input, is the NLS String which appears in the instantiate 
     *   or in the edit dialog box.
     * @param oSourceInput
     *   The source input. 
     *   @return 
     *   <b>Legal values:</b><br>
     *   <dl><dt><tt>S_OK</tt></dt><dd>The source input is retrieved.</dd>
     *   <dt><tt>E_FAIL</tt></dt><dd>The source input is not retrieved, for instance because the reference 
     *   of the external reference is not loaded.</dd></dl>
    */
   virtual HRESULT GetSourceInput(const CATUnicodeString& iRole,
                                  CATBaseUnknown_var& oSourceInput) = 0;

   /**
     * Filters the selection.
     * @param iRole
     *   The role of the input.
     *   <br>The role of an input, is the NLS String which appears in the instantiate 
     *   or in the edit dialog box.
     * @param iSelection
     *   A <tt>CATPathElement</tt> with the new object, this path must contains the full selection
     *   path for a valid import mechanism in multidocument context.
     * @param oFilteredSelection
     *   A subpath of iSelection
    */
   virtual HRESULT FilterInput(const CATUnicodeString& iRole,
                               CATPathElement* iSelection, 
                               CATPathElement** oFilteredSelection) = 0;


   /**
     * Filters the selection.
     * @param iPos
     *   Input position, from 1 to @href #GetInputsNumber 
     * @param iSelection
     *   A <tt>CATPathElement</tt> with the new object, this path must contains the full selection
     *   path for a valid import mechanism in multidocument context.
     * @param oFilteredSelection
     *   A subpath of iSelection
    */
   virtual HRESULT FilterInput(const int iPos,
                               CATPathElement* iSelection, 
                               CATPathElement** oFilteredSelection) = 0;

   /**
     * Changes one input.
     * <br><b>Role:</b>This method replaces the iPos input by the new one.
     * @param iPos
     *   Input position, from 1 to @href #GetInputsNumber 
     * @param iSelection
     *   A <tt>CATPathElement</tt> with the new object, this path must contains the full selection
     *   path for a valid import mechanism in multidocument context.
    */
   virtual HRESULT SetNewInput (const int iPos,
                                CATPathElement* iSelection) = 0;

   /**
     * Changes one input.
     * <br><b>Role:</b>This method replaces the input whose role is iRole by the new one.
     * @param iRole
     *   The role of the input.
     *   <br>The role of an input, is the NLS String which appears in the instantiate 
     *   or in the edit dialog box.
     * @param iSelection
     *   A <tt>CATPathElement</tt> with the new object, this path must contains the full selection
     *   path for a valid import mechanism in multidocument context.
    */
   virtual HRESULT SetNewInput (const CATUnicodeString& iRole,
                                CATPathElement* iSelection) = 0;


   /**
     * Retrieves a published parameter from its role.
     * @param iRole
     *   The role of the parameter you want to retrieve.
     *   <br>The role of a parameter, is the NLS String which appears in the instantiate 
     *   or in the edit dialog box and it is the string in the specifications tree under
     *   the User Feature instance or reference.   
     * @param oParam
     *   A published parameter.
	 *   <br>Use the <tt>CATICkeParm</tt> to modify it.
     */
   virtual HRESULT GetParameter(const CATUnicodeString& iRole,
                                CATBaseUnknown_var& oParam) = 0;


   /**
     * Retrieves all published parameters.
     * @param oParametersList
     *   liste of published parameters. 
     *   <br>Use the <tt>CATICkeParm</tt> to modify them.
     */
   virtual HRESULT GetParameters (CATListValCATBaseUnknown_var*& oParametersList) = 0;

   /**
     * Retrieves the role of a published parameter.
     * @param iParam
     *   A published parameter which must be one of the list given by @href #GetParameters
     * @param oRole
     *   The role of the iParam parameter.
     *   <br>The role of a parameter, is the NLS String which appears in the instantiate 
     *   or in the edit dialog box and it is the string in the specifications tree under
     *   the User Feature instance or reference.   
     *   <br><b>Note:</b>Roles are independant of the current instance.
     */
   virtual HRESULT GetParameterRole (const CATBaseUnknown_var& iParam,
                                     CATUnicodeString & oRole) = 0;

   /**
     * Retrieves the output count.
     * @param oOutputCount
     *   Count of outputs. 
     *   <br><b>Note:</b>This value is the same for all instances, it is independant of
     *   the current instance. 
     */
   virtual HRESULT GetOutputsNumber (int& oOutputCount) = 0;

   /**
     * Retrieves one output.
     * <br><b>Role:</b>This method returns an output from its role. 
     * @param iRole
     *   The role of the output.
     *   <br>The role of an output is the Name of the ouput which appears in the tree
     * @param oInput
     *   The input. 
    */
   virtual HRESULT GetOutput (const CATUnicodeString& iRole,
                              CATBaseUnknown_var& oInput) = 0;

   /**
     * Retrieves one output.
     * <br><b>Role:</b>This method returns the iPos output. 
     * @param iPos
     *   Input position, from 1 to @href #GetOutputsNumber 
     * @param oOutput
     *   The iPos output. 
    */
   virtual HRESULT GetOutput (const int iPos,
                              CATBaseUnknown_var& oOutput) = 0;
   /**
     * @nodoc 
     * Reads all external links.
     * @param oExternalLinks
     *   liste of CATIExternalLink.
     */
   virtual HRESULT GetExternalLinks (CATListValCATBaseUnknown_var*& oExternalLinks) = 0;

   /**
     * Ends the modification transaction.
     * <br><b>Role:</b>: Need to be called at the end of a modification transaction  to
     * clean all internal data. At the  beginning of the transation, you have call the @href #Init method.
     */
   virtual HRESULT Reset () = 0;

};

//------------------------------------------------------------------

CATDeclareHandler (CATIUdfFeatureInstance, CATBaseUnknown);

#endif
