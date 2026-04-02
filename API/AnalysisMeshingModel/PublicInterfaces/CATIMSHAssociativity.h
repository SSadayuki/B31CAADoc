#ifndef CATIMSHAssociativity_h
#define CATIMSHAssociativity_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATMSHAssociativityStruct.h"

extern ExportedByMSHModel IID IID_CATIMSHAssociativity;

class CATIProduct;
class CATGeometry;
class CATMSHNode;
class CATMSHElement;
class CATIMSHMeshPart;
class CATMSHSupportManager;
class CATMSHAssociativity;
class CATMSHListOfMeshPart;


/**
 * Interface representing the <b>Mesh Associativity</b>.
 * <b>Role</b>: The <b>Mesh Associativity</b> is the object which manage all links between
 * the <b>Mesh</b> (nodes and elements) and the geometry.
 * <br>In order to be consistent the following rules should be applied 
 * when creating links between nodes/elements and geometry:
 * <ul><li>Do not link finite element objects (nodes and elements) with more than one geometric object.
 * <li>Link finite element objects (nodes and elements) with geometric object of same dimension: node with vertex,
 * finite element's edge with geometric edge, finite element's face with geometric face.
 * <li>Create links with topological objects, rather than geometrical objects: vertex/point, edge/curve , face/surface.
 * <li>If a finite element has only one edge, associate the entire element to the geometry rather than the element's edge.
 * In the same manner, if a finite element has only one face, associate the entire element to the geometry rather than the element's face.</ul>
 */
