#ifndef CATMSHOpenSmartSurfServices_h
#define CATMSHOpenSmartSurfServices_h

// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1 
 */

#include "MSHGeomTools.h"
#include "IUnknown.h"

class CATIMSHMeshPart;
class CATIMSHTopology;
class CATIMSHStudio;

/**
 * Class to access the <b>Studio</b> and the <b>Topology</b>.
 * <b>Role</b>: This class is used to return the <b>Studio</b> and the <b>Topology</b>.
 * @see CATIMSHTopology, CATIMSHStudio
 */
class ExportedByMSHGeomTools CATMSHOpenSmartSurfServices
{

  public:

/**
 * Get the interface representing the <b>Topology</b> from a <b>MeshPart</b>
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>GetTopology is successful.
 *   <dt>E_FAIL</dt><dd>GetTopology has failed.
 *   </dl>
 * @param iMeshPart
 *   The interface representing the <b>Mesh Part</b>.
 * @param oTopology [out, CATBaseUnknown#Release]
 *   The interface representing the <b>Topology</b>.
 */
  static HRESULT GetTopology( CATIMSHMeshPart * iMeshPart, CATIMSHTopology *& oTopology );

/**
 * Get the interface representing the <b>Studio</b> from a <b>MeshPart</b>
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>GetStudio is successful.
 *   <dt>E_FAIL</dt><dd>GetStudio has failed.
 *   </dl>
 * @param iMeshPart
 *   The interface representing the <b>Mesh Part</b>.
 * @param oStudio [out, CATBaseUnknown#Release]
 *   The interface representing the <b>Studio</b>.
 */
  static HRESULT GetStudio( CATIMSHMeshPart * iMeshPart, CATIMSHStudio *& oStudio );

  
};
#endif
