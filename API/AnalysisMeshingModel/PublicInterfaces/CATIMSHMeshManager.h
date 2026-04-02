#ifndef  CATIMSHMeshManager_h 
#define  CATIMSHMeshManager_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATIMSHMeshPart;
class CATIMSHMesh;
class CATIMSHAssociativity;
class CATMSHMeshManager;

extern ExportedByMSHModel IID IID_CATIMSHMeshManager;

/**
 * Interface representing the <b>Mesh Manager</b>.
 * <b>Role</b>: The <b>Mesh Manager</b> is an <b>Analysis Set</b> which give access to the following:
 * <ul><li>Finite element mesh (nodes and elements) management, see @href CATIMSHMesh.
 * <li>Links between mesh and geometry management, see @href CATIMSHAssociativity.
 * <li>Mesh Part creation , see @href CATIMSHMeshPart.</ul>
 */
class ExportedByMSHModel CATIMSHMeshManager : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns an interface on the finite element mesh.
   * @return CATBaseUnknown#Release
   */
  virtual CATIMSHMesh * GetMesh () = 0;
  /**
   * Returns an interface on the associativity between mesh and geometry.
   * @return CATBaseUnknown#Release
   */
  virtual CATIMSHAssociativity * GetAssociativity () = 0;
  /**
   * Creates a <b>Mesh Part</b>.
   * <br><b>Role</b>: This method creates a new <b>Mesh Part</b> in the <b>Analysis Set</b> corresponding to the Mesh Manager.
   * @param iType
   *   Type of the <b>Mesh Part</b> to create.
   * @return CATBaseUnknown#Release
   *   A pointer on the CATIMSHMeshPart interface on the created <b>Mesh Part</b>.
   */
  virtual CATIMSHMeshPart * CreateMeshPart ( const CATUnicodeString& iType ) =0;
  /**
   * Remove a <b>Mesh Part</b>.
   * <br><b>Role</b>: This method remove an existing <b>Mesh Part</b> from the <b>Analysis Set</b> corresponding to the Mesh Manager.
   * @param iMeshPart
   *   <b>Mesh Part</b> to remove.
   */
  virtual void RemoveMeshPart ( CATIMSHMeshPart * iMeshPart ) =0;
  /**
   * @nodoc 
   */
  virtual CATMSHMeshManager * GetImplementation () =0;
};

CATDeclareHandler ( CATIMSHMeshManager, CATBaseUnknown );
#endif
