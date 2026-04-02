#ifndef  ENOVPublishObject_h
#define  ENOVPublishObject_h
// EAPS
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//
// *****************************************************************
//
//   Identification :
//   ---------------
//
//      RESPONSIBLE : Jean-Luc MEDIONI
//      FUNCTION    : Publish information from ENOVIA to External system
//      USE         : ENOVIA V5 Life Cycle Application
//
// *****************************************************************
//
//   Description :
//   ------------
//
//    Base object used to create "publish tree" structure
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
//   Revision 1.0  25/05/2000   JLM : Initial Revision
//   Revision 1.1  04/10/2000   JLM : introduce ISO 8601 as date format
//   Revision 1.2  15/02/2001   JLM : introduce new node types environment & class
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

#include <time.h>

// --- List of referenced classes

class ENOVPublishObject     ;
class ENOVPublishXMLHandler ;
class AttributeList         ;

// --- Header that need to be referenced

#include "CATUnicodeString.h"

// --- Define applcation constant

/**
 * Constant value to define the information type : Unknown
 */
#define ENOVPublishUnknown             0
/**
 * Constant value to define the information type : Integer
 */
#define ENOVPublishTypeInteger         1
/**
 * Constant value to define the information type : Real
 */
#define ENOVPublishTypeReal            2
/**
 * Constant value to define the information type : String
 */
#define ENOVPublishTypeString          3 
/**
 * Constant value to define the information type : Binary
 */
#define ENOVPublishTypeBinary          4
/**
 * Constant value to define the information type : OID
 */
#define ENOVPublishTypeOid             5
/**
 * Constant value to define the information type : URL
 */
#define ENOVPublishTypeUid             6
/**
 * Constant value to define the information type : Timestamp
 */
#define ENOVPublishTypeTimestamp       7
/**
 * Constant value to define the information type : Vault Reference 
 */
#define ENOVPublishTypeVaultReference  8


/**
 * Constant value to define the attribute type : mono value 
 */
#define ENOVPublishTypeMonoValue       1
/**
 * Constant value to define the attribute type : multi value - LIST  
 */
#define ENOVPublishTypeList            2
/**
 * Constant value to define the attribute type : multi value - SET 
 */
#define ENOVPublishTypeSet             3


/**
 * Constant value to describe the object type : publishing objects 
 */
#define ENOVPublishObjectType          0
/**
 * Constant value to describe the object type : publishing stream objects
 */
#define ENOVPublishStreamType          1
/**
 * Constant value to describe the object type : publish by objects
 */
#define ENOVPublishByType              2
/**
 * Constant value to describe the object type : publish objects 
 */
#define ENOVPublishObjectNodeType      3
/**
 * Constant value to describe the object type : attribute objects
 */
#define ENOVPublishAttributeNodeType   4
/**
 * Constant value to describe the object type : attribute values objects
 */
#define ENOVPublishAttributeValueType  5
/**
 * Constant value to describe the object type : class objects
 */
#define ENOVPublishObjectClassType     6 
/**
 * Constant value to describe the object type : "Environment Node" objects
 */
#define ENOVPublishEnvironmentType     7



/**
 * Constant value to inform about the status. Status : Unchanged 
 */
#define ENOVPublishUnchanged           0
/**
 * Constant value to inform about the status. Status : Modified 
 */
#define ENOVPublishModified            1
/**
 * Constant value to inform about the status. Status : Created 
 */
#define ENOVPublishCreated             2



/**
 * Constant value to inform about the access Right : No Access 
 */
#define ENOVPublishNoAccess            0
/**
 * Constant value to inform about the access Right : Read Only 
 */
#define ENOVPublishReadOnly            1
/**
 * Constant value to inform about the access Right : Read and Write 
 */
#define ENOVPublishReadWrite           2

// --- Class definition

/**
 * Generic class to manage nodes in the publishing stream tree structure.
 *
 * <b>Role</b>:
 * All information in this domain will be managed as nodes in a tree 
 * structure. Each node is typed and contains tags with valuation. The list of
 * tags on a node depends on the node type.
 *
 * <br>Publish Object is the mother class of all nodes of this tree structure.
 * <br>The root node of those trees is a @href ENOVPublishStream.
 */

class ExportedByENOVIAPubStream ENOVPublishObject 
{
      // --- Object constructor

