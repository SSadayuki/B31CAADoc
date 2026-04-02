#ifndef  CATEpeInstance_h
#define  CATEpeInstance_h
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
//    Class that represents a part instance
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

class CATScmInstance           ;
class CATEpePartVersion        ;
class CATEpeFirstLevelInstance ;

// --- Header that need to be referenced

#include "CATEpeObject.h"

// --- Class definition

/**
 * Class representing an instance of Part in an Assembly structure.
 *
 * <b>Role</b>:
 * Define an instance of @href CATEpePartVersion within an Assembly structure.
 */

class ExportedByCATPDMReconcileModel CATEpeInstance : public CATEpeObject
{
   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------

   public:

   /** @nodoc
     * Constructs an Instance.
     */
      CATEpeInstance() ;

   /** @nodoc
     * Destructor.
     * 
     * <br><b>Role</b>: Destructor.
     */
      ~CATEpeInstance() ;

   /** @nodoc
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      CATEpeInstance( const CATEpeInstance & ixNode ) ;

      // --- Operateur d'affectation

   /** @nodoc
     * Assignment operator from another object node.
     * 
     * @param ixNode
     * Object used as reference for the assignment.
     */
      CATEpeInstance & operator=( const CATEpeInstance & ixNode ) ;

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
      * associated <b><i>CATEpeInstance</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpeInstance * GetExposedEntity( const CATScmInstance * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object..
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATScmInstance</i></b>. 
      */
       CATScmInstance * GetExposedEntity() const ;

      // ----------------------------------------------------------------------
      // --- Access to Product Structure references (Part & assembly relation)
      // ----------------------------------------------------------------------

   /**
     * Gets the Part reference of this instance.
     *
     * <br><b>Role</b>: Gets the father Part of the current object.
     * 
     *
     * @return
     * Father part. 
     */
      CATEpePartVersion * GetReference() const ;

   /**
     * Gets the Assembly relation reference of this instance.
     *
     * <br><b>Role</b>: Gets the Assembly relation reference of this instance.
     * 
     *
     * @return
     * Assembly relation object. 
     */
      CATEpeFirstLevelInstance * GetAssemblyRelation() const ;

   /**
     * Sets the Assembly relation reference of this instance.
     *
     * <br><b>Role</b>: Sets the Assembly relation reference of this instance.
     * 
     * @param ixAR
     *   Assembly relation object.
     */
      void SetAssemblyRelation( CATEpeFirstLevelInstance * const ixAR ) ;

   /**
     * Gets next child in the instance tree.
     *
     * <br><b>Role</b>: Scans assembly structure instance tree (in depth first).
     * 
     * @return
     * Next child object node. 
     * <br>Return <tt>NULL</tt> if <tt>ixPrevious</tt> is not a child of current node 
     * or if it is the last child
     * 
     * @param ixPrevious
     * Current child object.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><tt>NULL</tt> To get the the root of the assembly (the <b><i>CATEpeInstance</b></i> itself) and 
     * depth level is initialized to 0.</li>
     * <ul/>
     * 
     * @param ionUpDown 
     * Level of depth on the <b><i>CATEpeInstance</b></i>.
     * This value is initialized to 0 when full assembly scan is done or when scan is initialized (NULL value for <b>ixPrevious</b>).
     * Otherwise computed by incrementation or decrementation of the input value.
     * 
     */
      CATEpeInstance * ScanInstanceTree( CATEpeInstance * ixPrevious , int & ionUpDown ) ;

} ;

#endif
