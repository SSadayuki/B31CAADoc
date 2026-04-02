#ifndef CATMSHStSpecManager_h
#define CATMSHStSpecManager_h
// COPYRIGHT Dassault Systemes 2004

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */
//=============================================================================
//
// CATMSHStSpecManager :
//
// Management of Studio Specifications
//
//=============================================================================
// Juillet 2004  Création                          Gerard Soubeyre
//=============================================================================
#include "MSHStudio.h"
#include "CATMSHStudioStruct.h"
#include "CATIMSHStudioSpec.h"
#include "CATBaseUnknown.h"
#include <stddef.h>
#include <list.h>

class CATMSHStudio;
class CATIMSHStudio;
class CATIMSHStudioSpec;
class CATMSHStudioObject;
class CATMSHStudioPartition;
class CATMSHHashPTab;
class CATMSHStSpecStream;
class CATIMSHLocalSpecification;
class CATIMSHMesherAccess;
class CATMSHStCaptureSpecManager;
class CATIMSHMeshPart;

class ExportedByMSHStudio CATMSHStSpecManager: public CATBaseUnknown
{

  friend class CATMSHStudio;
  friend class CATMSHStSpecStream;

// Méthodes et données membres publiques

public:

/**
 * Constructs a SpecManager
 */
  CATMSHStSpecManager ();
/**
 * Initialize the contains of the SpecManager
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The Initialize is OK.
 *   <dt>E_FAIL</dt><dd>The Initialize failed.
 *   </dl>
 * @param Studio
 *   Accociated Studio .
 * @param CATIMSHMesherAccess
 *   Accociated CATIMSHMesherAccess .
 */
  HRESULT Initialize( CATIMSHStudio * Studio, CATIMSHMesherAccess * Access );
/**
 * Remove the contains of the SpecManager
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The Remove is OK.
 *   <dt>E_FAIL</dt><dd>The Remove failed.
 *   </dl>
 */
  HRESULT Remove ();
/**
 * Create a mesh specification.
 * Example:
 * <tt>CATIMSHStudioSpec ** Spec = NULL;</tt><dd>
 * <tt>HRESULT hr = CreateSpec( "SpecName", Spec );</tt><dd>
 * <tt>if ( FAILED ( hr ) ) return hr;</tt><dd>
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Creation is OK.
 *   <dt>E_FAIL</dt><dd>Creation failed.
 *   </dl>
 * @param Type
 *   @href CATClassId of the mesh specification
 * @param Spec [out, CATBaseUnknown#Release]
 *   The created mesh specification.
 */
  virtual HRESULT CreateSpec ( CATClassId Type, CATIMSHStudioSpec * &Spec );
/**
 * Compute the compatibility data @href CATMSHStSpecCompatibility of a mesh specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Compute is OK.
 *   <dt>E_FAIL</dt><dd>Compute has failed.
 *   </dl>
 * @param Spec
 *   The mesh specification to compute the compatibility with existing mesh sepcifications.
 * @param NbConflict
 *   The number of conflict between the <tt>Spec</tt> and others mesh specifications.
 */
  virtual HRESULT ComputeCompatibility( CATIMSHStudioSpec * Spec, int &NbConflict );
/**
 * Analyse la compatibilite entre 2 SpecConditions
 */
  int IsCompatible(const CATMSHStSpecCondition &Cond1 , const CATMSHStSpecCondition &Cond2 ) const;
/**
 * Register a mesh specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Register is OK.
 *   <dt>E_FAIL</dt><dd>Register has failed.
 *   </dl>
 * @param Spec
 *   The mesh specification to register.
 */
  virtual HRESULT RegisterSpec ( CATIMSHStudioSpec * Spec );
/**
 * Register a mesh specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Removal is OK.
 *   <dt>E_FAIL</dt><dd>Removal failed.
 *   </dl>
 * @param Spec
 *   The mesh specification to unregister.
 * @param DeleteMesh
 *   <br><b>Legal values</b>:
 *   <dl><dt>0</dt><dd>Remove mesh specification but keep the mesh.
 *   <dt>>0</dt><dd>Remove both mesh specification and mesh.
 *   </dl>
 */
  virtual HRESULT UnRegisterSpec (CATIMSHStudioSpec * Spec , int DeleteMesh=1 );
/**
 * Run a mesh specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Run is OK.
 *   <dt>E_FAIL</dt><dd>Run has failed.
 *   </dl>
 * @param Spec
 *   The mesh specification to run.
 */
  virtual HRESULT ExecuteSpec ( CATIMSHStudioSpec * Spec );
/**
 * @nodoc
 * Chargement initial de toutes les specs
 */
  HRESULT LoadSpecs ();
/**
 * @nodoc
 * Génération du maillage sur toutes les specifications
 */
  HRESULT MeshSpecifications();
/**
 * @nodoc
 * Génération du maillage sur toutes les partitions se pretant au mailleur dedié
 */
  HRESULT MeshAutoDedicated(CATMSHStListOfPartitions &Partitions);
/**
 * @nodoc
 * Mise a jour du maillage.
 */
  HRESULT Update(CATBaseUnknown * EventPublisherProgress=NULL, short MeshSpecifications = 1);
/**
 * @nodoc
 * Génération du maillage sur une liste de partition
 */
  HRESULT Mesh(CATMSHStListOfPartitions &Partitions);
/**
 * @nodoc
 * Remaillage des zones modifiées
 */
  HRESULT ReMesh();
/**
 * @nodoc
 * Enregistrement de la spec par defaut
 */
  HRESULT SetDefaultSpec( CATIMSHStudioSpec * Spec );
/**
 * @nodoc
 * Lecture du MesherAccess
 */
  CATIMSHMesherAccess * GetMesherAccess() {return _MesherAccess;};
/**
 * Take account Specs in SizeMap
 */
  HRESULT UpdateSizeMap();
/**
 * @nodoc
 * Lecture de la spec par defaut
 */
  CATIMSHStudioSpec * GetDefaultSpec() {return _DefaultSpec;};
/**
 * @nodoc
 * Ajout d'une Spec sans impact sur le maillage ( unstream undo) 
 */
  HRESULT AddSpec ( CATIMSHStudioSpec * Spec );
/**
 * @nodoc
 * Retrait d'une Spec sans impact sur le maillage ( unstream undo ) 
 */
  HRESULT RemoveSpec ( CATIMSHStudioSpec * Spec, int DeleteMesh );
/**
 * @nodoc
 * Execution d'une spec maillage 
 */
  HRESULT UpdateSpec( CATIMSHStudioSpec * Spec, int WithImpact );
/**
 * @nodoc
 * Ajout dans la liste des specs en attente
 */
  virtual HRESULT AddStandbySpec ( CATIMSHStudioSpec * Spec );
/**
 * @nodoc
 * Enregistrement des specs en attente
 */
  virtual HRESULT RegisterStandbySpec ();
/**
 * @nodoc
 * Renvoie la spec invalide ( cree mais pas enregistree dans studio )
 */
  CATIMSHStudioSpec * GetTrashSpec ( int Index );
/**
 * @nodoc
 * Renvoie le nombre de specs invalides ( crees mais pas enregistrees dans studio )
 */
  int GetNumberOfTrashSpec ()  const ;
/**
 * @nodoc
 * Cree la table de specs invalides ( crees mais pas enregistrees dans studio )
 */
  HRESULT CreateTrashSpecTable ( int SizeOf );
/**
 * @nodoc
 * Ajoute la spec invalide ( cree mais pas enregistree dans studio )
 */
  int AddTrashSpec ( CATIMSHStudioSpec * Spec );
/**
 * @nodoc
 * Supprime la spec invalide ( cree mais pas enregistree dans studio )
 */
  int RemoveTrashSpec ( CATIMSHStudioSpec *& Spec );
/**
 * @nodoc
 * Renvoie la liste des specs d'un type donne
 */
  HRESULT GetSpecs ( list <CATIMSHStudioSpec> & ListOfSpecs, CATClassId Type = NULL );
/**
 * @nodoc
 * Renvoie la liste des specs d'un type donne
 */
  HRESULT FindSpec ( CATMSHStGeometryLink * Link, CATIMSHStudioSpec * & Spec );
/**
 * @nodoc
 * Ecriture de Mode AutoDedicated 
 */
  virtual void SetDedicatedMode ( int Mode );
/**
 * @nodoc
 * Ecriture de Mode AutoDedicated 
 */
  virtual int GetDedicatedMode () { return _AutoDedicatedMode; };
/**
 * @nodoc
 * Mode AutoDedicated 
 */
  CATIMSHStudioSpec * GetDedicatedSpec () const { return _DedicatedSpec;};
/**
 * @nodoc
 * Mode AutoDedicated
 */
  virtual HRESULT SetDedicatedSpec (CATIMSHStudioSpec * Spec );
/**
 * Mise a jour Visu d'une spec
 */
  virtual HRESULT UpdateVisuSpec( CATIMSHStudioSpec * Spec );
/**
 * @nodoc
 * Mise a jour Visu des specs
 */
  virtual HRESULT UpdateVisualization();
/**
 * @nodoc
 * Recherche spec modele a partir de la spec studio
 */
  virtual HRESULT GetLocalSpecification( CATIMSHStudioSpec * StSpec, CATIMSHLocalSpecification * &Local);
/**
 * @nodoc
 * Deconnexion d'une spec de ses partitions
 */
  virtual HRESULT DisconnectSpec (CATIMSHStudioSpec * StSpec, int DeleteMesh );
/**
 * @nodoc
 * Destruction d'une spec avec impact modele
 */
  virtual HRESULT DeleteSpec (CATIMSHStudioSpec * StSpec, int DeleteMesh=1 );
/**
 * @nodoc
 * Spec manager avec undo
 */
  virtual int WithUndo () const {return 1;};
/**
 * @nodoc
 * Lecture du capture manager
 */
  CATMSHStCaptureSpecManager * GetCaptureManager() {return _CaptureManager;};
/**
 * @nodoc
 * Ouverture/Fermeture du spec manager 
 */
  int OnClose() {return _OnClose;};
/**
 * @nodoc
 * Visualisation de toutes les specs
 */
  virtual HRESULT UpdateVisuSpecs();
  /**
 * @nodoc
 * Ajout d'une spec à visualiser
 */
  virtual HRESULT AddVisuSpec( CATIMSHStudioSpec * Spec );
/**
 * @nodoc
 * Lecture de la spec modifiee
 */
  CATIMSHStudioSpec * GetModifiedSpec (){return _ModifSpec;};
/**
 * @nodoc
 * Lecture de studio
 */
  CATIMSHStudio * GetStudio () const;

// Méthodes et données membres protected

protected:

/**
 * Destructeur
 */
  virtual ~CATMSHStSpecManager ();
/**
 * @nodoc
 * Ajout d'une spec 
 */
  virtual HRESULT AppendSpec (CATIMSHStudioSpec * Spec);
/**
 * @nodoc
 *  Retrait d'une spec
 */
  virtual HRESULT UnAppendSpec (CATIMSHStudioSpec * Spec);
/**
 * @nodoc
 *  Invalidation d'une spec
 */
  virtual HRESULT InvalidSpec (CATIMSHStudioSpec * Spec);
/**
 * @nodoc
 * Ecriture de la spec modifiee
 */
  void SetModifiedSpec ( CATIMSHStudioSpec * ModifSpec );
/**
 * @nodoc
 * Ecriture de l'état de chargement de studio
 */
  void SetOnStream ( int OnStream ) {_OnStream=OnStream;};
/**
 * @nodoc
 * Lecture de l'état de chargement de studio
 */
  int GetOnStream () const {return _OnStream;};

  // Données membres

  CATMSHStudio          * _Studio;
  CATIMSHMesherAccess   * _MesherAccess;
  CATIMSHMeshPart       * _MeshPart;  
  CATMSHStCaptureSpecManager * _CaptureManager;
  CATIMSHStudioSpec     * _DefaultSpec;
  CATIMSHStudioSpec     * _DedicatedSpec; 
  CATIMSHStudioSpec     * _ModifSpec;

  CATIMSHStudioSpec    ** _Specs;
  CATMSHHashPTab *        _TrashSpecTab;
  list<CATIMSHStudioSpec> _StandbySpecs;
  list<CATIMSHStudioSpec> _VisuSpecs;


  unsigned int            _NumberOfSpecs;
  unsigned int            _SizeOfSpecs;
  int                     _AutoDedicatedMode;
  int                     _OnClose;
  int                     _OnStream;


// Méthodes et données membres private

private:

/**
 * Constructeur recopie
 */
  CATMSHStSpecManager(const CATMSHStSpecManager & Source );
/**
 * Operateur d'affectation
 */
  CATMSHStSpecManager& operator=(const CATMSHStSpecManager & Source );

};
#endif


