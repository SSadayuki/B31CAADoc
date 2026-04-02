#ifndef CATISamProviders_H
#define CATISamProviders_H
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//===================================================================

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "sequence_CATBaseUnknown_ptr.h"

extern ExportedByCATAnalysisInterface IID IID_CATISamProviders ;

//------------------------------------------------------------------

/**
 * Interface to manage provider declaration to an analysis document.
 */
class ExportedByCATAnalysisInterface CATISamProviders: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/** 
 * Adds a new provider to be managed by the document.
 * @param clsid
 *     Provider interface name.
 * @param oProvider
 *     The provider object.
 */
	virtual HRESULT AddProvider(const CLSID &clsid, CATBaseUnknown * oProvider) = 0;

/**
 * Removes a provider that was previously declared to the document.
 * @param clsid
 *     Provider interface name.
 * @param oProvider
 *     The provider object.
 */
	virtual HRESULT RemoveProvider(const CLSID &clsid, CATBaseUnknown * oProvider) = 0;

/**
 * Lists the providers declared to the document for a given interface.
 * @param clsid
 *     Provider interface name.
 * @param oListProviders
 *     The list of the provider objects declared for the given interface.
 */
	virtual HRESULT ListProviders(const CLSID &clsid, CATLISTP(CATBaseUnknown) ** oListProviders) = 0;

/**
 * @nodoc
 * Memory Mgt: Removes All providers in the LifeCyle::remove of the document.
 */
	virtual void RemoveAllProviders() = 0;


};

//------------------------------------------------------------------

CATDeclareHandler( CATISamProviders, CATBaseUnknown );

#endif
