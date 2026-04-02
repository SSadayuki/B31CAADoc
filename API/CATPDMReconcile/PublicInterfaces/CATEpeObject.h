#ifndef CATEpeObject_H
#define CATEpeObject_H
// Reconciliator
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004-2010
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
// *****************************************************************
//
//   Identification :
//   ---------------
//
//      RESPONSIBLE : Jean-Luc MEDIONI
//      FUNCTION    : Reconciliator
//      USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//   Description :
//   ------------
//
// Header definition: CATEpeObject represents one object to be reconciled.
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//
// ****************************************************************
//
//   Story :
//   -------
//
//    Revision 1.0  Dec 2004  Author:  Jean-Luc MEDIONI
//                            Purpose: CAA exposition
//
// ****************************************************************
//
// INSIDE class:
// -------------
//
//
// ****************************************************************

#include "CATPDMReconcileModel.h"

// --- Mother class

#include "CATEpeNode.h"

// --- Forward declaration

class CATEpeObject           ;
class CATScmPDMObject        ;
class CATScmObject           ;

// --- Necessary includes
// --- * System

#include "CATCollec.h"
#include "CATString.h"

// --- * Reconciliation session

#include "CATEpeSession.h"    

// --- * Reconciliator interfaces

#include "CATLISTPCATIPDMCriterionScm.h"
#include "CATLISTPCATIPDMCharacteristicScm.h"
#include "CATLISTPCATScmPDMObject.h"

/**
  * CATIA Object to be reconciled with its representation in VPDM Repository.
  *
  * <b>Role</b>:
  * CATIA Object to be reconcile with its representation in VPDM Repository.
  * It could represent either a <b>CATIA document</b> or an <b>ASM_Product</b>.
  *
  * <br>A typical definition of a reconciliation rule on an object is made of following steps
  * <ol>
  * <li>Select and sets one <b><i>Environment</b></i> among authorized one for this object.</li>
  * <li>Select and execute on <b><i>Criterion</b></i> among authorized one for this object.</li>
  * <li>Select on Criterion result one PDM Object (is object will not be saved as new object).</li>
  * <li>Define reconciliation rule to be applied among authorized reconciliation rule.</li>
  * </ol>
  *
  * @see CATEpeSession.
  */

class ExportedByCATPDMReconcileModel CATEpeObject: public CATEpeNode
{   
   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------
      
     public:

   /** @nodoc
     * Constructs a reconciliation object.
     * 
     * <br><b>Role</b>: Constructs a Reconciliation object.
     */
      CATEpeObject() ;

    /** @nodoc
      * Assignment operator from another object node.
      * 
      * @param ixNode
      * Object used as reference for the assignment.
      */
      CATEpeObject & operator=( const CATEpeObject & ) ; 
      
    /** @nodoc
      * Copy constructor.
      * 
      * @param ixNode
      * Object to be duplicated.
      */
      CATEpeObject( const CATEpeObject & ixNode ) ;

   /** @nodoc
     * Delete & clean reconciliator object.
     * 
     * <br><b>Role</b>: Delete & clean reconciliator object.
     */
      ~CATEpeObject() ;

    // -----------------------------------------
    // --- General management
    // -----------------------------------------


    /**
      * Access to CAA reconciliator object from other reconciliator objects.
      *
      * <b>Role:</b> Access to CAA reconciliator object from other reconciliator objects.
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated <b><i>CATEpeObject</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpeObject * GetExposedEntity( const CATScmObject * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object..
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATScmObject</i></b>. 
      */
       CATScmObject * GetExposedEntity() const ;

   // -------------------------------------------
   // --- Manage criterion (Object queries)
   // -------------------------------------------

   /**
     * Gets List of criteria applicable for this object for a given environment.
     *
     * <b>Role:</b> Gets List of criteria applicable for this object for a given environment.
     * 
     * <br><b>Precondition</b>: Assumes that the address of an already
     *   built <b><i>CATLISTP(CATIPDMCriterion)</i></b> is passed.
     * <br><b>Postcondition</b>: RemoveAll to be called by the caller on the list obtained.
     * <br><b>Postcondition</b>: All ready built list(object) to be passed.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param ioCriteriaList
     * List of authorized <b><i>Criteria</i></b>.
     */
     HRESULT GetCriteriaList( CATLISTP(CATIPDMCriterionScm) & ioCriteriaList ) const ;

