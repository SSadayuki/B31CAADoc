#ifndef  CATIMSHConnectivity_h
#define  CATIMSHConnectivity_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U4 CATMSHExtIConnectivity 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATDataType.h"

class CATMSHConnectivity;
class CATIMSHShapeFunction;
class CATIMSHTesselation;
class CATMSHGeometricalEngine;
class CATMSHExtIConnectivity;
class CATMSHElement;


/**
 * General informations on the finite element connectivity.
 */
struct CATMSHConnecInfos
{
/**
 * Dimension of the finite element connectivity.
 */
  short Dimension;
/**
 * Number of nodes.
 */
  int   NbNodes;
/**
 * Number of edges.
 */
  int   NbEdges;
/**
 * Number of faces.
 */
  int   NbFaces;
/**
 * Number of intermediates nodes.
 */
  int   NbIntNodes;
};

extern ExportedByMSHModel IID IID_CATIMSHConnectivity;

/**
 * Interface representing a finite element connectivity.
 * <b>Role</b>: This interface provides all necessary informations about a finite
 * element connectivity such as dimension, nodes number, edges and faces desciption, ...
 * <br>
 * <br><b><i>Conventions used for method arguments</i></b>:
 * <ul>
 * <li>Nodes are numbered between 0 and NbNodes - 1. 
 * <li>Edges are numbered between 0 and NbEdges - 1. 
 * <li>Faces are numbered between 0 and NbFaces - 1; 
 * <li>An object backward pointer to an array containing objects data is the last position into the array
 * concerning the object. For example, if you have an array of backward pointers PtDataOfNodes into an array DataOfNodes for
 * the nodes of the connectivity, all the data concerning the i-th node will be located between 
 * DataOfNodes[PtDataOfNodes[i]+1] and DataOfNodes[PtDataOfNodes[i+1]]  
 * </ul>
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByMSHModel CATIMSHConnectivity : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

  /**
   * Returns the name of the connectivity.
   */
  virtual const char * GetName () const = 0;

  /**
   * Returns the finite element connectivity number.
   * Connectivities are numbered between 0 and the total number of elements minus one.
   * Take care of the fact that this number is not stable upon modifications, 
   * for example in case of creation of a new connectivity.
   */
  virtual int GetNumber () = 0;

  /**
   * Returns general informations on the finite element connectivity (dimension and sizes).
   */
  virtual const CATMSHConnecInfos  * GetInfos () const = 0;

  /**
   * Retrieves the faces definition in term of nodes.
   * <br>
   * Nodes of a face should be ordered in a compatible way with the face connectivity (see @href #GetFaceConnectivity method).
   * @param oPtNodesOfFaces
   *   Array containing for each face a backward pointer in the oNodesOfFaces array.
   * @param oNodesOfFaces
   *   Array containing the nodes number of the faces.
   * @return
   *   The number of faces in the connectivity.
   */
  virtual int GetNodesOfFaces ( const int *& oPtNodesOfFaces, const int *& oNodesOfFaces ) const = 0;

  /**
   * Retrieves the faces definition in term of edges.
   * <br>
   * The edges of faces should be ordered in sequence in order to define the positive
   * orientation for faces. For a 3D connectivity all the faces should be outward oriented.
   * @param oPtEdgesOfFaces
   *   Array containing for each face a backward pointer in oEdgesOfFaces and oOrientOfEdges arrays.
   * @param oEdgesOfFaces
   *   Array containing the edges number of the faces.
   * @param oOrientOfEdges
   *   Array containing the edges orientation of the faces.
   *   <br><b>Legal values</b>:
   *   <dl><dt>0</dt><dd>The edge is used with its default orientation.
   *   <dt>1</dt><dd>The edge is used with its reverse orientation.
   *   </dl>
   * @return
   *   The number of faces in the connectivity.
   */
  virtual int GetEdgesOfFaces ( const int *& oPtEdgesOfFaces, const int *& oEdgesOfFaces, const int *& oOrientOfEdges ) const = 0;

  /**
   * Retrieves the faces connected to edges.
   * @param oPtFacesOfEdges
   *   Array containing for each edge a backward pointer in FacesOfEdges array.
   * @param FacesOfEdges
   *   Array containing the faces number connected to edges.
   * @return
   *   The number of edges in the connectivity.
   */
  virtual int GetFacesOfEdges ( const int *& oPtFacesOfEdges, const int *& FacesOfEdges ) const = 0;

  /**
   * Retrieves the edges definition in terms of nodes.
   * <br>
   * The nodes of edges should be ordered in sequence in order to define the positive
   * orientation for edges.
   * @param oPtNodesOfEdges
   *   Array containing for each edge a backward pointer in oNodesOfEdges array.
   * @param oNodesOfEdges
   *   Array containing the nodes number of edges.
   * @return
   *   The number of edges in the connectivity.
   */
  virtual int GetNodesOfEdges ( const int *& oPtNodesOfEdges, const int *& oNodesOfEdges ) const = 0;

  /**
   * Retrieves the faces connected to edges.
   * @param oPtFacesOfNodes
   *   Array containing for each node a backward pointer in oFacesOfNodes array.
   * @param oFacesOfNodes
   *   Array containing the faces number connected to nodes.
   * @return
   *   The number of nodes in the connectivity.
   */
  virtual int GetFacesOfNodes ( const int *& oPtFacesOfNodes, const int *& oFacesOfNodes ) const = 0;

  /**
   * Retrieves the edges connected to edges.
   * @param oPtEdgesOfNodes
   *   Array containing for each node a backward pointer in oEdgesOfNodes array.
   * @param oEdgesOfNodes
   *   Array containing the edges number connected to nodes.
   * @return
   *   The number of nodes in the connectivity.
   */
  virtual int GetEdgesOfNodes ( const int *& oPtEdgesOfNodes, const int *& oEdgesOfNodes ) const = 0;

  /**
   * Returns the connectivity corresponding to a face.
   * @param iNumFace
   *   Face number.
   * @return
   *   The connectivity of the face.
   */
  virtual CATIMSHConnectivity * GetFaceConnectivity ( int iNumFace = 0 ) const = 0;

  /**
   * Returns the connectivity corresponding to a face.
   * @param iNumEdge
   *   Edge number.
   * @return
   *   The connectivity of the edge.
   */
  virtual CATIMSHConnectivity * GetEdgeConnectivity ( int iNumEdge = 0 ) const = 0;

  /**
   * Returns the nodes permutation that should be applied in order to reverse the element.
   */
  virtual const int * GetNodesPermutation () const = 0;

  /**
   * Returns the edges permutation that should be applied in order to reverse the element.
   */
  virtual const int * GetEdgesPermutation () const = 0;

  /**
   * Returns the faces permutation that should be applied in order to reverse the element.
   */
  virtual const int * GetFacesPermutation () const = 0;

  /**
   * Returns the next finite element connectivity. This method should be used with
   * the @href CATMSHConnectivityServices#GetFirstConnectivity method to scan all connectivities.
   */
  virtual const CATIMSHConnectivity * Next () const = 0;

  /**
   * @nodoc
   */
  virtual CATMSHExtIConnectivity * GetImplementation () const = 0;

