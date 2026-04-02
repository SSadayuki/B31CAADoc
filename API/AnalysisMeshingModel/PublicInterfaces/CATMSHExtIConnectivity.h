#ifndef CATMSHExtIConnectivity_h
#define CATMSHExtIConnectivity_h


// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATIMSHConnectivity.h"
#include "CATDataType.h"

class CATIMSHShapeFunction;
class CATIMSHTesselation;

/**
 * Adapter for CATIMSHConnectivity interface.
 *
 * <b>Role</b>: This class provides a default implementation for any extension of 
 * @href CATIMSHConnectivity.
 * That means one should derive from this class to implement the connectivity definition of
 * a new finite element.
 * <br>One should re-implement only the @href #CreateGeometricalEngine and @href #Build methods.
 */
class ExportedByMSHModel CATMSHExtIConnectivity : public CATBaseUnknown
{
  friend class CATMSHConnectivityPrivate;

public:

  /**
   *  Constructor.
   */
  CATMSHExtIConnectivity ();

  /**
   * Destructor.
   */
  virtual ~CATMSHExtIConnectivity ();

  /**
   * Creates an returns an new geometrical engine compatible with the connectivity.
   */
  virtual CATMSHGeometricalEngine * CreateGeometricalEngine () = 0;

  /**
   * Builds internal informations.
   * <br>
   * This method should initialize <b>all</b> data members.
   */
  virtual void Build () =0;

  /**
   * Returns the name of the connectivity.
   */
  inline const char * GetName () const;

  /**
   * Returns general informations on the finite element connectivity (dimension and sizes).
   */
  inline const CATMSHConnecInfos  * GetInfos () const;

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
  inline int GetNodesOfFaces ( const int *& oPtNodesOfFaces, const int *& oNodesOfFaces ) const;

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
  inline int GetEdgesOfFaces ( const int *& oPtEdgesOfFaces, const int *& oEdgesOfFaces, const int *& oOrientOfEdges ) const;

  /**
   * Retrieves the faces connected to edges.
   * @param oPtFacesOfEdges
   *   Array containing for each edge a backward pointer in FacesOfEdges array.
   * @param FacesOfEdges
   *   Array containing the faces number connected to edges.
   * @return
   *   The number of edges in the connectivity.
   */
  inline int GetFacesOfEdges ( const int *& oPtFacesOfEdges, const int *& oFacesOfEdges ) const;

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
  inline int GetNodesOfEdges ( const int *& oPtNodesOfEdges, const int *& oNodesOfEdges ) const;

  /**
   * Retrieves the faces connected to edges.
   * @param oPtFacesOfNodes
   *   Array containing for each node a backward pointer in oFacesOfNodes array.
   * @param oFacesOfNodes
   *   Array containing the faces number connected to nodes.
   * @return
   *   The number of nodes in the connectivity.
   */
  inline int GetFacesOfNodes ( const int *& oPtFacesOfNodes, const int *& oFacesOfNodes ) const;

  /**
   * Retrieves the edges connected to edges.
   * @param oPtEdgesOfNodes
   *   Array containing for each node a backward pointer in oEdgesOfNodes array.
   * @param oEdgesOfNodes
   *   Array containing the edges number connected to nodes.
   * @return
   *   The number of nodes in the connectivity.
   */
  inline int GetEdgesOfNodes ( const int *& oPtEdgesOfNodes, const int *& oEdgesOfNodes ) const;

  /**
   * Returns the connectivity corresponding to a face.
   * @param iNumEdge
   *   Edge number.
   * @return
   *   The connectivity of the edge.
   */
  inline CATIMSHConnectivity * GetFaceConnectivity ( int iNumFace ) const;

  /**
   * Returns the connectivity corresponding to a face.
   * @param iNumEdge
   *   Edge number.
   * @return
   *   The connectivity of the edge.
   */
  inline CATIMSHConnectivity * GetEdgeConnectivity ( int iNumEdge ) const;

  /**
   * Returns the nodes permutation that should be applied in order to reverse the element.
   */
  inline const int * GetNodesPermutation () const;

  /**
   * Returns the edges permutation that should be applied in order to reverse the element.
   */
  inline const int * GetEdgesPermutation () const;

