// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATISAXAttributeList_h
#define CATISAXAttributeList_h

// System framework
#include "CATBaseUnknown.h"
class CATUnicodeString;

// XMLParser framework
#include "XMLParserItf.h"

#ifndef LOCAL_DEFINITION_FOR_IID
	extern ExportedByXMLParserItf IID IID_CATISAXAttributeList;
#else // LOCAL_DEFINITION_FOR_IID
	extern "C" const IID IID_CATISAXAttributeList ;
#endif // LOCAL_DEFINITION_FOR_IID

/**
 * Interface for an element's attribute specifications.
 *
 * The SAX parser implements this interface and passes an instance
 * to the SAX application as the second argument of each @href CATISAXDocumentHandler#StartElement
 * event.
 *
 * The instance provided will return valid results only during the
 * scope of the @href CATISAXDocumentHandler#StartElement invocation (to save it for future
 * use, the application must make a copy).
 *
 * A @href CATISAXAttributeList includes only attributes that have been
 * specified or defaulted: #IMPLIED attributes will not be included.
 *
 * There are two ways for the SAX application to obtain information
 * from the @href CATISAXAttributeList.  First, it can iterate through the entire
 * list:
 *
 * <pre>
 * HRESULT StartElement(const CATUnicodeString & iName, const CATISAXAttributeList_var& iAttributes) {
 *     HRESULT hr = S_OK;
 *     if (iAttributes != NULL_var) {
 *         unsigned int length = 0;
 *         hr = iAttributes->GetLength(length);
 *         if (SUCCEEDED(hr)) {
 *             for (unsigned int i = 0; i < length; i++) {
 *                 CATUnicodeString name;
 *                 hr = iAttributes->GetName(i, name);
 *                 if (FAILED(hr)) {
 *                     break;
 *                 }
 *                 CATUnicodeString type;
 *                 hr = iAttributes->GetType(i, type);
 *                 if (FAILED(hr)) {
 *                     break;
 *                 }
 *                 CATUnicodeString value;
 *                 hr = iAttributes->GetValue(i, value);
 *                 if (FAILED(hr)) {
 *                     break;
 *                 }
 *                [...]
 *             }
 *         }
 *     }
 *     return hr;
 * }
 * </pre>
 *
 * (Note that the result of @href #GetLength will be zero if there
 * are no attributes.)
 *
 * As an alternative, the application can request the value or
 * type of specific attributes:
 *
 * <pre>
 * HRESULT StartElement(const CATUnicodeString & iName, const CATISAXAttributeList_var& iAttributes) {
 *     HRESULT hr = E_FAIL;
 *     if (iAttributes != NULL_var) {
 *         CATUnicodeString identifier;
 *         hr = iAttributes->GetValue("id", identifier);
 *         if (FAILED(hr)) {
 *             return hr;
 *         }
 *         CATUnicodeString label;
 *         hr = iAttributes->GetValue("label", label);
 *         if (FAILED(hr)) {
 *             return hr;
 *         }
 *         [...]
 *     }
 *     return hr;
 * }
 * </pre>
 *
 * @see CATISAXDocumentHandler#StartElement 
 */

class ExportedByXMLParserItf CATISAXAttributeList : public CATBaseUnknown {
	CATDeclareInterface;
	
	public:
		
		/**
		 * Retrieves the number of attributes in this list.
		 *
		 * The SAX parser may provide attributes in any
		 * arbitrary order, regardless of the order in which they were
		 * declared or specified.  The number of attributes may be
		 * zero.
		 *
		 * @param oLength
		 * The number of attributes in the list.  
		 */
		virtual HRESULT GetLength(
			unsigned int & oLength) = 0;
		
