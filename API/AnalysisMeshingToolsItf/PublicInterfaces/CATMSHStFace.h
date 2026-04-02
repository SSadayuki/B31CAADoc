#ifndef CATMSHStFace_h
#define CATMSHStFace_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */

//=============================================================================
//
// CATMSHStFace :
//
// Objet modèlisant une face dans la base de donnee maillage hierarchique
//
//=============================================================================
// Octobre 1999  Création                          Gerard Soubeyre
//=============================================================================

#include "MSHStudio.h"
#include "CATMSHStudioObject.h"
#include "CATSysAllocator.h"

class CATMSHPointOnSupport;
class CATMSHStNode;
class CATMSHStEdge;
class CATMSHStFace;
class CATMSHStRegion;
class CATMSHStudio;
class CATMSHStudioPartition;
class CATMSHElement;
class CATIMSHConnectivity;
class CAT3DCustomRep;
class CATMSHGeometricalEngine;

/**
 * Object representing a face in the studio.
 */

class ExportedByMSHStudio CATMSHStFace : public CATMSHStudioObject
{
  friend class CATMSHStRegion;
public:
  CATDeclarePagedNewOverride(CATMSHStFace)

// Méthodes et données membres publiques

public:

enum Connectivity
{
  TR3 =  0, TR6 =  1,
  QD4 =  2, QD8 =  3
};
/**
 * @nodoc
 * Initialisation a la creation d'un studio
 */
  static void Init(CATMSHStudio * Studio);
/**
 * @nodoc
 * Recherche d'une face liée a partir de ses edges
 */
  static CATMSHStFace * Find ( int NbOfEdges , CATMSHStEdge * const Edges[] );
/**
 * @nodoc
 * Construction du point du centre de la face
 */
  int ComputePosition (int NbPoints, const CATMSHPointOnSupport * Points[], CATMSHPointOnSupport *& Point);   
/**
 * @nodoc
 * Constructeur
 */
  CATMSHStFace ( CATMSHStudioPartition * Partition ,
	      int NbOfEdges, CATMSHStEdge ** Edges );
/**
 * @nodoc
 * Type de l'objet
 */
  const char * IsA () const {return "Face";};
/**
 * @nodoc
 * Lecture du type studio
 */
  virtual const CATMSHStTypeOfObject GetType() const {return CATMSHStTypeFace;};
/**
 * @nodoc
 * Lecture de la dimension
 */
  const int GetDimension() const {return 2;};
/**
 * @nodoc
 * Construction d'un point sur support
 */
  virtual int ComputePosition (CATMSHPointOnSupport * Point);  
/**
 * @nodoc
 * Recherche du premier edge de la face commun avec Face
 */
  CATMSHStEdge * GetCommonEdge ( CATMSHStFace * Face , int * NuEdge ) const;
/**
 * @nodoc
 * Calcul de la taille de l'objet Face
 */
  int SizeOf () const;
/**
 * @nodoc
 * Lecture de la connectivite d'un edge
 */
  CATIMSHConnectivity * GetConnectivity ();
/**
 * @nodoc
 * Lecture des connectivites des edges
 */
  static CATIMSHConnectivity * GetConnectivity ( Connectivity Type )
  { return CATMSHStFace::_Connectivity[Type]; };
/**
 * @nodoc
 * Lecture des noeuds de la face 
 */
  HRESULT GetComposition( CATMSHStListOfObjects &ListOfNodes ) ;
/**
 * @nodoc
 * Lecture des Edges de la face
 */
  void GetEdges( CATMSHStListOfObjects &ListOfEdges );
/**
 * @nodoc
 * Calcul de l'orientation d'un edge 
 */
  int GetOrientation( const CATMSHStudioObject * const Father );
/**
 * @nodoc
 * BuildRep (implémentation de CATI3DGeoVisu)
 */
  HRESULT BuildRep ( CAT3DCustomRep * Rep , int Level=1, CATGraphicAttributeSet * Attribut=NULL );
/**
 * @nodoc
 * BuildRep (implémentation de CATI3DGeoVisu)
 */
  CAT3DRep * BuildRep (int Level=0, CATGraphicAttributeSet * Attribut=NULL );
/**
 * @nodoc
 * LoadGE initialise un geometrical engine
 */
  HRESULT LoadGE ( CATMSHGeometricalEngine * & GE, CATMSHStListOfObjects & List );

// Méthodes et données membres protected

protected:

/**
 * @nodoc
 * Destructeur
 */
  virtual ~CATMSHStFace ();

  // Données membres

  static int NumberOf;
  static CATIMSHConnectivity * _Connectivity[4];
};
#endif