/**
 * @nodoc
 * Returns the shape function interface of the connectivity.
 */
  virtual CATIMSHShapeFunction * GetShapeFunction () const = 0;

/**
 * @nodoc
 * Returns the visualization interface of the connectivity.
 */
  virtual CATIMSHTesselation * GetTesselation () const = 0;

/**
 * Returns the geometrical engine associated with the connectivity.
 */
  virtual CATMSHGeometricalEngine * GetGeometricalEngine () const = 0;

/**
 * Creates an returns an new geometrical engine compatible with the connectivity.
 */
  virtual CATMSHGeometricalEngine * CreateGeometricalEngine () = 0;

/**
 * Retrieves the type of each nodes.
 * @param oTypeOfNodes
 *   Array containing for each node his type:.
 *   <br><b>Legal values</b>:
 *   <dl><dt>0</dt><dd>Main node.
 *   <dt>1</dt><dd>Intermediate node on edge.
 *   <dt>2</dt><dd>Intermediate node on face.
 *   <dt>3</dt><dd>Intermediate node in volume.
 *   </dl>
 * @return
 *   The number of nodes in the connectivity.
 */
  virtual int GetTypeOfNodes ( const int *& oTypeOfNodes ) const = 0;

/**
 * Returns the ideal interior angle for each edge.
 * @param oAnglesOfEdges
 *   Array containing for each edge the ideal interior angle.
 * @return
 *   The number of edges in the connectivity.
 */
  virtual int GetInteriorAngleOfEdges ( const double *& oAnglesOfEdges ) const = 0;
/**
 * Returns the connectivity with the same shape and main nodes
 * @return
 *   The main the connectivity.
 */
  virtual const CATIMSHConnectivity * GetMainConnectivity() const =0;
};

CATDeclareHandler ( CATIMSHConnectivity, CATBaseUnknown );

#endif
