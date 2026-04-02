#ifndef CATMSHStudioSpec_h
#define CATMSHStudioSpec_h
// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U2 
 */

//=============================================================================
//
// CATMSHStudioSpec :
//
// This class manage the mesh specification for the buildmesh method 
//
//=============================================================================
// Novembre  2001   Creation                          G. Soubeyre
//=============================================================================

#include "MSHStudio.h"
#include "CATIMSHStudioSpec.h"
#include "CATMSHStListOfPartitions.h"
#include <stddef.h>

class CATMSHStSpecAttribute;
class CATIMSHStPartition;
class CATMSHStSpecAttribute;
class CATUnicodeString;
class CATMSHStSpecStream;
class CATEMSHStudioSpecInstance;

/**
 * Object representing a user mesh specification.
 * <b>Role</b>: This object provides all necessary informations about a 
 * mesh specification.
 */

class ExportedByMSHStudio CATMSHStudioSpec : public CATIMSHStudioSpec
{
  friend class CATMSHStSpecStream;

public:

/**
 * @nodoc
 */  
  enum AttType
  {
    Unknown  = 0,
    Short    = 1,
    UShort   = 2,
    Int      = 3,
    UInt     = 4,
    Double   = 5,
    UString  = 6,
    Partition= 7
  };

/**
 * Constructs a mesh specification 
 */
  CATMSHStudioSpec ();
/**
 * Read the current Studio.
 * @return
 *   An interface to @href CATIMSHStudio.
 */
  CATIMSHStudio * GetStudio() const { return (CATIMSHStudio *)_Studio; };
/**
 * Write the current Studio.
 * @param Studio
 *   An interface to @href CATIMSHStudio.
 */
  void SetStudio(CATIMSHStudio * Studio) { _Studio=Studio; };
/**
 * Read the impact mode for the meshing specification.
 * @return
 *   <br><b>Legal values</b>:
 *   <dl><dt>0</dt><dd>The meshing specification doesn't impact neighbours mesh domains.
 *   <dt>1</dt><dd>The meshing specification impacts neighbours mesh domains.
 *   </dl>
 */
  int GetImpactMode() const { return _WithImpact; };
/**
 * Write the impact mode for the meshing specification.
 * @param WithImpact
 *   <br><b>Legal values</b>:
 *   <dl><dt>0</dt><dd>The meshing specification doesn't impact neighbours mesh domains.
 *   <dt>1</dt><dd>The meshing specification impacts neighbours mesh domains.
 *   </dl>
 */
  void SetImpactMode( int WithImpact );
/**
 * Read the link to support impacted by the meshing specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The support is valid.
 *   <dt>E_FAIL</dt><dd>The support is invalid.
 *   </dl>
 * @param GeometryLink
 *   A @href CATMSHStGeometryLink.
 */
  HRESULT GetSupport(CATMSHStGeometryLink * &GeometryLink );
/**
 * Write the link to support impacted by the meshing specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The support is valid.
 *   <dt>E_FAIL</dt><dd>The support is invalid.
 *   </dl>
 * @param GeometryLink
 *   A @href CATMSHStGeometryLink.
 */
  HRESULT SetSupport(CATMSHStGeometryLink * GeometryLink);
/**
 * Read the list of partitions impacted by the meshing specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The list of partitions is valid.
 *   <dt>E_FAIL</dt><dd>The list of partitions is invalid.
 *   </dl>
 * @param Partitions
 *   A @href CATMSHStListOfPartitions.
 */
  HRESULT GetPartitions(CATMSHStListOfPartitions &Partitions );
/**
 * Write the list of partitions impacted by the meshing specification.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>The list of partitions is valid.
 *   <dt>E_FAIL</dt><dd>The list of partitions is invalid.
 *   </dl>
 * @param Partitions
 *   A @href CATMSHStListOfPartitions.
 */
  HRESULT SetPartitions(CATMSHStListOfPartitions &Partitions);
/**
 * Read the number of values in an attribute.
 * @param iName
 *   Name of the attribute. 
 * @param oNumber
 *   Number of values stored in the attribute. 
 */
 HRESULT GetNumberOfValues ( const CATUnicodeString &iName , int &oNbValues );
/**
 * Valuates a local mesh specification attribute to a real double value.
 * @param iName
 *   Name of the local specification. 
 * @param iNbValues
 *   Number of iValues. 
 * @param iValues
 *   Real double value to be used for the specification. 
 */
 HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNbValues, const double iValues[] );
