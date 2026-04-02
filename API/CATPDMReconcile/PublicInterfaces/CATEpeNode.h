#ifndef  CATEpeNode_h
#define  CATEpeNode_h
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
//      RESPONSIBLE : Jean-Luc MEDIONII
//      FUNCTION    : Reconciliator
//      USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//   Description :
//   ------------
//
//    Base class for a simple object hierarchical model
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
// Abstract class    : Yes
// Template code     : No
// Ilined   Function : No
// ****************************************************************

#include "CATPDMReconcileModel.h"

#include <time.h>

// --- Forward declaration

class CATScmNode ;
class CATEpeNode ;

// --- Header that need to be referenced

#include "CATUnicodeString.h"
#include "CATTime.h"
#include "CATLib.h"

#include "CATListOfCATEpeNode.h"

/**
  * Constant value to define the node type : Unknown
  */
#define CATEpeNodeUnknown             0
/**
  * Constant value to define the node type for a Reconciliation Session.
  */
#define CATEpeNodeSession             1
/**
  * Constant value to define the node type for an Object to Reconcile.
  */
#define CATEpeNodeObject              2
/**
  * Constant value to define the node type for a Part.
  */
#define CATEpeNodeDocument            6
/**
  * Constant value to define the node type for a Part.
  */
#define CATEpeNodeProxyDocument      10
/**
  * Constant value to define the node type for a Part.
  */
#define CATEpeNodePartVersion        18
/**
  * Constant value to define the node type for an Assembly relation.
  */
#define CATEpeNodeFirstLevelInstance 34
/**
  * Constant value to define the node type for a Instance of Part.
  */
#define CATEpeNodeInstance           66

// --- Class definition

/**
  * Generic class to manage nodes in the test scenario structure.
  *
  * <b>Role</b>:
  * All information in this domain will be managed as nodes in a tree 
  * structure. Each node is typed and contains tags with valuation. The list of
  * tags on a node depends on the node type.
  *
  * <br>The intend of those structure is to enable comparison between assembly structure stored.
  * in many different system CATIA document in session or in ENOVIA systems.
  * <br>The root node of those trees is a @href CATEpeInstance.
  */

class ExportedByCATPDMReconcileModel CATEpeNode
{
   // ----------------------------------------------------------
   // --- C++ standard methods (Constructor / Destructor...)
   // ----------------------------------------------------------

   public:

   /**
     * Constructs an accessor to a Reconciliation object (generic node object with no name).
     * 
     * <br><b>Role</b>: This method does not create Reconciliation object, it just create an accessor to a Reconciliation object. 
     * To really add a Reconciliation object, you have to use @href #CreateNode method. 
     */
      CATEpeNode() ;

   /**
     * Destructor of the Reconciliator object accessor.
     * 
     * <br><b>Role</b>: This method does not remove Reconciliation object it just deletes the accessor to the Reconciliation object. 
     * To really remove a Reconciliation object, you have to use @href #RemoveNode method. 
     */
      ~CATEpeNode() ;

   /**
     * Copy constructor.
     * 
     * @param ixNode
     *  Object accessor to be duplicated.
     */
      CATEpeNode( const CATEpeNode & ixNode ) ;

   /**
     * Assignment operator from another object node.
     * 
     * @param ixNode
     *  Object accessor used as reference for the assignment.
     */
      CATEpeNode & operator=( const CATEpeNode & ixNode ) ;

    // ---------------------------------------------
    // --- Manage Reconciliation session content ---
    // ---------------------------------------------

   /**
     * Enables to request deletion of a Reconciliation Object.
     * 
     * <br><b>Role</b>: Enables to request deletion of a Reconciliation Object.
     * This operation will remove the object from the memory and cut all relationship of this object from 
     * another objects in the session. 
     * This operation is in particular requested in the case of implementation of Product structure comparison User Exit.
     */
     void RemoveNode() ;

   /**
     * Create a Reconciliation object.
     * 
     * <br><b>Role</b>: Enables to create a Reconciliation Object of a certain type.
     * 
     * @param inType
     * Node type
     * <br><b>Legal values</b>: see @href CATScmNode#GetType
     *
     * @param ixFather
     *    Father node for this object.
     *
     * @see CATEpeInstance , CATEpePartVersion , CATEpeFirstLevelInstance
     */
      static CATEpeNode * CreateNode( int          inType   = CATEpeNodeUnknown
                                    , CATEpeNode * ixFather = NULL ) ;

    // -----------------------------------------
    // --- General management                ---
    // -----------------------------------------


