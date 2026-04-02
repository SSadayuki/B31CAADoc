#ifndef CATIMSHOperatorManager_h
#define CATIMSHOperatorManager_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"

class CATISpecObject;

extern ExportedByMSHModel IID IID_CATIMSHOperatorManager;

/**
 * Interface used to manage <b>Mesh Operators</b> within a <b>Mesh Part</b>.
 * <b>Role</b>: A <b>Mesh Operator</b> is an associative specification which is used
 * to modify the mesh generated within a <b>Mesh Part</b> @href CATIMSHMeshPart.
 * <p>At the end of mesh generation within a <b>Mesh Part</b>, the different <b>Mesh Operators</b>
 * are called to in order to modify the mesh, see @href CATIMSHOperator.
 */

class ExportedByMSHModel CATIMSHOperatorManager: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Add a new operator.
   * <br><b>Role</b>: This method is called to create a new <b>Mesh Operator</b> within
   * the <b>Mesh Part</b>. This operator is inserted as the last operator.
   * @param iType
   *   The type of the <b>Mesh Operator</b> to create.
   * @param iName
   *   The name of the <b>Mesh Operator</b> to create.
   * @param oOperator [out, CATBaseUnknown#Release]
   *   The created operator.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The operator has been successfully created.
	 *   <dt>E_FAIL</dt><dd>The operator could not be created.
	 *   </dl>
   */
  virtual HRESULT CreateOperator ( const CATUnicodeString &iType , const CATUnicodeString &iName , CATISpecObject *& oOperator ) = 0;

  /**
   * Get the list of created operators.
   * @param oOperatorsList
   *   The list of created <b>Mesh Operators</b>.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The list of operator has been successfully returned.
	 *   <dt>E_FAIL</dt><dd>Unable to access the list of operators.
	 *   </dl>
   */
  virtual HRESULT GetAllOperators ( CATLISTV(CATISpecObject_var)& oOperatorsList ) = 0;
};

CATDeclareHandler ( CATIMSHOperatorManager , CATBaseUnknown );

#endif
