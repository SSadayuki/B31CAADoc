#ifndef CATMSHStNode_h
#define CATMSHStNode_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */

//=============================================================================
//
// CATMSHStNode :
//
// Objet modèlisant un noeud dans le MSHStudio
//
//=============================================================================
// Octobre 1998  Création                          Gerard Soubeyre
//=============================================================================

#include "MSHStudio.h"
#include "CATMSHStudioObject.h"
#include "CATSysAllocator.h"

class CATMSHPointOnSupport;
class CATMSHStEdge;
class CATMSHStFace;
class CATMSHStudioPartition;
class CAT3DCustomRep;

/**
 * Object representing a node in the studio.
 */

class ExportedByMSHStudio CATMSHStNode : public CATMSHStudioObject
{
  friend class CATMSHStEdge;
  friend class CATMSHStPartitionTransaction;
  // Méthodes et données membres publiques

public:
  CATDeclarePagedNewOverride(CATMSHStNode)

public:
/**
 * @nodoc
 * Constructeur des coordonnees
 */
  CATMSHStNode ( CATMSHStudioPartition * Partition , const CATMSHPointOnSupport * Point );
/**
 * Read the node coordinates.
 */
  const double * GetCoordinates () const;
/**
 * @nodoc
 * Lecture des coordonnées
 */
  void GetCoordinates ( double * Coordinates ) const;
/**
 * @nodoc
 * Lecture du type studio
 */
  virtual const CATMSHStTypeOfObject GetType() const {return CATMSHStTypeNode;};
/**
 * @nodoc 
 * Type de l'objet
 */
  virtual const char * IsA () const;
/**
 * @nodoc
 * Lecture de la dimension
 */
  inline const int GetDimension() const;
/**
 * @nodoc
 * Lecture du point sur support
 */
  inline const CATMSHPointOnSupport * GetPosition () const;
/**
 * @nodoc
 * Construction d'un point sur support
 */
  int ComputePosition (CATMSHPointOnSupport * Point);  
/**
 * @nodoc
 * Positionnement
 */
  void SetPosition ( const CATMSHPointOnSupport * Point );  
/**
 * @nodoc
 * Calcul du centre de l'objet en float
 */
  void GetCenter ( float * Center ) const;
/**
 * @nodoc
 * Calcul du centre de l'objet en double
 */
  void GetCenter ( double * Center ) const;
/**
 * @nodoc
 * Calcul de la boite d'encombrement
 */
  void GetBox ( double PtMin[] , double PtMax[] ) const;
/**
 * @nodoc
 * Lecture de la composition de l'objet en StNode
 */
  HRESULT GetComposition( CATMSHStListOfObjects &ListOfNodes ) ;
/**
 * @nodoc
 * Recherche des noeuds lies par un edge
 */
  int GetLinkedNodes ( CATMSHStListOfObjects &ListOfNodes ) const ;
/**
 * @nodoc
 * Recherche des noeuds lies par une face 
 * Si Partition definie: prise en compte uniquement des StFaces de cette partition 
 */
HRESULT GetLinkedNodesByFaces( CATMSHStListOfObjects &ListOfNodes, const CATIMSHStPartition * Partition=NULL ) const;
/**
 * @nodoc
 * Recherche des faces communes aves un autre noeud 
 * Si Partition definie: prise en compte uniquement des StFaces de cette partition 
 */
HRESULT GetCommonFaces( const CATMSHStNode * Node, CATMSHStListOfObjects &ListOfFaces, const CATIMSHStPartition * Partition=NULL ) const;
/**
 * @nodoc
 * Recherche des Faces liees
 */
  int GetLinkedFaces ( CATMSHStListOfObjects &ListOfFaces ) const ;
/**
 * @nodoc
 * Calcul de la taille de l'objet StNode
 */
  virtual int SizeOf () const;
/**
 * @nodoc
 * Lecture de la connectivite
 */
  CATIMSHConnectivity * GetConnectivity ();
/**
 * @nodoc
 * BuildRep (implémentation de CATI3DGeoVisu)
 */
  virtual CAT3DRep * BuildRep (int Level=0, CATGraphicAttributeSet * Attribut=NULL );

 // Méthodes et données membres protected

protected:

/**
 * @nodoc
 * Destructeur
 */
  virtual ~CATMSHStNode ();
/**
 * @nodoc
 * Ecriture direct du point sans impact
 */
  void SetPoint ( CATMSHPointOnSupport * const Point ) {_Point=Point;};  

  // Données membres

  static int NumberOf;
  CATMSHPointOnSupport * _Point;
};
//
// GetDimension
//
inline const int CATMSHStNode::GetDimension () const
{
  return 0;
}
//
// =============================================
// Lecture du point sur support
// =============================================
//
inline const CATMSHPointOnSupport * CATMSHStNode::GetPosition () const
{
  return _Point;
}
#endif



