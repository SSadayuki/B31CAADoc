#ifndef CATEpeSession_H
#define CATEpeSession_H
// Reconciliator
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004-2010
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
// *****************************************************************
//
//    Identification :
//    ---------------
//
//        RESPONSIBLE : Jean-Luc MEDIONI
//        FUNCTION    : Reconciliator
//        USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//    Description :
//    ------------
//
// Header definition: CATEpeSession represents a Reconciliation session
//
// *****************************************************************
//
//    Remarks :
//    ---------
//
//
// ****************************************************************
//
//    Story :
//    -------
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
//
// ****************************************************************
// Abstract class     : No
// Template code      : No
// Ilined    Function : No
// ****************************************************************

#include "CATPDMReconcileModel.h"

// --- Forward declaration
// --- * Reconciliator infrastructure

class CATEpeObject        ;
class CATEpeInstance      ;
class CATEpePartVersion   ;
class CATEpeDocument      ;
class CATEpeProxyDocument ;
class CATScmSession       ;

// --- Father class

#include "CATEpeNode.h"

// --- Necessary includes

#include "CATListOfCATEpeNode.h"

//  --- * CATIA infrastructure

#include "CATDocument.h"
#include "CATBoolean.h"

/**
  * Enables to manage a reconciliation session.
  *
  * <b>Role</b>:
  * CATEpeSession class federates all information that are managed during a 
  * Reconciliation operation.
  * <br>A typical reconciliation process is made of following steps
  * <ol>
  * <li>Initiate reconciliation session by creating a CATEpeSession with one 
  * one CATIA document in input.</li>
  * <li>Get list of Documents to be reconciled using CATEpeSession::GetTopLevelObjectsfrom.
  * (@href CATEpeObject )</li>
  * <li>Set a Reconciliation rule on all relevant CATEpeObject. Rule could be applied 
  * on a CATEpeObject that represents either a CATIA Document or an ASM Product.
  * <br>If rule already set for this object, it will overwrite previous value.</li>
  * <li>Execute Reconciliation using CATEpeSession::ExecuteReconciliation.</li>
  * </ol>
  *
  * <br>This class will also enable to access all ressources that are used in a Reconciliation,
  * such as:
  * <ul>
  * <li>List of available Environment</li>
  * <li>List of available Criteria</li>
  * <li>List of available Characteristics</li>
  * <li>List of available Object to be reconciled</li>
  * </ul>
  *
  * @see CATEpeObject.
  */

