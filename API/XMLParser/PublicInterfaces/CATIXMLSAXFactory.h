#ifndef CATIXMLSAXFactory_h
#define CATIXMLSAXFactory_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System framework
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

// XMLParser framework
#include "XMLParserItf.h"
class CATISAXInputSource_var;
class CATISAXParser_var;
class CATISAXXMLReader_var;
class CATIXMLInputStream_var;

/**
 * CLSID of the XML4C 3.0 IBM SAX parser.
 */
extern ExportedByXMLParserItf CLSID CLSID_XML4C_SAX;

/**
 * CLSID of the XML4C 5.0 IBM SAX parser.
 */
extern ExportedByXMLParserItf CLSID CLSID_XML4C5_SAX;

/**
 * CLSID of the MSXML 3.0 Microsoft SAX parser.
 */
extern ExportedByXMLParserItf CLSID CLSID_MSXML3_SAX;

/**
 * CLSID of the MSXML 4.0 Microsoft SAX parser.
 */
extern ExportedByXMLParserItf CLSID CLSID_MSXML4_SAX;

/**
 * CLSID of the MSXML 5.0 Microsoft SAX parser.
 */
extern ExportedByXMLParserItf CLSID CLSID_MSXML5_SAX;


#ifndef LOCAL_DEFINITION_FOR_IID
	extern ExportedByXMLParserItf IID IID_CATIXMLSAXFactory;
#else // LOCAL_DEFINITION_FOR_IID
	extern "C" const IID IID_CATIXMLSAXFactory ;
#endif // LOCAL_DEFINITION_FOR_IID

/**
 * Factory interface for SAX objects.
 * @href CATISAXInputSource and @href CATISAXParser objects.
 */
class ExportedByXMLParserItf CATIXMLSAXFactory : public CATBaseUnknown {
	CATDeclareInterface;
	public:
		/**
		 * Returns the list of options which can be used to customize
		 * the parser.
		 *
		 * @param oOptions
		 * The list of options supported by the @href CATISAXParser implementation.
		 * The current list of options is
		 * <table border="1">
		 * <tr bgcolor="a4f4a4">
		 *  <td><b>Option name</b></td>
		 *  <td><b>Description</b></td>
		 *  <td><b>Possible values</b></td>
		 *  <td><b>Default value</b></td>
		 * </tr>
		 * <tr>
		 *  <td>CATDoValidation</td>
		 *  <td>Specifies if validation check is performed during parse</td>
		 *  <td>true or false</td>
		 *  <td>true</td>
		 * </tr>
		 * <tr>
		 *  <td>CATEnableNameSpaces</td>
		 *  <td>Specifies if the parser is XML namespace aware</td>
		 *  <td>true or false</td>
		 *  <td>false</td>
		 * </tr>
		 * </table>
		 */
		virtual HRESULT GetSupportedOptions(
			CATListOfCATUnicodeString& oOptions) = 0;

		/**
		 * Creates a CATISAXParser.
		 *
		 * @param oParser
		 * The resulting CATISAXParser
		 * @param iOptions
		 * The names of the options to set
		 * @param iOptionValues
		 * The values of the options to set.
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
		 *        <td class="errtd">XMLParserERR_2100</td>
		 *        <td class="errtd">Invalid options definition</td>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2101</td>
		 *        <td class="errtd">Unsupported option</td>
		 *     </tr>
		 *     <tr>
		 *        <td class="errtd">@href CATSAXException </td>
		 *        <td class="errtd">XMLParserERR_2102</td>
		 *        <td class="errtd">Illegal option value</td>
		 *     </tr>
		 *   </table>
		 * </dd>
		 * 
		 */
		virtual HRESULT CreateParser(
			CATISAXParser_var & oParser,
			const CATListOfCATUnicodeString& iOptions = CATListOfCATUnicodeString(),
			const CATListOfCATUnicodeString& iOptionValues = CATListOfCATUnicodeString() ) = 0;

		/**
		 * Creates a CATISAXInputSource from the supplied file.
		 *
		 * @param iFileName
		 * The path of the file
		 * @param iPublicId
		 * The public id which will be assigned to the input source.
		 * @param oInputSource
		 * The resulting CATISAXInputSource
		 */
		virtual HRESULT CreateInputSourceFromFile(
			const CATUnicodeString & iFileName, 
			const CATUnicodeString & iPublicId, 
			CATISAXInputSource_var & oInputSource ) = 0;

		/**
		 * Creates a CATISAXInputSource from the supplied memory buffer.
		 *
		 * @param iBuffer
		 * A buffer containing XML text
		 * @param iPublicId
		 * The public id which will be assigned to the input source.
		 * @param oInputSource
		 * The resulting CATISAXInputSource
		 */
		virtual HRESULT CreateInputSourceFromMemoryBuffer(
			const CATUnicodeString & iBuffer, 
			const CATUnicodeString & iPublicId, 
			CATISAXInputSource_var & oInputSource ) = 0;

		/**
		 * Creates a CATISAXXMLReader.
		 *
		 * <p>No options are required since SAX defines a standard way to
		 * pass them to the reader</p>
		 *
		 * @param oParser
		 * The resulting CATISAXParser
		 */
		virtual HRESULT CreateXMLReader(
			CATISAXXMLReader_var & oXMLReader ) = 0;

		/**
		 * Creates a CATISAXInputSource from the supplied stream.
		 * @param iStream
		 * A stream from which XML contents will be fetched
		 * @param iPublicId
		 * The public id which will be assigned to the input source
		 * @param oInputSource
		 * The resulting CATISAXInputSource
		 */
		virtual HRESULT CreateInputSourceFromStream(
			const CATIXMLInputStream_var & iStream, 
			const CATUnicodeString & iPublicId, 
			CATISAXInputSource_var & oInputSource ) = 0;
};

CATDeclareHandler(CATIXMLSAXFactory, CATBaseUnknown);

/**
 * Returns the root object which corresponds to a specific SAX implementation.
 * This object is an instance of @href CATIXMLSAXFactory.
 * @param oFactory
 * The resulting <tt>CATIXMLSAXFactory</tt>
 * @param iClsId
 * The CLSID of the <tt>CATIXMLSAXFactory</tt> to instantiate
 * <br><b>Legal values</b>:
 * <tt>CLSID_XML4C_SAX</tt> Use this value to instantiate the implementation based on XML4C 3.0 from IBM. 
 * This implementation supports DTD validation but not XML schema validation.
 * <tt>CLSID_XML4C5_SAX</tt> Use this value to instantiate the implementation based on XML4C 5.0 from IBM.
 * This implementation supports both DTD and XML schema validation.
 */
extern "C" ExportedByXMLParserItf HRESULT CreateCATIXMLSAXFactory(
	CATIXMLSAXFactory_var& oFactory,
	const CLSID& iClsId = CLSID_XML4C_SAX);

/**
 * Examines the SAX implementations available on the host.
 * The function sequentially examines each of the supplied SAX implementation CLSIDs
 * until one is found, which is installed on the host.
 * @param iClsIdArray
 * An array of SAX implementation CLSIDs that the function should try to detect
 * @param iClsIdArraySize
 * The size of the CLSID array
 * @param oFirstAvailableIndex
 * The array index of the first SAX implementation which was succesfully detected on the machine
 */
extern "C" ExportedByXMLParserItf HRESULT DetectCATIXMLSAXFactory(
	CLSID* iClsIdArray,
	unsigned int iClsIdArraySize,
	unsigned int& oFirstAvailableIndex);

#endif // CATIXMLSAXFactory_h
