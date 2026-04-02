#ifndef CATMSHTrapSettings_h
#define CATMSHTrapSettings_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */ 

#include "MSHModel.h"
#include <stddef.h>

class CATIMSHMeshDomain;
class CATIMSHMeshPart;

/**
 * Describe the type of mesh selection trap: 
 *   <dl><dt>CATMSHTrapNode</dt><dd>Node selection trap.
 *   <dt>CATMSHTrapElement</dt><dd>Element selection trap.
 *   <dt>CATMSHTrapDomain</dt><dd>Domain selection trap.
 *   </dl>
 */
enum CATMSHTrapMeshType 
{
  CATMSHTrapNode ,
  CATMSHTrapElement ,
  CATMSHTrapDomain
};

/**
 * Object to be used to customize selection trap on <b>Mesh</b> (nodes and elements).
 * This object should be used along with a dialog agent for selection trap on mesh 
 * ( see @href CATMSHSelectionTrapAgent and @href CATIMSHTrapSelector ).
 */
class ExportedByMSHModel CATMSHTrapSettings
{

public:

  /**
   * Customize <b>Mesh</b> selection by trap.
   * @param iType
   *   Type of <b>Mesh</b> selection (nodes, elements or domains).
   * @param iMeshPart
   *   Can be used to restrict the selection to a given <b>Mesh Part</b>.
   * @param iMeshDomain
   *   Can be used to restrict the selection to a given <b>Mesh Domain</b>.
   */
  CATMSHTrapSettings ( CATMSHTrapMeshType iType , CATIMSHMeshPart * iMeshPart = NULL , CATIMSHMeshDomain * iMeshDomain = NULL );
  /**
   * Destructor 
   */
  virtual ~CATMSHTrapSettings ();
  /** 
   * @nodoc 
   */
  CATMSHTrapMeshType   _Type;
  /**
   * @nodoc 
   */
  CATIMSHMeshPart *    _MeshPart;
  /**
   * @nodoc 
   */
  CATIMSHMeshDomain *  _MeshDomain;
};
#endif
