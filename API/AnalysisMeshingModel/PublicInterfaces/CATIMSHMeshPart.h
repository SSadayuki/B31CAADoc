#ifndef CATIMSHMeshPart_h 
#define CATIMSHMeshPart_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

class CATIMSHMeshManager;
class CATILinkableObject;
class CATIMSHMeshPartContainer;
class CATUnicodeString;
class CATISpecObject;
class CATMSHElement;
class CATIProduct;
class CATMathTransformation;
class CATMSHMeshDomain;
class CATMSHMeshPart;
class CATISamAnalysisConnector;
class CATIMSHMesher;
class CATIMSHLocalSpecification;
class CATMSHListOfMeshPart;

extern ExportedByMSHModel IID IID_CATIMSHMeshPart;

/**
 * Describe the status of an external reference, such as geometry for support of the <b>Mesh Part</b>. 
 * @param CATMSHRefNotDefined
 *   External reference is not defined.
 * @param CATMSHRefDeleted
 *   External reference has been defined but has been deleted since then.
 * @param CATMSHRefNotLoaded
 *   External reference can not be solved as corresponding document is not loaded in session.
 * @param CATMSHRefLoaded
 *   <External reference has been solved.
 */
enum CATMSHExternalReferenceStatus
{
   CATMSHRefNotDefined      =0,
   CATMSHRefDeleted         =1,
   CATMSHRefNotLoaded       =2,
   CATMSHRefLoaded          =3
};

/**
 * Interface representing a <b>Mesh Part</b>.
 * <b>Role</b>: This interface should be used to access all data associated to a <b>Mesh Part</b>, 
 * such as global and local mesh specifications or geometry to be meshed (supports).
 * <p>A Mesh Part is an <b>Analysis Set</b> which has some specific attributes (global specifications
 * and supports) and can contain <b>Analysis Entities</b> which represent local mesh specifications.
 * <p>Associated to each <b>Mesh Part</b>, there is a <b>Mesher</b> which is called to check the supports and
 * to build the mesh, see @href CATIMSHMesher.
 */

