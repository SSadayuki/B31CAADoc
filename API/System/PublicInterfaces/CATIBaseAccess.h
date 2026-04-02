
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */

#ifndef CATIBaseAccess_H
#define CATIBaseAccess_H

#include "JS0INF.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByJS0INF IID IID_CATIBaseAccess ;
#else
extern "C" const IID IID_CATIBaseAccess ;
#endif

class CATBaseDispatch;

/**
 * Interface used to retrieve the accurate CATBaseDispatch or CATIABase interface on a component.
 * Implements this interface if your component implements several times the 
 * CATBaseDispatch or CATIABase interface to give the right implementation to the client.
 */
class ExportedByJS0INF CATIBaseAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
		 * Retrieves the accurate CATBaseDispatch or CATIABase interface on the current component.
		 * @param oBasePointer
		 * The returned interface pointer.
		 * @return 
		 * S_OK if the operation succeeded, E_FAIL otherwise.
     */
    virtual HRESULT GiveAccurateExposedInterface(CATBaseDispatch** oBasePointer)=0;
};

/** @nodoc */
CATDeclareHandler( CATIBaseAccess, CATBaseUnknown );

#endif