    /**
      * Access to CAA reconciliator object from other reconciliator objects.
      *
      * <b>Role:</b> Access to CAA reconciliator object from other reconciliator objects.
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATEpeNode</i></b>. 
      * 
      * @param ixObj
      *  Internal session entity.
      */
       static CATEpeNode * GetExposedEntity( const CATScmNode * ixObj ) ;

    /**
      * Access to object reconciliator internal object.
      *
      * <b>Role:</b> Access to object reconciliator internal object.
      * 
      * @return
      * Method return code 
      * <br><b>Legal values</b>: Returns <b><i>NULL</i></b> if one error occur, otherwise provide access
      * associated  <b><i>CATScmNode</i></b>. 
      */
       CATScmNode * GetExposedEntity() const ;

   /**
     * Gets the node type.
     *
     * <br><b>Role</b>: Gets the object type information.
     *
     * @return
     * Gets the node type 
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>CATEpeNodeUnknown</tt>Object type not define</li>
     * <ul/>
     */
     int GetType() const ;

   /**
     * Checks that a node is of a certain type.
     *
     * <br><b>Role</b>: Checks that a node is of a certain type with respect to inheritance.
     *
     * @return
     * <ul>
     * <li><b>1</b> if the <b>CATEpeNode</b> is to type <b>inType</b></li>
     * <li><b>O</b> otherwise</li>
     * <ul/>
     *
     * @param inType 
     * Object type.
     */
     int IsOfType( int inType ) const ;

   /**
     * Gets name.
     *
     * <br><b>Role</b>: Gets the object name.
     *
     * @return
     * Object name.
     */
      const CATUnicodeString & GetName() const ;

   /**
     * Sets the node name.
     *
     * <br><b>Role</b>: Sets the instance id.
     *
     * @return
     * Returns error code
     *
     * @param icName
     * Node name.
     */
      HRESULT SetName( const CATUnicodeString & icName ) ;

   /**
     * Gets the PDM Id.
     *
     * <br><b>Role</b>: Gets the PDM Id.
     *
     * @return
     * Object PDM Id.
     */
      CATUnicodeString GetPDMId() const ;

   /**
     * Gets VPDM object Timestamp.
     *
     * <br><b>Role</b>: Gets VPDM object Timestamp.
     *
     * @return
     * Returns VPDM time stamp of this object
     */
      CATTime GetPdmTimeStamp() const ;

      // -----------------------------------------
      // --- Status management                 ---
      // -----------------------------------------
   
    /**
      * Enumeration of defining the rule status of an Object.
      * 
      * @param NOTCOMPLETED
      *  Reconciliation rule not completely defined for this object.
      * 
      * @param COMPLETED
      *  Reconciliation rule completely defined for this object.
      * 
      * @param INHERITED
      *  Reconciliation rule defined by inheritance from another object.
      *  <b><u>Example:</u></b> Assembly Product associated to CATIA V4 model
      *  will inherited information about reconciliation from the rule set on the CATIA
      *  V4 model (the associated shape).
      * .
      */
      enum CATRecStatus
      {
         NOTCOMPLETED ,
         COMPLETED    ,
         INHERITED
      } ;
 
   /** @nodoc
     * Test if rule status of is inherited.
     *
     * <br><b>Role</b>: Test if rule status of is inherited  (@href CATEpeNode#INHERITED ).
     *
     * @return
     *  A flag indicated if Rule status is inherited.
     */
      int IsInherited() const ;

   /**
     * Gets Rule status of an object.
     *
     * <br><b>Role</b>: Gets rule status of an object among authorized status.
     *
     * @return
     * Object status among authorized status.
     */
      CATRecStatus GetStatus() const ;

   /** @nodoc
     * Sets rule status of an object.
     *
     * <br><b>Role</b>: Sets rule status of an object among rule status.
     *
     * @param inStatus
     * Object rule status among rule status.
     */
      HRESULT SetStatus( CATRecStatus inStatus ) ;

      // --- Define authorized comparison status

    /**
      * List of authorized comparison status.
      * 
      * @param UnknownStatus
      *  No comparison status defined.
      * 
      * @param IdenticalStatus
      *  Object identical both in CATIA and VPDM repository.
      * 
      * @param InstanceMovedStatus
      *  Object identical, but instance moved between CATIA and VPDM repository.
      * 
      * @param NewInstanceStatus
      *  Object known only in CATIA.
      * 
      * @param IgnoreStatus
      *  Object existing in CATIA, but not to be saved in VPDM repository.
      * 
      * @param SuppressInstanceStatus
      *  Object not existing in CATIA, but present in VPDM repository.
      */
      enum CATEpeNodeStatus
      {
         UnknownStatus          ,
         IdenticalStatus        ,
         InstanceMovedStatus    ,
         NewInstanceStatus      ,
         SuppressInstanceStatus ,
         IgnoreStatus           ,
         OnlyVPDMStatus
      } ;