   public:
    /**
     * Constructs a generic node object.
     * 
     * @param inType
     * Node type
     * <br><b>Legal values</b>: see @href ENOVPublishObject#GetType
     *
     * @param ixFather
     * Points to the father node for this object.
     *
     * @see ENOVPublishStream , ENOVPublishAttributeNode , ENOVPublishedBy
     */
      ENOVPublishObject( int                 inType   = ENOVPublishObjectType
                       , ENOVPublishObject * ixFather = NULL ) ;

      // --- Destructor 

      virtual ~ENOVPublishObject() ;

      // --- Copy-constructor

    /**
     * Copy constructor.
     * 
     * @param ixNode
     * Object to be duplicated.
	 */
      ENOVPublishObject( const ENOVPublishObject & ixNode ) ;

      // --- Operateur d'affectation

    /**
     * Assignment operator from another object node.
     * 
     * @param ixNode
     * Object used as reference for the assignment.
	 */
      const ENOVPublishObject & operator=( const ENOVPublishObject & ixNode ) ;

      // -----------------------------------------
      // --- General management                ---
      // -----------------------------------------

      // --- Get object type

    /**
     * Gets the node type.
     *
     * <br><b>Role</b>: Gest the object type information.
     *
     * @return
     * Gets the node type 
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>ENOVPublishStreamType</tt>For Publishing Stream Objects</li>
     * <li><tt>ENOVPublishByType</tt> For Publish By" Objects</li> 
     * <li><tt>ENOVPublishObjectNodeType</tt> For publish Objects</li>
     * <li><tt>ENOVPublishAttributeNodeType</tt> For Attribute Objects</li>
     * <li><tt>ENOVPublishAttributeValueType</tt> For Attribute values Objects</li>
     * <ul/>
     */
     int GetType() const ;

      // -----------------------------------------
      // --- Operator to manage tree structure ---
      // -----------------------------------------

    /**
     * Inserts an object as a child at specific place.
     *
     * <br><b>Role</b>: Inserts an object as a child at specific place.
     * 
     * @param ixNewChild
     * Object node that needs to be added as a child.
     *
     * @param ixReference
     * Object node used to position <tt>ixNewChild</tt> in the children list.
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>NULL</tt> to insert at first position</li>
     * <li>If <tt>ixReference</tt> is not <tt>NULL</tt> and is not child of the current
     * object, then we insert <tt>ixNewChild</tt> at last position</li> 
     * <li>Otherwise we insert <tt>ixNewChild</tt> before <tt>ixReference</tt></li>
     * <ul/>
     */
      void InsertBefore( ENOVPublishObject * const ixNewChild
                       , ENOVPublishObject * const ixReference = NULL ) ;

      // ---  Insert an object as children at a last position

    /**
     * Inserts an object as a child at last position.
     *
     * <br><b>Role</b>: Inserts an object as a child at last position.
     * 
     * @param ixNewChild
     * Object node that needs to be added as a child.
     */
      void Append( ENOVPublishObject * const ixNewChild ) ;

      // --- Suppress the object from the father-child assembly

    /**
     * Suppresses the object from the father-child assembly.
     *
     * <br><b>Role</b>: Suppresses the object from the father-child assembly.
     * 
     */
      void CutFromFather() ;

      // --- Remove and delete all child nodes

    /**
     * Removes and deletes all child nodes.
     *
     * <br><b>Role</b>: Removes and deletes all child nodes.
     * 
     */
      void RemoveAllChildren() ;

      // --- Scans list of all children of node
      // ---   * To start scan initialize xPrevious to NULL
      // ---   * At scan ends whe return NULL
 
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
      ENOVPublishObject * ScanChildren( const ENOVPublishObject * const ixPrevious ) const ;

      // --- getSet --> Recherche du set d'un objet

    /**
     * Gets the father node.
     *
     * <br><b>Role</b>: Gets the father node of the current object.
     * 
     *
     * @return
     * Father node object. 
     */
      ENOVPublishObject * GetFather() const ;

      // --- Unstream information from an XML stream

    /**
     * @nodoc
     */
      virtual int GetFromStream( ENOVPublishXMLHandler & xHandler
                               , AttributeList         & xAttributes ) = 0 ;
    /**
     * @nodoc
     */
      virtual int SetValueFromStream( ENOVPublishXMLHandler & xHandler
                                    , const void * const      cText ) ;