   /**
     * Gets current <b><i>Criterion</i></b> on this object.
     *
     * <b>Role:</b> Gets current <b><i>Criterion</i></b> on this object.
     * 
     * <br><b>Postcondition</b>: Release on the interface required by the caller.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param oCrit
     * <b><i>Criterion</i></b>.
     */
      HRESULT GetCurrentCriterion( CATIPDMCriterionScm ** oCrit ) const ;

   /** @nodoc
     * Sets current <b><i>Criterion</i></b> on this object.
     *
     * <b>Role:</b> Sets current <b><i>Criterion</i></b> on this object.
     * 
     * <br><b>Postcondition</b>: Release on the interface required by the caller.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param iCrit
     * <b><i>Criterion</i></b>.
     */
      HRESULT SetCurrentCriterion( CATIPDMCriterionScm * iCrit ) ;

   /**
     * Executes the current <b><i>Criterion</i></b> queries.
     *
     * <b>Role:</b> Executes against VPDM repository the current <b><i>Criterion</i></b> query which 
     * is a old mode criterion based on list of attributes.
     * 
     * <br><b>Precondition</b>: Assumes that oPDMObjList address should be passed 
     * on as built objects, to be letft as it is
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param iQueryValueList
     *  Optional list of value for a query
     */
      HRESULT ExecuteCriterion( CATListValCATUnicodeString  & iQueryValueList ) ;

   /**
     * Executes the current <b><i>Criterion</i></b>.
     *
     * <b>Role:</b> Executes against VPDM repository the current <b><i>Criterion</i></b> query which 
     * is a XML mode criterion.
     * 
     * <br><b>Precondition</b>: Assumes that oPDMObjList address should be passed 
     * on as built objects, to be letft as it is
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param icQueryXML
     *   Criterion parameters to be used to Execute criterion.
     *   <br><b>Legal values</b>: If XML stream is empty, we will recompute parameters from default values ( @see CATIPDMCriterionScm::GetCriterionParametersXML ). 
     */
      HRESULT ExecuteCriterion( CATUnicodeString & icQueryXML ) ;

   /**
     * Resets Execute <b><i>Criterion</i></b> results.
     *
     * <b>Role:</b> Suppress all Execute <b><i>Criterion</i></b> results.
     */
      void ResetExecuteCriterion() ;

   /**
     * Gets list of PDM objects result of the execution of current <b><i>Criterion</i></b>.
     *
     * <b>Role:</b> Gets list of PDM objects result of the execution of current <b><i>Criterion</i></b>.
     * 
     * <br><b>Precondition</b>: Assumes that oPDMObjList address should be passed 
     * on as built objects, should be left as it is.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param oPDMObjList
     *  List of VPDM objects that fullfil request (@href CATScmPDMObject ).
     */
      HRESULT GetPDMObjectList( CATListPtrCATScmPDMObject & oPDMObjList ) ;

   /**
     * Gets list of PDM attributes in the result of the execution of current <b><i>Criterion</i></b>.
     *
     * <b>Role:</b> Gets list of PDM attributes in the result of the execution of current <b><i>Criterion</i></b>.
     * 
     * <br><b>Precondition</b>: Assumes that oAttrColNames address should be passed 
     * on as built objects, only need to be emptied by RemoveAll.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param oAttrColNames
     * List of attribute names readed in VPDM repository.
     */
      HRESULT GetAttributeColumnNameList( CATListValCATUnicodeString & oAttrColNames ) const ;
 
   // -------------------------------------------
   // --- Manage rule definition
   // -------------------------------------------

   /**
     * Defines <b><i>Environment</i></b>  where this object need to be stored.
     *
     * <b>Role:</b> Defines <b><i>Environment</i></b>  where this object need to be stored.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param iEnv
     *  String defining the <b><i>Environment</i></b>.
     * <br><b>Legal values</b>: Could be found using @href CATEpeSession#GetEnvironments. 
     */
      HRESULT SetEnvironment( const CATUnicodeString & iEnv ) ;

