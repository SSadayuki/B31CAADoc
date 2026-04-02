#ifndef CATIProviders_H
#define CATIProviders_H
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "AC0SPBAS.h"
//#include "CATBaseUnknown.h"
//#include "CATListOfCATBaseUnknown.h"
//#include "CATLISTV_CATBaseUnknown.h"
#include "sequence_CATBaseUnknown_ptr.h"

extern ExportedByAC0SPBAS IID IID_CATIProviders ;

//------------------------------------------------------------------

/**
 * Interface to manage provider declaration to a document.
 */
class ExportedByAC0SPBAS CATIProviders: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /** Adds a new provider to be managed by the document.
	  * @param clsid
	  *     Provider interface name.
	  * @param oProvider
	  *     The provider object.
	  */
	virtual HRESULT AddProvider(const CLSID &clsid, CATBaseUnknown * oProvider) = 0;

	/** Removes a provider that was previously declared to the document.
	  * @param clsid
	  *     Provider interface name.
	  * @param oProvider
	  *     The provider object.
	  */
	virtual HRESULT RemoveProvider(const CLSID &clsid, CATBaseUnknown * oProvider) = 0;

	/** Lists the providers declared to the document for a given interface.
	  * @param clsid
	  *     Provider interface name.
	  * @param oListProviders
	  *     The list of the provider objects declared for the given interface.
	  */
	virtual HRESULT ListProviders(const CLSID &clsid, CATLISTP(CATBaseUnknown) ** oListProviders) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIProviders, CATBaseUnknown );

#endif
