#ifndef  CATMSHStudioServices_h
#define  CATMSHStudioServices_h
/**
 * @CAA2Level L0 
 * @CAA2Usage U1 
 */
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 1998
//=============================================================================
//
// CATMSHStudioServices:
// Global functions for CATMSHStudio environment client use
//
//=============================================================================
// Mars 2003  Création                          Gerard Soubeyre
//=============================================================================
#include "MSHStudio.h"
#include "IUnknown.h"

class CATIMSHStPartition;
class CATMSHStListOfPartitions;
class CATIMSHMeshPart;
class CATIMSHStudio;

class ExportedByMSHStudio CATMSHStudioServices
{

  public:

/**
 * Copy Sources partitions to Targets
 */
  static HRESULT CopyPartitions( CATMSHStListOfPartitions &Sources, CATMSHStListOfPartitions &Targets );
/**
 * Compute the length of the geometric support of a 1D partition
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Length is computed is OK.
 *   <dt>E_FAIL</dt><dd>Lenght compute failed...
 *   </dl>
 * @param Partition1D
 *   The concerning.partition 
 * @param Length
 *   Lenght of partition.
 */
  static HRESULT ComputeLength( const CATIMSHStPartition * Partition1D, double &Length );
/**
 * Mesh a 0D partition 
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Mesh is OK.
 *   <dt>S_FALSE</dt><dd>Already meshed.
 *   <dt>E_FAIL</dt><dd>Mesh has failed.
 *   </dl>
 * @param Partition0D
 *   The partition to mesh.
 */
  static HRESULT Mesh0D( CATIMSHStPartition * Partition0D );
/**
 * Mesh a 1D partition in a specify number of edge
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Mesh is OK.
 *   <dt>E_FAIL</dt><dd>Mesh has failed.
 *   </dl>
 * @param Partition1D
 *   The partition to mesh.
 * @param Nbedges
 *   Number of edges asked.
 */
  static HRESULT Mesh1D(CATIMSHStPartition * Partition1D, int NbEdges );

};

#endif