   /**
     * Gets the <b><i>Environment</i></b> selected.
     *
     * <b>Role:</b> Gets the <b><i>Environment</i></b> selected for this object.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param ocEnv
     *  Environment. (@set CATEpeSession)
     */
      HRESULT GetEnvironment( CATUnicodeString & ocEnv ) const ;

   /**
     * Sets the Selected PDM Object amongst the PDM objects retrieved through the ExecuteCriterion.
     *
     * <b>Role:</b> Sets the Selected PDM Object amongst the PDM objects retrieved through the ExecuteCriterion.(@href CATScmPDMObject ).
     *  This PDM object will be found as result of a <b><i>Criterion</b></i> execution
     * (@href #ExecuteCriterion). 
     * 
     *  <b><u>Warning:</u></b> This method allocate a new CATScmPDMObject.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param iPDMObj
     *  PDM object.
     */
      HRESULT SetPDMObject( CATScmPDMObject * iPDMObj ) ;

   /**
     * Gets the Selected PDM Object amongst the PDM objects retrieved through the ExecuteCriterion.
     *
     * <b>Role:</b> Gets the Selected PDM Object amongst the PDM objects retrieved through the ExecuteCriterion.(@href CATScmPDMObject ).
     * 
     * <br><b>Postcondition</b>: Not to be deleted by the caller as reference is set.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param oPDMObj
     *  PDM object.
     */
      HRESULT GetPDMObject( CATScmPDMObject * &  oPDMObj ) const ;
   
   /**
     * Checks that a reconcilation rule could be used on one object.
     *
     * <b>Role:</b> Checks that the reconcilation rule could be used on one object.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param iRule
     * Reconciliation rule type (@href #CATReconcileRule)
     *
     * @param oResult
     * Indicates if rule could be used on this object. It is object and context dependant.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><b><i>TRUE</i></b> if <b><i>Rules</b></i> could be used for this object.</li>
     * <li><b><i>FALSE</i></b> otherwise.</li>
     * </ul>
     */
      HRESULT IsRuleValid( CATEpeSession::CATReconcileRule  iRule
                         , CATBoolean                     & oResult ) ;

   /**
     * Sets the reconcilation rule to be applied.
     *
     * <b>Role:</b> Sets the reconcilation rule to be applied for this object.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param iRule
     *  Reconciliation rule type (@set CATEpeSession)
     */
     HRESULT SetRule( CATEpeSession::CATReconcileRule iRule ) ;
   
   /**
     * Gets the reconcilation rule selected.
     *
     * <b>Role:</b> Gets the reconcilation rule selected.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param oRule
     *  Reconciliation rule type (@set CATEpeSession)
     */
     CATEpeSession::CATReconcileRule GetRule() const ;
 
   /**
     * Sets storage mode.
     *
     * <b>Role:</b> Sets storage mode to be applied for this object.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param inMode
     *  Storage mode selected. (@set CATEpeSession)
     */
     HRESULT SetStorageMode( CATEpeSession::CATStorageMode inMode ) ;
   
   /**
     * Gets storage mode.
     *
     * <b>Role:</b> Gets storage mode to be applied for this object.
     * If storage mode has not been selected a default will be computed.
     * 
     * @return
     *  Storage mode selected. (@set CATEpeSession)
     */
     CATEpeSession::CATStorageMode GetStorageMode() ;

   // ------------------------------------------------
   // --- Access to Characteristics for this object
   // ------------------------------------------------

   /**
     * Gets list of authorized <b><i>Characteristic</i></b> for this object.
     *
     * <b>Role:</b> Gets list of authorized <b><i>Characteristic</i></b> for this object.
     * (@href CATIPDMCharacteristicScm ).
     * 
     * <br><b>Precondition</b>: Assumes that oCharList address should be passed 
     * on as built objects, only need to be emptied by RemoveAll.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     * 
     * @param oCharList
     *  List of <b><i>Characteristic</i></b> (@href CATIPDMCharacteristicScm ).
     */
      HRESULT GetCharacteristicList( CATLISTP(CATIPDMCharacteristicScm) & oCharList ) ;

