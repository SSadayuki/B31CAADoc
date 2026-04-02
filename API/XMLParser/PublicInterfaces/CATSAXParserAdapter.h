// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATSAXParserAdapter_h
#define CATSAXParserAdapter_h

// System framework
#include "CATBaseUnknown.h"
class CATUnicodeString;
#include "CATVariant.h"
#include "CATBoolean.h"

// XMLParser framework
#include "XMLParserCls.h"
#include "CATISAXParser.h"
#include "CATISAXEntityResolver.h"
#include "CATISAXContentHandler.h"
#include "CATISAXErrorHandler.h"
#include "CATISAXDTDHandler.h"
#include "CATISAXXMLReader.h"
class CATISAXXMLReader_var;
class CATISAXInputSource_var;

/**
 * Class to adapt a SAX1 CATISAXParser as a SAX2 CATISAXXMLReader.
 *
 * <p>This class wraps a SAX1 @href CATISAXParser and makes it act as a SAX2 @href CATISAXXMLReader, 
 * with feature, property, and Namespace support. Note that it is not possible to report 
 * @href CATISAXContentHandler#SkippedEntity events, since SAX1 does not make that information available.
 * This adapter does not test for duplicate Namespace-qualified attribute names.</p>
 *
 * @see CATISAXXMLReader, CATISAXParser
 */
class ExportedByXMLParserCls CATSAXParserAdapter: public CATISAXXMLReader {
	CATDeclareClass;
	
	public:
		/**
		 * Factory method.
		 *
		 * @param iParser
		 * The parser to encapsulate
		 * @param oReader
		 * The resulting reader
		 */
		static HRESULT CreateAdapter(
			const CATISAXParser_var& iParser,
			CATISAXXMLReader_var& oReader);
		

		/**
		 * Destructor.
		 */
		virtual ~CATSAXParserAdapter();
		
		// Implement the CATISAXXMLReader interface.

		/**
		 * Parses an XML document.
		 * @see CATISAXXMLReader#Parse 
		 */
		virtual HRESULT Parse(
			const CATISAXInputSource_var& iInputSource);
		
		/**
		 * Parses an XML document from a system identifier (URI).
		 * @see CATISAXXMLReader#Parse 
		 */
		virtual HRESULT Parse(
			const CATUnicodeString & iSystemId);

		/**
		 * Retrieves the current content event handler.
		 * @see CATISAXXMLReader#GetContentHandler 
		 */
		virtual HRESULT GetContentHandler(
			CATISAXContentHandler_var& oContentHandler);

		/**
		 * Allows an application to register a content event handler.
		 * @see CATISAXXMLReader#SetContentHandler 
		 */
		virtual HRESULT SetContentHandler(
			const CATISAXContentHandler_var& iContentHandler);

		/**
		 * Retrieves the current DTD event handler.
		 * @see CATISAXXMLReader#GetDTDHandler 
		 */
		virtual HRESULT GetDTDHandler(
			CATISAXDTDHandler_var& oDTDHandler);

		/**
		 * Allows an application to register a DTD event handler.
		 * @see CATISAXXMLReader#SetDTDHandler 
		 */
		virtual HRESULT SetDTDHandler(
			const CATISAXDTDHandler_var& iDTDHandler);
		
		/**
		 * Retrieves the current entity resolver.
		 * @see CATISAXXMLReader#GetEntityResolver 
		 */
		virtual HRESULT GetEntityResolver(
			CATISAXEntityResolver_var& oEntityResolver);

		/**
		 * Allows an application to register a custom entity resolver.
		 * @see CATISAXXMLReader#SetEntityResolver 
		 */
		virtual HRESULT SetEntityResolver(
			const CATISAXEntityResolver_var& iEntityResolver);
		
		/**
		 * Retrieves the current error event handler.
		 * @see CATISAXXMLReader#GetErrorHandler 
		 */
		virtual HRESULT GetErrorHandler(
			CATISAXErrorHandler_var& oErrorHandler);

		/**
		 * Allows an application to register an error event handler.
		 * @see CATISAXXMLReader#SetErrorHandler 
		 */
		virtual HRESULT SetErrorHandler(
			const CATISAXErrorHandler_var& iErrorHandler);

		/**
		 * Retrieves the value of a feature.
		 * @see CATISAXXMLReader#GetFeature 
		 */
		 virtual HRESULT GetFeature(
			const CATUnicodeString &iName,
			CATBoolean& oFeature);

		/**
		 * Sets the value of a feature.
		 * @see CATISAXXMLReader#SetFeature 
		 */
		virtual HRESULT SetFeature(
			const CATUnicodeString &iName,
			CATBoolean iFeature);

		/**
		 * Retrieves up the value of a property.
		 * @see CATISAXXMLReader#GetProperty
		 */
		virtual HRESULT GetProperty(
			const CATUnicodeString &iName,
			CATVariant& oProperty);

		/**
		 * Sets the value of a property.
		 * @see CATISAXXMLReader#SetProperty
		 */
		virtual HRESULT SetProperty(
			const CATUnicodeString &iName,
			const CATVariant& iProperty);

	private:
		/**
		 * Constructor
		 * @param iParser
		 * The parser to encapsulate.
		 */
		CATSAXParserAdapter(
			const CATISAXParser_var& iParser);
		CATSAXParserAdapter (CATSAXParserAdapter &);
		CATSAXParserAdapter& operator=(CATSAXParserAdapter&);
		void _SetupHandlers();
		void _CleanupHandlers();

	private:
		CATISAXParser_var _parser;
		CATBoolean _parsing;
		CATBoolean _namespaceEnabled;
		CATBoolean _namespacePrefixEnabled;
		CATISAXEntityResolver_var _entityResolver;
		CATISAXDTDHandler_var _dtdHandler;
		CATISAXErrorHandler_var _errorHandler;
		CATISAXContentHandler_var _contentHandler;
};

#endif // CATSAXParserAdapter_h