class ExportedByCATPDMReconcileModel CATEpeSession : public CATEpeNode
{
    public :
     /**
       * Enumeration of authorized rules.
       * 
       * <br><b>Role</b>: Enumeration of authorized rules. We have 3 categories of status
       * for reconciliation rules:
       * <ul>
       * <li>Rules corresponding to <b>Publication exposed:</b>: PUBEXP_RELOADFRMPDM, PUBEXP_OVERWRITEINPDM and PUBEXP_NEWOBJECT.</li>
       * <li>Rules corresponding to <b>Structure exposed</b>: PRODSTRUCTEXP_NEWOBJECT and PRODSTRUCTEXP_OVERWRITEINPDM.</li>
       * <li>Other rules: PRODSTRUCTEXP_RELOAD, PRODSTRUCTEXP_IGNORE, DELEGATE and UNKNOWN.</li>
       * </ul>
       * @param PUBEXP_RELOADFRMPDM
       *  Reload document from VPDM repository.
       * 
       * @param PUBEXP_OVERWRITEINPDM
       *  Overwrite document in VPDM repository.
       * 
       * @param PUBEXP_NEWREVISION
       *  Overwrite document as a new revision in VPDM repository.
       * 
       * @param PUBEXP_NEWVERSION
       *  Overwrite CATPart or CATProduct document with a new version requested on its root part in VPDM repository.
       * 
       * @param PUBEXP_NEWOBJECT
       *  Save document as New in VPDM repository.
       * 
       * @param PUBEXP_NEWFROM
       *  Save document as New document initialized for an existing one.
       * 
       * @param PUBEXP_EXTERNALREFERENCE
       *  Used to manage keep broken links as is after reconciliation.
       * 
       * @param PRODSTRUCTEXP_OVERWRITEINPDM
       *  Overwrite Part in VPDM repository.
       * 
       * @param PRODSTRUCTEXP_NEWVERSION
       *  Overwrite Part as a new version in VPDM repository.
       * 
       * @param PRODSTRUCTEXP_NEWOBJECT
       *  Save Part as new in VPDM repository.
       * 
       * @param PRODSTRUCTEXP_RELOAD
       *  Part associated to a CATIA V4 model or to a CATShape with PUBEXP_RELOADFRMPDM as reconciliation rule.
       * 
       * @param PRODSTRUCTEXP_IGNORE
       *  Part associated to a CATIA V4 model or to a CATShape with PUBEXP_EXTERNALREFERENCE as reconciliation rule.
       * 
       * @param PRODSTRUCTEXP_CAP
       *  For future usage.
       * 
       * @param DELEGATE
       *  Reconciliation rule is defined on children objects
       * 
       * @param UNKNOWN
       *  No rule set.
       * 
       * @param ALL_RULES
       *  All rules masks.
       * 
       * @param NO_RULE
       *  No rules masks.
       */
        enum CATReconcileRule
        {
           PUBEXP_RELOADFRMPDM             = 0x00000001 ,
           PUBEXP_OVERWRITEINPDM           = 0x00000002 ,
           PUBEXP_NEWOBJECT                = 0x00000004 ,
           PUBEXP_EXTERNALREFERENCE        = 0x00000008 ,
           PRODSTRUCTEXP_NEWOBJECT         = 0x00000010 ,
           PRODSTRUCTEXP_OVERWRITEINPDM    = 0x00000020 ,
           PRODSTRUCTEXP_RELOAD            = 0x00000040 ,
           PRODSTRUCTEXP_IGNORE            = 0x00000080 ,
           PRODSTRUCTEXP_CAP               = 0x00000100 ,
           DELEGATE                        = 0x00000200 ,
           UNKNOWN                         = 0x00000400 ,
           PUBEXP_NEWREVISION              = 0x00000800 ,
           PUBEXP_NEWVERSION               = 0x00001000 ,
           PUBEXP_NEWFROM                  = 0x00002000 ,
           PRODSTRUCTEXP_NEWVERSION        = 0x00008000 , 
           PRODSTRUCTEXP_OVERWRITEBYDELTA  = 0x00020000 ,
           PRODSTRUCTEXP_NEWVERSIONBYDELTA = 0x00040000 ,
           ALL_RULES                       = 0xFFFFFFFF ,
           NO_RULE                         = 0x00000000
        } ;
     /**
       * Enumeration of authorized storage mode.
       * 
       * <br><b>Role</b>: Enumeration of storage mode.
       * 
       * @param PUBLICATION_EXPOSED
       *  Document will be saved in vault and only publications are exposed in VPDM repository.
       * 
       * @param STRUCTURE_EXPOSED
       *  Document will be not saved in vault and document content is exposed in VPDM repository.
       * 
       * @param BOTH_EXPOSED
       *  Document will be saved in vault as reference and document content is exposed in read only mode in VPDM repository.
       * 
       * @param NO_STORAGE_MODE
       *  Storage mode not defined.
       */
        enum CATStorageMode
        {
           PUBLICATION_EXPOSED ,
           STRUCTURE_EXPOSED   ,
           BOTH_EXPOSED        ,
           NO_STORAGE_MODE
        } ;

   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------

    /** @nodoc
      * Constructs a Reconciliation session from one document.
      * 
      * <br><b>Role</b>: Constructs a Reconciliation session from one document and 
      * documents which are in relation with it.
      * 
      * @param ixDoc
      * CATIA Document.
      */
       CATEpeSession() ;

    /** @nodoc
      * Delete & clean reconciliator session.
      * 
      * <br><b>Role</b>: Delete & clean reconciliator session.
      */
        ~CATEpeSession ();

    /** @nodoc
      * Copy constructor.
      * 
      * @param ixNode
      * Object to be duplicated.
      */
        CATEpeSession( const CATEpeSession & ixNode ) ;

