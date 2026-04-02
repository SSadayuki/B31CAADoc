#ifndef  CATMSHMeshManagerServices_h 
#define  CATMSHMeshManagerServices_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */
        
#include "MSHModel.h"
#include "CATIMSHMeshManager.h" 

class CATDocument; 

/**
 * Class to access the <b>Mesh Manager</b>.
 * <b>Role</b>: This class is used to return the <b>Mesh Manager</b>.
 * @see CATIMSHMeshManager
 */
class ExportedByMSHModel CATMSHMeshManagerServices
{

  public:
  /**
   * Returns the <b>Mesh Manager</b> of a given document.
   * @param iDocument
   *   The document.
   *   If omitted (ie. iDocument = NULL), the document containing the current
   *   UI-active object is used. See @href CATFrmEditor#GetUIActiveObject and @href CATIUIActivate.
   * @return CATBaseUnknown#Release
   */
  static CATIMSHMeshManager * GetManager ( CATDocument * iDocument = NULL );
};

#endif