      // --- Stream information into an XML stream

    /**
     * @nodoc
     */
      virtual int PutToStream( ENOVPublishObject * xStream ) = 0 ;

      // --- Build a stream from published information

   /** @nodoc
     */
      virtual int AddInStream( const char * icContent , int inLength ) ;

   /** @nodoc
     */
      virtual int AddInStream( const char * icContent ) ;

   /** @nodoc
     */
      virtual int AddInStream( const unsigned char * icContent , int inLength ) ;

    /**
     * @nodoc
     */
      virtual int AddInStream( const CATUnicodeString & cContent ) ;

      // --- Modification status management

    /**
     * Queries if object node has been modified.
     *
     * <br><b>Role</b>: Queries if object node has been modified.
     * <br>An object is considered as modified if one its values or one of its children's values
     *  (or children of its children in cascade) have been modified.
     *
     * @return
     * Flag that defined modification status.
     * <br><b>Legal values:</b>
     * <ul>
     * <li><tt>ENOVPublishUnchanged</tt> No modification done since last reset modification
     * <li><tt>ENOVPublishModified</tt> Object node modified
     * <li><tt>ENOVPublishCreated</tt> Object node created
     * <ul/>
     */
      int  IsModified() const ;

    /**
     * @nodoc
     */
      void SetModificationFlag( int nStatus ) ;

    /**
     * @nodoc
     */
      void ResetModificationFlag() ;

      // --- Check access write to object

    /**
     * Sets access authorization to this node.
     *
     * <b>Role:</b> Sets access authorization to this node.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param inStatus
     * Access authorization status.
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>ENOVPublishNoAccess</tt>  To forbid any access 
     * <li><tt>ENOVPublishReadOnly</tt>  To authorize read only access
     * <li><tt>ENOVPublishReadWrite</tt> To autorize read and write access
     * </ul>
     */
      int SetAccessRight( int inStatus ) ;

    /**
     * Returns access authorization to this node.
     *
     * <br><b>Role</b>: Returns access authorization to this node.
     * 
     * @return
     * Access authorization status for this node
     * <br><b>Legal values</b>: see @href ENOVPublishObject#SetAccessRight
     * 
     */
      int GetAccessRight() const ;

      // --- Print attribute identity card

    /**
     * Print a report on standard output.
     *
     * <br><b>Role</b>: Print the content of this node and its children.
     * 
     * @param inLevel
     * Enable to have an indented presentation according to the tree depth of the node.
     */
      virtual void Print( int inLevel = 0 ) const = 0 ;

      // --- Some static string values

    /** @nodoc
     */
      static const char * cValueType[]           ;
    /** @nodoc
     */
      static const char * cAccessMode[]          ;
    /** @nodoc
     */
      static const char * cModificationMode[]    ;
    /** @nodoc
     */
      static const char * cAlternative[]         ;
    /** @nodoc
     */
      static const int    nValueTypeLen[]        ;
    /** @nodoc
     */
      static const int    nAccessModeLen[]       ;
    /** @nodoc
     */
      static const int    nModificationModeLen[] ;
    /** @nodoc
     */
      static const int    nAlternativeLen[]      ;

      // --- Searches all nodes accordingly a simple predicate tag = value