  /**
   * Returns the faces permutation that should be applied in order to reverse the element.
   */
  inline const int * GetFacesPermutation () const;

  /**
   * @nodoc
   * Returns the shape function interface of the connectivity.
   */
  inline CATIMSHShapeFunction * GetShapeFunction () const;

  /**
   * @nodoc
   * Returns the visualization interface of the connectivity.
   */
  inline CATIMSHTesselation * GetTesselation () const;

  /**
   * Returns the geometrical engine associated with the connectivity.
   */
  virtual CATMSHGeometricalEngine * GetGeometricalEngine () const;
  /**
   * Returns the type of each nodes.
   */
  inline int GetTypeOfNodes ( const int *& oTypeOfNodes ) const;
  /**
   * Returns the ideal interior angle for each edge.
   */
  inline int GetInteriorAngleOfEdges ( const double *& oIntAngleOfEdges ) const;
  /**
   * Returns the finite element connectivity number.
   * Connectivities are numbered between 0 and the total number of elements minus one.
   */
  int GetNumber () const;
  /**
   * Returns the next finite element connectivity.
   */
  inline const CATIMSHConnectivity * Next () const;
  /** @nodoc */
  inline CATMSHExtIConnectivity * GetImplementation ();
/**
 * Returns the connectivity with the same shape and main nodes
 * @return
 *   The main the connectivity.
 */
  inline const CATIMSHConnectivity * GetMainConnectivity() const;


/** @nodoc */
  inline CATINTPTR GetWorkAsInt () const;
/** @nodoc */
  inline void SetWorkAsInt ( CATINTPTR Number );
/** @nodoc */
  inline void * GetWorkAsPtr () const;
/** @nodoc */
  inline void SetWorkAsPtr ( void * Work );
/** @nodoc */
  void Initialize ();
/** @nodoc */
  void Dispose ();


protected:

/**
 * General informations on the finite element connectivity.
 */
  CATMSHConnecInfos       _Infos;
/**
 * Array of backward pointer to _IntAngleOfEdges array.
 */
  const double *          _IntAngleOfEdges;
/**
 * Array of backward pointer to _TypeOfNodes array.
 */
  const int *             _TypeOfNodes;
/**
 * Array of backward pointer to _EdgesOfFaces array.
 */
  const int *             _PtEdgesOfFaces;
/**
 * Array containing in sequence the edges number of the faces.
 * The edges of a face should be ordered in order to define the positive
 * orientation. For a 3D connectivity all the faces should be outward oriented.
 */
  const int *             _EdgesOfFaces;
/**
 * Array containing the edges orientation of the faces.
 */
  const int *             _OrientOfEdges;
/**
 * Array of backward pointer to _NodesOfFaces array.
 */
  const int *             _PtNodesOfFaces;
/**
 * Array containing in sequence the nodes number of the faces.
 * Nodes of a face should be ordered in a compatible way with the face connectivity (see @href #GetFaceConnectivity method).
 */
  const int *             _NodesOfFaces;
/**
 * Array of backward pointer to _FacesOfEdges array.
 */
  const int *             _PtFacesOfEdges;
/**
 * Array containing in sequence the faces number connected to edges.
 */
  const int *             _FacesOfEdges;
/**
 * Array of backward pointer to _NodesOfEdges array.
 */
  const int *             _PtNodesOfEdges;
/**
 * Array containing in sequence the nodes number of edges.
 * The nodes of an edge should be ordered in order to define the positive
 * orientation.
 */
  const int *             _NodesOfEdges;
/**
 * Array of backward pointer to _FacesOfNodes array.
 */
  const int *             _PtFacesOfNodes;
/**
 * Array containing in sequence the faces number connected to nodes.
 */
  const int *             _FacesOfNodes;
/**
 * Array of backward pointer to _EdgesOfNodes array.
 */
  const int *             _PtEdgesOfNodes;
/**
 * Array containing in sequence the edges number connected to nodes.
 */
  const int *             _EdgesOfNodes;
/**
 * Pointer containing main connectivity
 */
  CATIMSHConnectivity *   _MainConnectivity;
/**
 * Array containing in sequence the connectivity of the faces.
 */
  CATIMSHConnectivity  ** _FaceConnectivity;
/**
 * Array containing in sequence the connectivity of the edges.
 */
  CATIMSHConnectivity  ** _EdgeConnectivity;
/**
 * Array containing the nodes permutation that should be applied in order to reverse the element.
 */
  const int *             _NodesPermutation;
/**
 * Array containing the edges permutation that should be applied in order to reverse the element.
 */
  const int *             _EdgesPermutation;
/**
 * Array containing the faces permutation that should be applied in order to reverse the element.
 */
  const int *             _FacesPermutation;


private:

