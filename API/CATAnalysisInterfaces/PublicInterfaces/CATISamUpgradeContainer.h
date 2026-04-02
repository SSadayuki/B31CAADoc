#ifndef CATISamUpgradeContainer_H
#define CATISamUpgradeContainer_H
//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U4 CATEAnalysisUpgradeContainer
 */

#include "CATAnalysisInterface.h"
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATISpecObject;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamUpgradeContainer ;
#else
extern "C" const IID IID_CATISamUpgradeContainer ;
#endif

/** 
 * Upgrade Container.
 * <b>Role:</b> This interface is implemented as an analysis provider to upgrade your instance of features.
 * In this case, a provider is a dummy late type that allows to build the object. 
 * Never implement this interface on a feature late type.<p>
 * 
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByCATAnalysisInterface CATISamUpgradeContainer: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

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
	  virtual CATBoolean NeedToUpgraded(int iRelease, int iServicePack) =0;

/**
 * Upgrades an instance if needed.
 * @param ipiInstance Instance to process.
 */

	  virtual HRESULT UpgradeObject (const CATISpecObject* ipiInstance) = 0;


};

CATDeclareHandler( CATISamUpgradeContainer, CATBaseUnknown );

#endif