    /** @nodoc
      * Assignment operator from another object node.
      * 
      * @param ixNode
      * Object used as reference for the assignment.
      */
        CATEpeSession& operator=( const CATEpeSession & ixNode ) ;
 
    // -----------------------------------------
    // --- General management
    // -----------------------------------------

   public:

    /**
      * Access to CAA reconciliator object from other reconciliator objects.
      *
      * <b>Role:</b> Access to CAA reconciliator object from other reconciliator objects.
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated <b><i>CATEpeProxyDocument</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpeSession * GetExposedEntity( const CATScmSession * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object..
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATEpeSession</i></b>. 
      */
       CATScmSession * GetExposedEntity() const ;
   
   // -------------------------------------------
   // --- Access to Reconciliation session
   // -------------------------------------------

    /**
      * Defines default <b><i>Environment</i></b> where objects need to be stored.
      *
      * <b>Role:</b> Defines default <b><i>Environment</i></b> where objects need to be stored.
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
      * 
      * @param icEnv
      *  String defining the <b><i>Environment</i></b>.
      * <br><b>Legal values</b>: Could be found using @href CATEpeSession#GetEnvironments. 
      */
       HRESULT SetEnvironment( const CATUnicodeString & icEnv ) ;

    /**
      * Gets list of authorized <b><i>Environments</i></b>.
      *
      * <b>Role:</b> Gets list of authorized <b><i>Environments</i></b>.
      * 
      * <br><b>Precondition</b>: Assumes that the address of an already
      * built <b><i>CATListValCATUnicodeString</i></b> is passed.
      *
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
      * 
      * @param iocEnvListName
      * List names of authorized <b><i>Environments</i></b>.
      */
       static HRESULT GetEnvironments( CATListValCATUnicodeString & iocEnvListName ) ;

    /**
      * Gets the default <b><i>Environment</i></b> selected.
      *
      * <b>Role:</b> Gets default <b><i>Environment</i></b> where objects will be stored.
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
      *
      * @param ocEnv
      *  Environment.
      */
       HRESULT GetEnvironment( CATUnicodeString & ocEnv ) const ;

     /**
       * Checks if it is a supported environment for Reconciliator.
       *
       * <b>Role:</b> Checks if this type (<b><i>Environment</i></b>) is supported by reconciliator. 
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param icEnvironment
       *  Environment late type.
       */
        CATBoolean IsEnvironmentAuthorized( const CATUnicodeString & icEnvironment ) const ;

     /**
       * Gets list of supported Document Types in the Context of Reconciliation.
       *
       * <b>Role:</b> Gets list of supported Document Types in the Context of Reconciliation.
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param oDocTypeList
       * List of document type supported in reconciliation operations.
       */
        static HRESULT GetSupportedDocumentTypes( CATListValCATUnicodeString * oDocTypeList ) ;

     /**
       * Checks if this type of document is supported by reconciliator.
       *
       * <b>Role:</b> Checks if this type (<b><i>DocType</i></b>) of document is supported by reconciliator. 
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param icDocType
       *  Document type.
       */
        static CATBoolean IsDocTypeAuthorized( const CATUnicodeString & icDocType ) ;

       // -------------------------------------------
       // --- Access to Reconciliation information
       // -------------------------------------------

     /**
       * Gets list of document <b><i>Objects</i></b> to be reconciled.
       *
       * <b>Role:</b> Gets list of document <b><i>Objects</i></b> to be reconciled. (@href CATEpeObject )
       * If CATEpeObject corresponds to CATProduct and <b><i>Structure Exposed</i></b> is selected, then top level
       * will delegate Reconciliation to their part children (second level of <b><i>CATEpeObject</i></b>)
       * 
       * <br><b>Precondition</b>: Assumes that the address of an already
       * built <b><i>CATListPtrCATEpeObject</i></b> is passed.
       * 
       * <br><b>Postcondition</b>: List only to be emptied by RemoveAll and individual objects not to be deleted.
       *
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param ioListOfObjects
       * List of <b><i>CATEpeObjects</i></b> to be reconcilied.
       */
        HRESULT GetTopLevelObjects( CATListOfCATEpeNode * ioListOfObjects ) const ;
    
