#ifndef  CATEpeProxyDocument_h
#define  CATEpeProxyDocument_h
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
//    Class that represents a CATIA document not loaded in session
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

// --- Forward declaration

class CATScmProxyDocument ;

// --- Header that need to be referenced

#include "CATEpeObject.h"

/**
  * Class representing a not loaded CATIA document.
  *
  * <b>Role</b>:
  * Define a not loaded CATIA document in a reconciliation session. Document to be
  * reloaded from VPDM repository.
  */

class ExportedByCATPDMReconcileModel CATEpeProxyDocument : public CATEpeObject
{
   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------

   public:

   /** @nodoc
     * Constructs a Proxy document.
     * 
     * <br><b>Role</b>: Constructs a Proxy document object to manage reconciliation.
     * (We expect a file path for a not loaded document)
     */
      CATEpeProxyDocument() ;

   /** @nodoc
     * Destructor.
     * 
     * <br><b>Role</b>: Destructor.
     */
      ~CATEpeProxyDocument() ;

   /** @nodoc
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      CATEpeProxyDocument( const CATEpeProxyDocument & ixNode ) ;

    /** @nodoc
      * Assignment operator from another object node.
      * 
      * @param ixNode
      * Object used as reference for the assignment.
      */
      CATEpeProxyDocument & operator=( const CATEpeProxyDocument & ) ;

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
      * associated <b><i>CATEpeProxyDocument</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpeProxyDocument * GetExposedEntity( const CATScmProxyDocument * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object..
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATScmProxyDocument</i></b>. 
      */
       CATScmProxyDocument * GetExposedEntity() const ;

      // -----------------------------------------------
      // --- Access to Proxy document information
      // -----------------------------------------------

   /**
     * Gets file path of the not loaded CATIA document.
     *
     * <br><b>Role</b>: Gets complete file path of the not loaded CATIA document.
     * 
     * @return
     *  String that represents the complete file path.
     * 
     */
      CATUnicodeString GetFilePath() const ;

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
 
} ;

#endif