/**
 * Retreives the real double value of a local mesh specification attribute.
 * @param iName
 *   Name of the local specification. 
 * @param iNbValues
 *   Number of oValues. 
 * @param oValue
 *   Real double values of the attribute. 
 */
 HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNbValues, double oValues[] );
/**
 * Valuates a local mesh specification attribute to a integer table value.
 * @param iName
 *   Name of the local specification. 
 * @param iNbValues
 *   Number of iValues. 
 * @param iValue
 *   Integers values to be used for the attribute. 
 */
 HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNbValues , const int iValues[] );
/**
 * Retreives the integer value of a local mesh specification attribute.
 * @param iName
 *   Name of the local specification. 
 * @param iNbValues
 *   Number of oValues. 
 * @param oValues
 *   Integers values of the attribute. 
 */
 HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNbValues, int oValues[] );
/**
 * Valuates a local mesh specification attribute to a character value.
 * @param iName
 *   Name of the local specification. 
 * @param iNbValues
 *   Number of oValues. 
 * @param iValue
 *   Character value to be used for the specification. 
 */
 HRESULT SetLocalSpecification ( const CATUnicodeString &iName, int iNbValues, const CATUnicodeString iValue[] );
/**
 * Retreives the character value of a local mesh specification attribute.
 * @param iName
 *   Name of the local specification. 
 * @param iNbValues
 *   Number of oValues. 
 * @param oValue
 *   Character value of the specification. 
 */
 HRESULT GetLocalSpecification ( const CATUnicodeString &iName, int iNbValues, CATUnicodeString oValue[] );
/**
 * Valuates a local mesh specification attribute to partitions list.
 * @param iName
 *   Name of the local specification. 
 * @param iPartitions 
 *   List of partitions 
 */
 HRESULT SetLocalSpecification ( const CATUnicodeString &iName, const CATMSHStListOfPartitions &iPartitions );
/**
 * Retreives the partitions list of a local mesh specification attribute.
 * @param iName
 *   Name of the local specification. 
 * @param oPartitions 
 *   List of partitions 
 */
 HRESULT GetLocalSpecification ( const CATUnicodeString &iName, CATMSHStListOfPartitions &oPartitions );
/**
  * Returns the status of the specification concerning the mesh.
  * @param oUpToUpdate
  *  !=0: the mesh is up to date.<br>
  *    0: the mesh needs to be updated.
  */
  virtual HRESULT IsMeshUpToDate( int &oUpToUpdate );
/**
  * Modify the specified size map to take account the specification.
  * @param Partition 
  *   The partition impacted by the mesh for default specification only.
  */
  virtual HRESULT UpdateSizeMap(CATIMSHSizeMap * iMap, CATIMSHStPartition * Partition=NULL);
/**
  * Returns support dimension need for spec
  */
  virtual int GetSupportDimension();
/**
 * Generate mesh on Partition
 */
  virtual HRESULT UpdateMesh( CATIMSHStPartition * Partition=NULL);
/**
 * @nodoc
 */  
  virtual int IsExclusivePartition( const CATIMSHStPartition * Partition );
/**
 * Retourne si la perennité de la spec ( supporte les variations topologiques )
 */
  int GetPerpetuity() const { return _Perpetuity;};
/**
 * Ecrit perennité de la spec ( supporte les variations topologiques )
 */
  void SetPerpetuity (int Perpetuity) { _Perpetuity=Perpetuity; };
/**
 * @nodoc
 */  
  unsigned int GetInternalTag () const { return _InternalTag;} ;
/**
 * @nodoc
 */  
  void SetInternalTag (unsigned int Tag) { _InternalTag=Tag; } ;
/**
 * @nodoc
 */  
  unsigned int GetExternalTag () const { return _ExternalTag;} ;
/**
 * @nodoc
 */  
  unsigned int * GetPExternalTag () const { return ( unsigned int *) &_ExternalTag;};
/**
 * @nodoc
 */  
  void SetExternalTag (unsigned int Tag) { _ExternalTag=Tag; };
/**
 * @nodoc
 */  
  inline CATIMSHStudioSpec::State GetState ();
/**
 * @nodoc
 */  
  virtual void Dump ( CATTrace * Trace=NULL ) const;
/**
 * @nodoc
 */  
  HRESULT ComputeMeshCondition( const CATIMSHStPartition * Partition, CATMSHStSpecCondition &Mesh );
