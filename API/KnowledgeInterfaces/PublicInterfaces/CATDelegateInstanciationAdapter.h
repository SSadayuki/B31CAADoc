#ifndef CATDelegateInstanciationAdapter_H
#define CATDelegateInstanciationAdapter_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
* @CAA2Level L1
* @CAA2Usage U2
*/

// Export Module 
#include "CATLifSpecs.h"

// inherit from
#include "CATBaseUnknown.h"
#include "CATIForwardsDecl.h"
#include "CATUnicodeString.h"
#include "CATIDelegateInstanciation.h"

class CATInstanciationContext;

/**   
 * CAA2 Adapter to CATIDelegateInstanciation Interface.
 * <b>Role</b>: This class must be derived to implement  extension to CATIDelegateInstanciation.<br>
 * CATIDelegateInstanciation is the interface used by Knowledgeware to instanciate objects.<br>
 * @see CATIDelegateInstanciation
 */
class ExportedByCATLifSpecs CATDelegateInstanciationAdapter : public CATIDelegateInstanciation
{
public:

   /** 
    * Constructs the extension.
    */ 
    CATDelegateInstanciationAdapter();

   /** 
    * Deletes the extension.
    */ 
    virtual ~CATDelegateInstanciationAdapter();

	/**
	 * Creates an instance oInstanciated, of type typeName,
	 * in owner iOwner, and named iKey.
	 * default implementation returns E_FAIL.
	 */
	virtual HRESULT Instanciate( const CATIInstance_var & iOwner, const CATUnicodeString & iKey, const CATUnicodeString & typeName, CATIInstance_var & oInstanciated ) ;

	/**
	 * Creates an instance oInstanciated, of type typeName,
	 * in owner iOwner, and named iKey.
	 * default implementation calls Instanciate method.
	 */
	virtual HRESULT InstanciateObject( const CATIInstance_var& iOwner, const CATUnicodeString& iKey, const CATUnicodeString& typeName, CATIInstance_var& oInstanciated,const CATInstanciationContext *iContext ) ;
 
 
private:
 
  /**
   * @nodoc
   */
   CATDelegateInstanciationAdapter(const CATDelegateInstanciationAdapter&);
};


#endif
