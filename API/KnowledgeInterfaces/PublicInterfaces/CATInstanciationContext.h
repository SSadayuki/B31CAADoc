#ifndef CATInstanciationContext_h
#define CATInstanciationContext_h


// COPYRIGHT DASSAULT SYSTEMES 2002
/** 
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATLifSpecs.h"

class CATUnicodeString;

/**   
 * Class dedicated to instanciation management.
 * <b>Role</b>: When instanciating an object through CATIInstanciation, this class is used to pass some arguments.<br>
 */
class ExportedByCATLifSpecs CATInstanciationContext
{

public:

	/**
     * @nodoc
	 */
	CATInstanciationContext ();

	/**
     * @nodoc
	 */
	virtual ~CATInstanciationContext ();

	/**
     * @nodoc
	 */
    CATInstanciationContext (const CATInstanciationContext &);

	/**
     * @nodoc. Returns a string information.
	 */
	virtual CATUnicodeString StringInfo () const =0;
};

#endif


