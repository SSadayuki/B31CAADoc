// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATISAXParser_h
#define CATISAXParser_h

// System framework
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
class CATUnicodeString;

// XMLParser framework
#include "XMLParserItf.h"
class CATISAXInputSource_var;
class CATISAXDocumentHandler_var;
class CATISAXDTDHandler_var;
class CATISAXEntityResolver_var;
class CATISAXErrorHandler_var;

#ifndef LOCAL_DEFINITION_FOR_IID
	extern ExportedByXMLParserItf IID IID_CATISAXParser;
#else // LOCAL_DEFINITION_FOR_IID
	extern "C" const IID IID_CATISAXParser ;
#endif // LOCAL_DEFINITION_FOR_IID

 /**
  * Interface for SAX (Simple API for XML) parsers.
  *
  * All SAX parsers must implement this basic interface: it allows
  * applications to register handlers for different types of events
  * and to initiate a parse from a URI, or a character stream.
  *
  * All SAX parsers must also implement a zero-argument constructor
  * (though other constructors are also allowed).
  *
  * SAX parsers are reusable but not re-entrant: the application
  * may reuse a parser object (possibly with a different input source)
  * once the first parse has completed successfully, but it may not
  * invoke the @href #Parse methods recursively within a parse.
  *
  * @see CATISAXEntityResolver, CATISAXDTDHandler, CATISAXDocumentHandler, CATISAXErrorHandler, CATSAXHandlerBase, CATISAXInputSource
  */
class ExportedByXMLParserItf CATISAXParser : public CATBaseUnknown {
	CATDeclareInterface;
	
	public:
		
		/**
		 * Parses an XML document.
		 *
		 * The application can use this method to instruct the SAX parser
		 * to begin parsing an XML document from any valid input
		 * source (a character stream, a byte stream, or a URI).
		 *
		 * Applications may not invoke this method while a parse is in
		 * progress (they should create a new @href CATISAXParser instead for each
		 * additional XML document).  Once a parse is complete, an
		 * application may reuse the same Parser object, possibly with a
		 * different input source.
		 *
		 * @param iInputSource The input source for the top-level of the
		 *               XML document.
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
		 *        <td class="errtd">If an error (such as a not well formed XML document) occurs during parse</td>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2001</td>
		 *        <td class="errtd">If an I/O error occurs during parse</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 *
		 * @see CATISAXInputSource, #SetEntityResolver, #SetDTDHandler, #SetDocumentHandler, #SetErrorHandler
		 */
		virtual HRESULT Parse(
			const CATISAXInputSource_var& iInputSource) = 0;
		
		/**
		 * Parses an XML document from a system identifier (URI).
		 *
		 * This method is a shortcut for the common case of reading a
		 * document from a system identifier. If the system identifier is a URL, it must be fully resolved
		 * by the application before it is passed to the parser.
		 *
		 * @param iSystemId
		 * The system identifier (URI).
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
		 *        <td class="errtd">If an error (such as a not well formed XML document) occurs during parse</td>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2001</td>
		 *        <td class="errtd">If an I/O error occurs during parse</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 *
		 * @see #Parse
		 */
		virtual HRESULT Parse(
			const CATUnicodeString & iSystemId) = 0;
		
		/**
		 * Allows an application to register a document event handler.
		 *
		 * If the application does not register a document handler, all
		 * document events reported by the SAX parser will be silently
		 * ignored (this is the default behaviour implemented by
		 * @href CATSAXHandlerBase ).
		 *
		 * Applications may register a new or different handler in the
		 * middle of a parse, and the SAX parser must begin using the new
		 * handler immediately.
		 *
		 * @param iDocumentHandler
		 * The document handler.
		 * @see CATISAXDocumentHandler, CATSAXHandlerBase
		 */
		virtual HRESULT SetDocumentHandler(
			const CATISAXDocumentHandler_var& iDocumentHandler) = 0;
		
		/**
		 * Allows an application to register a DTD event handler.
		 *
		 * If the application does not register a DTD handler, all DTD
		 * events reported by the SAX parser will be silently ignored (this
		 * is the default behaviour implemented by @href CATSAXHandlerBase ).
		 *
		 * Applications may register a new or different handler in the middle
		 * of a parse, and the SAX parser must begin using the new handler
		 * immediately.
		 *
		 * @param iDTDHandler
		 * The DTD handler.
		 *
		 * @see CATISAXDTDHandler, CATSAXHandlerBase
		 */
		virtual HRESULT SetDTDHandler(
			const CATISAXDTDHandler_var& iDTDHandler) = 0;
		
		/**
		 * Allows an application to register a custom entity resolver.
		 *
		 * If the application does not register an entity resolver, the
		 * SAX parser will resolve system identifiers and open connections
		 * to entities itself (this is the default behaviour implemented in
		 * @href CATSAXHandlerBase ).
		 *
		 * Applications may register a new or different entity resolver
		 * in the middle of a parse, and the SAX parser must begin using
		 * the new resolver immediately.
		 *
		 * @param iEntityResolver
		 * The object for resolving entities.
		 * @see CATISAXEntityResolver, CATSAXHandlerBase
		 */
		virtual HRESULT SetEntityResolver(
			const CATISAXEntityResolver_var& iEntityResolver) = 0;
		
		/**
		 * Allows an application to register an error event handler.
		 *
		 * If the application does not register an error event handler,
		 * all error events reported by the SAX parser will be silently
		 * ignored, except for @href CATISAXErrorHandler#FatalError, which will raise a @href CATSAXException
		 * error (this is the default behaviour implemented by @href CATSAXHandlerBase ).
		 *
		 * Applications may register a new or different handler in the
		 * middle of a parse, and the SAX parser must begin using the new
		 * handler immediately.
		 *
		 * @param handler The error handler.
		 * @see CATISAXErrorHandler, CATSAXException, CATSAXHandlerBase
		 */
		virtual HRESULT SetErrorHandler(
			const CATISAXErrorHandler_var& iErrorHandler) = 0;
};

CATDeclareHandler(CATISAXParser, CATBaseUnknown);

#endif // CATISAXParser_h
