/* -*-c++-*- */
// -------------------------------------------------------------------
// MCAD/SDS(c) Copyright Dassault Systemes 1999
// -------------------------------------------------------------------
#ifndef CATIUdfFeatureUser_H
#define CATIUdfFeatureUser_H
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATUdfInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATUdfInterfaces IID IID_CATIUdfFeatureUser ;
#else
extern "C" const IID IID_CATIUdfFeatureUser ;
#endif

//------------------------------------------------------------------
/**
  * Interface which enables advanced edition for UserFeature reference.
  * <b>Role:</b> Interface that enables edition for UserFeature reference.<br>
  * This interface should be use only for modification of UserFeature reference.
  * For instantiation, you should use <b> @href CATIUdfInstantiate </b> interface.
  * For instance edition, use <b> @href CATIUdfFeatureInstance </b>.
  */
class ExportedByCATUdfInterfaces CATIUdfFeatureUser: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   /**
     * @nodoc 
     * Read internal components.<br>
     * This feature are the internal features, there are a copy of reference feature return by
     * <b>CATIUdfFeature::GetReferenceComponents</b>.All these feature are agregated<br>
     * @param liste
     *   liste of internal components
     * @return
     *   S_OK if OK else E_FAIL
     */
   virtual HRESULT GetInternalComponents (CATLISTV(CATBaseUnknown_var)*& liste) = 0;

   /**
     * @nodoc 
     * Test if the userfeature is a black box.<br>
     * If the userfeature is a black-box, you are not able to see or display its components.
     * Default is black-box.
     * <br>
     * @param mode
     *   1:this is a black box, 0: not a black box
     * @return
     *   S_OK if OK else E_FAIL
     */
   virtual HRESULT IsBlackBox (int& mode) = 0;

   /**
     * @nodoc 
     * Modify the black box status.<br>
     * If the userfeature is a black-box, you are not able to see or display its components.
     * <br>
     * @param mode
     *   1:this is a black box, 0: not a black box
     * @return
     *   S_OK if OK else E_FAIL
     */
   virtual HRESULT SetBlackBox (const int mode=1) = 0;

   /**
     * @nodoc 
     * Allow the white box mode for user.<br>
     * If the userfeature is a black-box, you are not able to see or display its components.<br>
     * Only on reference, not on instance.<br>
     * @param mode
     *   1:white box is allowed, 0: always black box
     * @return
     *   S_OK if OK else E_FAIL
     */
   virtual HRESULT AllowExplode (const int mode=1) = 0;

   /**
     * @nodoc 
     * Test if white box is allowed.<br>
     * If the userfeature is a black-box, you are not able to see or display its components.<br>
     * Default is not allowed.<br>
     * Only on reference, not on instance.<br>
     * @param mode
     *   1:white box is allowed, 0: always black box
     * @return
     *   S_OK if OK else E_FAIL
     */
   virtual HRESULT IsExplodeAllowed (int& mode) = 0;

   /**
     * @nodoc
     *	  Lecture du parametres gerant les configurations
     */
   virtual HRESULT GetConfigurationParameter (CATISpecObject_var& parmconfig) = 0;

   /**
     * @nodoc
     *	  Nombre de configuration de sortie
     */
   virtual HRESULT GetConfigurationNumber (int& num) = 0;

   /**
     * @nodoc
     *	  Lecture de la configuration courante
     *   (la numerotation va de 1 a GetConfigurationNumber)
     */
   virtual HRESULT GetCurrentConfiguration (int& num) = 0;

   /**
     * @nodoc
     *	  Activation de la configuration courante
     *   (la numerotation va de 1 a GetConfigurationNumber)
     */
   virtual HRESULT SetCurrentConfiguration (const int num) = 0;

   /**
     * @nodoc
     *	  Ajout d'une configuration
     */
   virtual HRESULT AddConfiguration (const CATUnicodeString& name="") = 0;

   /**
     * @nodoc
     *	  Suppression d'une configuration
     *   (la numerotation va de 1 a GetConfigurationNumber)
     */
   virtual HRESULT RemoveConfiguration (const int num) = 0;

   /**
     * @nodoc
     *   Nom d'une configuration
     *   (la numerotation va de 1 a GetConfigurationNumber)
     */
   virtual HRESULT GetConfigurationName (const int ipos,
                                         CATUnicodeString &role) = 0;
   /**
     * @nodoc
     *   Nom d'une configuration
     *   (la numerotation va de 1 a GetConfigurationNumber)
     */
   virtual HRESULT SetConfigurationName (const int ipos,
                                         const CATUnicodeString &role) = 0;
  /** 
   * Retrieves the list of possible outputs.
   *
   * <br><b>Role</b>: This list contains all the internal geometrical elements which
   * can be used for the User Feature or external output result definition.<br>
   *
   * @param oInternals [out]
   *   the list of possible outputs.
   *
   * @return
   *   <code>S_OK</code> if everything ran ok, E_FAIL otherwise
   *
   */
   virtual HRESULT GetPossibleOutputs (CATListValCATBaseUnknown_var*& oInternals) = 0;

   /**
     * Retrieves the list of outputs.
     * @param oInternals
     *   The list of ouputs.
	   * <br>This list containts the internal geometrical elements which have
     * been used for the User Feature or external output result definition.<br>
     * <br>This list contains elements which have been defined as output
     * with the AddOuput method.<br>
     * The size of the list is N.<br>
     * Element 1 corresponds to the main result (User Feature result). <br> 
     * Element 2..,N corresponds to the external outputs result. 
     */
   virtual HRESULT GetOutputs (CATListValCATBaseUnknown_var*& oInternals) = 0;

  /** 
   * Creates a new external output.
   *
   * <br><b>Role</b>: The result of the output is given by iInternal.<br>
   *
   * @param iInternal [in]
   *   an internal element.
   *
   * @return
   *   <code>S_OK</code> if everything ran ok, E_FAIL otherwise
   *
   */
   virtual HRESULT AddOutput (const CATISpecObject_var& iInternal) = 0;

  /** 
   * Removes an external output.
   *
   * <br><b>Role</b>: This output was initially created using AddOutput(iInternal).
   *
   * @param iInternal [in]
   *   an internal element.
   *
   * @return
   *   <code>S_OK</code> if everything ran ok, E_FAIL otherwise
   *
   */
   virtual HRESULT RemoveOutput(const CATISpecObject_var& iInternal) = 0;

  /** 
   * Replaces the result of an output.
   *
   * @param iPos [in]
   *   iPos=1 corresponds to the main result (User Feature result). <br> 
   *   iPos=2..,N corresponds to the external outputs result. <br>
   * @param iInternal [in]
   *   iInternal is the internal element retrieved with GetPossibleOutputs method
   *
   * @return
   *   <code>S_OK</code> if everything ran ok, E_FAIL otherwise.
   *
   */
   virtual HRESULT ReplaceOutput(const int iPos,
                                 const CATISpecObject_var& iInternal) = 0;

    /** 
     * Retrieves the role of an output.
     *
     * <br><b>Role</b>: The role is the name of the output in the tree.
     *
     * @param iPos [in]
     *   The parameter role <br>
     *   iPos=1 corresponds to the User Feature. Always return "MainResult" <br> 
     *   iPos=2..,N corresponds to the external outputs. <br>
     * @param oRole [out]
     *   The role of the output.
     *
     * @return
     *   <code>S_OK</code> if everything ran ok, E_FAIL otherwise
     *
     */
     virtual HRESULT GetOutputRole (const int iPos,
                                    CATUnicodeString &oRole) = 0;
 
  /** 
   * Sets the role of an output
   *
   * <br><b>Role</b>: The role is the name of the output in the tree
   * The role of the User Feature can not be modified.
   *
   * @param iPos [in]
   *   1..N. N is the size of the list retrieve with GetOutputs method
   *   iPos=1 corresponds to the User Feature. Always fails.<br> 
   *   iPos=2..,N corresponds to the external outputs. <br>
   *
   * @param iRole [in]
   *   the role of the output.<br> 
   *   The role of the User Feature can not be modified. <br>
   *
   * @return
   *   <code>S_OK</code> if everything ran ok, E_FAIL otherwise
   *
   */
   virtual HRESULT SetOutputRole (const int iPos,
                                  const CATUnicodeString &iRole) = 0;
    /**
     * @nodoc
     * Retrieve the list of external outputs.<br>
     * The external ouputs are the geometrical elements
     * which are under the UserFeature in the tree.<br>
     * The size of the list is N-1. N is the total number of outputs.<br>
     * This list does not contain the main output which is the User Feature.<br>
     * @param oExternalsOutput
     *   the list of external outputs.
     * @return
     *   S_OK if OK else E_FAIL
     */
   virtual HRESULT GetExternalOutputs (CATListValCATBaseUnknown_var* & oExternalsOutput) = 0;
   
   /**
     * @nodoc
     *   Choix de l'input pour l'inactive
     *   inumoutput : numero de sortie a inactiver
     *   ipos       : numero d'input choisi (la numerotation va de 1 a GetInputsNumber)
     */
   virtual HRESULT SetInactiveInput (const int inumoutput,
                                     const int ipos) = 0;
   /**
     * @nodoc
     *   Lecture de l'input pour l'inactive
     *   inumoutput : numero de sortie a inactiver
     *   ipos       : numero d'input choisi (la numerotation va de 1 a GetInputsNumber)
     */
   virtual HRESULT GetInactiveInput (const int inumoutput,
                                     int& ipos) = 0;
   /**
     * @nodoc
     *   Lecture de l'input pour l'inactive
     *   inumoutput : numero de sortie a inactiver
     *   ipos       : numero d'input choisi (la numerotation va de 1 a GetInputsNumber)
     */
   virtual HRESULT GetInactiveInput (const CATISpecObject_var& output,
                                     CATISpecObject_var& neutralspec) = 0;
  
   /**
     * Sets the type of the user feature.
     * @param iType
     *   The type of the User Feature
   */
   virtual HRESULT SetType(const CATUnicodeString& iType) = 0;

  /**
   * Gets the type of the user feature.
   * @param oType
   *   The type of the User Feature   
   */
   virtual HRESULT GetType(CATUnicodeString& oType) = 0; 

   /**
     * @nodoc
     *	  Synchronisation
     */
   virtual HRESULT Synchronize (const CATISpecObject_var& startup) = 0;

    /**
     * @nodoc
     *	  Synchronisation de tous les instances du document
     */
   virtual HRESULT SynchronizeAllInstance (CATListValCATISpecObject_var*& listobj) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler (CATIUdfFeatureUser, CATBaseUnknown);

#endif
