// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#ifndef CATSAXHandlerBase_h
#define CATSAXHandlerBase_h

// System framework
#include "CATBaseUnknown.h"
class CATUnicodeString;

// XMLParser framework
#include "XMLParserCls.h"
class CATISAXLocator_var;
class CATISAXAttributeList_var;
class CATISAXInputSource_var;
class CATSAXParseException;

/**
 * Default base class for handlers.
 *
 * <p>This class implements the default behaviour for four SAX
 * interfaces: @href CATISAXEntityResolver, @href CATISAXDTDHandler, 
 * @href CATISAXDocumentHandler, and @href CATISAXErrorHandler.</p>
 *
 * <p>Application writers can extend this class when they need to
 * implement only part of an interface; parser writers can
 * instantiate this class to provide default handlers when the
 * application has not supplied its own.</p>
 *
 * <p>Note that the use of this class is optional.</p>
 *
 * @see CATISAXEntityResolver, CATISAXDTDHandler, CATISAXDocumentHandler, CATISAXErrorHandler
 */
class ExportedByXMLParserCls CATSAXHandlerBase: public CATBaseUnknown {
	CATDeclareClass;
	
	public:
		
		/**
		 * Constructor
		 */
		CATSAXHandlerBase();

		/**
		 * Destructor
		 */
		virtual ~CATSAXHandlerBase();
		
		/**
		 * Receives notification of character data inside an element.
		 *
		 * <p>By default, do nothing.  Application writers may override this
		 * method to take specific actions for each chunk of character data
		 * (such as adding the data to a node or buffer, or printing it to
		 * a file).</p>
		 *
		 * @param iCharacters 
		 * The characters from the XML document.
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXDocumentHandler#Characters
		 */
		virtual HRESULT Characters(
			const CATUnicodeString & iCharacters);
		
		/**
		 * Receives notification of the end of the document.
		 *
		 * <p>By default, do nothing.  Application writers may override this
		 * method in a subclass to take specific actions at the beginning
		 * of a document (such as finalising a tree or closing an output
		 * file).</p>
		 *
		 * <dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * </dl>
		 *
		 * @see CATISAXDocumentHandler#EndDocument
		 */
		virtual HRESULT EndDocument();
		
		/**
		 * Receives notification of the end of an element.
		 *
		 * <p>By default, do nothing.  Application writers may override this
		 * method in a subclass to take specific actions at the end of
		 * each element (such as finalising a tree node or writing
		 * output to a file).</p>
		 *
		 * @param iName
		 * The element type name.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXDocumentHandler#EndElement
		 */
		virtual HRESULT EndElement(
			const CATUnicodeString & iName);
		
		/**
		 * Receives notification of ignorable whitespace in element content.
		 *
		 * <p>By default, do nothing.  Application writers may override this
		 * method to take specific actions for each chunk of ignorable
		 * whitespace (such as adding data to a node or buffer, or printing
		 * it to a file).</p>
		 *
		 * @param iCharacters 
		 * The characters from the XML document.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXDocumentHandler#IgnorableWhitespace
		 */
		virtual HRESULT IgnorableWhiteSpace(
			const CATUnicodeString & iCharacters);
		
		/**
		 * Receives notification of a processing instruction.
		 *
		 * <p>The @href CATISAXParser will invoke this method once for each processing
		 * instruction found: note that processing instructions may occur
		 * before or after the main document element.</p>
		 *
		 * <p>A SAX parser should never report an XML declaration (XML 1.0,
		 * section 2.8) or a text declaration (XML 1.0, section 4.3.1)
		 * using this method.</p>
		 *
		 * @param iTarget
		 * The processing instruction target.
		 * @param iData 
		 * The processing instruction data (can be an empty @href CATUnicodeString if
		 * no processing instruction data was given).
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXDocumentHandler#ProcessingInstruction
		 */
		virtual HRESULT ProcessingInstruction(
			const CATUnicodeString & iTarget,
			const CATUnicodeString & iData);
		
		/**
		 * Receives a locator object for document events.
		 *
		 * <p>By default, do nothing.  Application writers may override this
		 * method in a subclass if they wish to store the locator for use
		 * with other document events.</p>
		 *
		 * @param iLocator
		 * A locator for all SAX document events.
		 *
		 * @see CATISAXDocumentHandler#SetDocumentLocator, CATISAXLocator
		 */
		virtual HRESULT SetDocumentLocator(
			const CATISAXLocator_var& iLocator);
		
		/**
		 * Receives notification of the beginning of the document.
		 *
		 * <p>By default, do nothing.  Application writers may override this
		 * method in a subclass to take specific actions at the beginning
		 * of a document (such as allocating the root node of a tree or
		 * creating an output file).</p>
		 *
		 * <dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * </dl>
		 *
		 * @see CATISAXDocumentHandler#StartDocument
		 */
		virtual HRESULT StartDocument() ;
		
		/**
		 * Receives notification of the start of an element.
		 *
		 * <p>By default, do nothing.  Application writers may override this
		 * method in a subclass to take specific actions at the start of
		 * each element (such as allocating a new tree node or writing
		 * output to a file).</p>
		 *
		 * @param iName
		 * The element type name.
		 * @param iAttributes
		 * The specified or defaulted attributes.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXDocumentHandler#StartElement
		 */
		virtual HRESULT StartElement(
			const CATUnicodeString & iName, 
			const CATISAXAttributeList_var& iAttributes);
		