     /**
       * Checks if reconciliation Execution could be called.
       *
       * <b>Role:</b> Checks if reconciliation Execution could be called, 
       * ie Reconciliation rules are defined on all objects (@href CATEpeObject ).
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param oResult
       * Indicates if Execute reconciliation is authorized.
       * <br><b>Legal values</b>:
       * <ul>
       * <li><b><i>TRUE</i></b> if <b><i>ExecuteReconciliation</b></i> method could be called.</li>
       * <li><b><i>FALSE</i></b> otherwise.</li>
       * </ul>
       */
        HRESULT IsExecuteAuthorized( CATBoolean & oResult ) ;

     /**
       * Starts reconciliation Execution.
       *
       * <b>Role:</b> Update CATIA session according what has been defined through
       * Reconciliation rules on objects. Nothing will be done inside VPDM repository before 
       * save in VPDM will be requested.
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       */
        HRESULT ExecuteReconciliation() ;

      // -------------------------------------------------------
      // --- Creation & Close session of Reconciliation session
      // -------------------------------------------------------

    /**
      * Creates and returns the Reconciliation Session, if it is authorized
      *
      * <b>Role:</b> Creates and returns the Reconciliation Session, if there is no previous CATEpeSession existing.   
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns S_OK and <b><i>2</i></b> if there is already one Session existing. 
      * 
      * @param iLstDocIn
      *  List of <b><i>CATDocument</i></b>.
      * @param oScmSession
      *  Pointer to newly created <b><i> CATEpeSession </i></b>.
      */
      static HRESULT CreateReconcileSession( CATLISTP(CATDocument) & iLstDocIn , CATEpeSession * & oScmSession);

    /**
      * Closes Reconciliation Session.
      *
      * <b>Role:</b> Closes Reconciliation Session.   
      */
      void CloseReconcileSession() ;

        // -------------------------------------------------
        // ---- Address Product structure comparison    ----
        // -------------------------------------------------

     /**
       * Checks if Product structure comparison is available.
       *
       * <b>Role:</b> Checks if Product structure comparison information are available,
       * ie at least one Document Reconciliation rules is set to <b><i>Structure exposes</b></i>.
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param oResult
       * Indicates if Product structure comparison could computed.
       * <br><b>Legal values</b>:
       * <ul>
       * <li><b><i>TRUE</i></b> if <b><i>ExecuteProductStructureComparison</b></i> method could be called.</li>
       * <li><b><i>FALSE</i></b> otherwise.</li>
       * </ul>
       */
        HRESULT IsProdStructComparisonAvailable( CATBoolean &oResult ) ;

     /**
       * Executes Product structure comparison.
       *
       * <b>Role:</b> Executes Product structure comparison.
       * <br><b>Note:</b>Nothing will be done inside VPDM repository or inside CATIA session.
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param oxTreeResult
       * Root of the assembly comparison structure.
       */
        HRESULT ExecuteProductStructureComparison( CATEpeInstance * & oxTreeResult ) ;

     /**
       * Access to Product structure comparison results.
       *
       * <b>Role:</b> Access to Product structure comparison results.
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param oxTreeResult
       * Root of the assembly comparison structure.
       */
        HRESULT GetComparisonStructure( CATEpeInstance * & oxTreeResult ) ;

     /**
       * Creates VPDM product structure view.
       *
       * <b>Role:</b> Create VPDM product structure view.
       * 
       * @return
       * Method return code 
       * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
       * 
       * @param oxVPDMSession
       *  Session containing result of VPDM Product structure .
       */
        HRESULT BuildVpdmView( CATEpeSession * & oxVPDMSession ) ;

      // --- Display current instance tree & status

     /** @nodoc
       * Print content of a reconciliation session with status.
       *
       * <br><b>Role</b>: Print content of a reconciliation session with status (comparison & rules).
       */
        void DumpReconcileSession() ;

} ;

//-----------------------------------------------------------------------
#endif
