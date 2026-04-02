#ifndef CATISchAppClassNavigateObject_h
#define CATISchAppClassNavigateObject_h

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "CATINavigateObject.h"

#include "CATSchItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSchItfCPP IID IID_CATISchAppClassNavigateObject;
#else
extern "C" const IID IID_CATISchAppClassNavigateObject;
#endif

class CATListValCATBaseUnknown_var;
class CATListValCATUnicodeString;

/** 
 * Derived CATINavigateObject interface to enable navigation of a
 * schematic application class dictionary.
 * @see CATINavigateObject
 */

class ExportedByCATSchItfCPP CATISchAppClassNavigateObject 
                             : public CATINavigateObject
{
	CATDeclareInterface;

	public :
};

#endif

