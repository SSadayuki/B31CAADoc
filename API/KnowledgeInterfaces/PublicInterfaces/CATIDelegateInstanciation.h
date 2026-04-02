#ifndef CATIDelegateInstanciation_h
#define CATIDelegateInstanciation_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/** 
* @CAA2Level L1
* @CAA2Usage U4 CATDelegateInstanciationAdapter
*/

// inherited class 
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

// load module
#include "CATLifSpecs.h"
#include "CATIForwardsDecl.h"
class CATInstanciationContext;

// OLE IID
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATLifSpecs IID_CATIDelegateInstanciation;
#else
extern "C" const IID IID_CATIDelegateInstanciation;
#endif

/**
 * CATIDelegateInstanciation allows several types to use the
 * same instanciation function: The CATIType created by 
 * CATITypeDictionary can specify the name of a class which
 * implements CATIDelegateInstanciation. It will adhere to
 * CATIInstanciation and delegate the instanciate method
 * to an object implementing CATIDelegateInstanciation
 * which will have been created through cATCoCreateInstance 
 * called with the name given duting the CATIType declaration.
 *
 * <p><b>BOA information</b>: this interface CAN be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 *
 */
class ExportedByCATLifSpecs CATIDelegateInstanciation : public CATBaseUnknown
{
public :
	/**
	 * Creates an instance oInstanciated, of type typeName,
	 * in owner iOwner, and named iKey.
	 */
	virtual HRESULT Instanciate( const CATIInstance_var& iOwner, const CATUnicodeString& iKey, const CATUnicodeString& typeName, CATIInstance_var& oInstanciated,const CATInstanciationContext *iContext ) = 0;
 
private:
  CATDeclareInterface;
}; 

CATDeclareHandler(CATIDelegateInstanciation, CATBaseUnknown);

#endif
