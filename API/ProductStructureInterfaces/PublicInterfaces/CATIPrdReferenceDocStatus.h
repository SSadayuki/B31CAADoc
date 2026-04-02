#ifndef CATIPrdReferenceDocStatus_H
#define CATIPrdReferenceDocStatus_H

// COPYRIGHT Dassault Systemes 2003

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

#include "CATProductStructureInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATProductStructureInterfaces IID IID_CATIPrdReferenceDocStatus;
#else
extern "C" const IID IID_CATIPrdReferenceDocStatus ;
#endif

class CATIProduct_var;
class CATListValCATBaseUnknown_var;
//------------------------------------------------------------------

/**
 * Used to manage the status of of any reference (internal or external)
 */
class ExportedByCATProductStructureInterfaces CATIPrdReferenceDocStatus: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


    /**
     * Get the status of the reference (internal or external).
     *   @param status
     *      status = 0 ==> Unknown.
	   *      status = 1 ==> External
	   *      status = 2 ==> Internal
     *   @return
     *      S_OK	: No error.
	   *      E_FAIL  : An internal error occurs
     */
	 virtual HRESULT GetStatus( int* status ) = 0;

	 /**
     * Externalize an internal reference (component).
     *   @param rovNewProduct
     *      Pointer on the external product.
     *   @return
     *      S_OK	: Process complete.
     *		  S_FALSE : Process complete, but errors have been logged.
	   *      E_FAIL  : An internal error occurs
     */
	 virtual HRESULT	Externalize( CATIProduct_var& rovNewProduct ) = 0;


	 /**
     * @nodoc
     */
    virtual HRESULT ExternalizeAll( int iOption, CATListValCATBaseUnknown_var& rovNewRefProds  )=0;

};

//------------------------------------------------------------------
CATDeclareHandler( CATIPrdReferenceDocStatus, CATBaseUnknown );

#endif
