#ifndef CATIMSHMesh_h
#define CATIMSHMesh_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATDataType.h"

class  CATIMSHMeshManager;
class  CATIMSHConnectivity;
class  CATMSHNode;
class  CATMSHElement;
class  CATMSHElementVisuAttribute;
class  CATIMSHMeshListener;
class  CATMSHNodeVisuAttribute;
class  CATIMSHMeshDomain;
class  CATMSHMeshDomain;
class  CATIMSHMeshPart;
class  CATMathTransformation;
class  CATMSHMesh;
class  CATIMSHGroup;
class  CATMSHQualityInfos;

extern ExportedByMSHModel IID IID_CATIMSHMesh;

/**
 * Interface representing the <b>Mesh</b> (nodes and elements).
 * <b>Role</b>: The <b>Mesh</b> is the object which manage nodes and elements,
 * see @href CATMSHNode and @href CATMSHElement.
 */
class ExportedByMSHModel CATIMSHMesh: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Returns the <b>Mesh Manager</b> corresponding to the <b>Mesh</b>.
   * @return CATBaseUnknown#Release
   */
  virtual CATIMSHMeshManager * GetMeshManager () =0;
  /**
   * Returns the first <b>Mesh Part</b> of the <b>Mesh</b>.
   * <br>See @href CATIMSHMeshPart#Next method to scan the other <b>Mesh Parts</b>.
   * Take care of the fact that the order in which <b>Mesh Parts</b> are returned is arbitrary qnd
   * that only <b>Mesh Parts</b> containing elements are returned.
   * @return CATBaseUnknown#Release
   */
  virtual CATIMSHMeshPart * GetFirstMeshPart () =0;
  /**
   * Returns the number of finite element nodes contained in the <b>Mesh</b>.
   */
  virtual int GetNumberOfNodes () =0;
  /**
   * Returns the first finite element node of the <b>Mesh</b>.
   * <br>See @href CATMSHNode#Next method to scan the other nodes.
   */
  virtual CATMSHNode * GetFirstNode () =0;
  /**
   * Retreives a finite element node from its integer tag.
   * @param iTag
   *   Integer tag. 
	 * @return
   *   The pointer on the finite element node if any or NULL if no node correpond to this tag.
   */
  virtual CATMSHNode * GetNodeFromTag ( unsigned int iTag ) =0;
  /**
   * Check if a node is contained in the <b>Mesh</b>.
   * @param iNode
   *   Node to check.
	 * @return
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>1</dt><dd>The node is part of the <b>Mesh</b>.
	 *   <dt>0</dt><dd>The node is not part of the <b>Mesh</b>.
	 *   </dl>
   */
  virtual int IsContaining ( CATMSHNode * iNode ) =0;
  /**
   * Retreive all finite element nodes contained in the <b>Mesh</b>.
   * @param ioNodes
   *   Array containing pointers on all nodes of the <b>Mesh</b>.
	 * @return
   *   The number of finite element nodes contained in the <b>Mesh</b>.
   */
  virtual int GetAllNodes ( CATMSHNode ** ioNodes ) =0;
  /**
   * Retreive coordinates of all finite element nodes contained in the <b>Mesh</b>.
   * @param ioXYZ
   *   Array containing nodes coordinates in the following order: X1, Y1, Z1, X2, Y2, Z2, ...
	 * @return
   *   The number of finite element nodes contained in the <b>Mesh</b>.
   */
  virtual int GetAllCoordinates ( double * ioXYZ ) =0;
  /**
   * Creates nodes.
   * <br><b>Role</b>: This method creates a set of new finite elements nodes in the <b>Mesh</b>.
   * @param iCoordinates
   *   Array containing the XYZ coordinates of the nodes to create in the following order: X1, Y1, Z1, X2, Y2, Z2, ...
   * @param iNbOfNodes
   *   Number of finite elements nodes to create.
   * @param ioNodes
   *   Array containing pointers to the created nodes.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Nodes successfully created.
	 *   <dt>E_FAIL</dt><dd>The operation failed.
	 *   </dl>
   */
  virtual HRESULT CreateNodes ( const double * iCoordinates , int iNbOfNodes = 1 , CATMSHNode ** ioNodes = NULL ) =0; 
  /**
   * Delete nodes.
   * <br><b>Role</b>: This method deletes a set of finite elements nodes in the <b>Mesh</b>.
   * @param iNbOfNodes
   *   Number of finite elements nodes to delete.
   * @param iNodes
   *   Array containing pointers to the nodes to be deleted.
   */
  virtual void DeleteNodes ( int iNbOfNodes , CATMSHNode ** iNodes ) =0;
  /**
   * Modify a finite element node.
   * <br><b>Role</b>: This method is used to modify a finite element node (coordinates and/or graphic attributes).This
   * method should be called for each Node for any geometrical or graphical modifications. Note that a graphical modification of node is not persistent. The programmer needs to use the interface 
   * @href CATIVisProperties# to store the attributes into the graphic properties. 
   * @param iNode
   *   Finite element node to modify.
   * @param iNewCoordinates
   *   New coordinates for the finite element node. Should be initialized with the current ones if only graphic attributes are modified.
   * @param iNewAttribute
   *   New graphic attributes. Can be set to NULL if only coordinates are changed.
   */
  virtual void ModifyNode ( CATMSHNode * iNode , const double iNewCoordinates[3] ,
                            const CATMSHNodeVisuAttribute * iNewAttribute = NULL ) =0;
  /**
   * Returns the number of finite elements contained in the <b>Mesh</b>.
   */
  virtual int GetNumberOfElements () =0;
  /**
   * Returns the first finite element of the <b>Mesh</b>.
   * <br>See @href CATMSHElement#Next method to scan the other elements.
   */
  virtual CATMSHElement * GetFirstElement () =0;
  /**
   * Retreives a finite element from its integer tag.
   * @param iTag
   *   Integer tag. 
	 * @return
   *   The pointer on the finite element if any or NULL if no element correpond to this tag.
   */
  virtual CATMSHElement * GetElementFromTag ( unsigned int iTag ) =0;
  /**
   * Check if a finite element is contained in the <b>Mesh</b>.
   * @param iElement
   *   Finite element to check.
	 * @return
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>1</dt><dd>The finite element is part of the <b>Mesh</b>.
	 *   <dt>0</dt><dd>The finite element is not part of the <b>Mesh</b>.
	 *   </dl>
   */  
  virtual int IsContaining ( CATMSHElement * iElement ) =0;
  /**
   * Retreive all finite elements contained in the <b>Mesh</b>.
   * @param ioElements
   *   Array containing pointers on all elements of the <b>Mesh</b>.
	 * @return
   *   The number of finite elements contained in the <b>Mesh</b>.
   */
  virtual int GetAllElements ( CATMSHElement ** ioElements ) =0;
  /**
   * Retreives the connectivity of all finite elements contained in the <b>Mesh</b>. 
   * @param ioConnectivities
   *   Array containing for each finite element a pointer to its connectivity. 
   *   <br>The elements are listed in same order as in @href #GetAllElements method.
	 * @return
   *   The number of finite elements contained in the <b>Mesh</b>.
   */
  virtual int GetElementsConnectivities ( CATIMSHConnectivity ** ioConnectivities ) =0;
  /**
   * Computes the total number of linked nodes i.e. the sum
   * of all linked nodes for all finite elements.
   * <br>This size should be used to allocate <b>ioLinkedNodes</b> argument in @href #GetAllLinkedNodes method.
   */
  virtual int GetNumberOfLinkedNodes () =0;
  /**
   * Retreives the linked nodes of all finite elements contained in the <b>Mesh</b>. 
   * @param ioLastLinkedNodes
   *   Array containing for each finite element a backward position in <b>ioLinkedNodes</b> array 
   *   i.e. the position of the last linked node of each finite element in <b>ioLinkedNodes</b> array.
   *   <br>The elements are listed in same order as in @href #GetAllElements method.
   * @param ioLinkedNodes
   *   Array containing the linked nodes of each finite elements.
   *   <br>Nodes are identified by an integer representing their position in the <b>ioNodes</b> array of the @href #GetAllNodes method.
	 * @return
   *   The number of finite elements contained in the <b>Mesh</b>.
   */
  virtual int GetAllLinkedNodes ( int * ioLastLinkedNodes , CATINTPTR * ioLinkedNodes ) =0;
  /**
   * Creates finite elements.
   * <br><b>Role</b>: This method creates a set of new finite elements in the <b>Mesh</b>.
   * @param iConnectivity
   *   Connectivity of the finite elements to create.
   * @param iNbOfNodesPerElement
   *   Number of finite elements nodes per finite element to create. 
   * @param iNodes
   *   Array containing pointers to nodes of all finite elements to create.
   * @param iNbOfElements
   *   Number of finite elements to create.
   * @param ioElements
   *   Array containing pointers to the created elements.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Elements successfully created.
	 *   <dt>E_FAIL</dt><dd>The operation failed.
	 *   </dl>
   */
  virtual HRESULT CreateElements ( CATIMSHConnectivity * iConnectivity , int iNbOfNodesPerElement , CATMSHNode * const * iNodes ,
                        int iNbOfElements = 1 , CATMSHElement ** ioElements = NULL ) =0; 
  /**
   * Delete elements.
   * <br><b>Role</b>: This method deletes a set of finite elements in the <b>Mesh</b>.
   * @param iNbOfElements
   *   Number of finite elements to delete.
   * @param iNodes
   *   Array containing pointers to the elements to be deleted.
   * @param iDeleteFreedNodes
	 *   <br><b>Legal values</b>:
	 *   <dt>1</dt><dd>After elements deletion, if a node becomes free (i.e. without any linked element), it will be deleted also.
	 *   <dl><dt>0</dt><dd>No impact on finite elements nodes.
	 *   </dl>
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Elements successfully deleted.
	 *   <dt>E_FAIL</dt><dd>The operation failed.
	 *   </dl>
   */
  virtual HRESULT DeleteElements ( int iNbOfElements , CATMSHElement ** iElements , int iDeleteFreedNodes = 1 ) =0;
  
  /**
   * Modify a finite element.
   * <br><b>Role</b>: This method is used to modify a finite element (geometry and/or graphic attributes). This
   * method should be called for each element for any geometrical or graphical modifications. A geometrical modification is a coordinates modification
   * of its linked nodes. Note that a graphical modification of finite element is not persistent. The programmer needs to use the interface 
   * @href CATIVisProperties# to store the attributes into the graphic properties.
   * @param iElement
   *   Finite element to modify.
   * @param iNewAttribute
   *   New graphic attributes. Can be set to NULL if only coordinates are changed.
   */
  virtual void ModifyElement ( CATMSHElement * iElement,
                               const CATMSHElementVisuAttribute * iNewAttribute = NULL ) =0;

  /**
   * Returns the total number of <b>Mesh Domain</b> of the <b>Mesh</b>.
   */
  virtual int GetNumberOfMeshDomains () =0;
  /**
   * Returns the first <b>Mesh Domain</b> of the <b>Mesh</b>.
   * <br>See @href CATMSHMeshDomain#Next method to scan the other <b>Mesh Domains</b>.
   * <br><b>Lifecycle rules deviation</b>: the method does not AddRef the returned value..
   */
  virtual CATMSHMeshDomain * GetFirstMeshDomain () =0;
  /**
   * Retreives a <b>Mesh Domain</b> from its integer tag.
   * @param iTag
   *   Integer tag. 
	 * @return
   *   The pointer on the <b>Mesh Domain</b> if any or NULL if no <b>Mesh Domain</b> correpond to this tag.
   */
  virtual CATMSHMeshDomain * GetMeshDomainFromTag ( unsigned int Tag ) =0;
  /**
   * Create a new <b>Mesh Domain</b>.
   * <br><b>Role</b>: The finite elements which are created (using @href #CreateElements method) are associated to the 
   * current <b>Mesh Domain</b>. This method close the previous <b>Mesh Domain</b> and creates a new one.
   * Further calls to @href #CreateElements method will create elements associated to this <b>Mesh Domain</b>.
   * @param MeshPart 
   *   <b>Mesh Part</b> to which this <b>Mesh Domain</b> will be associated (see @href CATIMSHMeshPart ).
   * @return
   *   A pointer on the created <b>Mesh Domain</b>.
   *   <br><b>Lifecycle rules deviation</b>: the method does not AddRef the returned value..
   */
  virtual CATMSHMeshDomain * CreateMeshDomain ( CATIMSHMeshPart * MeshPart = NULL ) =0;
  /**
   * Set a new current <b>Mesh Domain</b>.
   * Further calls to @href #CreateElements method will create elements associated to this <b>Mesh Domain</b>.
   * @param Domain
   *   New current <b>Mesh Domain</b>.
   */
  virtual void SetCurrentMeshDomain ( CATMSHMeshDomain * Domain ) =0;
  /**
   * Creates a group of finite elements. 
   * @param iNbElements
   *   Number of finite elements in group.
   * @param iElements
   *   Array containing the finite elements.
   *   <br><b>Lifecycle rules deviation</b>: iElements pointer is kept by the group and should not be desallocated by the callee.
	 * @return CATBaseUnknown#Release
   *   The created group of finite elements.
   */
  virtual CATIMSHGroup * CreateGroup ( int iNbElements , CATMSHElement ** iElements ) =0;
  /**
   * Creates a group of finite elements nodes. 
   * @param iNbNodes
   *   Number of finite elements nodes in group.
   * @param iNodes
   *   Array containing the finite elements nodes.
   *   <br><b>Lifecycle rules deviation</b>: iNodes pointer is kept by the group and should not be desallocated by the callee.
	 * @return CATBaseUnknown#Release
   *   The created group of finite elements nodes.
   */
  virtual CATIMSHGroup * CreateGroup ( int iNbNodes , CATMSHNode ** iNodes ) =0;
  /**
   * Update visualization after <b>Mesh</b> modifications ( nodes/elements creation, modification or deletion).
   * <br><b>Role</b>: This method has to be called to update visualisation if and only if the modifications
   * have occured outside from the standard Build/Update process, i.e. outside from the implementation of a mesher
   * (see @href CATIMSHMesher#Mesh method).
   * <br>This method should be called once at the end of a transaction, when all modifications have been performed.
   */
  virtual void UpdateVisualization () =0;
  /**
   * Create nodes condensed on nodes from another <b>Mesh</b>.
   * <br><b>Role</b>: This method createss a set of finite elements nodes (named condensed nodes) in the <b>Mesh</b> condensed
   * <on nodes (named image nodes) from another <b>Mesh</b>. This is the way to "connect" two different finite element models.
   * @param iNbNodes
   *   Number of finite elements nodes to create.
   * @param iImageNodes
   *   Array containing pointers to the image nodes on which the created nodes will be condensed.
   * @param ioCondensedNodes
   *   Array that will contain pointer to condensed nodes created by the method.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Nodes successfully created.
	 *   <dt>E_FAIL</dt><dd>The operation failed.
	 *   </dl>
   */
  virtual HRESULT CreateNodesCondensedOn ( int iNbNodes , CATMSHNode * iImageNodes [] , CATMSHNode * ioCondensedNodes [] ) =0;
  /**
   * @nodoc 
   */
  virtual CATMSHMesh * GetImplementation () =0;
  /**
   * Returns the last finite element node of the <b>Mesh</b>.
   * <br>See @href CATMSHNode#Previous method to scan the other nodes.
   */
  virtual CATMSHNode * GetLastNode () =0;
};

CATDeclareHandler ( CATIMSHMesh , CATBaseUnknown );
#endif