/**
 * @nodoc
 */  
  HRESULT virtual ComputeState( CATIMSHStudioSpec::State &SpecState );
/**
 * @nodoc
 */  
  HRESULT ComputeMeshState(CATMSHStMeshState &State);
/**
 * @nodoc
 */
  virtual HRESULT SetCompatibility( const CATMSHStSpecCompatibility Compatibility[] );
/**
 * @nodoc
 */
  const CATMSHStSpecCompatibility * GetCompatibility() const;
/**
 * @nodoc
 */  
  virtual CATRep * BuildRep ();
/**
 * @nodoc
 */  
  HRESULT GetName ( CATUnicodeString & Name );
/**
 * @nodoc
 */  
  void DeleteAttributes ();
/**
 * @nodoc
 * Recopie des attributs de la spec Source
 */  
  HRESULT CopyAttributes(const CATMSHStudioSpec & Source);
/**
 * Chargement des attributs a partir d'un spec locale
 */  
  virtual HRESULT LoadAttributes ( CATIMSHLocalSpecification * LocalSpec );
/**
 * Chargement a partir du modele de toutes les specifications
 */  
  virtual HRESULT Load();
/**
 * @nodoc
 */  
  CATIMSHStudioSpec * Clone ();
/**
 * @nodoc
 */  
  void SetAttributesStamp (unsigned int Stamp) { _AttributesStamp=Stamp; };
/**
 * @nodoc
 */
  void AddInstanceListener();
  void RemoveInstanceListener();
/**
 * @nodoc
 * Invalidation des calculs effectués pour la spec
 */
  virtual void InvalidComputation();
/**
 * @nodoc
 * Reset des supports de la spec
 */  
  virtual void ResetSupport ();
/**
 * Operateur d'affectation
 */
  CATMSHStudioSpec& operator=(const CATMSHStudioSpec & Source );

protected:
/**
 * @nodoc
 */  
  virtual ~CATMSHStudioSpec ();
/**
 * @nodoc
 */  
  HRESULT UpdateTimeStamp(); 
/**
 * Ecriture de l'état
 */  
  virtual void SetState (CATIMSHStudioSpec::State SpecState);
/**
 * Reset des calculs effectués pour la spec
 */  
  virtual void ResetComputation ();
/**
 * Recherche d'un attribut
 */  
  CATMSHStSpecAttribute * FindAttribute( const CATUnicodeString &iName ) const;
/**
 * Recherche ou Creation d'un attribut
 */  
  CATMSHStSpecAttribute * FindOrCreateAttribute( const CATUnicodeString &iName , CATMSHStudioSpec::AttType iType);
/**
 * Ajout d'un attribut
 */  
  HRESULT AddAttribute( CATMSHStSpecAttribute * Attribute);
/**
 * Suppression d'un attribut
 */  
  HRESULT DeleteAttribute( const CATUnicodeString &iName );
/**
 * Migration des donnees de la spec
 */  
  virtual HRESULT MigrateData ( int StreamVersion );
/**
 * Destruction de la spec
 */  
  virtual HRESULT Remove ();
/**
 * Lecture de la liste des partitions supports
 */  
  HRESULT ReadPartitionsSupport(CATMSHStListOfPartitions &Parts);
/**
 * Explicitation des partitions
 */  
  virtual HRESULT ComputePartitions();

  // Données membres

  CATMSHStSpecAttribute  **   _Attributes;
  CATIMSHStudio          *    _Studio;
  CATMSHStGeometryLink   *    _GeometryLink;
  CATMSHStSpecCompatibility * _Compatibility;
  CATEMSHStudioSpecInstance * _InstanceListener;
  unsigned int           *    _PartitionsTag;
  unsigned int           *    _PartitionsStamps;
  unsigned int                _AttributesStamp;
  unsigned int                _InternalTag;
  unsigned int                _ExternalTag;
  unsigned int                _NbPartitions;
  unsigned short              _NbAttributes;
  unsigned char               _WithImpact;
  unsigned char               _Perpetuity;
  CATIMSHStudioSpec::State    _State;

private:

/**
 * Constructeur recopie
 */
  CATMSHStudioSpec(const CATMSHStudioSpec & Source );
};
//
//=============================================================================
// Lecture de l'état
//=============================================================================
//
inline CATIMSHStudioSpec::State CATMSHStudioSpec::GetState () 
{
  if ( _State==CATMSHStudioSpec::Unknown ) ComputeState(_State);
  return _State;
}

#endif
