#ifndef CATIXMLInputStream_h
#define CATIXMLInputStream_h

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// COPYRIGHT DASSAULT SYSTEMES 2005

// System framework
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

// XMLParser framework
#include "XMLParserItf.h"

#ifndef LOCAL_DEFINITION_FOR_IID
	extern ExportedByXMLParserItf IID IID_CATIXMLInputStream;
#else // LOCAL_DEFINITION_FOR_IID
	extern "C" const IID IID_CATIXMLInputStream ;
#endif // LOCAL_DEFINITION_FOR_IID

/**
 * Interface for objects which know how to provide XML
 * to an XML parser.
 */
class ExportedByXMLParserItf CATIXMLInputStream : public CATBaseUnknown {
	CATDeclareInterface;
	public:
		/**
		 * Asks the stream to fetch the next available bytes
		 * and put them the supplied byte array.
		 * @param ioByteArray
		 * The byte array to fill
		 * @param iByteArrayCapacity
		 * The size of the byte array
		 * @param oSizeRead
		 * The number of bytes read.
		 * If this size is less than the byte array capacity,
		 * the parser will consider it has reached the end of the stream.
		 */
		virtual HRESULT Read(
			unsigned char* ioByteArray,
			unsigned int iByteArrayCapacity,
			unsigned int& oSizeRead) = 0;
};

CATDeclareHandler(CATIXMLInputStream, CATBaseUnknown);

#endif // CATIXMLInputStream_h
