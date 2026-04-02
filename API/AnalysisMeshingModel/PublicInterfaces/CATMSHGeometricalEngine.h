#ifndef CATMSHGeometricalEngine_h
#define CATMSHGeometricalEngine_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U2 
 */

#include "MSHModel.h"
#include "CATGraphicAttributeSet.h"
#include "CATBaseUnknown.h"

class CATIMSHConnectivity;
class CATIMSHShapeFunction;

class CATMathVector;
class CATMathAxis;
class CAT3DCustomRep;
class CATMSHElement;
struct CATMSHIntegrationScheme;

/**
 * Object that handles necessary informations about a finite element in order
 * to compute a quality criterion. 
 * See @href CATIMSHCriterion.
 */

class ExportedByMSHModel CATMSHGeometricalEngine
{
public:
/**
 * Constructs a geometrical engine corresponding to a given connectivity.
 * @param iConnectivity
 * Connectivity to be associated with.
 */
  CATMSHGeometricalEngine ( const CATIMSHConnectivity * iConnectivity );
/**
 * Destructor.
 */
  virtual ~CATMSHGeometricalEngine ();
/**
 * Returns the connectivity associated with.
 */
  const CATIMSHConnectivity * GetConnectivity() const { return _Connectivity;};
/** 
 * Returns the dimension of the connectivity.
 */
  const int GetDimension() const { return (const int) _Dimension;};
/** 
 * Returns the shape function associated with.
 */
  CATIMSHShapeFunction * GetShapeFunction ();
/**
 * Initialize the geometrical engine with the geometry of a finite element. 
 * @param iElement
 *   Finite element to be used to initialize the geometrical engine.
 */
  virtual void Init ( CATMSHElement const * const iElement );
/**
 * Initialize the geometrical engine with the geometry of a finite element. 
 * @param iCoordinates
 *   iCoordinates array containning pointer coordinates in the following order :
 *   iCoordinates[0] pointer of the first coordinates of node 0.
 *   iCoordinates[1] pointer of the first coordinates of node 1.
 *   ..
 *   iCoordinates[NbNodes-1] pointer of the first coordinates of node the last node.
 */
  virtual void Init ( const double * const iCoordinates[] );
/**
 * Returns a pointer to the array containing nodes coordinates of iNuNode in the following order: X, Y, Z ...
 * @param iNuNode
 *   Local number of node, between 0 to NbNodes-1
 */
  inline const double * GetCoordinates ( const int iNuNode ) const;
/** 
 * Returns a pointer to an array containing nodes coordinates in the following order: X0, Y0, Z0, X1, Y1, Z1, ...
 */
  inline const double * GetCoordinates () const;
/** 
 * Set coordinates of specified node. This method invalidate all previous results like a call to Init.
 * @param iNuNode
 *   Local number of node, between 0 to NbNodes-1.
 * @param iXYZ
 *   New coordinates of node.
 */
  virtual void SetCoordinates ( const int iNuNode , const double iXYZ[] );

/** 
 * Returns the coordinates of the center of element.
 * @param oCenter
 *   Center coordinates of element.
 */
  HRESULT GetCenter ( const double * &oCenter );

/** @nodoc
 * Returns the coordinates of the center of element
 */
  const double * GetCenter ();

/** @nodoc
 * lecture des coordonnées de la boite d'encombrement
 */
  inline const double * GetBox ();

/** @nodoc
 * Calcul de la distance minimale a la boite d'encombrement
 */
  double ComputeMinBoxDistance ( const double XYZ[] );

/** @nodoc
 * lecture des edges
 */
  inline const double * GetEdges ();
/** 
 * Returns the vector of the specified edge (ignore intermediate nodes).
 * @param iNuEdge
 *   Local number of edge, between 0 to NbEdges-1.
 * @param oEdge
 *   Vector between first and second node of the edge.
 */
  HRESULT GetMainEdge (const int iNuEdge, CATMathVector &oEdge );

/** 
 * Returns a pointer on the edges lengths table 0 to NbEdges-1.
 * The lengths are computed without take account intermediate nodes.
 */
  HRESULT GetMainLengths ( const double * &oLengths );

/** @nodoc
 * Returns the pointer of edges sizes table (0 to NbEdges-1).
 * The sizes are computed without take account intermediate nodes.
 */
  const double * GetEdgeSizes ();

/** @nodoc
 * lecture des normales
 */
  inline const double * GetNormals ( int Normalize=0 );

/** 
 * Returns the direction of normal face specified ( 0 for 2D element),
 * the intermediates nodes are ignored.
 * @param iNuFace
 *   Local number of face, between 0 to NbFaces-1.
 * @param oNormal
 *   Normalized Vector at the center of the face.
 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>Normal vector is normalized.
	 *   <dt>E_FAIL</dt><dd>Normal vector is null.
	 *   </dl>
 */
  HRESULT GetMainNormal ( const int iNuFace, CATMathVector &oNormal );

/** 
 * Returns the pointer of faces areas table (0 to NbFaces-1).
 * The areas are computed without take account intermediate nodes.
 */
  HRESULT GetMainAreas ( const double * &Areas );

/** 
 * Compute the area of a specified iNuFace, intermediates nodes are take account.
 * @param iNuFace
 *   Local number of face, between 0 to NbFaces-1.
 * @param iIntegrationType
 *   Type of numeric integration ( gauss scheme point of integration ). 
 *   <br><b>Legal values</b>:
 *   <dl><dt>0</dt><dd>CATMSHCentroid.
 *   <dl><dt>1</dt><dd>CATMSHLowPrecision.
 *   <dl><dt>2</dt><dd>CATMSHMediumPrecision.
 *   <dl><dt>3</dt><dd>CATMSHHighPrecision.
 *   </dl>
 * @param oArea
 *   Area of face.
 */
  virtual HRESULT ComputeArea ( const int iNuFace, const int iIntegrationType, double &oArea );

/** 
 * Returns the minimum length of the edges. 
 */
  virtual double GetMinEdge ();

/** 
 * Returns the maximum length of the edges. 
 */
  virtual double GetMaxEdge ();

/** @nodoc
 * lecture du volume
 */
  virtual HRESULT GetVolume ( double &oValue , const int IntegrationType=0 );

/** @nodoc
 * Calcul du Jacobien a partir des derivees des fonctions de formes
 */
  virtual HRESULT ComputeJacobian ( const double * Derivates , 
                                    const double Directions[][3],
                                    double * Jacobian ,
                                    double & Det );
/** @nodoc
 * Calcul du Jacobien sur une face a partir des derivees des fonctions de formes
 */
  virtual HRESULT ComputeFaceJacobian ( int NbNodes, 
                                        const double Coor[][3], 
                                        const double Derivates[][2], 
                                        double Jacobian[][2],
                                        double & Det );
/** @nodoc
 * Calcul des coordonnees shrinkees
 */
  virtual HRESULT ComputeShrink (float oCoordinates[][3] ,
                                 const float iShrink=0.95 ); 
/** @nodoc
 * Calcul des coordonnees a partir des fonctions de formes
 */
  virtual HRESULT ComputePosition ( double * Position ,
                                    const double * Functions );
/** @nodoc
 * Calcul des coordonnees a partir des fonctions de formes sur une face
 */
  virtual HRESULT ComputeFacePosition ( double * Position ,
                                        int NumFace=0,
                                        const double * Functions=NULL );
/** @nodoc
 * Calcul des coordonnees a partir des parametres sur la face
 */
  virtual HRESULT ComputeFacePosition ( int NumFace,
                                        double Parameters[],
                                        double Position[]);
/** @nodoc
 * Calcul des coordonnees a partir des fonctions de formes sur un edge
 */
  virtual HRESULT ComputeEdgePosition ( double * Position ,
                                        int NumEdge=0,
                                        const double * Functions=NULL );
/** @nodoc
 * Calcul des parametres sur une face a partir d'un position dans l'espace
 */
  virtual HRESULT ComputeFaceParameters ( int NumFace,
                                          const double Position[],
                                          double Parameters[]);
/** @nodoc
 * Calcul de la projection d'un point sur une face
 * Localisation de Projection dans la face :
 * 0 strictement a l'interieur
 * !=0 a la frontiere ou a l'exterieur de la face
 * Distance2[0] carre de la distance a la face
 * Distance2[1] carre distance normale a la face
 * Distance2[2] carre distance laterale a la face 
 */
  virtual HRESULT ComputeFaceProjection ( int NumFace,
                                          const double Point[3],
                                          double Projection[3],
                                          double Distance2[3],
                                          int &Localisation);
/** @nodoc
 * Calcul des coordonnees locales des noeuds d'une face
 */
  virtual HRESULT ComputeFaceCoordinates ( int NumFace,
                                           const double Directions[][3],
                                           const double Origin[],
                                           int &NbNodesOfFace,
                                           double FaceCoor[][3]); 
/** @nodoc
 * Calcul du systeme d'axe sur une face (MathAxis)  en un paramatre de face
 */
  HRESULT ComputeFaceAxis ( CATMathAxis * &Axis ,
                            int NumFace = 0 ,
                            const double * Params=NULL );
/** @nodoc
 * Calcul du systeme d'axe au centre de l'element
 */
  virtual HRESULT ComputeAxis ( double Origin[3] ,
                                double Directions[3][3] );
/** @nodoc
 * Calcul du systeme d'axe sur une face en un paramatre de face
 */
  virtual HRESULT ComputeFaceAxis ( double Origin[] ,
                                    double Directions[][3] ,
                                    int NumFace = 0 ,
                                    const double * Params=NULL );
/** @nodoc
 * Calcul de la normale d'une face au noeud
 */
  virtual HRESULT ComputeFaceNormal ( const int FaceNum , const int NodeNum ,
                                      double Normal[3] );
/** @nodoc
 * Calcul du systeme d'axe sur un edge en un paramatre d'edge
 * V3 est la moyenne des normales des faces de l'edge dans l'element
 */
  virtual HRESULT ComputeEdgeAxis ( CATMathAxis * &Axis ,
                                    int NumEdge = 0 ,
                                    int NumFace = -1 ,
                                    const double * Params=NULL );
/** @nodoc
 * Calcul du systeme d'axe sur un edge en un paramatre d'edge
 * V3 est le vecteur Normal orthogonalise vis a vis de l'edge
 */
  virtual HRESULT ComputeEdgeAxis ( CATMathAxis * &Axis ,
                                    int NumEdge,
                                    double * Normal ,
                                    const double * Params=NULL);
/** @nodoc
 * Calcul du referenciel d'une face  partir des derivees des fonctions de formes
 */
  virtual HRESULT ComputeFaceAxis ( double *DirU,
                                    double *DirV,
                                    double *DirW,  
                                    int NumFace=0,
                                    const double * Derivates=NULL); 
/** @nodoc
 * Calcul des directions isoparametriques de l'element
 */
  virtual HRESULT ComputeIsopar ( double Directions[][3],
                                  const double * Derivates=NULL); 
/** @nodoc
 * Calcul des isopares sur une face a partir des derivees des fonctions de formes
 */
  virtual HRESULT ComputeFaceIsopar ( double *DirU,
                                      double *DirV,
                                      double *DirW,  
                                      int NumFace=0,
                                      const double * Derivates=NULL); 
/** @nodoc
 * Calcul de la direction parametric d'un edge a partir des derivees des fonctions de formes
 */
  virtual HRESULT ComputeEdgeIsopar ( double *DirU,
                                      int NunEdge=0,
                                      const double * Derivates=NULL); 
/** @nodoc
 * interpoalation d'un champs de valeur nodales et calcul de la position en un parametre donnees
 */
  virtual HRESULT InterpolateValues ( const float Params[],
                                      const int Dimension, 
                                      float * NodalValues[], 
                                      float Values[],
                                      float Position[] );

/** @nodoc
 * Calcul de la l'angle entre les 2 faces communes a l'edge
 */
  virtual HRESULT ComputeEdgeInteriorAngle ( int NumEdge , double & Value );


/** @nodoc
 * Calcul des angles intérieurs de la face
 */
  virtual HRESULT ComputeNodesInteriorAngles ( int NumFace );

/** @nodoc
 * lecture des normales
 */
  inline const double * GetNodesInteriorAngles ( int NumFace, int & oNbNodesOfFace );


/** @nodoc */
  struct RepOptions
  {
    CATGraphicAttributeSet  FaceAttribute;
    CATGraphicAttributeSet  AxisAttribute;
    CATGraphicAttributeSet  TextAttribute;
    float                   ShrinkValue;
    short                   WithText;
    short                   WithAxis;
  };
/** @nodoc
 * Dump
 */
  virtual void Dump();
/** @nodoc 
 * Construction d'une représenation graphique 
 */
  virtual HRESULT BuildRep( CAT3DCustomRep * Rep, RepOptions * Options );

protected:


