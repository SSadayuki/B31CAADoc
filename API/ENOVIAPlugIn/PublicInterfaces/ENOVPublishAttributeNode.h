#ifndef  ENOVPublishAttributeNode_h
#define  ENOVPublishAttributeNode_h
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
//   Node that enable to associate an attribute value to an object
//
/**
 * Class to manage attribute definition and value.
 *
 * <b>Role</b>: This class enables to manage attribute definition and value
 * defined on an Object node. The attribute node can support only one value
 * (mono-valuation) or several (multi-valuation). On an attribute, we define its
 * name, the type of values (integer, real, character string, binary, Object id,
 * symbolic link, timestamp or Vault reference) and the access authorization
 * (No access, read only or read/Write).
 * <br>
 * <br><b>Tags define on Attribute node</b>:
 * <ul>
 * <li><tt>TypeName</tt> Attribute name.</li>
 * <li><tt>ValueType</tt> Attribute value type.</li>
 * <li><tt>AccessMode</tt> Access mode.</li>
 * <li><tt>Status</tt> Modification Status (Attribute modified or not).</li>
 * <li><tt>Mandatory</tt> Indicates if the attribute must to be valuated.</li>
 * <li><tt>Key</tt> Indicates if the attribute is involved in uniqueness indentification.</li>
 * <li><tt>Multi</tt> Indicates if the attribute support multiple values.</li>
 * <li>Or the name of the attribute indicating that the predicate
 * deals with the attribute value.</li>
 * </ul>
 * <br> 
 * <br><b>Case of timestamp values:</b> Date is expressed using one ISO 8601 format called
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
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//    Enable an external application to view, modify and keep an
//    extract of some ENOVIA Objects
//   
//
// ***************************************************************
//
//   Story :
//   -------
//
//   Revision 1.0  25/05/2000   JLM : Initial Revision
//   Revision 1.1  04/10/2000   JLM : Introduce ISO 8601 as date format
//   Revision 1.2  15/02/2001   JLM : Introduce new attributes to support meta-data
//   Revision 1.3  20/03/2002   JLM : Support NLS encoding througth UTF8
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

class ENOVPublishAttributeNode  ;
class ENOVPublishAttributeValue ;
class ENOVPublishXMLHandler     ;

// --- Header that need to be referenced

#include "ENOVPublishObject.h"
#include "CATUnicodeString.h"

// --- Class definition

class ExportedByENOVIAPubStream ENOVPublishAttributeNode : public ENOVPublishObject
{
      // --- Constructor

   public:
    /**
     * Constructs an Attribute object node.
     * 
     * @param ixFather
     * Pointer to the Publish Stream object father for this PublishedBy object.
     *
     * @param icTypeName
     * Attribute name (identifier).
     *
     * @param inValueType
     * Attribute value type
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>ENOVPublishTypeInteger</tt> For integer value</li>
     * <li><tt>ENOVPublishTypeReal</tt> For real value</li>
     * <li><tt>ENOVPublishTypeString</tt> For character string value</li>
     * <li><tt>ENOVPublishTypeBinary</tt> For binary value</li>
     * <li><tt>ENOVPublishTypeOid</tt> For Object id value (an hexa-decimal string)</li>
     * <li><tt>ENOVPublishTypeUid</tt> For symbolic link value</li>
     * <li><tt>ENOVPublishTypeTimestamp</tt> For timestamp value</li>
     * <li><tt>ENOVPublishTypeVaultReference</tt> For Vault reference value</li>
     * </ul>
     * @param ilMultiValuated
     * Define if the Attribute node is mono-valuated or multi-valuated
     * <br><b>Legal values</b>: 0 means mono-valuated (default value)
     *
     */
      ENOVPublishAttributeNode( ENOVPublishObject * ixFather
                              , const char        * icTypeName      = NULL
                              , int                 inValueType     = ENOVPublishTypeString
                              , int                 ilMultiValuated = 0 ) ;

      // --- Destructor 

      virtual ~ENOVPublishAttributeNode() ;

      // --- Copy-constructor

    /**
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      ENOVPublishAttributeNode( const ENOVPublishAttributeNode & ixNode ) ;

      // --- Operateur d'affectation

    /**
     * Assignment operator from another object node.
     * 
     * @param ixNode
     * Object used as reference for the assignment.
	 */
      const ENOVPublishAttributeNode & operator=( const ENOVPublishAttributeNode & ixNode ) ;

      // --- Access to attribute information

    /**
     * Returns the attribute name.
     *
     * <br><b>Role</b>: Enables to access to Attribute name information.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocTypeName
     *  Attribute identifier.
     */
      int GetName( const char * & ocTypeName  ) const ;

    /**
     * Returns the type value for this attribute.
     *
     * <br><b>Role</b>: Enables to access to Attribute name information.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param onValueType
     * Attribute value type
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>ENOVPublishTypeInteger</tt> For integer value</li>
     * <li><tt>ENOVPublishTypeReal</tt> For real value</li>
     * <li><tt>ENOVPublishTypeString</tt> For character string value</li>
     * <li><tt>ENOVPublishTypeBinary</tt> For binary value</li>
     * <li><tt>ENOVPublishTypeOid</tt> For Object id value (an hexa-decimal string)</li>
     * <li><tt>ENOVPublishTypeUid</tt> For symbolic link value</li>
     * <li><tt>ENOVPublishTypeTimestamp</tt> For timestamp value</li>
     * <li><tt>ENOVPublishTypeVaultReference</tt> For Vault reference value</li>
     * </ul>
     */
      int GetValueType( int & onValueType ) const ;

    /**
     * Returns if attribute supports mono-valuation or multi-valuation.
     *
     * <br><b>Role</b>: Returns if attribute supports mono-valuation or multi-valuation.
     *
     * @return
     * Defines if the Attribute node is mono-valuated or multi-valuated
     * <br><b>Legal values</b>: 0 means mono-valuated
     */
      int IsMultipleValueAuthorized() const ;

    /**
     * Returns if attribute must be valuated.
     *
     * <br><b>Role</b>: Returns if attribute must be valuated at creation time.
     *
     * @return
     * Defines if the Attribute must be valuated.
     * <br><b>Legal values</b>: 0 means optional valuation for this attribute.
     */
      int IsMandatory() const ;

    /**
     * Returns if attribute participates to uniqueness indentification.
     * <br><b>Role</b>: Returns if attribute participates to uniqueness indentification.
     *
     * @return
     * Defines if the Attribute is a key attribute or not.
     * <br><b>Legal values</b>: 0 means that this attribute is not a key attribute. 
     */
      int IsKeyAttribute() const ;

    /** @nodoc
     * Sets information to define if attribute must be valuated.
     *
     * <br><b>Role</b>: Sets information to define if attribute must be valuated.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well.
     * 
     * @param ilMandatory
     * Boolean value to be setted.
     */
      int SetMandatory( int ilMandatory ) ;

    /** @nodoc
     * Sets information to define if this attribute participates to uniqueness indentification.
     *
     * <br><b>Role</b>: Sets information to define if this attribute participates to uniqueness indentification.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well.
     * 
     * @param ilKey
     * Boolean value to be setted.
     */
      int SetKeyAttribute( int ilKey ) ;

      // ------------------------------
      // --- Case of multiple-value ---
      // ------------------------------

      // --- * To add new values used standard Apend and InsertBefore methods
      // ---   on ENOVPublishObject father class

      // --- * Number of values

    /**
     * Returns the number of values for this attribute.
     *
     * <br><b>Role</b>: Returns the number of values for this attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param onbValues
     * Number of values (0 in case of mono-valuated attribute)
     */
      int GetNumberOfValues( int & onbValues ) const ;

      // --- * Access an attribute value by its position

    /**
     * Returns one of values for this attribute.
     *
     * <br><b>Role</b>: Access to attribute values per value position.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param inValuePos
     * Value indices.
     * 
     * @param oxValue
     * Attribute value object corresponding to the attribute at 
     * <tt>inValuePos</tt> position.
     */
      int GetValue( int inValuePos
                  , ENOVPublishAttributeValue * & oxValue ) const ;

      // ------------------------------
      // --- Case of mono-value     ---
      // ------------------------------

      // --- Access to attribute value in case of a mono value
      // --- * Integer values

    /**
     * Returns attribute value for an integer value.
     *
     * <br><b>Role</b>: Enables to read integer value of the Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 3 if attribute not valuated.</li>
     * </ul>
     * 
     * @param onValue
     * Attribute value.
     */
      int GetValue( int & onValue ) const ;

    /**
     * Sets attribute value for an integer value.
     *
     * <br><b>Role</b>: Sets value of the integer Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 4 if attribute modification not authorized.</li>
     * <li>Returns 5 if attribute modification could not be done.</li>
     * </ul>
     * 
     * @param inValue
     * Attribute value.
     */
      int SetValue( int inValue ) ;

      // --- * Real values

    /**
     * Returns attribute value for a floating point value.
     *
     * <br><b>Role</b>: Enables to read floating point value of the Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 3 if attribute not valuated.</li>
     * </ul>
     * 
     * @param odValue
     *  Attribute value.
     */
      int GetValue( double & odValue ) const ;

    /**
     * Sets attribute value for a floating point value.
     *
     * <br><b>Role</b>: Sets floating point value of the Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 4 if attribute modification not authorized.</li>
     * <li>Returns 5 if attribute modification could not be done.</li>
     * </ul>
     * 
     * @param idValue
     *  Attribute value.
     */
      int SetValue( double idValue ) ;

      // --- * String & Timestamp values
      // ---    For Timestamp values (date), they are expressed using one ISO 8601 format
      // ---    called Extended format for ordinal date and time of the day :
      // ---     (Application will used Coordinated Universal Time UTC)
      // ---
      // ---    To Encode or Decode those format, you can use DecodeDate
      // ---    and EncodeDate from ENOVPublishObject class
    /**
     * Returns attribute value for string or date & time.
     *
     * <br><b>Role</b>: Enables to read value of the Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 3 if attribute not valuated.</li>
     * </ul>
     * 
     * @param ocValue
     *  Attribute value.
     * <br><b>Legal values</b>: Date is expressed using one ISO 8601 format called
     * Extended format for ordinal date and time of the day (Application will used
     * Coordinated Universal Time UTC) (cf @href ENOVPublishAttributeNode )
     */
      int GetValue( const char * & ocValue ) const ;

    /**
     * Sets attribute value for a string or date & time value.
     *
     * <br><b>Role</b>: Sets string or date & time value of the Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 4 if attribute modification not authorized.</li>
     * <li>Returns 5 if attribute modification could not be done.</li>
     * </ul>
     * 
     * @param inValue
     *  Attribute value.
     */
      int SetValue( const char * icValue ) ;

      // --- * Timestamp values (Application will used Coordinated Universal Time UTC)

    /**
     * Returns attribute value for a date & time  value.
     *
     * <br><b>Role</b>: Enables to read date & time value of the Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 3 if attribute not valuated.</li>
     * </ul>
     * 
     * @param otValue
     *  Attribute value.
     */
      int GetTimeValue( time_t & otValue ) const ;

    /**
     * Sets attribute value for an date & time value.
     *
     * <br><b>Role</b>: Sets date & time value of the Attribute node in case of 
     * a mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 4 if attribute modification not authorized.</li>
     * <li>Returns 5 if attribute modification could not be done.</li>
     * </ul>
     * 
     * @param itValue
     *  Attribute value.
     */
      int SetTimeValue( time_t itValue ) ;

      // --- *  Oid, Uuid and VaultItem values

    /**
     * Returns attribute value for a binary value.
     *
     * <br><b>Role</b>: Enables to read binary value of the Attribute node in case of 
     * a mono-valuated attribute. (This method needs to be invoked for 
     * <tt>ENOVPublishTypeOid</tt>, <tt>ENOVPublishTypeUid</tt> and
     * <tt>ENOVPublishTypeVaultReference</tt> attributes.)
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 3 if attribute not valuated.</li>
     * </ul>
     * 
     * @param obValue
     *  Binary string value.
     * 
     * @param onValueLength
     *  Binary string length.
     */
      int GetValue( const unsigned char * & obValue
                  , int                   & onValueLength ) const ;

    /**
     * Sets attribute value for a binary value.
     *
     * <br><b>Role</b>: Sets binary value of the Attribute node in case of 
     * a mono-valuated attribute. (This method needs to be invoked for 
     * <tt>ENOVPublishTypeOid</tt>, <tt>ENOVPublishTypeUid</tt> and
     * <tt>ENOVPublishTypeVaultReference</tt> attributes.)
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 2 if attribute multi-valuated.</li>
     * <li>Returns 4 if attribute modification not authorized.</li>
     * <li>Returns 5 if attribute modification could not be done.</li>
     * </ul>
     * 
     * @param ibValue
     *  Attribute value.
     * 
     * @param inValueLength
     *  Binary string length.
     */
      int SetValue( const unsigned char * ibValue
                  , int                   inValueLength ) ;

      // --- Analyze if object could be modified

    /**
     * Returns if attribute modification is authorized.
     *
     * <br><b>Role</b>: Returns if attribute modification is authorized.
     *
     * @return
     * Define the access mode for this attribute
     * <br><b>Legal values:</b> It can be set to either:
     * <ul>
     * <li><tt>ENOVPublishNoAccess</tt>  To forbid any access 
     * <li><tt>ENOVPublishReadOnly</tt>  To authorize read only access
     * <li><tt>ENOVPublishReadWrite</tt> To autorize Read and write access
     * <ul/>
     */
      int IsModificationAuthorized() const ;

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

      // --- Current Attribute information

    protected :
      CATUnicodeString            _cTypeName      ;
      int                         _nValueType     ;
      char                        _lMultiValuated ;
      char                        _lMandatory     ;
      char                        _lKeyAttribute  ;
      ENOVPublishAttributeValue * _xValue         ;
} ;

#endif