  CATMSHExtIConnectivity ( const CATMSHExtIConnectivity& From );
  CATMSHExtIConnectivity& operator= ( const CATMSHExtIConnectivity& From );
  inline void SetNext ( CATIMSHConnectivity * iNext );

  static unsigned int       NumberOfCreated;
  CATIMSHShapeFunction *    _ShapeFunction;
  CATIMSHTesselation *      _Tesselation;
  CATMSHGeometricalEngine * _GeometricalEngine;
  CATIMSHConnectivity *     _Next;
  const char *              _Name;
  union
  {
    void *           AsPtr;
    CATINTPTR        AsInt;
  }                  _Work;
};

//
//  Implémentations inline
//

//
//==================================================
// GetName: nom de la connectivité
//==================================================
//
inline const char * CATMSHExtIConnectivity::GetName () const
{
  return _Name;
}

//
//==================================================
// GetInfos: Informations sur la connectivité
//==================================================
//
inline const CATMSHConnecInfos * CATMSHExtIConnectivity::GetInfos () const
{
  return &_Infos;
}

//
//==================================================
// GetNodesOfFaces: Lecture de la définition des noeuds des faces
//==================================================
//
inline int CATMSHExtIConnectivity::GetNodesOfFaces ( const int *& PtNodesOfFaces, const int *& NodesOfFaces ) const
{
  PtNodesOfFaces = _PtNodesOfFaces;
  NodesOfFaces = _NodesOfFaces;

  return _Infos.NbFaces;
}

//
//==================================================
// GetEdgesOfFaces: Lecture de la définition des noeuds des faces
//==================================================
//
inline int CATMSHExtIConnectivity::GetEdgesOfFaces ( const int *& PtEdgesOfFaces, const int *& EdgesOfFaces, const int *& Orient ) const
{
  PtEdgesOfFaces = _PtEdgesOfFaces;
  EdgesOfFaces = _EdgesOfFaces;
  Orient = _OrientOfEdges;
  return _Infos.NbFaces;
}

//
//==================================================
// GetFacesOfEdges: Lecture de la définition des faces aretes
//==================================================
//
inline int CATMSHExtIConnectivity::GetFacesOfEdges ( const int *& PtFacesOfEdges, const int *& FacesOfEdges ) const
{
  PtFacesOfEdges = _PtFacesOfEdges;
  FacesOfEdges = _FacesOfEdges;
  return _Infos.NbEdges;
}

//
//==================================================
// GetNodesOfEdges: Lecture de la définition des noeuds des aretes
//==================================================
//
inline int CATMSHExtIConnectivity::GetNodesOfEdges ( const int *& PtNodesOfEdges, const int *& NodesOfEdges ) const
{
  PtNodesOfEdges = _PtNodesOfEdges;
  NodesOfEdges = _NodesOfEdges;
  return _Infos.NbEdges;
}

//
//==================================================
// GetFacesOfNodes: Lecture de la définition des faces noeuds
//==================================================
//
inline int CATMSHExtIConnectivity::GetFacesOfNodes ( const int *& PtFacesOfNodes, const int *& FacesOfNodes ) const
{
  PtFacesOfNodes = _PtFacesOfNodes;
  FacesOfNodes = _FacesOfNodes;
  return _Infos.NbNodes;
}

//
//==================================================
// GetEdgesOfNodes: Lecture de la définition des aretes noeuds
//==================================================
//
inline int CATMSHExtIConnectivity::GetEdgesOfNodes ( const int *& PtEdgesOfNodes, const int *& EdgesOfNodes ) const
{
  PtEdgesOfNodes = _PtEdgesOfNodes;
  EdgesOfNodes = _EdgesOfNodes;
  return _Infos.NbNodes;
}
//
//==================================================
// GetNext: lecture connectivité suivante
//==================================================
//
inline const CATIMSHConnectivity * CATMSHExtIConnectivity::Next () const
{
  return _Next;
}