class ExportedByMSHModel CATIMSHAssociativity: public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Creates or retreives a link between the <b>Mesh</b> and the geometry.
   * <br><b>Role</b>: This method creates or retreives a link to a geometric object. The link is
   * identified by a integer tag that should be used in methods @href #AddLinkedNodes, @href #AddLinkedEdges, @href #AddLinkedFaces or @href #AddLinkedElements. 
   * <br>In order to store associativity between several instance, the geometry is identified by the following:  
   * <ul><li>The product instance containing the geometry to link.
   * <li>The geometry itself.</ul>
   * @param iProduct
   *   The product instance. 
   * @param iGeometry
   *   The geometry to link. 
   * @return
   *   An integer tag representing the link.
   */
  virtual int GetLink ( CATIProduct * iProduct , CATGeometry * iGeometry ) =0;
  /**
   * Retreives the number of finite element's faces associated to a geometry.
   * <br>The geometry is identified by the following:
   * <ul><li>The product instance containing the geometry to link.
   * <li>The geometry itself that could be either:
   * <ul><li>A BRep object see @href CATIBRepAccess.
   * <li>A mechanical feature see @href CATIMechanicalFeature </ul></ul>
   * @param iProduct
   *   The product instance. 
   * @param iGeometry
   *   The geometry (BRep object or mechanical feature). 
   * @param iAssembly
   *   To specify the target in the context of assembly of Analysis:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the element's faces are searched in the current Analysis.
   *   <dt>1</dt><dd>the element's faces are searched in the current Analysis and all sub Analysis.</dl>
   * @return
   *   The number of finite element's faces associated to the geometry.
   */
  virtual int GetNumberOfElementFacesLinkedTo ( CATIProduct * iProduct , CATBaseUnknown * iGeometry , int iAssembly = 0 ) =0;
  /**
   * Retreives all finite element's faces associated to a geometry.
   * <br>The geometry is identified by the following:
   * <ul><li>The product instance containing the geometry to link.
   * <li>The geometry itself that could be either:
   * <ul><li>A BRep object see @href CATIBRepAccess.
   * <li>A mechanical feature see @href CATIMechanicalFeature </ul></ul>
   * @param iProduct
   *   The product instance. 
   * @param iGeometry
   *   The geometry (BRep object or mechanical feature). 
   * @param ioElementFaces
   *   An array containing the associated element's faces.
   *   <br><b>Lifecycle rules deviation</b>: If <b>ioElementFaces</b> is set to NULL before calling this method, an array of appropriate size is allocated and should be desallocated by the callee.
   *    Otherwise, the <b>ioElementFaces</b> array is assumed to be allocated with enougth space to store ouputs.
   * @param iActiveOnly
   *   The element activivity flag (see @href CATMSHElement ).
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>all associated element's faces are returned.
   *   <dt>1</dt><dd>only faces corresponding to active elements are returned.</dl>
   * @param iAssembly
   *   To specify the target in the context of assembly of Analysis:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the element's faces are searched in the current Analysis.
   *   <dt>1</dt><dd>the element's faces are searched in the current Analysis and all sub Analysis.</dl>
   * @return
   *   The number of finite element's faces associated to the geometry.
   */
  virtual int GetElementFacesLinkedTo ( CATIProduct * iProduct , CATBaseUnknown * iGeometry , CATMSHAssElementFace * &ioElementFaces , int iActiveOnly = 0 , int iAssembly = 0 ) =0;
  /**
   * Retreives a finite element's edges associated to a geometry.
   * <br>The geometry is identified by the following:
   * <ul><li>The product instance containing the geometry to link.
   * <li>The geometry itself that could be either:
   * <ul><li>A BRep object see @href CATIBRepAccess.
   * <li>A mechanical feature see @href CATIMechanicalFeature </ul></ul>
   * @param iProduct
   *   The product instance. 
   * @param iGeometry
   *   The geometry (BRep object or mechanical feature). 
   * @param iAssembly
   *   To specify the target in the context of assembly of Analysis:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the element's edges are searched in the current Analysis.
   *   <dt>1</dt><dd>the element's edges are searched in the current Analysis and all sub Analysis.</dl>
   * @return
   *   The number of finite element's edges associated to the geometry.
   */
  virtual int GetNumberOfElementEdgesLinkedTo ( CATIProduct * iProduct , CATBaseUnknown * iGeometry , int iAssembly = 0 ) =0;
  /**
   * Retreives all finite element's edges associated to a geometry.
   * <br>The geometry is identified by the following:
   * <ul><li>The product instance containing the geometry to link.
   * <li>The geometry itself that could be either:
   * <ul><li>A BRep object see @href CATIBRepAccess.
   * <li>A mechanical feature see @href CATIMechanicalFeature </ul></ul>
   * @param iProduct
   *   The product instance. 
   * @param iGeometry
   *   The geometry (BRep object or mechanical feature). 
   * @param ioElementEdges
   *   An array containing the assocaited element's faces.
   *   <br><b>Lifecycle rules deviation</b>: If <b>ioElementEdges</b> is set to NULL before calling this method, an array of appropriate size is allocated and should be desallocated by the callee.
   *    Otherwise, the <b>ioElementEdges</b> array is assumed to be allocated with enougth space to store ouputs.
   * @param iActiveOnly
   *   The element activivity flag (see @href CATMSHElement ).
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>all associated element's edges are returned.
   *   <dt>1</dt><dd>only edges corresponding to active elements are returned.</dl>
   * @param iAssembly
   *   To specify the target in the context of assembly of Analysis:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the element's edges are searched in the current Analysis.
   *   <dt>1</dt><dd>the element's edges are searched in the current Analysis and all sub Analysis.</dl>
   * @return
   *   The number of finite element's edges associated to the geometry.
   */
  virtual int GetElementEdgesLinkedTo ( CATIProduct * iProduct , CATBaseUnknown * iGeometry , CATMSHAssElementEdge * &ioElementEdges , int iActiveOnly = 0 , int iAssembly = 0 ) =0;
  /**
   * Associate a set of finite element nodes to a geometry.
   * <br>The geometry is identified by the corresponding link tag, see @href #GetLink method.
   * @param iNulink
   *   The link tag corresponding to the geometry. 
   * @param iNumberOfNodes
   *   The number of finite element nodes to associate. 
   * @param iLinkedNodes
   *   An array containing pointer to the finite element nodes to associate.
   */
  virtual void AddLinkedNodes ( int iNulink , int iNumberOfNodes , CATMSHNode * const * iLinkedNodes ) =0;
  /**
   * Associate a set of finite elements to a geometry.
   * <br>The geometry is identified by the corresponding link tag, see @href #GetLink method.
   * @param iNulink
   *   The link tag corresponding to the geometry. 
   * @param iNumberOfElements
   *   The number of finite elements to associate. 
   * @param iLinkedElements
   *   An array containing pointer to the finite elements to associate.
   */
  virtual void AddLinkedElements ( int iNulink , int iNumberOfElements , CATMSHElement * const * iLinkedElements ) =0;
  /**
   * Associate a set of finite element's faces to a geometry.
   * <br>The geometry is identified by the corresponding link tag, see @href #GetLink method.
   * @param iNulink
   *   The link tag corresponding to the geometry. 
   * @param iNumberOfFaces
   *   The number of finite element's face to associate. 
   * @param iLinkedFaces
   *   An array containing pointer to the finite element's faces to associate.
   */
  virtual void AddLinkedFaces ( int iNulink , int iNumberOfFaces , CATMSHAssElementFace * iLinkedFaces ) =0;
  /**
   * Associate a set of finite element's edges to a geometry.
   * <br>The geometry is identified by the corresponding link tag, see @href #GetLink method.
   * @param iNulink
   *   The link tag corresponding to the geometry. 
   * @param iNumberOfEdges
   *   The number of finite element's edge to associate. 
   * @param iLinkedEdges
   *   An array containing pointer to the finite element's edges to associate.
   */
  virtual void AddLinkedEdges ( int iNulink , int iNumberOfEdges , CATMSHAssElementEdge * iLinkedEdges ) =0;
  /**
   * Retreives the number of finite element nodes associated to a set of geometries.
   * <br>The geometries are identified by the following:
   * <ul><li>The product instance containing the geometry to link.
   * <li>The geometry that could be either:
   * <ul><li>A BRep object see @href CATIBRepAccess.
   * <li>A mechanical feature see @href CATIMechanicalFeature </ul></ul>
   * <br>Finite element nodes inherit from elements associativity, i.e. if an element's edge is associated to a geometry all corresponding nodes are considered
   * as associated to this geometry. In the same maner if an element's face is associated to a geometry all corresponding nodes are considered
   * as associated to this geometry.
   * @param iNbGeometries
   *   The number of geometries. 
   * @param iProducts
   *   An array containing for each geometry the corresponding product instance. 
   * @param iGeometries
   *   An array containing the geometries (BRep objects or mechanical features). 
   * @param iAssembly
   *   To specify the target in the context of assembly of Analysis:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the nodes are searched in the current Analysis.
   *   <dt>1</dt><dd>the nodes are searched in the current Analysis and all sub Analysis.</dl>
   * @return
   *   The number of finite element nodes associated to the geometries.
   */
  virtual int GetNumberOfNodesLinkedTo ( int iNbGeometries , CATIProduct * iProducts[] , CATBaseUnknown * iGeometries[] , int iAssembly = 0 ) =0;
  /**
   * Retreives all the finite element nodes associated to a set of geometries.
   * <br>The geometries are identified by the following:
   * <ul><li>The product instance containing the geometry to link.
   * <li>The geometry that could be either:
   * <ul><li>A BRep object see @href CATIBRepAccess.
   * <li>A mechanical feature see @href CATIMechanicalFeature </ul></ul>
   * <br>Finite element nodes inherit from elements associativity, i.e. if an element's edge is associated to a geometry all corresponding nodes are considered
   * as associated to this geometry. In the same maner if an element's face is associated to a geometry all corresponding nodes are considered
   * as associated to this geometry.
   * @param iNbGeometries
   *   The number of geometries. 
   * @param iProducts
   *   An array containing for each geometry the corresponding product instance. 
   * @param iGeometries
   *   An array containing the geometries (BRep objects or mechanical features). 
   * @param ioNodes
   *   An array containing the assocaited nodes.
   *   <br><b>Lifecycle rules deviation</b>: If <b>ioNodes</b> is set to NULL before calling this method, an array of appropriate size is allocated and should be desallocated by the callee.
   *    Otherwise, the <b>ioNodes</b> array is assumed to be allocated with enougth space to store ouputs.
   * @param iActiveOnly
   *   The element activivity flag (see @href CATMSHElement ).
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>all associated nodes are returned.
   *   <dt>1</dt><dd>only nodes corresponding to active elements are returned.</dl>
   * @param iAssembly
   *   To specify the target in the context of assembly of Analysis:
   *   <br><b>Legal values</b>: 
   *   <dl><dt>0</dt><dd>the nodes are searched in the current Analysis.
   *   <dt>1</dt><dd>the nodes are searched in the current Analysis and all sub Analysis.</dl>
   * @return
   *   The number of finite element nodes associated to the geometries.
   */
  virtual int GetNodesLinkedTo ( int iNbGeometries , CATIProduct * iProducts[] , CATBaseUnknown * iGeometries[] , CATMSHNode ** &ioNodes , int iActiveOnly = 0 , int iAssembly = 0 ) =0;
  /**
   * @nodoc
   */
  virtual void RemoveAssociativity ( CATIMSHMeshPart * MeshPart ) =0;
  /**
   * @nodoc 
   */
  virtual CATMSHSupportManager * GetSupportManager () =0;
  /**
   * @nodoc 
   */
  virtual int GetAssociativityOnNextLink (  int iNulink , int& oNumberOfNodes , int& oNumberOfElements , int& oNumberOfEdges , int& oNumberOfFaces , CATMSHNode **& oLinkedNodes , CATMSHElement **& oLinkedElements , CATMSHAssElementEdge *& oLinkedEdges , CATMSHAssElementFace *& oLinkedFaces ) =0;
  /**
   * @nodoc 
   */
  virtual void UnloadLinks () =0;
  /**
   * @nodoc 
   */
  virtual void GetProductAndGeometry ( int iNulink , CATIProduct *& oProduct , CATGeometry *& oGeometry ) =0;
  /**
   * @nodoc 
   */
  virtual CATMSHAssociativity * GetAssociativityImpl () =0;
  /**
   * Retreives the list of <b>Mesh Parts</b> which have a given support.
   * <br>The support is identified by a geometry and a product instance.
   * @param iProduct
   *   The product instance. 
   * @param iGeometry
   *   The geometry (BRep object or mechanical feature). 
   * @param oListOfMeshParts
   *   The list of <b>Mesh Parts</b> found on this support (geometry + product). 
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The list of <b>Mesh Parts</b> has been successfully retreived.
	 *   <dt>E_FAIL</dt><dd> The list of <b>Mesh Parts</b> has not been retreived.
	 *   </dl>
   */
  virtual HRESULT GetMeshPartsOn ( CATIProduct * iProduct , CATBaseUnknown * iSupport , CATMSHListOfMeshPart * &oListOfMeshParts ) =0;
};

CATDeclareHandler( CATIMSHAssociativity , CATBaseUnknown );

#endif
