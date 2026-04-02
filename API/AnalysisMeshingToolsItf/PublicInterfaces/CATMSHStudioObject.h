#ifndef CATMSHStudioObject_h
#define CATMSHStudioObject_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */

//=============================================================================
//
// CATMSHStudioObject :
//
// Objet dont derivent les objets de base ( vertexs,edges,..) composant le MSHStudio
//
//
//=============================================================================
// Octobre 1998  Création                          Gerard Soubeyre
//=============================================================================
#include "MSHStudio.h"
#include "CATMSHStudioStruct.h"
#include "IUnknown.h"
#include "CATDataType.h"
#include <stddef.h>

class CATMSHStStack;
class CATMSHStudio;
class CATMSHStudioPartition;
class CATIMSHStPartition;
class CATMSHStPartitionTransaction;
class CATIMSHConnectivity;
class CATGeometry;
class CAT3DRep;
class CATUnicodeString;
class CATMSHPointOnSupport;
class CATMSHStListOfObjects;
class CATGraphicAttributeSet;

/**
 * Base object representing a node, an edge or a face in the studio.
 */

class ExportedByMSHStudio CATMSHStudioObject
{
  friend class CATMSHStStack;
  friend class CATMSHStudio;
  friend class CATMSHStudioPartition;
  friend class CATMSHStPartitionTransaction;

// Méthodes et données membres publiques

public:

/**
 * Read the dimension of the studio object.<dd>
 * If the dimension is 0, the object is an edge.<dd>
 * If the dimension is 1, the object is an edge.<dd>
 * If the dimension is 2, the object is a face.<dd>
 */
  virtual const int GetDimension() const =0 ;

/**
 * @nodoc
 * Suppression de l'entite avec impact
 */
  static HRESULT Remove(CATMSHStudioObject * Object);
/**
 * @nodoc
 * Lecture des compteurs
 */
  static void GetCounts(int &NumberOfCreated , int &NumberOfExisting);
/**
 * @nodoc
 * Renvoie l'indice de l'objet le plus proche de coor dans la liste
 */
  static int GetNearest ( const CATMSHStListOfObjects &List, const double Coordinates[3] );
/**
 * @nodoc
 * Lecture du type
 */
  virtual const char * IsA() const =0 ;
/**
 * @nodoc
 * Lecture du type studio
 */
  virtual const CATMSHStTypeOfObject GetType() const =0 ;
/**
 * @nodoc
 * Lecture de la dimension du support de 'lobjet
 */
  virtual const int GetSupportDimension() const;
/**
 * @nodoc
 * Export d'un objet dans le pere du studio
 */
  virtual void * Export ( int ExportSons = 0 );
/**
 * @nodoc
 * Lecture de la connectivite
 */
  virtual CATIMSHConnectivity * GetConnectivity () ;
/**
 * @nodoc
 * Lecture de la composition de l'objet en noeuds
 */
  virtual HRESULT GetComposition(  CATMSHStListOfObjects &ListOfNodes ) =0;
/**
 * @nodoc
 * Lecture de la composition de l'objet en noeuds + noeuds intermediaires
 */
//  virtual HRESULT GetAllComposition(  CATMSHStListOfObjects &ListOfNodes ) const =0;
/**
 * @nodoc
 * Lecture de la composition de l'objet en edges et noeuds
 */
  virtual HRESULT GetNodesAndEdges( CATMSHStListOfObjects &ListOfNodes,
                                       CATMSHStListOfObjects &ListOfEdges);
/**
 * @nodoc
 * Lecture des Edges d'un objet
 */
  virtual void GetEdges( CATMSHStListOfObjects &ListOfEdges );
/**
 * @nodoc
 * Lecture de l'objet exporte
 */
  void * GetExported() const {return _ExportedEntity;};
/**
 * @nodoc
 * Lecture du nom
 */
  void GetName ( CATUnicodeString &Name ) const;
/**
 * @nodoc
 * Calcul de la taille de l'objet StudioObject
 */
  virtual int SizeOf () const;
/**
 * @nodoc
 * Calcul du centre de l'objet en float
 */
  virtual void GetCenter ( float * Center ) const;
/**
 * @nodoc
 * Calcul du centre de l'objet en double
 */
  virtual void GetCenter ( double * Center ) const;
/**
 * @nodoc
 * Calcul de la boite d'encombrement
 */
  virtual void GetBox ( double PtMin[] , double PtMax[] );
/**
 * @nodoc
 * Dump listing
 */
  virtual void Dump ();
/**
 * @nodoc
 * Check
 */
  virtual int Check ();
/**
 * @nodoc
 * Acces a la Partition
 */
  CATIMSHStPartition * GetPartition () const {return (CATIMSHStPartition *)_Partition;};
/**
 * @nodoc
 * Acces au pointeur du precedent
 */
  CATMSHStudioObject * Previous () const {return _Previous;};
/**
 * @nodoc
 * Acces au pointeur du suivant
 */
  CATMSHStudioObject * Next () const {return _Next;};
/**
 * @nodoc
 * Acces au nombre d'objets de la famille
 */
  short GetNbOfObjects() const;
/**
 * @nodoc
 * Acces au pointeur sur la liste des fils
 */
  inline CATMSHStudioObject *const* GetSons (short & NbOfSons) const;
/**
 * @nodoc
 * Acces au nombre de fils
 */
  short GetNbOfSons () const { return _NbOfSons;};
/**
 * @nodoc
 * Acces au nombre de peres
 */
  short GetNbOfFathers () const { return _NbOfFathers;};
/**
 * @nodoc
 * Acces a la liste des peres
 */
  inline CATMSHStudioObject *const* GetFathers (short & NbOfFathers) const;
/**
 * @nodoc
 * Acces au pointeur sur la liste des peres
 */
  CATMSHStudioObject *const* GetFathers () const {return (CATMSHStudioObject *const*) _Family;};
/**
 * @nodoc
 * Recherche de tous les objets peres direct et indirect
 */
  HRESULT GetAllFathers ( CATMSHStListOfObjects &ListOfFathers ) const ;
/**
 * @nodoc
 * Recherche de tous les objets fils direct et indirect
 */
  HRESULT GetAllSons ( CATMSHStListOfObjects &ListOfSons ) const;
/**
 * @nodoc
 * Recherche de tous les elements lies (tous les fils representant un element) avec concatenation
 */
  HRESULT GetAllElements ( CATMSHStListOfObjects &ListOfElements ) const;
/**
 * @nodoc
 * Recherche s íl existe au moins un element lié 
 */
  int HasLinkedElement () const;
/**
 * @nodoc
 * Ajout dans la pile de tous les elements de la descendance de l'objet
 * Retourne 0 Ajout dans la pile de tous les elements de la descendance de l'objet
 */
  int AddLinkedElements ( CATMSHStStack &LinkedElements) const;
/**
 * @nodoc
 * L'objet est gele ?
 */
  virtual int IsFrozen () const {return _Attribut.extend.frozen;};
/**
 * @nodoc
 * Gele l'objet
 */
  void Freeze( int WithImpact=0 );
/**
 * @nodoc
 * Degele l'objet ( pour le printemps )
 */
  void UnFreeze() { _Attribut.extend.frozen = 0;};
/**
 * @nodoc
 * Lecture du champs active
 */
  int IsActive() const {return _Attribut.extend.active;} ;
/**
 * @nodoc
 * Lecture du champs isexported
 */
  int IsExported() const {return _Attribut.extend.isexported;};
/**
 * @nodoc
 * Lecture du champs external
 */
  int IsExternal() const {return _Attribut.extend.external;} ;
/**
 * @nodoc
 * Retrait de l'object de la transaction courante
 */
  void ResetFromTransaction ();
/**
 * @nodoc
 * L'object est-il crée dans la transaction courante
 */
  int IsCreatedInTransaction () const {return _Attribut.extend.createdin;};
/**
 * @nodoc
 * Marquage de l'object crée dans transaction courante
 */
  void CreatedInTransaction ( int Position );
/**
 * @nodoc
 * L'object est-il detruit dans la transaction courante
 */
  int IsDeletedInTransaction () const {return _Attribut.extend.deletedin;};
/**
 * @nodoc
 * Marquage de l'object detruit dans transaction courante
 */
  void DeletedInTransaction ( int Position );
/**
 * @nodoc
 * L'object est-il modifié dans la transaction courante
 */
  int IsModifiedInTransaction () const {return _Attribut.extend.modifiedin;};
/**
 * @nodoc
 * Marquage de l'object modifié dans transaction courante
 */
  void ModifiedInTransaction ( int Position );
/**
 * @nodoc
 * Ecriture du champs isexported
 */
  void Exportable (int IsExported);
/**
 * @nodoc
 * Acces au pointeur de l'entite intermediaire
 */
  CATMSHStudioObject * GetInter () const;
/**
 * @nodoc
 * Noeud intermediaire ?
 */
  int IsInter () const {return _Attribut.extend.isinter;} ;
/**
 * @nodoc
 * Recherche d'un fils
 */
  short IsASon( const CATMSHStudioObject * const Son ) const;
/**
 * @nodoc
 * Recherche d'un pere
 */
  short IsAFather( const CATMSHStudioObject * const Father ) const;
/**
 * @nodoc
 * Lecture du champs modify
 */
  int IsModified() const {return _Attribut.extend.modify;} ;
/**
 * @nodoc
 * Calcul de l'orientation par rapport d'un fils
 */
  virtual int GetOrientation( const CATMSHStudioObject * const Father );
/**
 * @nodoc
 * BuildRep (implémentation de CATI3DGeoVisu)
 */
  virtual CAT3DRep * BuildRep ( int Level=0, CATGraphicAttributeSet * Attribut=NULL ) =0;
/**
 * @nodoc
 * renvoie la CAT3DRep
 */
  CAT3DRep * GetRep();
/**
 * @nodoc
 * detruit le CAT3DCustomRep
 */
  void DeleteRep();
/**
 * @nodoc
 * Construction d'un point sur support
 */
  virtual int ComputePosition ( CATMSHPointOnSupport * Point )=0;  
/**
 * @nodoc
 * Calcul de la sag
 */
  virtual HRESULT ComputeSag ( double &Sag , double * Lenght=NULL );  
/**
 * @nodoc
 * Positionnement
 */
  virtual void SetPosition ( const CATMSHPointOnSupport * Point );  
/**
 * @nodoc
 * Affiche le tag de l'element ou du noeud
 */
  unsigned int GetExternalTag() const ;
/**
 * @nodoc
 * Affiche le tag de l'element ou du noeud
 */
  unsigned int GetInternalTag() const ;
/**
 * @nodoc
 * Replace
 */
  virtual void Replace ( CATMSHStudioObject * StudioObject , int Export );
/**
 * @nodoc
 * Inverse Orientation
 */  
  void InverseOrientation ();
/**
 * @nodoc
 * Notification de modification de l'objet et propagation dans les fils
 */
  void Modified ( );
/**
 * @nodoc
 * Ecriture l'objet associe
 */
  void SetExported ( const void * const Object );
/**
 * @nodoc
 * Recherche des noeuds lies a l'objet sur N couches
 */
  HRESULT GetLayerNodes ( int NbLayer , CATMSHStListOfObjects &ListOfNodes);
/**
 * @nodoc
 * Mise a On du flag user
 */
  void FlagOn (int NuFlag);
/**
 * @nodoc
 * Mise a Off du flag user
 */
  void FlagOff (int NuFlag);
/**
 * @nodoc
 * Lecture du flag user 0 Off 1 On
 */
  int Flag (int NuFlag) const;
/**
 * @nodoc
 * Lecture de la position de travail
 */
  inline CATINTPTR GetWorkAsInt () const;
/**
 * @nodoc
 * Lecture de la position de travail
 */
  inline void * GetWorkAsPtr () const;
/**
 * @nodoc
 * Ecriture de la position de travail
 */
  inline void SetWorkAsInt ( CATINTPTR Work );
/**
 * @nodoc
 * Ecriture de la position de travail
 */
  inline void SetWorkAsPtr ( void * Work );
/**
 * @nodoc
 * Acces au support
 */
  CATMSHStudioObject * const GetSupport() const { return (CATMSHStudioObject *) _Family; } ;


// Méthodes et données membres protected

protected:

/**
 * @nodoc
 * Constructeur
 */
  CATMSHStudioObject ( CATMSHStudioPartition * const Partition );
/**
 * @nodoc
 * Destructeur
 */
  virtual ~CATMSHStudioObject ();
/**
 * @nodoc
 * Remove
 */
  virtual void Remove ();
/**
 * @nodoc
 * Ecriture d'une entite intermediaire
 */
  HRESULT SetInter (CATMSHStudioObject *);
/**
 * @nodoc
 * Recherche d'un objet a partir de ses peres
 */
  static CATMSHStudioObject * FindSon( int NbOfFathers , const CATMSHStudioObject * const Fathers[] );

