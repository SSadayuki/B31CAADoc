#ifndef  ENOVPublishAttributeValue_h
#define  ENOVPublishAttributeValue_h
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
//   Node that enable to associate a value to a multi-valuated attribute
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//    Enable an external application to view, modify and keep an
//    extract of some ENOVIA Objects
//   
/**
 * Class enabling to manage value node for a Multi-valuated Attribute node.
 *
 * <b>Role</b>: This class enables to manage attribute values for a Multi-valuated 
 * Attribute node.
 * <br>
 * <br><b>No Tag is defined on Attribute Value</b>
 *
 * @see ENOVPublishAttributeNode
 */
//
// ***************************************************************
//
//   Story :
//   -------
//
//   Revision 1.0  06/07/2000   JLM : Initial Revision
//   Revision 1.1  04/10/2000   JLM : introduce ISO 8601 as date format
//   Revision 1.2  15/02/2001   JLM : introduce to support meta-data
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

class ENOVPublishAttributeValue ;
class ENOVPublishXMLHandler     ;

// --- Header that need to be referenced

#include "ENOVPublishObject.h"
#include "CATUnicodeString.h"

// --- Class definition

class ExportedByENOVIAPubStream ENOVPublishAttributeValue : public ENOVPublishObject
{
      // --- Constructor

   public:
    /**
     * Constructs an Attribute value node.
     * 
     * @param ixFather
     * Points to the father attribute node (@href ENOVPublishAttributeNode ) for this value node.
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
     */
      ENOVPublishAttributeValue( ENOVPublishObject * ixFather
                               , int                 inValueType = ENOVPublishUnknown ) ;

      // --- Destructor 

      virtual ~ENOVPublishAttributeValue() ;

      // --- Copy-constructor

    /**
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      ENOVPublishAttributeValue( const ENOVPublishAttributeValue & ixNode ) ;

      // --- Operateur d'affectation

    /**
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
     */
      const ENOVPublishAttributeValue & operator=( const ENOVPublishAttributeValue & ixNode ) ;

      // --- Access to attribute information

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
      int GetValueType( int & nAttributeType ) const ;

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
     * <li><tt>ENOVPublishReadWrite</tt> To autorize read and write access
     * <ul/>
     */
      int IsModificationAuthorized() const ;

      // --- Access to attribute value
      // --- * Integer values

    /**
     * Returns attribute value for an integer value.
     *
     * <br><b>Role</b>: Enables to read integer value of the Attribute value node.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param onValue
     * Attribute value.
     */
      int GetValue( int & onValue ) const ;

    /**
     * Sets attribute value for an integer value.
     *
     * <br><b>Role</b>: Sets value of the integer Attribute value node.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 4 if attribute modification not authorized.</li>
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
     * <br><b>Role</b>: Enables to read floating point value of the Attribute value.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param odValue
     * Attribute value.
     */
      int GetValue( double & odValue ) const ;

    /**
     * Sets attribute value for a floating point value.
     *
     * <br><b>Role</b>: Sets floating point value of the Attribute value.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>:
     * <ul>
     * <li>Returns 0 if operation runs well.</li>
     * <li>Returns 1 if attribute has not a requested type.</li>
     * <li>Returns 4 if attribute modification not authorized.</li>
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
      // ---      CCYY-MM-DDThh:mm:ss   (for instance "2000-00-01T00:00:01" )
      // ---      CCYY-MM-DDThh:mm      (for instance "2000-00-01T00:00" )
      // ---      CCYY-MM-DD            (for instance "2000-00-01" No time information set to 00:00:00)
      // ---      hh:mm:ss              (for instance "12:10:01" means today)
      // ---      hh:mm                 (for instance "14:00"  means today & second set to zero   )
      // ---
      // ---      Where CC  represents century component
      // ---            YY  represents year within century
      // ---            MM  represents months since January [1, 12]
      // ---            DD  represents days day of the month [1, 31]
      // ---            hh  represents hours from begining of days
      // ---            mm  represents minutes
      // ---            ss  represents seconds
      // ---
      // ---            To Encode or Decode those format, you can use DecodeDate
      // ---            and EncodeDate from ENOVPublishObject class

   /**
     * Returns attribute value for string or date & time.
     *
     * <br><b>Role</b>: Enables to read value of the Attribute node for string or date & time.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocValue
     *  Attribute value.
     * <br><b>Legal values</b>: Date is expressed using one ISO 8601 format called
     * Extended format for ordinal date and time of the day (Application will used
     * Coordinated Universal Time UTC) (cf @href ENOVPublishAttributeNode )
     *
     */
      int GetValue( const char * & ocValue ) const ;

