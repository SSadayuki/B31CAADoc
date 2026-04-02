// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#ifndef CATISAXDocumentHandler_h
#define CATISAXDocumentHandler_h

// System framework
#include "CATBaseUnknown.h"
class CATUnicodeString;

// XMLParser framework
#include "XMLParserItf.h"
class CATISAXLocator_var;
class CATISAXAttributeList_var;

#ifndef LOCAL_DEFINITION_FOR_IID
	extern ExportedByXMLParserItf IID IID_CATISAXDocumentHandler;
#else // LOCAL_DEFINITION_FOR_IID
	extern "C" const IID IID_CATISAXDocumentHandler ;
#endif // LOCAL_DEFINITION_FOR_IID

/**
 * Interface to receive notification of general document events.
 *
 * <p>This is the main interface that most SAX applications
 * implement: if the application needs to be informed of basic parsing 
 * events, it implements this interface and registers an instance with 
 * the SAX parser using the @href CATISAXParser#SetDocumentHandler method.  The parser 
 * uses the instance to report basic document-related events like
 * the start and end of elements and character data.</p>
 *
 * <p>The order of events in this interface is very important, and
 * mirrors the order of information in the document itself.  For
 * example, all of an element content (character data, processing
 * instructions, and/or subelements) will appear, in order, between
 * the @href #StartElement event and the corresponding @href #EndElement event.</p>
 *
 * <p>Application writers who do not want to implement the entire
 * interface can derive a class from @href CATSAXHandlerBase, which implements
 * the default functionality; parser writers can instantiate
 * @href CATSAXHandlerBase to obtain a default handler.  The application can find
 * the location of any document event using the @href CATISAXLocator interface
 * supplied by the @href CATISAXParser through the @href #SetDocumentLocator method.</p>
 *
 * @see CATISAXParser#SetDocumentHandler, CATISAXLocator, CATSAXHandlerBase
 */
class ExportedByXMLParserItf CATISAXDocumentHandler: public CATBaseUnknown {
	CATDeclareInterface;
	
	public:
		
		/**
		 * Receives notification of the beginning of a document.
		 *
		 * <p>The SAX parser will invoke this method only once, before any
		 * other methods in this interface or in @href CATISAXDTDHandler (except for
		 * @href #SetDocumentLocator ).</p>
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
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXParseException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * </dl>
		 */
		virtual HRESULT StartDocument() = 0;
		
		/**
		 * Receives notification of the end of a document.
		 *
		 * <p>The SAX parser will invoke this method only once, and it will
		 * be the last method invoked during the parse.  The parser shall
		 * not invoke this method until it has either abandoned parsing
		 * (because of an unrecoverable error) or reached the end of
		 * input.</p>
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
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXParseException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * </dl>
		 */
		virtual HRESULT EndDocument() = 0;
		
		/**
		 * Receives notification of the beginning of an element.
		 *
		 * <p>The @href CATISAXParser will invoke this method at the beginning of every
		 * element in the XML document; there will be a 
		 * corresponding @href #EndElement event for every @href #StartElement event (even when the
		 * element is empty).</p>
		 * 
                 * <p>All of the element content will be
		 * reported, in order, before the corresponding @href #EndElement event @href .</p>
		 *
		 * <p>If the element name has a namespace prefix, the prefix will
		 * still be attached.  Note that the attribute list provided will
		 * contain only attributes with explicit values (specified or
		 * defaulted): #IMPLIED attributes will be omitted.</p>
		 *
		 * @param iName 
		 * The element type name.
		 * @param iAttributes 
		 * The attributes attached to the element, if any.
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
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXParseException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see CATISAXAttributeList, #EndElement
		 */
		virtual HRESULT StartElement(
			const CATUnicodeString & iName, 
			const CATISAXAttributeList_var & iAttributes) = 0;
		
		/**
		 * Receives notification of the end of an element.
		 *
		 * <p>The SAX parser will invoke this method at the end of every
		 * element in the XML document; there will be a corresponding
		 * @href #StartElement event for every @href #EndElement event (even when the
		 * element is empty).</p>
		 *
		 * <p>If the element name has a namespace prefix, the prefix will
		 * still be attached to the name.</p>
		 *
		 * @param iName
		 * The element type name
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
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXParseException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 */
		virtual HRESULT EndElement(
			const CATUnicodeString & iName) = 0;
		
		/**
		 * Receives notification of character data.
		 *
		 * <p>The @href CATISAXParser will call this method to report each chunk of
		 * character data.  SAX parsers may return all contiguous character
		 * data in a single chunk, or they may split it into several
		 * chunks; however, all of the characters in any single event
		 * must come from the same external entity, so that the @href CATISAXLocator
		 * provides useful information.</p>
		 *
		 * <p>Note that some parsers will report whitespace using the
		 * @href #IgnorableWhiteSpace method rather than this one (validating
		 * parsers must do so).</p>
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
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXParseException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see #IgnorableWhiteSpace, CATISAXLocator
		 */
		virtual HRESULT Characters(
			const CATUnicodeString & iCharacters) = 0;
		
		/**
		 * Receives notification of ignorable whitespace in element content.
		 *
		 * <p>Validating Parsers must use this method to report each chunk
		 * of ignorable whitespace (see the W3C XML 1.0 recommendation,
		 * section 2.10): non-validating parsers may also use this method
		 * if they are capable of parsing and using content models.</p>
		 *
		 * <p>SAX parsers may return all contiguous whitespace in a single
		 * chunk, or they may split it into several chunks; however, all of
		 * the characters in any single event must come from the same
		 * external entity, so that the @href CATISAXLocator provides useful
		 * information.</p>
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
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXParseException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see #Characters
		 */
		virtual HRESULT IgnorableWhiteSpace(
			const CATUnicodeString & iCharacters) = 0;
		
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
		 *     <tr>
		 *        <td class="errtd">@href CATSAXParseException </td>
		 *        <td class="errtd">XMLParserERR_2002</td>
		 *        <td class="errtd">The method can raise a CATSAXParseException</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 */
		virtual HRESULT ProcessingInstruction(
			const CATUnicodeString & iTarget, 
			const CATUnicodeString & iData) = 0;
		
		/**
		 * Receives an object for locating the origin of SAX document events.
		 *
		 * <p>SAX parsers are strongly encouraged (though not absolutely
		 * required) to supply a locator: if it does so, it must supply
		 * the locator to the application by invoking this method before
		 * invoking any of the other methods in the @href CATISAXDocumentHandler
		 * interface.</p>
		 *
		 * <p>The locator allows the application to determine the end
		 * position of any document-related event, even if the parser is
		 * not reporting an error.  Typically, the application will
		 * use this information for reporting its own errors (such as
		 * character content that does not match an application's
		 * business rules).  The information returned by the locator
		 * is probably not sufficient for use with a search engine.</p>
		 *
		 * <p>Note that the locator will return correct information only
		 * during the invocation of the events in this interface.  The
		 * application should not attempt to use it at any other time.</p>
		 *
		 * @param iLocator
		 * An object that can return the location of any SAX document event.
		 *
		 * @see CATISAXLocator
		 */
		virtual HRESULT SetDocumentLocator(
			const CATISAXLocator_var& iLocator) = 0;
};

CATDeclareHandler(CATISAXDocumentHandler, CATBaseUnknown);

#endif // CATISAXDocumentHandler_h