  // Données membres

  CATMSHStudioPartition  * _Partition;
  CAT3DRep *               _Rep;
  void *                   _ExportedEntity;

  union
  {
    int attribute;
    struct
    {
      unsigned short stacks      : CATMSHStNbStacks;
      unsigned short flags       : CATMSHStNbUFlags;
      unsigned short frozen      : 1;
      unsigned short external    : 1;
      unsigned short isexported  : 1;
      unsigned short modify      : 1;
      unsigned short ongeometry  : 1;
      unsigned short hasinter    : 1;
      unsigned short isinter     : 1;
      unsigned short createdin   : 1;
      unsigned short deletedin   : 1;
      unsigned short modifiedin  : 1;
      unsigned short active      : 1;
    } extend ;
  } _Attribut;

/**
 * @nodoc
 * Ajout d'un fils
 */
  void AddSon ( CATMSHStudioObject * Son , short Increment=2 );
/**
 * @nodoc
 * Ajout d'un objet intermediare pere ou fils
 */
  void AddInter ( CATMSHStudioObject * Inter );
/**
 * @nodoc
 * Suppression d'un fils
 */
  short RemoveSon( CATMSHStudioObject * Son );
/**
 * @nodoc
 * Determination des peres
 */
  void SetFathers ( int NbOfFathers , CATMSHStudioObject ** Fathers , short Increment=2 );
/**
 * @nodoc
 * Ecriture du support pour les objets intermédiaires ( noeuds )
 */
  HRESULT SetSupport ( CATMSHStudioObject * Support );
/**
 * @nodoc
 * Acces au pointeur sur la liste des fils
 */
  CATMSHStudioObject ** Sons () const
  { return _Family + _NbOfFathers + (short)_Attribut.extend.hasinter; };
/**
 * @nodoc
 * Acces au pointeur sur la liste des peres
 */
//  CATMSHStudioObject ** Fathers () const { return _Family;};


private:

/**
 * Constructeur par defaut
 */
  CATMSHStudioObject();
/**
 * Constructeur recopie
 */
  CATMSHStudioObject(const CATMSHStudioObject & Source );
/**
 * Operateur d'affectation
 */
  CATMSHStudioObject& operator=(const CATMSHStudioObject & Source );
/**
 * Acces a la Partition
 */
  CATMSHStudioPartition * GetPartitionImpl () const {return _Partition;};
/**
 * Mise a vrai du flag active
 */
  void Active() {_Attribut.extend.active=1;};
/**
 * Mise a faux du flag active
 */
  void UnActive() {_Attribut.extend.active=0;};