   /**
     * Returns attribute value for string.
     *
     * <br><b>Role</b>: Enables to read value of the Attribute node for string.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocValue
     *  Attribute value.
     */
      int GetValue( CATUnicodeString & ocValue ) const ;

    /**
     * Sets attribute value for a string or date & time value.
     *
     * <br><b>Role</b>: Sets string or date & time value of the Attribute value node.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param inValue
     *  Attribute value.
     */
      int SetValue( const char * icValue ) ;

    /**
     * Sets attribute value for a string.
     *
     * <br><b>Role</b>: Sets string of the Attribute value node.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param inValue
     *  Attribute value.
     */
      int SetValue( const CATUnicodeString & icValue ) ;

      // --- * Timestamp values (Application will used Coordinated Universal Time UTC)

    /**
     * Returns attribute value for a date & time value Attribute.
     *
     * <br><b>Role</b>: Enables to read date & time value of the Attribute value node.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param otValue
     *  Attribute value.
     */
      int GetTimeValue( time_t & otValue ) const ;

    /**
     * Sets attribute value for an date & time value.
     *
     * <br><b>Role</b>: Sets date & time value of the Attribute node in case of 
     * mono-valuated attribute.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param itValue
     *  Attribute value.
     */
      int SetTimeValue( time_t itValue ) ;

      // --- *  Oid, Uuid and VaultItem values

    /**
     * Returns attribute value for a binary value.
     *
     * <br><b>Role</b>: Enables to read binary value of the Attribute value node.
     * (This method needs to be invoked for 
     * <tt>ENOVPublishTypeOid</tt>, <tt>ENOVPublishTypeUid</tt> and
     * <tt>ENOVPublishTypeVaultReference</tt> attributes.)
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
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
     * <br><b>Role</b>: Sets binary value of the Attribute value node.
     * (This method needs to be invoked for 
     * <tt>ENOVPublishTypeOid</tt>, <tt>ENOVPublishTypeUid</tt> and
     * <tt>ENOVPublishTypeVaultReference</tt> attributes.)
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ibValue
     *  Attribute value.
     * 
     * @param inValueLength
     *  Binary string length.
     */
      int SetValue( const unsigned char * ibValue
                  , int                   inValueLength ) ;

      // --- Decode & Encode stream value according value type

    /** @nodoc
     */
      int DecodeValue( const CATUnicodeString & cValue ) ;

    /** 
     * Enables to encode attribute value.
     *
     * <br><b>Role</b>: Enables to encode current attribute value.
     * (This method could be usefull when an Attribute is search by its value)
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocValue
     *  A character string long enough to get the result.
     * <ul>
     * <li>10 characters for <tt>ENOVPublishTypeInteger</tt></li>
     * <li>16 characters for <tt>ENOVPublishTypeReal</tt></li>
     * <li>4 times the number of characters for <tt>ENOVPublishTypeString</tt></li>
     * <li>Twice the number of bytes plus 2 <tt>ENOVPublishTypeBinary</tt></li>
     * <li>34 characters for <tt>ENOVPublishTypeOid</tt> or <tt>ENOVPublishTypeUid</tt></li>
     * <li>18 characters for <tt>ENOVPublishTypeTimestamp</tt></li>
     * <li>Twice the number of bytes plus 2 <tt>ENOVPublishTypeVaultReference</tt></li>
     * </ul>
     */
      int EncodeValue( char * ocValue ) const ;

    /** @nodoc
     */
      int EncodeValue( ENOVPublishObject * ixStream ) const ;

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
      int              _nValueType   ;
      int              _nValue       ;
      CATUnicodeString _cValue       ;
      double           _dValue       ;
      unsigned char *  _bValue       ;
      int              _nValueLength ;
      time_t           _tValue       ;
} ;

#endif
