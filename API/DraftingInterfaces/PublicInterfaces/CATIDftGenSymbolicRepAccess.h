// COPYRIGHT DASSAULT SYSTEMES 2012
#ifndef CATIDftGenSymbolicRepAccess_H
#define CATIDftGenSymbolicRepAccess_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "IUnknown.h"
#include "CATBoolean.h"
#include "CATCollec.h"

class CATLISTP(CATDftSymbolicRepInfo);
class CATILinkableObject;
class CATIProduct;
class CATBaseUnknown;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenSymbolicRepAccess ;
#else
extern "C" const IID IID_CATIDftGenSymbolicRepAccess ;
#endif

/**
* Interface enabling Drafting client applications to retrieve previously created SymbolicReps (SR) 
*
*/              

class ExportedByDraftingItfCPP CATIDftGenSymbolicRepAccess : public IUnknown
{
public:
    /**
	*	Enables to retrieve the previously created -hence persistent- SRs in the Generative View
    */
    virtual HRESULT RetrieveSymbolicReps (CATILinkableObject* iFeat, CATIProduct* iProduct, CATLISTP(CATDftSymbolicRepInfo)& ioPreviouslyCreatedSR) const = 0;
    /**
	*	Requests the deletion of a previously created SR
    */
	virtual HRESULT RequestObjectDeletion (CATBaseUnknown* i2DObjectToDestroy) = 0;
 
};

#endif
