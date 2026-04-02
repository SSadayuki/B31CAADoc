#ifndef CATMSHExtIMesher_h
#define CATMSHExtIMesher_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATIMSHMesher.h"

/**
 * Adapter for CATIMSHMesher interface.
 *
 * <b>Role</b>: This class provides a default implementation for any extension of 
 * @href CATIMSHMesher.
 * That means one should derive from this class to implement the mesher algorithm
 * to build the finite element mesh of a <b>Mesh Part</b>.
 * @see CATIMSHMesher.
 */
class ExportedByMSHModel CATMSHExtIMesher : public CATBaseUnknown
{
  friend class CATMSHMesherPrivate;

public: 

/**
 * Constructor.
 */
  CATMSHExtIMesher ();
/**
 * Destructor.  CATExtIVisu
 */
  virtual ~CATMSHExtIMesher ();
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
  virtual int IsATypeOf ( CATIMSHMeshPart * iMeshPart , const CATUnicodeString &iType );
  /**
   * Perform mesher-specific operations before exiting edition mode for a <b>Mesh Part</b>.
   * <br><b>Role</b>: This method is called before exiting edition mode for a <b>Mesh Part</b> and 
   * can be used to perform mesher-specific operations ( see @href CATIMSHMeshPart#CloseEdition ).
   * <br>Default implementation does not execute any operations.
   * @param iMeshPart
   *   The <b>Mesh Part</b>.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Operations succesfull.
	 *   <dt>E_FAIL</dt><dd>Operations failed.
	 *   </dl>
   */
  virtual HRESULT CloseEdition ();
/** @nodoc */
  virtual HRESULT SaveInEdition ();
/** @nodoc */
  virtual int IsConnecting ( CATIMSHMeshPart * iMeshPart , CATIProduct * iProduct , CATIGeometricalElement * iSupport );
  /**
   * Perform cleaning operations before updating a <b>Mesh Part</b>.
   * <br><b>Role</b>: This method is called before updating a <b>Mesh Part</b> and 
   * should perform necessary cleaning operations.
   * <br>Default implementation deletes all finite elements belonging to the <b>Mesh Part</b> (if any) and also deletes the corresponding
   * nodes if they become free.
   * <br>Take care when overloading this method to the potential impacts.
   * @param iMeshPart
   *   The <b>Mesh Part</b>.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Cleaning operations succesfull.
	 *   <dt>E_FAIL</dt><dd>Cleaning operations failed.
	 *   </dl>
   */
  virtual HRESULT BeforeUpdating ( CATIMSHMeshPart * iMeshPart );
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
  virtual HRESULT Check ( CATIMSHMeshPart * iMeshPart , CATMSHListOfMeshPart * &oParentMeshParts );
  /**
   * @nodoc
   */
  virtual CATBaseUnknown * GetImplementation ();

protected:

/** @nodoc */
  CATMSHExtIMesher ( const CATMSHExtIMesher& From );
/** @nodoc */
  CATMSHExtIMesher& operator= ( const CATMSHExtIMesher& From );
}; 
#endif 
