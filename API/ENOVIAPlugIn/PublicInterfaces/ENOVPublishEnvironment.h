#ifndef  ENOVPublishEnvironment_h
#define  ENOVPublishEnvironment_h
// EAPS
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2001
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
// *****************************************************************
//
//   Identification :
//   ---------------
//
//      RESPONSIBLE :  Jean-Luc MEDIONI
//      FUNCTION    :  Publish information from ENOVIA to External system
//      USE         :  ENOVIA V5 Life Cycle Application
//
// *****************************************************************
//
//   Description :
//   ------------
//
//    Enable an external application to view / modify and keep a extract
//    information of an ENOVIA environment
/**
 * ENOVIA LCA environment exposed.
 *
 * <b>Role</b>: 
 * 
 * <br><b>Tags define on "Environment Node" object</b>:
 * <ul>
 * <li><tt>Name:</tt> The name of object base type.</li>
 * </ul>
 */
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//   
//
// ***************************************************************
//
//   Story :
//   -------
//
//   Revision 1.0  15/02/2001   VPM : Initial Revision (JLM)
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

#include "ENOVIAPubStream.h"

// --- List of referenced classes

class ENOVPublishEnvironment ;
class ENOVPublishXMLHandler  ;

// --- Header that need to be referenced

#include "ENOVPublishObject.h"
#include "CATUnicodeString.h"

// --- Class definition

class ExportedByENOVIAPubStream ENOVPublishEnvironment : public ENOVPublishObject
{
      // --- Driver constructor

   public:
    /**
     * Constructs a node object.
     * 
     * @param ixFather
     * Pointer to the father node for this object.
     */
      ENOVPublishEnvironment( ENOVPublishObject * xFather ) ;

      // --- Destructeur 

      virtual ~ENOVPublishEnvironment() ;

      // --- Copy-constructor

    /**
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      ENOVPublishEnvironment( const ENOVPublishEnvironment & ixNode ) ;

      // --- Operateur d'affectation

    /**
     * Assignment operator from another object node.
     * 
     * @param ixNode
     * Object used as reference for the assignment.
	 */
      const ENOVPublishEnvironment & operator=( const ENOVPublishEnvironment & ixNode ) ;

      // --- Get Object information

    /**
     * Returns the name of environment.
     *
     * <br><b>Role</b>: Returns the name of object base type, ie the ENOVIA standard object
     * class that will be customized on site. 
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocName
     *  Name of the environment.
     */
      int GetName( const char * & ocName ) const ;

      // --- Set Object information

    /** @nodoc
     */
      int SetName( const char * icName ) ;

      // --- Unstream information from an XML stream

    /** @nodoc
     */
      virtual int GetFromStream( ENOVPublishXMLHandler & xHandler
                               , AttributeList         & xAttributes ) ;
    /**
     * @nodoc
     */
      virtual int SetValueFromStream( ENOVPublishXMLHandler & xHandler
                                    , const void * const      cText ) ;

      // --- Stream information into an XML stream

    /** @nodoc
     */
      virtual int PutToStream( ENOVPublishObject * xStream ) ;

      // --- Print attribute identity card

    /**
     * Print a report on standard output.
     *
     * <br><b>Role</b>: Print the content of this node and its children.
     * 
     * @param inLevel
     * Enable to have an indented presentation according to the tree depth of the node.
     */
      virtual void Print( int inLevel = 0 ) const ;

      // --- Test a basic predicate type Name = Value

    /** @nodoc
     */
      virtual int CheckPredicate( const char * cInTag
                                , const char * cInValue ) const ;

      // --- Current Atribute information

    protected :
      CATUnicodeString  _cName ;
 } ;

#endif