 /** @nodoc */
  virtual void    InitFlags ();
/** @nodoc */
  virtual HRESULT ComputeCenter ();
/** @nodoc */
  HRESULT         ComputeBox ();
/** @nodoc */
  virtual void    ComputeMainEdges ();
/** @nodoc */
  virtual void    ComputeMainNormals ();
/** @nodoc */
 // virtual void    ComputeAreas ( int IntegrationLevel );
/** @nodoc */
  virtual HRESULT ComputeVolume ( double & Volume, const CATMSHIntegrationScheme * Scheme );
/** @nodoc */
  const CATIMSHConnectivity  * _Connectivity;
/** @nodoc */
  CATIMSHShapeFunction * _ShapeFunction;

/** @nodoc */
  const int * _PtNodesOfEdges;
/** @nodoc */
  const int * _NodesOfEdges;
/** @nodoc */
  const int * _PtEdgesOfFaces;
/** @nodoc */
  const int * _EdgesOfFaces;
/** @nodoc */
  const int * _Orient;

/** @nodoc */
  int         _NbNodes;
/** @nodoc */
  int         _Dimension;
/** @nodoc */
  int         _NbEdges;
/** @nodoc */
  int         _NbFaces;

/** @nodoc */
  int         _FCenter;
/** @nodoc */
  int         _FBox;
/** @nodoc */
  int         _FEdges;
/** @nodoc */
  int         _FNormals;
/** @nodoc */
//  int         _FAreas;
/** @nodoc */
  int         _FVolume;
/** @nodoc */
  int         _FNAngles;

/** @nodoc
 * paramètre de dégénérescence
 * 0 - OK
 * 1 - au moins 2 noeuds confondus
 */
  int         _Degen;

/** @nodoc */
  double      _Volume;
/** @nodoc */
  double *    _Coord;
/** @nodoc */
  double ( *  _Coor )[3];
/** @nodoc */
  double ( *  _LocalCoor )[3];
/** @nodoc */
  double *    _Edges;
/** @nodoc */
  double ( *  _Edge )[3];
/** @nodoc */
  double      _Center[3];
/** @nodoc */
  double      _Box[2][3];
/** @nodoc */
  double *    _EdgSiz;
/** @nodoc */
  double ( * _MainNormals )[3];
/** @nodoc */
  double *    _Areas;
/** @nodoc */
  double *    _Functions;
/** @nodoc */
  double *    _Derivates;
/** @nodoc */
  double *    _NAngles;

/** @nodoc */
  static double _Tol;
/** @nodoc */
  static double _Tol2;
/** @nodoc */
  static void SetGlobalAxis( double Directions[3][3] );
/** @nodoc */
  static HRESULT BuildNormalDirection( const double Direction[3], double Normal[3] );

};
//
//==================================================
// GetCoordinates : lecture des coordonnées d'un noeud
//==================================================
//
inline const double * CATMSHGeometricalEngine::GetCoordinates (const int iNode) const
{
  return _Coor[iNode];
}
//
//==================================================
// GetCoordinates : lecture des coordonnées des noeuds
//==================================================
//
inline const double * CATMSHGeometricalEngine::GetCoordinates () const
{
  return (const double *) _Coord;
}
//
//==================================================
// GetEdges : lecture des edges
//==================================================
//
inline const double * CATMSHGeometricalEngine::GetEdges ()
{
  if ( !_FEdges ) ComputeMainEdges ();
  return (const double *) _Edges;
}
//
//==================================================
// GetNormals : lecture des normales
//==================================================
//
inline const double * CATMSHGeometricalEngine::GetNormals ( int Normalize )
{
  if ( !_FNormals ) ComputeMainNormals();
  if ( !_FNormals ) return NULL;
  return (const double *) _MainNormals;
}
//
//==================================================
// lecture des coordonnées de la boite d'encombrement
//==================================================
//
inline const double * CATMSHGeometricalEngine::GetBox ()
{
  if ( !_FBox )
  {
    HRESULT hr = ComputeBox ();
    if (hr!=S_OK) return NULL;
  }
  return (const double *) _Box;
}

//
//==================================================
// lecture des angles interieurs a la face
//==================================================
//
inline const double * CATMSHGeometricalEngine::GetNodesInteriorAngles ( int NumFace, int & oNbNodesOfFace )
{
  if ( _FNAngles != NumFace ) 
  {
    HRESULT hr = ComputeNodesInteriorAngles( NumFace );
    if ( hr!=S_OK || _FNAngles < 0  ) return NULL;
  }
  oNbNodesOfFace = _NbEdges;

  return (const double *) _NAngles;
}

//
//==================================================
// GetAreas : lecture des aires des faces de l'élément
//==================================================
//
/*
inline const double * CATMSHGeometricalEngine::GetAreas ( int IntegrationLevel )
{
  if ( _FAreas != IntegrationLevel  ) ComputeAreas ( IntegrationLevel );
  if ( _FAreas != IntegrationLevel ) return NULL;
  return (const double *) _Areas;
}
*/
#endif


