#ifndef  ENOVPublishStream_h
#define  ENOVPublishStream_h
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
//    Master class for ENOVIA publishing stream component
//
/**
 * Class enabling to manage publishing stream.
 *
 * <b>Role</b>: This class enables to manage the publishing stream. The
 * publishing stream is a technique that enables, for an external application, 
 * to view, modify and keep an extract of some ENOVIA Objects.
 * For example, we use this technique in CATIA V4 integration in which
 * we expose, at CATIA model load time, information relative to document management
 * (such as Document Master, Revision and iteration). This enables the application to 
 * use this information as input for their design (for instance for title block)
 * and potentially to update it at any save time.
 * <br>Information is exposed as a tree structure of information where each node is typed
 * and on which you can valuate some tags. 
 * <br>Publishing Stream node is a root of this tree structure.
 * <br><b>Tags define on Publishing stream</b>:
 * <ul>
 * <li><tt>Version</tt> Software level used to generate the stream ("1" for the current version).</li>
 * <li><tt>Localization</tt> ENOVIA repository location (For future use).</li>
 * <li><tt>TimeStamp</tt> Date & time of the publishing stream.</li>
 * </ul>
 * This Publishing stream will also enable to expose back information to ENOVIA LCA.
 */
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//    Enable an external application to view, modify and keep an extract
//    of some ENOVIA Objects
//
// ***************************************************************
//
//   Story :
//   -------
//
//   Revision 1.0  25/05/2000   JLM : Initial Revision
//   Revision 1.1  15/02/2001   JLM : introduce new attribute to support meta-data
//   Revision 1.2  20/03/2002   JLM : Support NLS encoding througth UTF8
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

class ENOVPublishStream     ;
class ENOVPublishXMLHandler ;

// --- Header that need to be referenced

#include "ENOVPublishObject.h"
#include "CATUnicodeString.h"

// --- Class definition

class ExportedByENOVIAPubStream ENOVPublishStream : public ENOVPublishObject
{
   public:

      // --- Stream constructor
      // --- * Initialize a Publishing stream 

    /**
     * Constructs a Publishing stream.
     * 
     * @param icLocalization
     * Define ENOVIA repository name (this information is optional and not
     * used in current version).
     */
      ENOVPublishStream( const char * icLocalization = NULL ) ;

      // --- Destructeur 

      virtual ~ENOVPublishStream() ;

      // --- Copy-constructor

    /**
     * Copy constructor.
     * 
     * @param ixStream
     * Object to be duplicated.
     */
      ENOVPublishStream( const ENOVPublishStream & ixStream ) ;

      // --- Operateur d'affectation

    /**
     * Assignment operator from another object node.
     * 
     * @param ixStream
     * Object used as reference for the assignment.
	 */
      const ENOVPublishStream & operator=( const ENOVPublishStream & ixStream ) ;

      // --- Load a stream from a buffer
      // --- * In case of lReplace is true,
      // ---   all children previously load are deleted

    /**
     * Loads a stream from a buffer.
     *
     * <br><b>Role</b>: Loads a stream from a buffer.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param icContent
     * XML stream that contains information of the publishing stream.
     * 
     * @param ilReplace
     * Define what happens against previous information in this Publishing stream
     * <br><b>Legal values</b>: If lReplace is true, all children previously load are deleted. 
     */
      int LoadStream( const char * icContent , int ilReplace = 1 ) ;

      // --- Load a stream from a file
      // --- * In case of lReplace is true,
      // ---   all children previously load are deleted

    /**
     * Loads a stream from a file.
     *
     * <br><b>Role</b>: Loads a stream from a file.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param icFilePath
     * XML File to be read to load information of the publishing stream.
     * 
     * @param ilReplace
     * Define what happens against previous information in this Publishing stream
     * <br><b>Legal values</b>: If lReplace is true, all children previously load are deleted. 
     */
      int LoadStreamFromFile( const char * icFilePath , int ilReplace = 1 ) ;

      // --- Build a stream from published information

    /**
     * Builds a stream from published information.
     *
     * <br><b>Role</b>: Builds a stream from published information.
     * 
     * <br><b>Postcondition</b>: If operation does not succeed, the output text
     * will be unallocated and set to NULL.
     *
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocContent
     * Memory area allocated by this method and that contains a XML stream equivalent
     * to information defined in the Publishing Stream object.
     * 
     * @param onLengthContent
     * Length in byte of the XML publishing stream. 
     */
      int GetStream( const char * & ocContent , int & onLengthContent ) ;

      // --- Build a stream from published information

    /**
     * Builds a stream from published information.
     *
     * <br><b>Role</b>: Builds a stream from published information.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param icFilePath
     * File name where to store information of the publishing stream as 
     * an XML stream.
     */
      int SaveStreamAsFile( const char * icFilePath ) ;

      // --- Get Object Attribute

    /**
     * Returns software level used to generate this publishing stream.
     *
     * <br><b>Role</b>: Returns level of software used to build this object.
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param onVersion
     *  Define software version of this Publishing stream (Current value is 1).
     */
      int GetVersion( int & onVersion ) const ;

   /** @nodoc
     * Returns localization information used to generate this publishing stream.
     *
     * <br><b>Role</b>: Returns localization information used to build this object.
     * (This information could be used in case of multi-site.)
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param ocLocalization
     *  Define localization information.
     */
      int GetLocalization( const char * & ocLocalization ) const ;

    /**
     * Returns date & time of the publishing stream.
     *
     * <br><b>Role</b>: Enables to know at what date this information has been
     * generated.
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
     * </dl>
     */
      int GetTimeStamp( const char * & ocTimeStamp ) const ;

      // --- Set Object Attribute

   /** @nodoc
     * Sets localization information used to generate this publishing stream.
     *
     * <br><b>Role</b>: Sets localization information used to build this object.
     * (This information could be used in case of multi-site.)
     * 
     * @return
     * Method return code 
     * <br><b>Legal values</b>: Returns 0 if operation runs well. 
     * 
     * @param icLocalization
     *  Value that will be used to set localization information.
     */
      int SetLocalization( const char * icLocalization ) ;

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

      // --- Test a basic predicate type Name = Value

   /** @nodoc
     */
      virtual int CheckPredicate( const char * cInTag
                                , const char * cInValue ) const ;

      // --- Unstream information from an XML stream

   /** @nodoc
     */
      virtual int GetFromStream( ENOVPublishXMLHandler & xHandler
                               , AttributeList         & xAttributes ) ;

      // --- Build a stream from published information

   /** @nodoc
     */
      virtual int AddInStream( const char * icContent , int inLength ) ;

   /** @nodoc
     */
      virtual int AddInStream( const unsigned char * icContent , int inLength ) ;

    /**
     * @nodoc
     */
      virtual int AddInStream( const CATUnicodeString & cContent ) ;

      // --- Stream information into an XML stream

   /** @nodoc
     */
      virtual int PutToStream( ENOVPublishObject * ixStream ) ;

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

      // --- Current Attribute information

    protected :
      int               _nVersion      ;
      CATUnicodeString  _cTimeStamp    ;
      CATUnicodeString  _cLocalization ;

      // --- Manage XML stream

      char * _cStreamContent       ;
      char * _cStreamCursor        ;
      int    _nLengthStreamContent ;
      int    _nLengthStreamMax     ;

      // --- To accelerate CATUnicodeString encoding in UTF8

      char * _cString          ;
      int    _nLengthStringMax ;

      // --- XML stream buffer management

      int _prepareAddInStream( int nLength ) ;
} ;

#endif
