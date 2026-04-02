#ifndef CATIMSHMesher_h 
#define CATIMSHMesher_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U4 CATMSHExtIMesher 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"

class CATIMSHMeshPart;
class CATUnicodeString;
class CATIProduct;
class CATIGeometricalElement;
class CATMSHListOfMeshPart;
extern ExportedByMSHModel IID IID_CATIMSHMesher;

/**
 * Interface representing the <b>Mesher</b>.
 * <b>Role</b>: The <b>Mesher</b> is the object which generates the mesh
 * from all the mesh specifications stored within its associated <b>Mesh Part</b>,
 * see @href CATIMSHMeshPart.
 * <p>The object which implement CATIMSHMesher interface has the following late type: xxxxxx_mesher
 * where xxxxxx is the late type of the corresponding <b>Mesh Part</b>. 
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByMSHModel CATIMSHMesher : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Query the mesher about the type of the <b>Mesh Part</b>.
   * @param iMeshPart
   *   The <b>Mesh Part</b> to check.
   * @param iType
   *   String representing the query made to the mesher.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>"1D"</dt><dd>Is the mesher generating 1D finite elements?
   *   <dt>"2D"</dt><dd>Is the mesher generating 2D finite elements?
   *   <dt>"3D"</dt><dd>Is the mesher generating 3D finite elements?
   *   <dt>"Connection"</dt><dd>Is the mesher generating connecting elements between meshes?</dl>
	 * @return
	 *   The result of the query.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>1</dt><dd>The answer is yes.
	 *   <dt>0</dt><dd>The answer is no.
	 *   </dl>
   */
  virtual int IsATypeOf ( CATIMSHMeshPart * iMeshPart , const CATUnicodeString &iType ) = 0;
  /**
   * Check the supports of the <b>Mesh Part</b>.
   * <br><b>Role</b>: This method is called whenever a support is defined on its
   * <b>Mesh Part</b> to check if it can be meshed. 
   * <br>It also retreives the parents <b>Mesh Parts</b> if any. A parent <b>Mesh Parts</b>
   * is a <b>Mesh Parts</b> that should updated before the actual mesh. For example, in
   * the case of a mesher connecting to geometric parts, the parents <b>Mesh Parts</b> are the one corresponding
   * to these two parts.
   * @param iMeshPart
   *   The <b>Mesh Part</b> to check.
   * @param oParentMeshParts
   *   The list of parents <b>Mesh Parts</b>. 
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The support are valid and can be meshed.
	 *   <dt>E_FAIL</dt><dd>The support are not valid or the parent <b>Mesh Parts</b> can not be found.
	 *   </dl>
   */
  virtual HRESULT Check ( CATIMSHMeshPart * iMeshPart , CATMSHListOfMeshPart * &oParentMeshParts ) = 0;
  /**
   * Build the mesh corresponding to the <b>Mesh Part</b>.
   * <br><b>Role</b>: This method is called to build the mesh from a <b>Mesh Part</b> according all 
   * local and global specifications. 
   * <br>The generated nodes and finite elements are created using the
   * @href CATIMSHMesh interface and the corresponding links with geometry are created using the
   * @href CATIMSHAssociativity interface.
   * @param iMeshPart
   *   The <b>Mesh Part</b> to mesh.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The mesh have been succesfully generated.
	 *   <dt>E_FAIL</dt><dd>The mesh operation failed.
	 *   </dl>
   */
  virtual HRESULT Mesh ( CATIMSHMeshPart * iMeshPart ) = 0;
  /**
   * Perform mesher-specific operations before exiting edition mode for a <b>Mesh Part</b>.
   * <br><b>Role</b>: This method is called before exiting edition mode for a <b>Mesh Part</b> and 
   * can be used to perform mesher-specific operations ( see @href CATIMSHMeshPart#CloseEdition ).
   * @param iMeshPart
   *   The <b>Mesh Part</b>.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Operations succesfull.
	 *   <dt>E_FAIL</dt><dd>Operations failed.
	 *   </dl>
   */
   virtual HRESULT CloseEdition () = 0;
  /**
   * @nodoc 
   */
  virtual HRESULT SaveInEdition () = 0;
  /**
   * @nodoc 
   */
  virtual int IsConnecting ( CATIMSHMeshPart * iMeshPart , CATIProduct * iProduct , CATIGeometricalElement * iSupport ) = 0;
  /**
   * Perform cleaning operations before updating a <b>Mesh Part</b>.
   * <br><b>Role</b>: This method is called before updating a <b>Mesh Part</b> and 
   * performs necessary cleaning operations.
   * @param iMeshPart
   *   The <b>Mesh Part</b>.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Cleaning operations succesfull.
	 *   <dt>E_FAIL</dt><dd>Cleaning operations failed.
	 *   </dl>
   */
  virtual HRESULT BeforeUpdating ( CATIMSHMeshPart * iMeshPart ) = 0;
  /**
   * @nodoc
   */
  virtual CATBaseUnknown * GetImplementation () = 0;
};

CATDeclareHandler ( CATIMSHMesher, CATBaseUnknown );
#endif