		/**
		 * Receives notification of a notation declaration event.
		 *
		 * <p>It is up to the application to record the notation for later
		 * reference, if necessary.</p>
		 *
		 * <p>If a system identifier is present, and it is a URL, the SAX
		 * parser must resolve it fully before passing it to the
		 * application.</p>
		 *
		 * @param iName
		 * The notation name.
		 * @param iPublicId
		 * The notation's public identifier (can be an empty @href CATUnicodeString if
		 * no public identifier was given).
		 * @param iSystemId
		 * The notation's system identifier (can be an empty @href CATUnicodeString if
		 * no system identifier was given).
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 *
		 * @see CATISAXDTDHandler#NotationDecl
		 */
		virtual HRESULT NotationDecl(
			const CATUnicodeString & iName, 
			const CATUnicodeString & iPublicId, 
			const CATUnicodeString & iSystemId);
		
		/**
		 * Receives notification of an unparsed entity declaration event.
		 *
		 * <p>Note that the notation name corresponds to a notation
		 * reported by the @href #NotationDecl event.  It is up to the
		 * application to record the entity for later reference, if
		 * necessary.</p>
		 *
		 * <p>If the system identifier is a URL, the parser must resolve it
		 * fully before passing it to the application.</p>
		 *
		 * @param iName 
		 * The unparsed entity's name.
		 * @param iPublicId 
		 * The entity's public identifier (can be an empty @href CATUnicodeString if
		 * no public identifier was given).
		 * @param iSystemId 
		 * The entity's system identifier (it must always have one).
		 * @param iNotationName
		 * name The name of the associated notation.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXDTDHandler#UnparsedEntityDecl
		 */
		virtual HRESULT UnparsedEntityDecl(
			const CATUnicodeString & iName, 
			const CATUnicodeString & iPublicId, 
			const CATUnicodeString & iSystemId, 
			const CATUnicodeString & iNotationName);
		
		/**
		 * Allows the application to resolve external entities.
		 *
		 * <p>The @href CATISAXParser will call this method before opening any external
		 * entity except the top-level document entity (including the
		 * external DTD subset, external entities referenced within the
		 * DTD, and external entities referenced within the document
		 * element): the application may request that the parser resolve
		 * the entity itself, that it use an alternative URI, or that it
		 * use an entirely different input source.</p>
		 *
		 * <p>Application writers can use this method to redirect external
		 * system identifiers to secure and/or local URIs, to look up
		 * public identifiers in a catalogue, or to read an entity from a
		 * database or other input source (including, for example, a dialog
		 * box).</p>
		 *
		 * <p>If the system identifier is a URL, the SAX parser must
		 * resolve it fully before reporting it to the application.</p>
		 *
		 * @param iPublicId 
		 * The public identifier of the external entity being referenced 
		 * (can be an empty @href CATUnicodeString if no public identifier was given).
		 * @param iSystemId 
		 * The system identifier of the external entity being referenced.
		 * @param oInputSource
		 * An InputSource object describing the new input source,
		 *         or <tt>NULL</tt> to request that the parser open a regular
		 *         URI connection to the system identifier.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2000</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2001</td>
		 *        <td class="errtd">If an I/O error occurs, possibly the result of creating a new @href CATISAXInputSource
		 * the method can raise this error.</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXEntityResolver#ResolveEntity
		 */
		virtual HRESULT ResolveEntity(
			const CATUnicodeString & iPublicId, 
			const CATUnicodeString & iSystemId, 
			CATISAXInputSource_var& oInputSource) ;
		
		/**
		 * Receives notification of a recoverable parser error.
		 *
		 * <p>The default implementation does nothing.  Application writers
		 * may override this method in a subclass to take specific actions
		 * for each error, such as inserting the message in a log file or
		 * printing it to the console.</p>
		 *
		 * @param iException
		 * The error information encapsulated in a SAX parse exception.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXErrorHandler#Warning, CATSAXParseException
		 */
		virtual HRESULT Error(
			CATSAXParseException* iException) ;
		
		/**
		 * Reports a fatal XML parsing error.
		 *
		 * <p>The default implementation raises a SAXParseException.
		 * Application writers may override this method in a subclass if
		 * they need to take specific actions for each fatal error (such as
		 * collecting all of the errors into a single report): in any case,
		 * the application must stop all regular processing when this
		 * method is invoked, since the document is no longer reliable, and
		 * the parser may no longer report parsing events.</p>
		 *
		 * @param iException 
		 * The error information encapsulated in a SAX parse exception.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXErrorHandler#FatalError, CATSAXParseException
		 */
		virtual HRESULT FatalError(
			CATSAXParseException* iException) ;
		
		/**
		 * Receives notification of a parser warning.
		 *
		 * <p>The default implementation does nothing.  Application writers
		 * may override this method in a subclass to take specific actions
		 * for each warning, such as inserting the message in a log file or
		 * printing it to the console.</p>
		 *
		 * @param iException
		 * The warning information encapsulated in a SAX parse exception.
		 *
		 * </dl>
		 * <dt><b>Errors Returned</b>:</dt>
		 * <dd>
		 *   <table class="errtab">
		 *     <tr>
		 *       <th class="errth">Error Class</th>
		 *       <th class="errth">Error Id</th>
		 *       <th class="errth">Description</th>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXErrorHandler#Warning, CATSAXParseException
		 */
		virtual HRESULT Warning(
			CATSAXParseException* iException) ;
		
	private:
		CATSAXHandlerBase (CATSAXHandlerBase &);
		CATSAXHandlerBase& operator=(CATSAXHandlerBase&);
};

#endif // CATSAXHandlerBase_h