    /**
     * Searches all nodes according to a simple predicate.
     *
     * <br><b>Role</b>: Searches all nodes according to a simple predicate in the form
     * of tag = value and defining on which object we need to test the predicate
     * validity. This operation is also valid on multi-valuated attribute.
     *
     * <b>Example:</b>
     * <ol>
     * <li>Search all PublishObjectNode where PrimaryTypeName is DocumentRevision
     * <br>     <b><i>SearchNode( ENOVPublishObjectNodeType , "PrimaryTypeName" , "DocumentRevision" ...)</i></b>
     * </li>
     * <li>Search all PublishAttributeNode where TypeName is Size
     * <br>     <b><i>SearchNode( ENOVPublishAttributeNodeType , "TypeName" , "Size" ...)</i></b>
     * </li>
     * <li>Search all PublishAttributeNode where TypeName is Size and value 2
     * <br>     <b><i>SearchNode( ENOVPublishAttributeNodeType , "Size" , "2" ...)</i></b>
     * </li>
     * </ol>
     * <br><b>Precondition</b>: Beware that the result list will be allocated
     * by this method.
     * 
     * <br><b>Postcondition</b>: If operation does not succeed, the output list  
     * of objects (nodes) will be unallocated and set to NULL.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param inInTypeNode
     * Defines the type node you want to query on.
     * <br><b>Legal values</b>: It can be set to either:
     * <ul>
     * <li><tt>ENOVPublishStreamType</tt> To search on the Publishing Stream Object
     * <li><tt>ENOVPublishByType</tt> To search among all "Publish By" Objects 
     * inside this Publishing stream
     * <li><tt>ENOVPublishObjectNodeType</tt> To search among all Publish Objects
     * inside this Publishing stream
     * <li><tt>ENOVPublishAttributeNodeType</tt> To search among all Attribute Objects
     * inside this Publishing stream
     * <li><tt>ENOVPublishAttributeValueType</tt> To search among all Attribute values Objects
     * inside this Publishing stream
     * </ul>
     * 
     * @param icInTag
     * Limits the search to object that content a specific tag.
     * <br><b>Legal values</b>: Can be set to NULL which means that no predicate is
     * defined, so all objects of the right type will be selected. For valid tag you must
     * look at object definition.
     *
     * @param icInValue
     * Defines a value for the predicate to limit the result of the query.
     * <br><b>Legal values</b>: Can be set to NULL which means that we check only if
     * the tag is valuated on this object.
     * 
     * @param oxResultList
     * An array of objects that are compliant with the predicates (Type, tag & value). 
     * <br><b>Legal values</b>: If no object answer to search, this value is set to NULL.
     * 
     * @param onResultSize
     * Number of objects that fulfill the predicate (Type, tag & value). 
     *
     * @see ENOVPublishStream, ENOVPublishAttributeNode, ENOVPublishedBy
     */
      int SearchNode( int                    inInTypeNode
                    , const char           * icInTag
                    , const char           * icInValue
                    , ENOVPublishObject ** & oxResultList
                    , int                  & onResultSize ) const ;

      // --- Test a basic predicate type Name = Value

    /** @nodoc
     */
      virtual int CheckPredicate( const char * cInTag
                                , const char * cInValue ) const = 0 ;

      // --- Method to read Binary field (formated as 0xAA12...)

    /** @nodoc
     */
      static int DecodeBinaryString( const CATUnicodeString   & cInputString
                                   , unsigned char          * & bOuputValue
                                   , int                      & nOutputLength ) ;

    /** @nodoc
     */
      static int DecodeBinaryString( const char    *   cInputString
                                   , unsigned char * & bOuputValue
                                   , int             & nOutputLength ) ;

      // --- Read a string containing a real value
      // --- (taking care of decimal point that need to be always '.')

    /** @nodoc
     */
      static double DecodeDouble( const char * cValue ) ;

      // --- Fill a string containing a real value
      // --- * taking care of decimal point that need to be always '.'
      // --- * Input string must be large enough (16 characters)

    /** @nodoc
     */
      static void EncodeDouble( double dValue , char * cString ) ;

      // --- Read a string containing a date value
      // --- * Date is express using one ISO 8601 format called
      // ---   Extended format for ordinal date and time of the day :
      // ---   (Application will used Coordinated Universal Time UTC)
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

    /** @nodoc
     */
      static time_t DecodeDate( const char * cValue ) ;

      // --- Fill a string containing a date value

    /** @nodoc
     */
      static void EncodeDate( time_t tValue , char * cString ) ;

      // --- Manage tree structure
      // ---    * _xNextChild     : Next child object in father structure
      // ---    * _xPreviousChild : Previous child object in father structure
      // ---    * _xFather        : Father object in father structure
      // ---    * _xFirstChild    : First children of this object

   private:
      ENOVPublishObject  * _xFather        ;
      ENOVPublishObject  * _xNextChild     ;
      ENOVPublishObject  * _xPreviousChild ;
      ENOVPublishObject  * _xFirstChild    ;

      // --- General management

   protected:
      int    _nType               ;
      int    _nAccessMode         ;
      int    _nModificationStatus ;
} ;

#endif
