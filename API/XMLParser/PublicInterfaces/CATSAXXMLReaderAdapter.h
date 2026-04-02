// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATSAXXMLReaderAdapter_h
#define CATSAXXMLReaderAdapter_h

// System framework
#include "CATBaseUnknown.h"
class CATUnicodeString;

// XMLParser framework
#include "XMLParserCls.h"
#include "CATISAXXMLReader.h"
#include "CATISAXDocumentHandler.h"
#include "CATISAXParser.h"
class CATISAXInputSource_var;
class CATISAXErrorHandler_var;
class CATISAXDTDHandler_var;
class CATISAXEntityResolver_var;

/**
 * Class to adapt a SAX2 CATISAXXMLReader as a SAX1 CATISAXParser.
 *
 * <p>This class wraps a SAX2 @href CATISAXXMLReader and makes it act as a SAX1 @href CATISAXParser. 
 * The @href CATISAXXMLReader must support a <tt>TRUE</tt> value for the <tt>http://xml.org/sax/features/namespace-prefixes</tt> property 
 * or parsing will fail with a @href CATSAXException ; if the @href CATISAXXMLReader supports a <tt>FALSE</tt> value 
 * for the <tt>http://xml.org/sax/features/namespaces</tt> property, that will also be used to improve efficiency</p>
 *
 * @see CATISAXXMLReader, CATISAXParser
 */
class ExportedByXMLParserCls CATSAXXMLReaderAdapter: public CATISAXParser {
	CATDeclareClass;
	
	public:
		
		/**
		 * Factory method.
		 *
		 * @param iReader
		 * The reader to encapsulate
		 * @param oParser
		 * The resulting parser
		 */
		static HRESULT CreateAdapter(
			const CATISAXXMLReader_var& iReader,
			CATISAXParser_var& oParser);

		/**
		 * Destructor.
		 */
		virtual ~CATSAXXMLReaderAdapter();
		
		// Implement the CATISAXParser interface.

		/**
		 * Parses an XML document.
		 * @see CATISAXParser#Parse
		 */
		virtual HRESULT Parse(
			const CATISAXInputSource_var& iInputSource);
		
		/**
		 * Parses an XML document from a system identifier (URI).
		 * @see CATISAXParser#Parse
		 */
		virtual HRESULT Parse(
			const CATUnicodeString & iSystemId);
		
		/**
		 * Allows an application to register a document event handler.
		 * @see CATISAXParser#SetDocumentHandler
		 */
		virtual HRESULT SetDocumentHandler(
			const CATISAXDocumentHandler_var& iDocumentHandler);
		
		/**
		 * Allows an application to register a DTD event handler.
		 * @see CATISAXParser#SetDTDHandler
		 */
		virtual HRESULT SetDTDHandler(
			const CATISAXDTDHandler_var& iDTDHandler);
		
		/**
		 * Allows an application to register a custom entity resolver.
		 * @see CATISAXParser#SetEntityResolver
		 */
		virtual HRESULT SetEntityResolver(
			const CATISAXEntityResolver_var& iEntityResolver);
		
		/**
		 * Allows an application to register an error event handler.
		 * @see CATISAXParser#SetErrorHandler
		 */
		virtual HRESULT SetErrorHandler(
			const CATISAXErrorHandler_var& iErrorHandler);

	private:
		/**
		 * Constructor
		 *
		 * @param iReader
		 * The reader to encapsulate
		 */
		CATSAXXMLReaderAdapter(
			const CATISAXXMLReader_var& iReader);
		CATSAXXMLReaderAdapter (CATSAXXMLReaderAdapter &);
		CATSAXXMLReaderAdapter& operator=(CATSAXXMLReaderAdapter&);

		void _SetupHandlers();
		void _CleanupHandlers();

	private:
		CATISAXXMLReader_var _reader;
		CATISAXDocumentHandler_var _documentHandler;
};

#endif // CATSAXXMLReaderAdapter_h