class ExportedByMSHModel CATIMSHMeshPart : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns the number of supports defined.
   */
  virtual int GetNumberOfSupports () = 0;
  /**
   * Retreives a support from it's number.
   * <br><b>Role</b>: A support is defined by a product instance which is use for positionning the mesh and
   * a geometric support which is handled by its CATILinkableObject interface.
   * @param oProduct [out, CATBaseUnknown#Release]
   *   The product instance which contains the support.
   * @param oSupport [out, CATBaseUnknown#Release]
   *   CATILinkableObject interface of the geometric support.
   * @param iNumber
   *   Number of the requested support 
   *   <br><b>Legal values</b> between 1 and the number of supports.
   * @param oStatus
   *   The status explaining failure causes:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>CATMSHRefNotDefined</dt><dd>The support has not been defined.
   *   <dt>CATMSHRefDeleted</dt><dd>The support has been deleted.
   *   <dt>CATMSHRefNotLoaded</dt><dd>The support is not loaded.
   *   <dt>CATMSHRefLoaded</dt><dd>The support has been retreived, execution successful.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The support has been successfully retreived.
	 *   <dt>E_FAIL</dt><dd>The support can not be retreived for this <b>Mesh Part</b>. See Status output argument for a more detailed explanation.
	 *   </dl>
   */
  virtual HRESULT GetSupport ( CATIProduct *& oProduct , CATILinkableObject *& oSupport , int iNumber = 1 , CATMSHExternalReferenceStatus * oStatus = NULL ) = 0;
  /**
   * Defines a support.
   * <br><b>Role</b>: A support is defined by a product instance which is use for positionning the mesh and
   * a geometric support which is handled by its CATILinkableObject interface.
   * @param iProduct
   *   The product instance which contains the support.
   * @param iSupport
   *   CATILinkableObject interface of the geometric support.
   * @param iMode
   *   The mode used to define support.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the support is defined as a single support.
   *   <dt>1</dt><dd>the support is added to exising supports.
   *   <dt>2</dt><dd>switch, ie. added if new, suppressed if already existing.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The support has been successfully created.
	 *   <dt>E_FAIL</dt><dd>The support is not allowed for this <b>Mesh Part</b>.
	 *   </dl>
   */
  virtual HRESULT SetSupport ( CATIProduct * iProduct , CATILinkableObject * iSupport , int iMode = 0 ) = 0;
  /**
   * Check the <b>Mesh Part</b>.
   * <br><b>Role</b>: The <b>Mesh Part</b> is analysed to see if the supports are still valid.
   * <br>The Check method is also called at the end of the SetSupport method.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The supports are still valid
	 *   <dt>E_FAIL</dt><dd>The supports are no longer valid, the <b>Mesh Part</b> can no longer be updated.
	 *   </dl>
   */
  virtual HRESULT Check () = 0;
  /**
   * Remove the mesh corresponding to the <b>Mesh Part</b>.
   * <br><b>Role</b>: Deletes all the nodes and elements that have been generated by the <b>Mesher</b> corresponding to the 
   * <b>Mesh Part</b>. 
   */
  virtual void RemoveMesh () = 0;
  /**
   * Returns the <b>Mesh Manager</b> corresponding to the <b>Mesh Part</b>.
   * @return CATBaseUnknown#Release
   */
  virtual CATIMSHMeshManager * GetMeshManager () = 0;
  /**
   * Returns the number of finite elements belonging to the <b>Mesh Part</b>.
   */
  virtual int GetNumberOfElements () = 0;
  /**
   * Valuates a global mesh specification to a real double value.
   * @param iName
   *   Name of the global specification. 
   * @param iValue
   *   Real double value to be used for the specification. 
   *   ( In case of Length, iValue is evaluated in millimeters ).
   */
  virtual void SetGlobalSpecification ( const CATUnicodeString &iName , double iValue ) = 0;
  /**
   * Retreives the real double value of a global mesh specification.
   * @param iName
   *   Name of the global specification. 
   * @param oValue
   *   Real double value of the specification.
   *   ( In case of Length, oValue is evaluated in millimeters ).
   */
  virtual void GetGlobalSpecification ( const CATUnicodeString &iName , double &oValue ) = 0;
  /**
   * Valuates a global mesh specification to a integer value.
   * @param iName
   *   Name of the global specification. 
   * @param iValue
   *   Integer value to be used for the specification. 
   */
  virtual void SetGlobalSpecification ( const CATUnicodeString &iName , int iValue ) = 0;
  /**
   * Retreives the integer value of a global mesh specification.
   * @param iName
   *   Name of the global specification. 
   * @param oValue
   *   Integer value of the specification. 
   */
  virtual void GetGlobalSpecification ( const CATUnicodeString &iName, int &oValue ) = 0;
  /**
   * Valuates a global mesh specification to a character value.
   * @param iName
   *   Name of the global specification. 
   * @param iValue
   *   Character value to be used for the specification. 
   */
  virtual void SetGlobalSpecification ( const CATUnicodeString &iName, const CATUnicodeString &iValue ) = 0;
  /**
   * Retreives the character value of a global mesh specification.
   * @param iName
   *   Name of the global specification. 
   * @param oValue
   *   Character value of the specification. 
   */
  virtual void GetGlobalSpecification ( const CATUnicodeString &iName, CATUnicodeString &oValue ) = 0;
  /**
   * Retreives the CATISpecObject value of a global mesh specification.
   * @param iName
   *   Name of the global specification. 
   * @param oValue [out, CATBaseUnknown#Release]
   *   CATISpecObject value of the specification. 
   */
  virtual void GetGlobalSpecification ( const CATUnicodeString &iName, CATISpecObject * &oValue ) = 0;
  /**
   * Creates a new local specification within the <b>Mesh Part</b>.
   * <br><b>Role</b>: This methods creates local specification within the <b>Mesh Part</b>.
   * @param iType
   *   Type of the local specification (Late type of the local specification). 
   * @param iName
   *   Name of the local specification. 
   * @param LocalSpec [out, CATBaseUnknown#Release]
   *   Pointer on the created local specification. 
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The local specification has been successfully set.
	 *   <dt>E_FAIL</dt><dd>The local specification was not created.
	 *   </dl>
   */
  virtual HRESULT CreateLocalSpecification ( const CATUnicodeString &iType , const CATUnicodeString &iName, CATIMSHLocalSpecification * & LocalSpec ) = 0;
  /**
   * Query the <b>Mesh Part</b> about the type of mesh generated.
   * @param iType
   *   String representing the query made to the <b>Mesh Part</b>.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>"1D"</dt><dd>Is the <b>Mesh Part</b> generating 1D finite elements?
   *   <dt>"2D"</dt><dd>Is the <b>Mesh Part</b> generating 2D finite elements?
   *   <dt>"3D"</dt><dd>Is the <b>Mesh Part</b> generating 3D finite elements?
   *   <dt>"Connection"</dt><dd>Is the <b>Mesh Part</b> generating connecting elements between meshes?</dl>
	 * @return
	 *   The result of the query.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>1</dt><dd>The answer is yes.
	 *   <dt>0</dt><dd>The answer is no.
	 *   </dl>
   */
  virtual int IsOfType ( const CATUnicodeString &iType ) = 0;
  /**
   * Retreives the parent <b>Mesh Parts</b> of the part.
   * <br><b>Role</b>: A parent <b>Mesh Part</b>
   * is a <b>Mesh Part</b> that should updated before the actual mesh. For example, in
   * the case of a mesher connecting to geometric parts, the parents <b>Mesh Parts</b> are the one corresponding
   * to these two parts (see @href CATIMSHMesher ).
   * @param  oParents
   *   The list of parent <b>Mesh Parts</b>. 
   * @param oStatus
   *   The status explaining failure causes:
   *   <br><b>Legal values</b>: 
   *   <dt>CATMSHRefNotLoaded</dt><dd>At leat one parent <b>Mesh Parts</b> is not loaded.
   *   <dt>CATMSHRefLoaded</dt><dd>Parent <b>Mesh Parts</b> have been retreived, execution successful.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The list has been successfully retreived.
	 *   <dt>E_FAIL</dt><dd>The operation failed.
	 *   </dl>
   */
  virtual HRESULT GetParentMeshParts ( CATMSHListOfMeshPart * &oParents , CATMSHExternalReferenceStatus * oStatus = NULL) = 0;
  /**
   * Retreives the list of finite elements belonging to the <b>Mesh Parts</b>.
   * @param oElements
   *   Array containing pointers on all elements belonging to the <b>Mesh Parts</b>.
	 * @return
   *   The number of finite elements belonging to the <b>Mesh Parts</b>.
   */
  virtual int GetElements ( CATMSHElement ** &oElements ) = 0;
  /**
   * Copy the content (nodes & elements) of a <b>Mesh Part</b> into the current one.
   * <br><b>Role</b>: This method should be used only to copy nodes and elements of a <b>Mesh Part</b>
   * while implementing a <b>Mesher</b>. See @href CATIMSHMesher#Mesh method.
   * @param iMeshPart
   *   <b>Mesh Parts</b> containing nodes and elements to copy.
   * @param iTransfo
   *   Transformation to be applied during copy.
   * @param iDoNotCopyAssociativity
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>0</dt><dd>Nodes and elements associativity is copied.
	 *   <dt>1</dt><dd>Nodes and elements associativity is not copied.
	 *   </dl>
   */
  virtual void Copy ( CATIMSHMeshPart * iMeshPart , CATMathTransformation * iTransfo = NULL , int iDoNotCopyAssociativity = 0 ) = 0;
  /**
   * Returns the first <b>Mesh Domain</b> of the <b>Mesh Part</b>.
   * <br>See @href CATMSHMeshDomain#Next method to scan the other <b>Mesh Domains</b>.
   */
  virtual CATMSHMeshDomain * GetFirstMeshDomain () =0;
  /**
   * Returns the last <b>Mesh Domain</b> of the <b>Mesh Part</b>.
   * <br>See @href CATMSHMeshDomain#Previous method to scan the other <b>Mesh Domains</b>.
   */
  virtual CATMSHMeshDomain * GetLastMeshDomain () =0;
  /**
   * @nodoc 
   */
  virtual CATMSHMeshPart * GetImplementation () =0;
  /**
   * Returns a CATISamAnalysisConnector interface on a <b>Mesh Part</b> geometric support.
   * @return CATBaseUnknown#Release
   * @param iNumber 
   *   Number of the requested support 
   *   <br><b>Legal values</b> between 1 and the number of supports.
   */
  virtual CATISamAnalysisConnector * GetSupportConnector ( int Number = 1 ) =0;
  /**
   * Returns the current state of the <b>Mesh Part</b>.
	 * <br><b>Possible values</b>:
	 * <dl><dt>0</dt><dd><b>Mesh Part</b> is not active.
	 * <dt>1</dt><dd><b>Mesh Part</b> is active.
	 * </dl>
	 * <br>When a <b>Mesh Part</b> is active, all its elements are visible and will be taken into account for computation.
	 * <br>When a <b>Mesh Part</b> is not active, all its elements are not visible and will be ignored in any computation.
   */
  virtual int GetActivity () =0;
  /**
   * Set the current state of the <b>Mesh Part</b>.
   * @param iActivity
	 * <br><b>Legal values</b>:
	 * <dl><dt>0</dt><dd>to set the <b>Mesh Part</b> unactive.
	 * <dt>1</dt><dd>to set the <b>Mesh Part</b> active.
	 * </dl>
   */
  virtual void SetActivity ( int iActivity ) =0;
  /**
   * Returns the next <b>Mesh Part</b> of the <b>Mesh</b>.
   * This method should be used with the @href CATIMSHMesh#GetFirstMeshPart method to scan all <b>Mesh Parts</b>.
   * Take care of the fact that the order in which <b>Mesh Parts</b> are returned is arbitrary qnd
   * that only <b>Mesh Parts</b> containing elements are returned.
   * @return CATBaseUnknown#Release
   */
  virtual CATIMSHMeshPart * Next () =0;
  /**
   * Check if the <b>Mesh Part</b> contains a given finite element.
   * @param iElement
   *   The finite element to be checked.
	 * @return
	 *   An integer value:.
	 * <dl><dt>0</dt><dd>if the <b>Mesh Part</b> contains the finite element.
	 * <dt>1</dt><dd>otherwise.
	 * </dl>
   */
  virtual int Contains ( CATMSHElement * iElement ) =0;
  /**
   * Set the list of candidate <b>Mesh Parts</b> for capture. 
   * @param iParents
	 *   List of candidate <b>Mesh Parts</b> for capture.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Operation successfull.
	 *   <dt>E_FAIL</dt><dd>Operation failed.
	 *   </dl>
   */
  virtual HRESULT SetMeshPartsToCapture ( CATMSHListOfMeshPart * iParents ) =0;
  /**
   * Enter the <b>Mesh Part</b> into edition mode.
   * <br><b>Role</b>: This method should be called before editing the content of the <b>Mesh Part</b>,
   * i.e. before modifying nodes and elements independently from the mesher of the <b>Mesh Part</b>.
   * @param iInvalidateOperators
   *   <br><b>Legal values</b>: 
   *   <dl><dt>"TRUE"</dt><dd>The <b>Mesh Operators</b> are invalidated and will be re-updated when existing from the edition modeas up to date at the end of edition.
   *   <dt>"FALSE"</dt><dd>The <b>Mesh Operators</b> are not invalidated.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The edition mode have been successfully activated.
	 *   <dt>E_FAIL</dt><dd>Unable to enter in edition mode.
	 *   </dl>
   */
  virtual HRESULT OpenEdition ( CATBoolean iInvalidateOperators = TRUE ) =0;
  /**
   * Exit the <b>Mesh Part</b> from the edition mode.
   * <br><b>Role</b>: This method should be called after editing the content of the <b>Mesh Part</b>,
   * i.e. after modifying nodes and elements independently from the meshser of the <b>Mesh Part</b>.
   * @param iUpTodate
   *   <br><b>Legal values</b>: 
   *   <dl><dt>"TRUE"</dt><dd>The <b>Mesh Part</b> should be considered as up to date at the end of edition.
   *   <dt>"FALSE"</dt><dd>The <b>Mesh Part</b> is not up to date at the end of edition.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The edition mode have been successfully exited.
	 *   <dt>E_FAIL</dt><dd>Some problems encountered while exiting the edition mode.
	 *   </dl>
   */
  virtual HRESULT CloseEdition ( CATBoolean iUpTodate = TRUE ) =0;
  /**
   * Check if the <b>Mesh Part</b> is in edition mode.
   * Returns:
	 * <dl><dt>0</dt><dd>if the <b>Mesh Part</b> is in edition.
	 * <dt>1</dt><dd>if the <b>Mesh Part</b> is not in edition.
	 * </dl>
	 * <br>When a <b>Mesh Part</b> is active, all its elements are visible and will be taken into account for computation.
	 * <br>When a <b>Mesh Part</b> is not active, all its elements are not visible and will be ignored in any computation.
	 *   </dl>
   */
  virtual int IsInEdition () =0;
  /**
   * Creates a new local specification within the <b>Mesh Part</b>.
   * <br><b>Role</b>: A local mesh specification is an <b>Analysis Entity</b> which is 
   * created in the <b>Analysis Set</b> corresponding to the <b>Mesh Part</b>.
   * @param iType
   *   Type of the local specification (Late type of the <b>Analysis Entity</b>). 
   * @param iName
   *   Name of the local specification. 
   * @param iNumber
   *   Number of the requested reference 
   *   <br><b>Legal values</b> between 1 and the number of references.
	 * @return
   *   The created local specification. 
   */
  virtual CATISpecObject * CreateLocalSpecification ( const CATUnicodeString &iType , const CATUnicodeString &iName ) = 0;
  /**
   * Retreive an external reference in a global mesh specification.
   * <br><b>Role</b>: An external reference is defined by a product instance which is use for positionning the mesh and
   * an external object which is handled by its CATILinkableObject interface.
   * @param iName
   *   Name of the global mesh specification. 
   * @param oProduct [out, CATBaseUnknown#Release]
   *   The product instance which contains the reference.
   * @param oReference [out, CATBaseUnknown#Release]
   *   CATILinkableObject interface of the reference.
   * @param oStatus
   *   The status explaining failure causes:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>CATMSHRefNotDefined</dt><dd>The external reference has not been defined.
   *   <dt>CATMSHRefDeleted</dt><dd>The external reference has been deleted.
   *   <dt>CATMSHRefNotLoaded</dt><dd>The external reference is not loaded.
   *   <dt>CATMSHRefLoaded</dt><dd>The external reference has been retreived, execution successful.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The external reference has been successfully retreived.
	 *   <dt>E_FAIL</dt><dd> The external reference has not been retreived.
	 *   </dl>
   */
  virtual HRESULT GetExternalReference ( const CATUnicodeString &iName, CATIProduct *& oProduct, CATILinkableObject *& oReference , int iNumber = 1 , CATMSHExternalReferenceStatus * oStatus = NULL ) = 0;
  /**
   * Valuates a global mesh specification with external reference.
   * <br><b>Role</b>: An object is defined by a product instance which is use for positionning the mesh and
   * a geometric support which is handled by its CATILinkableObject interface.
   * @param iName
   *   Name of the global mesh specification. 
   * @param iProduct
   *   The product instance of the external reference.
   * @param iReference
   *   CATILinkableObject interface of the external reference.
   * @param iMode
   *   The mode used to valuate the reference global specification.
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the global specification is defined as a single reference.
   *   <dt>1</dt><dd>the global specification is added to exising references.</dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The external reference has been successfully created.
	 *   <dt>E_FAIL</dt><dd>The external reference is not allowed for this local specification.
	 *   </dl>
   */
  virtual HRESULT SetExternalReference ( const CATUnicodeString &iName, CATIProduct * iProduct, CATILinkableObject * iSupport , int iMode = 0 ) = 0;
  /**
   * Returns the number of references defined in a global mesh specification.
   * @param iName
   *   Name of the global mesh specification. 
	 * @return
	 *   the number of references defined.
   */
  virtual int GetNumberOfExternalReferences ( const CATUnicodeString &iName ) = 0;
  /**
   * Sets the <b>Mesh Part</b> visualization status.
   * <br><b>Role</b>: Hide / Show the mesh part.
   * @param iVisibility
   *   <br><b>Legal values</b>: 
   *   <dl><dt>FALSE</dt><dd>The <b>Mesh Part</b> is not visible
   *   <dt>TRUE</dt><dd>The <b>Mesh Part</b> is visible
   *   </dl>
	 * @return
   *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The mesh visibility status has been set.
	 *   <dt>E_FAIL</dt><dd>The mesh visibility status cannot be set.
	 *   </dl>
   */
  virtual HRESULT SetMeshVisibility(CATBoolean iVisibility) = 0;
  /**
   * Retrieves the visibility status of the <b>Mesh Part</b>.
   * @return 
	 *   A CATBoolean.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>FALSE</dt><dd>The <b>Mesh Part</b> is not visible.
	 *   <dt>TRUE</dt><dd>The <b>Mesh Part</b> is visible.
	 *   </dl>
   */
  virtual CATBoolean GetMeshVisibility () = 0;


};

CATDeclareHandler ( CATIMSHMeshPart, CATBaseUnknown );
#endif
