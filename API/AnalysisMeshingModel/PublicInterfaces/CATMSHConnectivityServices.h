#ifndef CATMSHConnectivityServices_h
#define CATMSHConnectivityServices_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"

class CATIMSHConnectivity;
/**
 * Class used to access to finite element connectivities.
 * @see CATIMSHConnectivity.
 */
class ExportedByMSHModel CATMSHConnectivityServices
{

public:
  /**
   * Retreives a finite element connectivity from its name.
   * @param iName
   *   The name of the connectivity.
	 * @return
	 *   The connectivity.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is done on returned value.
   */
  static CATIMSHConnectivity * GetConnectivity ( const char * iName );
  /**
   * Retreives the total number of defined finite element connectivities.
   */
  static int GetNumberOfConnectivities ();
  /**
   * Returns the first finite element connectivity.
   * <br>See @href CATIMSHConnectivity method to scan the other connectivities.
   */
  static const CATIMSHConnectivity * GetFirstConnectivity ();
};
#endif
