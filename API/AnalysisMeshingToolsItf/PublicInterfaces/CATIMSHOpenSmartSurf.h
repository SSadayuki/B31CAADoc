#ifndef CATIMSHOpenSmartSurf_h
#define CATIMSHOpenSmartSurf_h

// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U4 CATMSHExtIOpenSmartSurf
 */

#include "MSHGeomTools.h"
#include "CATBaseUnknown.h"

class CATIMSHMeshPart;

extern ExportedByMSHGeomTools IID IID_CATIMSHOpenSmartSurf;

/**
 * Interface used in order to give the <b>possibility for users
 * to apply its own specifications and modifications</b> about:
 * <ul><li>The topological simplification,
 * <li>The mesh ((own) meshers methods and how apply them).</ul>
 * @see CATMSHExtIOpenSmartSurf, CATIMSHMeshPart
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByMSHGeomTools CATIMSHOpenSmartSurf: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
  /**
   * This method is used to apply specifications in order
   * to prepare the topological simplification.
   * <br><b>Role</b>: Before the topological simplification, some 
   * specifications can be applied  ( for example, constrain an 
   * edge or a vertex ) automatically. This method is called 
   * just before the time the simplification was running.
   * @param MeshPart
   *	the input parameter: @href CATIMSHMeshPart. 
   * @return 
   *	return an <tt>HRESULT</tt> which specify if actions made
   *    in the body of the method are valid.
   */
  virtual HRESULT SpecifyTopology ( CATIMSHMeshPart * MeshPart ) = 0;
  /**
   * This method is used to modify the topology after topological
   * simplification.
   * <br><b>Role</b>: This method enables to modify simplified topology
   * by creating, modifying or deleting topological entities.
   * @param MeshPart
   *	the input parameter: @href CATIMSHMeshPart. 
   * @return 
   *	return an <tt>HRESULT</tt> which specify if actions made
   *    in the body of the method are valid.
   */
  virtual HRESULT ModifyTopology ( CATIMSHMeshPart * MeshPart ) = 0;
  /**
   * This method is used to apply user meshing specifications.
   * <br><b>Role</b>: This method enables to apply mesh specifications
   * by:
   * <ul><li> Creating distributions.
   * <li> Setting meshing methods in a mesh area.
   * </ul>
   * @param MeshPart
   *	the input parameter: @href CATIMSHMeshPart. 
   * @return 
   *	return an <tt>HRESULT</tt> which specify if actions made
   *    in the body of the method are valid.
   */
  virtual HRESULT SpecifyMesh ( CATIMSHMeshPart * MeshPart ) = 0;
  
};
#endif
