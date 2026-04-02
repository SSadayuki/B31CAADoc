#ifndef CATIMSHMeshDomain_h
#define CATIMSHMeshDomain_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

extern ExportedByMSHModel IID IID_CATIMSHMeshDomain ;

class CATMSHMeshDomain;


/**
 * Interface representing a <b>Mesh Domain</b>.
 * <b>Role</b>: This interface should be used to select a <b>Mesh Domain</b>. 
 * See @href CATIMSHMeshDomain to access all data concerning a <b>Mesh Domain</b>.
 */
class ExportedByMSHModel CATIMSHMeshDomain: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
  /**
   * Returns the corresponding <b>Mesh Domain</b>.
   */
  virtual CATMSHMeshDomain * GetMeshDomain () = 0;

};
CATDeclareHandler ( CATIMSHMeshDomain , CATBaseUnknown );

#endif
