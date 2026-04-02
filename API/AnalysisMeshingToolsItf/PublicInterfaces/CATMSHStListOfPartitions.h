// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */
#ifndef CATMSHStListOfPartitions_h
#define CATMSHStListOfPartitions_h

//=============================================================================
//
// CATMSHStListOfPartitions :
//
// Objet List of partitions
//
//=============================================================================
#include "MSHStudio.h"
#include "CATErrorDef.h"

class CATIMSHStPartition;

/**
 * Object representing a list of studio partitions.<dd>
 * <b>Role</b>: A list is the easiest way to manage a set of partitions.<dd>
 * <b>Example:</b>
 * _ define a local list: <tt>CATMSHStListOfPartitions list;</tt><dd>
 * _ add partitions to the list: <tt>for ( int ip=0 ;ip < nbPartitions ; ip++ ) list.Add( partition[ip] );</tt><dd>
 * _ the list is automatically allocated at the right size, no array deletion is needed.<dd>
 * _ you can re_use the list by removing the objects in it ( but it keeps 
 * the allocation of the list ): <tt>list.Reset();</tt><dd>;
 */

class ExportedByMSHStudio CATMSHStListOfPartitions
{

public:

/**
 * Constructs a list.
 */
  CATMSHStListOfPartitions(int Increment=10);
/**
 * Add a partition to the list.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Partition has been added.
 *   <dt>E_FAIL</dt><dd>Partition has not been added.
 *   </dl>
 * @param Partition
 *   Partition to add.
 */
  HRESULT Add( const CATIMSHStPartition * const Partition );
/**
 * Look if a partition is in the list and add it if it isn't.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Partition has been added.
 *   <dt>E_FAIL</dt><dd>Partition has not been added.
 *   </dl>
 * @param Partition
 *   Partition to add.
 */
  HRESULT FindOrAdd( const CATIMSHStPartition * const Partition);
/**
 * Set the number of partitions in the list to zero.
 */
  void Reset() {_NumberOf = 0;};
/**
 * Read the number of partitions in the list.
 */
  int GetNumberOf() const {return _NumberOf;};
/**
 * Returns the partition at the specified index.
 * An index ranges from 0 to the number of partitions in the list.<dd> 
 * @param Index
 *   The index of the partition to extract.
 */
  CATIMSHStPartition * & operator[] (int Index) const { return (CATIMSHStPartition *  &) _Partitions[Index];};
/**
 * @nodoc
 *   Garde dans la liste l'intersection avec Source
 */
  CATMSHStListOfPartitions& operator&= (const CATMSHStListOfPartitions & Source );
/**
 * @nodoc
 * Destructeur 
 */
  ~CATMSHStListOfPartitions();
/**
 * @nodoc
 * Acces a la liste des objets
 */
  inline  CATIMSHStPartition *const* GetTable (int &NumberOfPartitions) const;
/**
 * @nodoc
 * Ajout d'une liste de partitions
 */
  int Add(const CATMSHStListOfPartitions & Source);
/**
 * @nodoc
 * Ajout d'une liste de partitions de dimension donnee
 */
  int Add( int Dimension, CATMSHStListOfPartitions & Source );
/**
 * @nodoc
 * Allocation ou Extension d'une liste de partition
 */
  int Extend( int MinSize );
/**
 * @nodoc
 * Renvoie 1 si la partition est dans la liste, 0 sinon
 */
  int IsIn (const CATIMSHStPartition * const Partition) const;
/**
 * @nodoc
 * Renvoie la position de partition dans la liste, -1 sinon
 */
  int Find (const CATIMSHStPartition * const Partition) const;
/**
 * @nodoc
 * Operateur d'affectation
 */
  CATMSHStListOfPartitions& operator=(const CATMSHStListOfPartitions & Source );
/**
 * @nodoc
 * Inversion de l'ordre d'une liste
 */
  void Invert();
/**
 * @nodoc
 * Trie les partitions par dimension 0D 1D ... 3D
 */
  HRESULT SortByDimension();
/**
 * @nodoc
 * Suppression des doublons
 */
  HRESULT RemoveDuplicates();

protected:

  int   _Size;
  int   _NumberOf;
  int   _Increment;
  const CATIMSHStPartition ** _Partitions;

private:

/**
 * Constructeur recopie
 */
  CATMSHStListOfPartitions(const CATMSHStListOfPartitions & Source );

};
//
//==================================================
//Acces a la liste des objets
//==================================================
//
inline CATIMSHStPartition *const* CATMSHStListOfPartitions::GetTable (int &NumberOfPartitions) const
{
  NumberOfPartitions=_NumberOf;
  return  (CATIMSHStPartition *const*) _Partitions;
}
#endif