   /** 
     * Get status of a characteristic.
     *
     * <b>Role:</b> Get status of a characteristic.
     *  ie global comparison status for this characteristics between the object in
     *  CATIA session and the one selected on VPDM repository (@href CATIPDMCharacteristicScm ).
     * 
     * @return
     *  Method return code 
     *  <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param inChar
     *  Characteristic (@href #GetCharacteristicList)
     *
     * @param ocStatus
     *  List characteristic’s status
     */
      HRESULT GetCharacteristicStatus( int inChar , CATUnicodeString & ocStatus ) ;

   /** 
     * Get detailed view of characteristics values.
     *
     * <b>Role:</b> Get detailed view of characteristics values.
     *  ie detail comparison results for this characteristics between the object in
     *  CATIA session and the one selected on VPDM repository (@href CATIPDMCharacteristicScm ).
     *
     * @return
     *  Method return code 
     *  <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param inChar
     *  Characteristic (@href #GetCharacteristicList)
     *
     * @param olstCatia
     *  List of characteristics on CATIA side
     *
     * @param olstPdm
     *   List of characteristics on PDM side
     */
      HRESULT GetCharacteristicDetail( int inChar , CATListValCATUnicodeString & olstCatia 
                                                  , CATListValCATUnicodeString & olstPdm  ) ;

   /** 
     * Test if a characteristics is already computed.
     *
     * <b>Role:</b> Test if a characteristics is already computed (@href CATIPDMCharacteristicScm ).
     *
     * @return
     *  Method return code 
     *  <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param inChar
     *  Characteristic (@href #GetCharacteristicList)
     *
     * @param olComputed 
     *  Define is this Characteristic has already been computed
     */
      HRESULT IsCharacteristicComputed( int inChar , int & olComputed ) const ;

   // -------------------------------------------
   // --- Access to underlying CATIA object
   // -------------------------------------------

   /**
     *  Gets underlying CATIA object.
     *
     * <b>Role:</b> Gets underlying CATIA object.
     * 
     * <br><b>Postcondition</b>: Interface to be released by the caller.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param oRecObj [out, CATBaseUnknown#Release]
     *  CATIA object.
     */
      HRESULT GetGenericReconciliationId( CATBaseUnknown ** oRecObj ) const ;

   /** @nodoc
     *  Get access to CATIA document where this object belongs.
     *
     * <b>Role:</b> Get access to CATIA document where this object belongs.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>NULL </i></b> if <b><i>CATEpeObject</b></i> does not rely on a CATIA object or in case of error. 
     */
      CATDocument * GetDocument() const ;

   /**
     * Indicates whether the given object is an encapsulation over the CATDocument or not.
     *
     * <b>Role:</b> Indicates whether the given object is an encapsulation over the CATDocument or not.
     * 
     * @return
     * A boolean value.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><b><i>TRUE</i></b> if <b><i>Object</b></i> is a document.</li>
     * <li><b><i>FALSE</i></b> otherwise.</li>
     * </ul>
     */
      CATBoolean IsDocument() const ;

   /**
     * Indicates whether the given object is an encapsulation over the CATIProduct or not.
     *
     * <b>Role:</b> Indicates whether the given object is an encapsulation over the CATIProduct or not.
     * 
     * @return
     * A boolean value.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><b><i>TRUE</i></b> if <b><i>Object</b></i> is a part.</li>
     * <li><b><i>FALSE</i></b> otherwise.</li>
     * </ul>
     */
      CATBoolean IsPart() const ;

   /**
     * Indicates whether the given object is a document not loaded.
     *
     * <b>Role:</b> Indicates whether the given object is a document not loaded.
     * 
     * @return
     * A boolean value.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><b><i>TRUE</i></b> if <b><i>Object</b></i> is a document not loaded.</li>
     * <li><b><i>FALSE</i></b> otherwise.</li>
     * </ul>
     */
      CATBoolean IsProxyDocument() const ;

   // -------------------------------------------
   // --- Method to enable Graph display
   // -------------------------------------------

   /**
     * Gets Rule status of an object.
     *
     * <br><b>Role</b>: Gets rule status of an object among authorized status.
     *
     * @return
     * Object status among authorized status.
     */
      CATRecStatus GetStatus() const ;
} ;

#endif