		/**
		 * Retrieves the name of an attribute in this list (by position).
		 *
		 * The names must be unique: the SAX parser shall not include the
		 * same attribute twice.  Attributes without values (those declared
		 * #IMPLIED without a value specified in the start tag) will be
		 * omitted from the list.
		 *
		 * If the attribute name has a namespace prefix, the prefix
		 * will still be attached.
		 *
		 * @param iPosition 
		 * The index of the attribute in the list (starting at 0).
		 * @param oName
		 * The name of the indexed attribute.
		 * @return
		 * The method returns <tt>E_FAIL</tt> if the index is out of range, <tt>S_OK</tt> otherwise.
		 * @see #GetLength 
		 */
		virtual HRESULT GetName(
			const unsigned int iPosition, 
			CATUnicodeString & oName) = 0;
		
		/**
		 * Retrieves the type of an attribute in the list (by position).
		 *
		 * The attribute type is one of the strings "CDATA", "ID",
		 * "IDREF", "IDREFS", "NMTOKEN", "NMTOKENS", "ENTITY", "ENTITIES",
		 * or "NOTATION" (always in upper case).
		 *
		 * If the parser has not read a declaration for the attribute,
		 * or if the parser does not report attribute types, then it must
		 * return the value "CDATA" as stated in the XML 1.0 Recommentation
		 * (clause 3.3.3, "Attribute-Value Normalization").
		 *
		 * For an enumerated attribute that is not a notation, the
		 * parser will report the type as "NMTOKEN".
		 *
		 * @param iPosition
		 * The index of the attribute in the list (starting at 0).
		 * @param oType
		 * The attribute type as a string.
		 * @return
		 * The method returns <tt>E_FAIL</tt> if the index is out of range, <tt>S_OK</tt> otherwise.
		 *
		 * @see #GetLength, #GetType
		 */		
		virtual HRESULT GetType(
			const unsigned int iPosition, 
			CATUnicodeString & oType) = 0;
		
		/**
		 * Retrieves the type of an attribute in the list (by name).
		 *
		 * The return value is the same as the return value for
		 * @href #GetType.
		 *
		 * If the attribute name has a namespace prefix in the document,
		 * the application must include the prefix here.
		 *
		 * @param iName 
		 * The name of the attribute.
		 * @param oType
		 * The attribute type as a string.
 		 * @return
		 * The method returns <tt>E_FAIL</tt> if no such attribute exists, <tt>S_OK</tt> otherwise.
		 *
		 * @see #GetType
		 */
		virtual HRESULT GetType(
			const CATUnicodeString & iName, 
			CATUnicodeString & oType) = 0;
				
		/**
		 * Retrieves the value of an attribute in the list (by position).
		 *
		 * If the attribute value is a list of tokens (IDREFS,
		 * ENTITIES, or NMTOKENS), the tokens will be concatenated
		 * into a single string separated by whitespace.
		 *
		 * @param iPosition
		 * The index of the attribute in the list (starting at 0).
		 * @param oValue
		 * The attribute value as a string
 		 * @return
		 * The method returns <tt>E_FAIL</tt> if the index is out of range, <tt>S_OK</tt> otherwise.
		 * @see #GetLength, #GetValue
		 */
		virtual HRESULT GetValue(
			const unsigned int iPosition, 
			CATUnicodeString & oValue) = 0;
		
		/**
		 * Retrieves the value of an attribute in the list (by name).
		 *
		 * The return value is the same as the return value for
		 * @href #GetValue.
		 *
		 * If the attribute name has a namespace prefix in the document,
		 * the application must include the prefix here.
		 *
		 * @param iName
		 * The name of the attribute in the list.
		 * @param oValue
		 * The attribute value as a string, or null if no such attribute exists.
 		 * @return
		 * The method returns <tt>E_FAIL</tt> if no such attribute exists, <tt>S_OK</tt> otherwise.
		 *
		 * @see #GetValue
		 */
		virtual HRESULT GetValue(
			const CATUnicodeString & iName, 
			CATUnicodeString & oValue) = 0;
};

CATDeclareHandler(CATISAXAttributeList, CATBaseUnknown);

#endif // CATISAXAttributeList_h
