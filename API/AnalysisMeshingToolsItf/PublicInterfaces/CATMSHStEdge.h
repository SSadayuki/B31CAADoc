#ifndef CATMSHStEdge_h
#define CATMSHStEdge_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */

//=============================================================================
//
// CATMSHStEdge :
//
// Objet modèlisant un edge dans la base de donnee maillage hierarchique
//
//=============================================================================
// Octobre 1998  Création                          Gerard Soubeyre
//=============================================================================

#include "MSHStudio.h"
#include "CATMSHStudioObject.h"
#include "CATMSHStNode.h"
#include "CATSysAllocator.h"

class CATMSHStudio;
class CATMSHStIntNode;
class CATMSHElement;
class CATMSHPointOnSupport;
class CAT3DRep;

/**
 * Object representing an edge in the studio.
 */

class ExportedByMSHStudio CATMSHStEdge : public CATMSHStudioObject
{
  friend class CATMSHStNode;
  friend class CATMSHStFace;
public:

 CATDeclarePagedNewOverride(CATMSHStEdge)

// Méthodes et données membres publiques

public:

enum Connectivity
{
  BAR =  0, BAR3 =  1
};
/**
 * @nodoc
 * Initialisation a la creation d'un studio
 */
  static void Init(CATMSHStudio * Studio);
/**
 * @nodoc
 * Constructeur
 */
  CATMSHStEdge ( CATMSHStudioPartition * Partition , const int NbNodes , CATMSHStNode * const Nodes[] );
/**
 * @nodoc
 * Type de l'objet
 */
  virtual const char * IsA () const;
/**
 * @nodoc
 * Lecture du type studio
 */
  virtual const CATMSHStTypeOfObject GetType() const {return CATMSHStTypeEdge;};
/**
 * @nodoc
 * Lecture de la dimension
 */
  inline const int GetDimension() const;
/**
 * @nodoc
 * Construction d'un point sur support
 */
  int ComputePosition (CATMSHPointOnSupport * Point);  
/**
 * @nodoc
 * Calcul de la sag
 */
  virtual HRESULT ComputeSag ( double &Sag , double * Lenght=NULL );  
/**
 * @nodoc
 * Lecture des noeuds de l'edge 
 */
  HRESULT GetComposition( CATMSHStListOfObjects &ListOfNodes );
/**
 * @nodoc
 * Lecture des noeuds de l'edge + noeud intermediaire
 */
//  HRESULT GetAllComposition( CATMSHStListOfObjects &ListOfNodes ) const;
/**
 * @nodoc
 * Lecture de l'edge
 */
  void GetEdges( CATMSHStListOfObjects &ListOfEdges ) ;
/**
 * @nodoc
 * Recherche d'un edge lie a partir de ses noeuds
 */
  static CATMSHStEdge * Find ( int NbOfNodes, const CATMSHStNode * const Nodes[] );
/**
 * @nodoc
 * Calcul de direction de l'edge et de sa longueur
 */
  double Direction( double Vect[3] ) const;
/*
 * @nodoc
 * Calcul de la taille memoire de l'objet Edge
 */
  int SizeOf () const;
/**
 * @nodoc
 * Lecture de la connectivite d'un edge
 */
  inline CATIMSHConnectivity * GetConnectivity () ;
/**
 * @nodoc
 * Lecture des connectivites des edges
 */
  inline static CATIMSHConnectivity * GetConnectivity ( Connectivity Type );
/**
 * @nodoc
 * BuildRep (implémentation de CATI3DGeoVisu)
 */
  CAT3DRep * BuildRep (int Level=0, CATGraphicAttributeSet * Attribut=NULL );

// Méthodes et données membres protected

protected:

/**
 * @nodoc
 * Destructeur
 */
  virtual ~CATMSHStEdge ();


  // Données membres

  static int NumberOf;
  static CATIMSHConnectivity * _Connectivity[2];

private:

/**
 * Constructeur par defaut
 */
  CATMSHStEdge();
/**
 * Constructeur recopie
 */
  CATMSHStEdge(const CATMSHStudioObject & Source );
/**
 * Operateur d'affectation
 */
  CATMSHStEdge& operator=(const CATMSHStudioObject & Source );

};
//
// GetDimension
//
inline const int CATMSHStEdge::GetDimension () const
{
  return 1 ;
}
//
// Lecture des connectivites des edges
//
inline CATIMSHConnectivity * CATMSHStEdge::GetConnectivity(Connectivity Type )
{
  return _Connectivity[Type];
}  
//
// Calcul de la connectivite de l'edge
//
inline CATIMSHConnectivity * CATMSHStEdge::GetConnectivity() 
{
  return _Connectivity[BAR];
}  
#endif


