#ifndef  ENOVPublishObjectNode_h
#define  ENOVPublishObjectNode_h
// EAPS
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2000
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
 * ENOVIA LCA Objects exposed.
 *
 * <b>Role</b>: 
 * 
 * <br><b>Tags define on "Object Node" object</b>:
 * <ul>
 * <li><tt>PrimaryTypeName:</tt> The name of object base type.</li>
 * <li><tt>SecondaryTypeName:</tt> The name of final object type.</li>
 * <li><tt>TimeStamp:</tt> Date & time of the publishing stream.</li>
 * <li><tt>SecondaryTypeOid:</tt> the internal id (Oid) of the object type.</li>
 * <li><tt>Oid:</tt> Object internal Id.</li>
 * <li><tt>AccessMode:</tt>Access mode.</li>
 * <li><tt>Status:</tt> Modification status information.</li>
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
//   Revision 1.0  25/05/2000   VPM : Initial Revision (JLM)
//   Revision 1.1  15/02/2001   VPM : introduce to support meta-data (JLM)
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

class ENOVPublishObjectNode  ;
class ENOVPublishObjectClass ;
class ENOVPublishXMLHandler  ;

// --- Header that need to be referenced

#include "ENOVPublishObject.h"
#include "CATUnicodeString.h"

// --- Class definition

class ExportedByENOVIAPubStream ENOVPublishObjectNode : public ENOVPublishObject
{
      // --- Driver constructor

   public:

    /**
     * Constructs a node object.
     * 
     * @param ixFather
     * Pointer to the father node for this object.
     * 
     * @param ixClass
     * Pointer to a class node that could be used as template.
     * <br><b>Default values</b>: No value or null means that no template is used.
     */
      ENOVPublishObjectNode( ENOVPublishObject      * ixFather
                           , ENOVPublishObjectClass * ixClass = NULL ) ;

      // --- Destructor 

      virtual ~ENOVPublishObjectNode() ;

      // --- Copy-constructor

    /**
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      ENOVPublishObjectNode( const ENOVPublishObjectNode & ixNode ) ;

      // --- Assignment operator

    /**
     * Assignment operator from another object node.
     * 
     * @param ixNode
     * Object used as reference for the assignment.
	 */
      const ENOVPublishObjectNode & operator=( const ENOVPublishObjectNode & ixNode ) ;

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
     * Returns date & time of the Object node.
     *
     * <br><b>Role</b>: Enables to know object timestamp at time information has been
     * extracted.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocTimeStamp
     *  Date & time information.
     * <br><b>Legal values</b>: Date is expressed using one ISO 8601 format called
     * Extended format for ordinal date and time of the day (Application will used
     * Coordinated Universal Time UTC)  
     * <table>
     *    <tr><td><b>CCYY-MM-DDThh:mm:ss</b></td> <td>"2000-00-01T00:00:01"</td></tr>
     *    <tr><td><b>CCYY-MM-DDThh:mm</b></td>    <td>"2000-00-01T00:00"</td></tr>
     *    <tr><td><b>CCYY-MM-DD</b></td>          <td>"2000-00-01" No time information set to 00:00:00</td></tr>
     *    <tr><td><b>hh:mm:ss</b></td>            <td>"12:00:00" means today at noon</td></tr>
     *    <tr><td><b>hh:mm</b></td>               <td>"14:00"  means today at 2 pm</td></tr>
     * </table>
     * <br>Where:
     * <table>
     *    <tr><td><b>CC</b></td>  <td>represents the century component</td></tr>
     *    <tr><td><b>YY</b></td>  <td>represents the year within century</td></tr>
     *    <tr><td><b>MM</b></td>  <td>represents months starting with January [1, 12]</td></tr>
     *    <tr><td><b>DD</b></td>  <td>represents the day in the month [1, 31]</td></tr>
     *    <tr><td><b>hh</b></td>  <td>represents hours from beginning of days</td></tr>
     *    <tr><td><b>mm</b></td>  <td>represents minutes</td></tr>
     *    <tr><td><b>ss</b></td>  <td>represents seconds</td></tr>
     * </table>
     */
      int GetTimeStamp( const char * & ocTimeStamp ) const ;

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

    /**
     * Returns the internal id (Oid) of the object instance.
     *
     * <br><b>Role</b>: Returns the binary value corresponding internal id (Oid)
     * of the object instance.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocOid
     *  Binary string value.
     * 
     * @param onLength
     *  Binary string length.
     */
      int GetOid( const unsigned char * & ocOid
		        , int                   & onLength ) const ;

      // --- Set Object information

    /** @nodoc
     * Sets the name of object base type.
     *
     * <br><b>Role</b>: Sets the name of object base type, ie the ENOVIA standard object
     * class that will be customized on site. 
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param icPrimaryType
     *  Type Name of the base object.
     */
      int SetPrimaryType( const char * icPrimaryType ) ;

    /** @nodoc
     * Sets the name of final object type.
     *
     * <br><b>Role</b>: Sets the name of object type, ie the real name of 
     * ENOVIA object.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param icSecondaryType
     *  Type Name of the object.
     */
      int SetSecondaryType( const char * icSecondaryType ) ;

    /** @nodoc
     * Sets date & time of the publishing stream.
     *
     * <br><b>Role</b>: Sets the date at which this information has been generated.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param icTimeStamp
     *  Date & time information.
     * <br><b>Legal values</b>: Date is expressed using one ISO 8601 format called
     * Extended format for ordinal date and time of the day (Application will used
     * Coordinated Universal Time UTC)  
     * <table>
     *    <tr><td><b>CCYY-MM-DDThh:mm:ss</b></td> <td>"2000-00-01T00:00:01"</td></tr>
     *    <tr><td><b>CCYY-MM-DDThh:mm</b></td>    <td>"2000-00-01T00:00"</td></tr>
     *    <tr><td><b>CCYY-MM-DD</b></td>          <td>"2000-00-01" No time information set to 00:00:00</td></tr>
     *    <tr><td><b>hh:mm:ss</b></td>            <td>"12:00:00" means today at noon</td></tr>
     *    <tr><td><b>hh:mm</b></td>               <td>"14:00"  means today at 2 pm</td></tr>
     * </table>
     * <br>Where:
     * <table>
     *    <tr><td><b>CC</b></td>  <td>represents the century component</td></tr>
     *    <tr><td><b>YY</b></td>  <td>represents the year within century</td></tr>
     *    <tr><td><b>MM</b></td>  <td>represents months starting with January [1, 12]</td></tr>
     *    <tr><td><b>DD</b></td>  <td>represents the day in the month [1, 31]</td></tr>
     *    <tr><td><b>hh</b></td>  <td>represents hours from beginning of days</td></tr>
     *    <tr><td><b>mm</b></td>  <td>represents minutes</td></tr>
     *    <tr><td><b>ss</b></td>  <td>represents seconds</td></tr>
     * </table>
     * </dl>
     */
      int SetTimeStamp( const char * icTimeStamp ) ;

    /** @nodoc
     */
      int SetTypeId( const unsigned char * ibSecondaryTypeOid
                   , int                   inSecondaryTypeOid ) ;
    /** @nodoc
     * Sets the internal id (Oid) of the object instance.
     *
     * <br><b>Role</b>: Returns the binary value corresponding internal id (Oid)
     * of the object instance.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ibOid
     *  Binary string value.
     * 
     * @param inLenOid
     *  Binary string length.
     */
      int SetOid( const unsigned char * ibOid
                , int                   inLenOid ) ;

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
      CATUnicodeString  _cTimeStamp          ;
      unsigned char *   _bOid                ;
      int               _nOid                ;
} ;

#endif