   /**
     * Sets status of an object.
     *
     * <br><b>Role</b>: Sets status of an object among authorized status.
     *
     * @param inStatus
     * Object status among authorized status.
     */
      void SetComparisonStatus( CATEpeNodeStatus inStatus ) ;

   /**
     * Gets comparison status of an object.
     *
     * <br><b>Role</b>: Gets comparison status of an object among authorized status.
     *
     * @return
     * Object status among authorized status.
     */
      CATEpeNodeStatus GetComparisonStatus() const ;

      // -----------------------------------------------------
      // --- Scans list of all children of node
      // ---   * To start scan initialize xPrevious to NULL
      // ---   * At scan ends whe return NULL
      // -----------------------------------------------------
 
   /**
     * Gets next child.
     *
     * <br><b>Role</b>: Scans the list of children of current node object.
     * 
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
     * <li><tt>NULL</tt> to get the first child</li>
     * <ul/>
     */
      CATEpeNode * ScanChildren( const CATEpeNode * const ixPrevious ) const ;

   /**
     * Gets next child of a defined type.
     *
     * <br><b>Role</b>: Scans the list of children having a defined type.
     * 
     *
     * @return
     * Next child object node. 
     * <br>Return <tt>NULL</tt> if <tt>ixPrevious</tt> is not a child of current node 
     * or if it is the last child
     * 
     * 
     * @param inInTypeNode
     * Defines the type node you want to query on.
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>CATEpeNodeDocument</tt> To search among object node type (Document, part, instance...).</li>
     * <li><tt>CATEpeNodeProxyDocument</tt> To search among document not loaded (Proxy-document).</li>
     * <li><tt>CATEpeNodeInstance</tt> To search among instance of Part Version.</li>
     * <li><tt>CATEpeNodePartVersion</tt> To search among all "Part version" Objects.</li>
     * <li><tt>CATEpeNodeFirstLevelInstance</tt> To search among all "Assembly Relation" Objects.</li>
     * <li><tt>CATEpeNodeSession</tt> To search among all <b>CATEpeSession</b> Objects.</li>
     * </ul>
     * 
     * @param ixPrevious
     * Current child object.
     * <br><b>Legal values</b>:
     * <ul>
     * <li><tt>NULL</tt> to get the first child</li>
     * <ul/>
     */
      CATEpeNode * ScanChildren( int inInTypeNode , const CATEpeNode * const ixPrevious ) const ;

    /**
     * Gets the father node.
     *
     * <br><b>Role</b>: Gets the father node of the current object.
     * 
     *
     * @return
     * Father node object. 
     */
      CATEpeNode * GetFather() const ;

   /**
     * Gets children of a CATEpeNode.
     *
     * <br><b>Role</b>: Gets children of a CATEpeNode.
     *
     * @param inInTypeNode
     * Defines the type node you want to query on.
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>CATEpeNodeUnknown</tt> To search among all child nodes.</li>
     * <li><tt>CATEpeNodeDocument</tt> To search among object node type (Document, part, instance...).</li>
     * <li><tt>CATEpeNodeProxyDocument</tt> To search among document not loaded (Proxy-document).</li>
     * <li><tt>CATEpeNodeInstance</tt> To search among instance of Part Version.</li>
     * <li><tt>CATEpeNodePartVersion</tt> To search among all "Part version" Objects.</li>
     * <li><tt>CATEpeNodeFirstLevelInstance</tt> To search among all "Assembly Relation" Objects.</li>
     * <li><tt>CATEpeNodeSession</tt> To search among all <b>CATEpeSession</b> Objects.</li>
     * </ul>
     * 
     * @return
     *  List of Nodes.
     */
      CATListOfCATEpeNode * GetChildren( int inInTypeNode ) const ;

   // -----------------------------------
   // --- Print attribute identity card
   // -----------------------------------

   /**
     * Print a report on standard output.
     *
     * <br><b>Role</b>: Print the content of this node and its children.
     * 
     * @param inLevel
     * Enable to have an indented presentation according to the tree depth of the node.
     */
      void Print( const char * const cInfo = NULL ) const ;
} ;

#endif
