#ifndef  ENOVPublishObjectClass_h
#define  ENOVPublishObjectClass_h
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
//    of some ENOVIA Objects
/**
 * ENOVIA LCA Object classes exposed.
 *
 * <b>Role</b>: 
 * 
 * <br><b>Tags define on "Class Node" object</b>:
 * <ul>
 * <li><tt>PrimaryTypeName:</tt> The name of object base type.</li>
 * <li><tt>SecondaryTypeName:</tt> The name of final object type.</li>
 * <li><tt>SecondaryTypeOid:</tt> the internal id (Oid) of the object type.</li>
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

class ENOVPublishObjectClass ;
class ENOVPublishXMLHandler  ;

// --- Header that need to be referenced

#include "ENOVPublishObject.h"
#include "CATUnicodeString.h"

// --- Class definition

class ExportedByENOVIAPubStream ENOVPublishObjectClass : public ENOVPublishObject
{
      // --- Driver constructor

   public:
    /**
     * Constructs a node object.
     * 
     * @param ixFather
     * Pointer to the father node for this object.
     */
      ENOVPublishObjectClass( ENOVPublishObject * xFather ) ;

      // --- Destructeur 

      virtual ~ENOVPublishObjectClass() ;

      // --- Copy-constructor

    /**
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      ENOVPublishObjectClass( const ENOVPublishObjectClass & ixNode ) ;

      // --- Operateur d'affectation

    /**
     * Assignment operator from another object node.
     * 
     * @param ixNode
     * Object used as reference for the assignment.
	 */
      const ENOVPublishObjectClass & operator=( const ENOVPublishObjectClass & ixNode ) ;

      // --- Get Object information

    /**
     * Returns the name of object base type.
     *
     * <br><b>Role</b>: Returns the name of object base type, ie the ENOVIA standard object
     * class that will be customized on site. 
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocPrimaryType
     *  Type Name of the base object.
     */
      int GetPrimaryType( const char * & ocPrimaryType ) const ;

    /**
     * Returns the name of final object type.
     *
     * <br><b>Role</b>: Returns the name of object type, ie the real name of 
     * ENOVIA object.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocSecondaryType
     *  Type Name of the object.
     */
      int GetSecondaryType( const char * & ocSecondaryType ) const ;


    /**
     * Returns the internal id (Oid) of the object type.
     *
     * <br><b>Role</b>: Returns the binary value corresponding internal id (Oid)
     * of the object type.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocSecondaryTypeOid
     *  Binary string value.
     * 
     * @param onLength
     *  Binary string length.
     */
      int GetTypeId( const unsigned char * & ocSecondaryTypeOid
                   , int                   & onLength ) const ;

      // --- Set Object information

    /** @nodoc
     */
      int SetPrimaryType( const char * icPrimaryType ) ;

    /** @nodoc
     */
      int SetSecondaryType( const char * icSecondaryType ) ;

    /** @nodoc
     */
      int SetTypeId( const unsigned char * bSecondaryTypeOid
                   , int                   nSecondaryTypeOid ) ;
 
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
      CATUnicodeString  _cPrimaryTypeName    ;
      CATUnicodeString  _cSecondaryTypeName  ;
      unsigned char *   _bSecondaryTypeOid   ;
      int               _nSecondaryTypeOid   ;
} ;

#endif
