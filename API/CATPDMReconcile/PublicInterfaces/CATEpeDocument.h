#ifndef  CATEpeDocument_h
#define  CATEpeDocument_h
// Infrastructure
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
//    Class that represents a CATIA document
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
//
// ****************************************************************
// Abstract class    : No
// Template code     : No
// Ilined   Function : No
// ****************************************************************

#include "CATPDMReconcileModel.h"

// --- Forward declaration

class CATScmDocument ;

// --- Header that need to be referenced

#include "CATEpeObject.h"

// --- Class definition

/**
  * Class representing a CATIA document.
  *
  * <b>Role</b>:
  * Define a CATIA document in a reconciliation session. Document to be
  * mapped on VPDM repository for reload/New/Overwrite operation.
  */

class ExportedByCATPDMReconcileModel CATEpeDocument : public CATEpeObject
{
   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------

   public:

   /** @nodoc
     * Constructs a CATIA Document.
     * 
     * <br><b>Role</b>: Constructs a CATIA document object in Reconciliation sesion.
     * (This object need to have an adhesion to CATIDocument)
     */
      CATEpeDocument() ;

      // --- Destructeur 

   /** @nodoc
     * Destructor.
     * 
     * <br><b>Role</b>: Destructor.
     */
      ~CATEpeDocument() ;

      // --- Copy-constructor

    /** @nodoc
      * Copy constructor.
      * 
      * @param ixNode
      * Object to be duplicated.
      */
      CATEpeDocument( const CATEpeDocument & ixNode ) ;

      // --- Operateur d'affectation

    /** @nodoc
      * Assignment operator from another object node.
      * 
      * @param ixNode
      * Object used as reference for the assignment.
      */
      CATEpeDocument & operator=( const CATEpeDocument & ixNode ) ;

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
      * associated <b><i>CATEpeNode</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpeDocument * GetExposedEntity( const CATScmDocument * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object..
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATScmDocument</i></b>. 
      */
       CATScmDocument * GetExposedEntity() const ;

   // -----------------------------------------------
   // --- Access to document information
   // -----------------------------------------------

   /**
     * Gets CATIA display name.
     *
     * <br><b>Role</b>: Gets CATIA display name
     * 
     * @return
     *  String that represents the CATIA document name.
     * 
     */
     CATUnicodeString GetCatiaName() const ;

   /**
     * Gets directory path of the not loaded CATIA document.
     *
     * <br><b>Role</b>: Gets directory path of the not loaded CATIA document.
     * 
     * @return
     *  String that represents the directory path.
     * 
     */
      CATUnicodeString GetDirectoryPath() const ;

   /**
     * Gets document type.
     *
     * <br><b>Role</b>: Gets document type of the not loaded CATIA document.
     * 
     * @return
     *  String that represents the document type.
     * 
     */
      CATUnicodeString GetDocumentType() const ;

      // -------------------------------------------
      // --- Applicative container save management
      // -------------------------------------------

   /**
     * Gets Applicative container save mode.
     *
     * <br><b>Role</b>: Gets Applicative container save mode.
     * This option is* only valid for CATProduct document.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param onMode
     *  Defines if an application container must be saved.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><b><i>0</i></b> if an <b><i>Applicative container</b></i> has not to be saved.</li>
     * <li><b><i>1</i></b> if an <b><i>Applicative container</b></i> has to be saved.</li>
     * </ul>
     *
     * @param ocName
     * Name of this application container.
     */
      HRESULT GetApplicativeContainerMode( int & onMode , CATUnicodeString & ocName ) const ;

   /**
     * Sets Applicative container save mode.
     *
     * <br><b>Role</b>: Sets Applicative container save mode.
     * This option is only valid for CATProduct document.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>S_OK</i></b> if operation runs well. 
     *
     * @param inMode
     *  Defines if an application container must be saved.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><b><i>0</i></b> if an <b><i>Applicative container</b></i> has not to be saved.</li>
     * <li><b><i>1</i></b> if an <b><i>Applicative container</b></i> has to be saved.</li>
     * </ul>
     *
     * @param icName
     * Name of this application container.
     */
      HRESULT SetApplicativeContainerMode( int inMode  , CATUnicodeString & icName ) ;

} ;

#endif
