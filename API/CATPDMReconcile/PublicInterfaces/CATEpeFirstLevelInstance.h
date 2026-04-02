#ifndef  CATEpeFirstLevelInstance_h
#define  CATEpeFirstLevelInstance_h
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
//    Class that represents Assembly relation
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

class CATEpePartVersion        ;
class CATScmFirstLevelInstance ;

// --- Header that need to be referenced
// --- * System framework

#include "CATMathTransformation.h"

// --- * Mother class

#include "CATEpeObject.h"

// --- Class definition

/**
  * Class representing an assembly relation between two parts.
  *
  * <b>Role</b>:
  * Define an Assembly relation between two @href CATEpePartVersion.
  * They could be stored in CATIA & in VPDM repository.
  */

class ExportedByCATPDMReconcileModel CATEpeFirstLevelInstance : public CATEpeObject
{
   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------

   public:

   /** @nodoc
     * Constructs an Assembly relation.
     */
      CATEpeFirstLevelInstance() ;          

   /** @nodoc
     * Destructor.
     * 
     * <br><b>Role</b>: Destructor.
     */
      ~CATEpeFirstLevelInstance() ;

    /** @nodoc
      * Copy constructor.
      * 
      * @param ixNode
      * Object to be duplicated.
      */
      CATEpeFirstLevelInstance( const CATEpeFirstLevelInstance & ixNode ) ;

    /** @nodoc
      * Assignment operator from another object node.
      * 
      * @param ixNode
      * Object used as reference for the assignment.
      */
      CATEpeFirstLevelInstance & operator=( const CATEpeFirstLevelInstance & ) ;

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
      * associated <b><i>CATEpeFirstLevelInstance</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpeFirstLevelInstance * GetExposedEntity( const CATScmFirstLevelInstance * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object..
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATScmFirstLevelInstance</i></b>. 
      */
       CATScmFirstLevelInstance * GetExposedEntity() const ;

      // --------------------------------
      // --- Access to Part information
      // --------------------------------

   /**
     * Gets father part in assembly relation.
     *
     * <br><b>Role</b>: Gets father part in assembly relation.
     * 
     * @return
     * Father Part Version. 
     */
      CATEpePartVersion * GetFatherPart() const ;

   /**
     * Gets child part in assembly relation.
     *
     * <br><b>Role</b>: Gets child part in assembly relation.
     *
     * @return
     * Child Part Version.
     */
      CATEpePartVersion * GetChildPart() const ;

   /**
     * Sets child part in assembly relation.
     *
     * <br><b>Role</b>: Sets child part in assembly relation.
     * 
     * @param ixChild
     * Child Part Version.
     */
      void SetChildPart( CATEpePartVersion * const ixChild ) ;

   /**
     * Gets child part position.
     *
     * <br><b>Role</b>: Gets child part position relative to its part father.
     * 
     * @return
     * Child position.
     */
      const CATMathTransformation & GetPosition() const ;

} ;

#endif
