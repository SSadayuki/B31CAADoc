#ifndef CATIMSHOperator_h 
#define CATIMSHOperator_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0 
 * @CAA2Usage U4 CATMSHExtIOperator 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATIMSHMeshPart;

extern ExportedByMSHModel IID IID_CATIMSHOperator;

/**
 * Interface representing the <b>Operator</b>.
 * <b>Role</b>: The <b>Operator</b> is the object which modifies the mesh
 * of an existing <b>Mesh Part</b>,
 * see @href CATIMSHMeshPart.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByMSHModel CATIMSHOperator : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Operate an existing <b>Mesh Part</b>.
   * <br><b>Role</b>: This method is called to operate (modify) the mesh from an existing <b>Mesh Part</b>.
   * @param iMeshPart
   *   The <b>Mesh Part</b> to operate.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The operation have been succesful.
	 *   <dt>E_FAIL</dt><dd>The operation failed..
	 *   </dl>
   */
  virtual HRESULT Operate ( CATIMSHMeshPart * iMeshPart ) = 0;
};

CATDeclareHandler ( CATIMSHOperator, CATBaseUnknown );
#endif