//
//==================================================
// SetNext: écriture connectivité suivante
//==================================================
//
inline void CATMSHExtIConnectivity::SetNext ( CATIMSHConnectivity * Next )
{
  _Next = Next;
}

//
//==================================================
// GetWork: lecture du int Work
//==================================================
//
inline CATINTPTR CATMSHExtIConnectivity::GetWorkAsInt () const
{
  return _Work.AsInt;
}

//
//==================================================
// GetWork: lecture du void * Work
//==================================================
//
inline void * CATMSHExtIConnectivity::GetWorkAsPtr () const
{
  return _Work.AsPtr;
}

//
//==================================================
// SetWork: écriture du int Work
//==================================================
//
inline void CATMSHExtIConnectivity::SetWorkAsInt ( CATINTPTR Work )
{
  _Work.AsInt = Work;
}

//
//==================================================
// SetWork: écriture du void * Work
//==================================================
//
inline void CATMSHExtIConnectivity::SetWorkAsPtr ( void * Work )
{
  _Work.AsPtr = Work;
}

//
//==================================================
// Lecture du pointeur sur CATIMSHShapeFunction
//==================================================
//
inline CATIMSHShapeFunction * CATMSHExtIConnectivity::GetShapeFunction () const 
{
  return _ShapeFunction;
}

//
//==================================================
// Lecture du pointeur sur CATIMSHTesselation
//==================================================
//
inline CATIMSHTesselation * CATMSHExtIConnectivity::GetTesselation () const 
{
  return _Tesselation;
}

//
//==================================================
// Lecture de la connectivite d'une face
//==================================================
//
inline const CATIMSHConnectivity * CATMSHExtIConnectivity::GetMainConnectivity () const
{
  return _MainConnectivity;
}
//
//==================================================
// Lecture de la connectivite d'une face
//==================================================
//
inline CATIMSHConnectivity * CATMSHExtIConnectivity::GetFaceConnectivity ( int NumFace ) const
{
  return _FaceConnectivity[NumFace];
}

//
//==================================================
// Lecture de la connectivite d'un edge
//==================================================
//
inline CATIMSHConnectivity * CATMSHExtIConnectivity::GetEdgeConnectivity ( int NumEdge ) const
{
  return _EdgeConnectivity[NumEdge];
}

//
//==================================================
// Lecture de la permutation des noeuds
//==================================================
//
inline const int * CATMSHExtIConnectivity::GetNodesPermutation ( ) const
{
  return _NodesPermutation;
}

//
//==================================================
// Lecture de la permutation des aretes
//==================================================
//
inline const int * CATMSHExtIConnectivity::GetEdgesPermutation ( ) const
{
  return _EdgesPermutation;
}

//
//==================================================
// Lecture de la permutation des faces
//==================================================
//
inline const int * CATMSHExtIConnectivity::GetFacesPermutation ( ) const
{
  return _FacesPermutation;
}

//
//==================================================
// GetGeometricalEngine: Lecture du GeometricalEngine
// associé à la connectivité
//==================================================
//     
inline CATMSHGeometricalEngine * CATMSHExtIConnectivity::GetGeometricalEngine () const 
{
  return _GeometricalEngine;
}

//
//==================================================
// Returns the type of each nodes.
//==================================================
//     
inline int CATMSHExtIConnectivity::GetTypeOfNodes ( const int *& oTypeOfNodes ) const
{
  oTypeOfNodes = _TypeOfNodes;
  return _Infos.NbNodes;
}

//
//==================================================
// Returns the type of each nodes.
//==================================================
//     
inline int CATMSHExtIConnectivity::GetInteriorAngleOfEdges ( const double *& oIntAngleOfEdges ) const
{
  oIntAngleOfEdges = _IntAngleOfEdges;
  return _Infos.NbEdges;
}

//
//==================================================
// GetImplementation
//==================================================
//     
inline CATMSHExtIConnectivity * CATMSHExtIConnectivity::GetImplementation ()
{
  return this;
}
#endif
