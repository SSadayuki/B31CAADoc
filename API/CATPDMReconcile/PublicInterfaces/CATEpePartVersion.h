#ifndef  CATEpePartVersion_h
#define  CATEpePartVersion_h
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
//    Class that represents a part version
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

#include "CATPDMReconcileModel.h"

// --- Forward declaration

class CATScmPartVersion ;

// --- Header that need to be referenced

#include "CATEpeObject.h"

// --- Class definition

/**
  * Class representing a Part.
  *
  * <b>Role</b>:
  * Define a Part Version in CATIA & in VPDM repository.
  */

class ExportedByCATPDMReconcileModel CATEpePartVersion : public CATEpeObject
{
   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------

   public:

   /**  @nodoc
     * Constructs a CATIA Part.
     * 
     * <br><b>Role</b>: Constructs a CATIA Part object in Reconciliation session.
     */
      CATEpePartVersion() ;

      // --- Destructeur 

   /** @nodoc
     * Destructor.
     * 
     * <br><b>Role</b>: Destructor.
     */
      ~CATEpePartVersion() ;

      // --- Copy-constructor

   /** @nodoc
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      CATEpePartVersion( const CATEpePartVersion & ixNode ) ;

      // --- Operateur d'affectation

   /** @nodoc
     * Assignment operator from another object node.
     * 
     * @param ixNode
     * Object used as reference for the assignment.
     */
      CATEpePartVersion & operator=( const CATEpePartVersion & ixNode ) ;
 
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
      * associated <b><i>CATEpePartVersion</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpePartVersion * GetExposedEntity( const CATScmPartVersion * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object..
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATScmPartVersion</i></b>. 
      */
       CATScmPartVersion * GetExposedEntity() const ;

   // ----------------------------------------------------------
   // --- Manage Default shape representation in case its different from its father CATEpeDocument 
   // ----------------------------------------------------------

   /** @nodoc
     * Gets Default shape representation.
     *
     * <br><b>Role</b>: Gets Default shape representation in case its different from its father Document.
     * 
     * @return
     *  Shape representation Document.
     * (It could be a loaded document @href CATEpeDocument or not loaded document @href CATEpeProxyDocument )
     */
      CATEpeObject * GetDefaultShape() const ;

   /**
     * Identifies if part is root of an assembly.
     *
     * <b>Role:</b> Identifies if part is root of an assembly.
     *  (ie this part is not used by any other part.)
     *  NB: This method is usable only when instance model is built
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns <b><i>1</i></b> if this object is an assembly root and <b><i>0</i></b> otherwise. 
     */
     int IsRootPart() const ;

} ;

#endif
