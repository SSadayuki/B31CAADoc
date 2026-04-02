// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEAnalysisUpgradeContainer.h Provide adaptor to interface CATISamUpgradeContainer
//
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATEAnalysisUpgradeContainer_H
#define CATEAnalysisUpgradeContainer_H
/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATAnalysisResources.h"
#include "CATISamUpgradeContainer.h"
#include "CATUnicodeString.h"

class CATISpecObject;
//-----------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamUpgradeContainer interface.
 * This Object have to be implemented as a provider.
 * CATImplementClass(MyProvider,Implementation,CATEAnalysisUpgradeContainer,CATnull);
 * @see CATISamUpgradeContainer
 */

class ExportedByCATAnalysisResources CATEAnalysisUpgradeContainer: public CATISamUpgradeContainer
{

  public:

  // Standard constructors and destructors for an implementation class
  // -----------------------------------------------------------------
     CATEAnalysisUpgradeContainer ();
     virtual ~CATEAnalysisUpgradeContainer ();

/**
 * Return the Client Id associated to the feature catalog.
 * @return The client Id.
 */

	  virtual CATUnicodeString GetClientId () = 0;


/**
 * Returns if the container needs to be upgraded accoring to a CATIA Level.
 * @param  iRelease Last Release for upgrade.
 * @param  iServicePack Last Service Pack for upgrade.
 * @return  Status of upgrade need.
 * <br><b>Legal values</b>:
 * <ul><li><font color="red">TRUE</font color="red"> Instance needs to be upgraded. </li>
 *     <li><font color="red">FALSE</font color="red"> No need to upgrade. </li> 
 * </ul>
 */
	  virtual CATBoolean NeedToUpgraded(int iRelease, int iServicePack);


/**
 * Upgrades an instance if needed.
 * @param ipiInstance Instance to process.
 */

	  virtual HRESULT UpgradeObject (const CATISpecObject* ipiInstance);

  protected:

/**
 * Changes the startup associated to an instance.
 * @param ipiInstance Instance to process.
 * @param iname       New Startup Name.
 * @return  CATBaseUnknown#Release
 */
     CATISpecObject* RerouteInstance (const CATISpecObject* ipiInstance,const CATUnicodeString&  iname);


  private:
  // The copy constructor and the equal operator must not be implemented
  // -------------------------------------------------------------------
  CATEAnalysisUpgradeContainer (CATEAnalysisUpgradeContainer &);
  CATEAnalysisUpgradeContainer& operator=(CATEAnalysisUpgradeContainer&);

};

//-----------------------------------------------------------------------

#endif