  // Données membres

  static unsigned int     _NumberOfCreated;
  static unsigned int     _NumberOfExisting;
  static const int        StBits[CATMSHStNbUFlags];

  CATMSHStudioObject **   _Family;
  CATMSHStudioObject  *   _Next;
  CATMSHStudioObject  *   _Previous;
  union
  {
    void *                AsPtr;
    CATINTPTR             AsInt;
  }                       _Work;
  unsigned int            _Tag;
  int                     _PositionTransaction;
  short                   _NbOfFathers;
  short                   _NbOfSons;
  short                   _SizeOfFamily;
  static short            MaxNbOfFathers;
  static short            MaxNbOfSons;

};
//
// GetSons
//
inline CATMSHStudioObject *const* CATMSHStudioObject::GetSons (short & NbOfSons) const
{
  NbOfSons = _NbOfSons;
  return (CATMSHStudioObject *const*) Sons();
}
//
// GetFathers
//
inline CATMSHStudioObject *const* CATMSHStudioObject::GetFathers (short & NbOfFather) const
{
  NbOfFather = _NbOfFathers;
  return (CATMSHStudioObject *const*) _Family;
}

//
//==================================================
// SetWork: écriture de la position de travail
//==================================================
//
inline void CATMSHStudioObject::SetWorkAsInt ( CATINTPTR Work )
{
  _Work.AsInt = Work;
}

//
//==================================================
// SetWork: écriture de la position de travail (domaines de maillage)
//==================================================
//
inline void CATMSHStudioObject::SetWorkAsPtr ( void * Work )
{
  _Work.AsPtr = Work;
}

//
//==================================================
// GetWork: lecture du int Work
//==================================================
//
inline CATINTPTR CATMSHStudioObject::GetWorkAsInt () const
{
  return _Work.AsInt;
}

//
//==================================================
// GetWork: lecture du void * Work
//==================================================
//
inline void * CATMSHStudioObject::GetWorkAsPtr () const
{
  return _Work.AsPtr;
}
#endif

