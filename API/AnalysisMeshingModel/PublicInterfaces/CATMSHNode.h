#ifndef CATMSHNode_h
#define CATMSHNode_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "CATDataType.h"
#include "CATSysAllocator.h"
#include <stddef.h>

class CATMSHMesh;
class CATIMSHMesh;
class CATMSHElement;
class CATMSHNodeVisuAttribute;
class CATMSHNodeVisuGroup;

/**
 * Object representing a finite element node.
 * @see CATIMSHMesh, CATMSHElement.
 */
class ExportedByMSHModel CATMSHNode
{
  friend class CATMSHNodePrivate;
  friend class CATMSHNodeServices;

  CATDeclarePagedNewOverride(CATMSHNode )

  // Méthodes et données membres publiques

public:
  /**
   * Retreives thee nodes coordinates. 
   * @param ioCoordinates
   *   Array containing the node's coordinates in the following order: X, Y, Z.
   */
  void GetCoordinates ( double * ioCoordinates ) const;
  /**
   * Retreives thee nodes coordinates. 
   * @param ioCoordinates
   *   Array containing the node's coordinates in the following order: X, Y, Z.
   */
  void GetCoordinates ( float * ioCoordinates ) const;
  /**
   * Returns a pointer to node's coordinates. 
   * The coordinates are stored in the following order: X, Y, Z.
   */
  inline const double * GetCoordinates () const;
  /**
   * Returns the integer tag associated to the node.
   */
  inline unsigned int GetTag () const;
  /**
   * Returns the node number.
   * Nodes are numbered between 0 and the total number of nodes minus one.
   * Take care of the fact that this number is not stable upon modifications, 
   * for example in case of node deletion.
   */
  int GetNumber ();
  /**
   * Check if the finite element node is deleted.
   * Returns 1 the node is deleted, 0 otherwise.
   */
  inline int IsDeleted () const;
  /**
   * Returns the <b>Mesh</b> which contains the element.
   * @return CATBaseUnknown#Release
   */
  CATIMSHMesh * GetMesh () const;
  /**
   * Returns the next node in the <b>Mesh</b>. This method should be used with
   * the @href CATIMSHMesh#GetFirstNode method to scan all nodes.
   */
  inline CATMSHNode * Next () const;
  /**
   * Returns the previous node in the <b>Mesh</b>. This method should be used with
   * the @href CATIMSHMesh#GetLastNode method to scan all nodes.
   */
  inline CATMSHNode * Previous () const;
  /**
   * Returns the number of elements which are sharing the node.
   */
  inline int GetNumberOfLinkedElements () const;
  /**
   * Returns graphic attribute for the finite element node.
   */
  const CATMSHNodeVisuAttribute * GetVisuAttribute () const;
  /**
   * Retreive all elements which are sharing the node.
   * <b>Caution</b>: this method scans all elements and should not be called intensively.
	 * @return
   *   A pointer to the list of elements which share the node.
   *   <br><b>Lifecycle rules deviation</b>: the returned array should be desallocated by the callee.
   */
  CATMSHElement ** GetLinkedElements () const;
  /**
   * Check if the node is condensed on another node in the context of an assembly of analysis
   * Returns 1 the node is condensed, 0 otherwise.
   * See @href #GetImageNode to get the corresponding node.
   */
  inline int IsCondensed () const;
  /**
   * Returns the nodes on which this node is condensed (if any) in the context of an assembly of analysis.  
   */
  CATMSHNode * GetImageNode ();


// Méthodes et données membres privées

private:

  CATMSHNode ( const CATMSHNode& From );
  CATMSHNode& operator= ( const CATMSHNode& From );
  CATMSHNode ();

  // Contructeur

  CATMSHNode ( CATMSHNode * PrevNode, const double * Coordinates, unsigned int Tag );

  // Destructeur

  ~CATMSHNode ();

  // Ecriture des coordonnées

  inline CATINTPTR GetWorkAsInt () const;
  inline void SetWorkAsInt ( CATINTPTR Work );
  inline void * GetWorkAsPtr () const;
  inline void SetWorkAsPtr ( void * Work );
  inline void SetDeleted ();
  inline void SetActive ();
  inline void WillBeRemoved ();
  inline int IsInTransaction () const;
  inline void SetInTransaction ();
  inline void ResetFromTransaction ();
  inline int HasAssociativity () const;
  inline int HasConnector () const;
  inline void SetHasAssociativity ();
  inline int IsInAssociativity () const;
  inline void SetInAssociativity ();
  inline void ResetFromAssociativity ();
  inline CATMSHNodeVisuGroup * GetVisuGroup () const;
  inline void SetNext ( CATMSHNode * Next );
  inline void SetPrevious ( CATMSHNode * Previous );
  CATMSHMesh * GetMeshImpl ();
  inline void SetNumberOfLinkedElements ( int NbLinkedElements );
  inline void SetCoordinates ( const double XYZ [] );
  inline void SetCondensed ();
  inline void SetHasConnector ();
  inline void SetVisuGroup ( CATMSHNodeVisuGroup * Group );
  inline short IsFlagged1 () const;
  inline void SetFlagged1 ( short Flagged );
  inline short IsFlagged2 () const;
  inline void SetFlagged2 ( short Flagged );
  inline void * GetAttributes () const;
  inline void SetAttributes ( void * Attributes );
  inline int IsToBeRemoved () const;
 
  // Données membres

  double                _Coord[3];
  CATMSHNode *          _Next;
  CATMSHNode *          _Previous;
  CATMSHNodeVisuGroup * _VisuGroup;
  void *                _Attributes;
  union
  {
    void *              AsPtr;
    CATINTPTR           AsInt;
  }                     _Work;

  int                   _NbOfLinkedElements;
  unsigned int          _Tag;

  union
  {
    short               _ShortFields;
    struct
    {
      unsigned short    Deleted                : 1;
      unsigned short    InCurrentTransaction   : 1;
      unsigned short    ToBeRemoved            : 1;
      unsigned short    HasAssociativity       : 1;
      unsigned short    InCurrentAssociativity : 1;
      unsigned short    HasConnector           : 1;
      unsigned short    IsCondensed            : 1;
      unsigned short    Flagged1               : 1;
      unsigned short    Flagged2               : 1;
    }                   _BitFields;
  }                     _ShortAndBit;
};

//
//  Implémentations inline
//

//
//==================================================
// GetCoordinates: coordonnées du noeud
//==================================================
//
inline const double * CATMSHNode::GetCoordinates () const
{
  return _Coord;
}

//
//==================================================
// GetTag: lecture du tag
//==================================================
//
inline unsigned int CATMSHNode::GetTag () const
{
  return _Tag;
}

//
//==================================================
// IsDeleted: le noeud est-il détruit?
//==================================================
//
inline int CATMSHNode::IsDeleted () const
{
  return _ShortAndBit._BitFields.Deleted;
}

//
//==================================================
// Le noeud va-t-il etre physiquement détruit ?
//==================================================
//
inline int CATMSHNode::IsToBeRemoved () const
{
  return _ShortAndBit._BitFields.ToBeRemoved;
}

//
//==================================================
// Le noeud va etre physiquement détruit...
//==================================================
//
inline void CATMSHNode::WillBeRemoved ()
{
  _ShortAndBit._BitFields.ToBeRemoved = 1;
}

//
//==================================================
// Next: noeud suivant
//==================================================
//
inline CATMSHNode * CATMSHNode::Next () const
{
  return _Next;
}

//
//==================================================
// Previous: noeud précédent
//==================================================
//
inline CATMSHNode * CATMSHNode::Previous () const
{
  return _Previous;
}

//
//==================================================
// GetNumberOfLinkedElements: nombre d'éléments liés au noeud
//==================================================
//
inline int CATMSHNode::GetNumberOfLinkedElements () const
{
  return _NbOfLinkedElements;
}

//
//==================================================
// GetAttributes: lecture des attributs
//==================================================
//
inline void * CATMSHNode::GetAttributes () const
{
  return _Attributes;
}

//
//==================================================
// SetAttributes: écriture des attributs
//==================================================
//
inline void CATMSHNode::SetAttributes ( void * Attributes )
{
  _Attributes = Attributes;
}

//
//==================================================
// GetWork: lecture du int Work
//==================================================
//
inline CATINTPTR CATMSHNode::GetWorkAsInt () const
{
  return _Work.AsInt;
}

//
//==================================================
// GetWork: lecture du void * Work
//==================================================
//
inline void * CATMSHNode::GetWorkAsPtr () const
{
  return _Work.AsPtr;
}

//
//==================================================
// SetWork: écriture du int Work
//==================================================
//
inline void CATMSHNode::SetWorkAsInt ( CATINTPTR Work )
{
  _Work.AsInt = Work;
}

//
//==================================================
// SetWork: écriture du void * Work
//==================================================
//
inline void CATMSHNode::SetWorkAsPtr ( void * Work )
{
  _Work.AsPtr = Work;
}

//
//==================================================
// SetDeleted: le noeud est marqué détruit
//==================================================
//
inline void CATMSHNode::SetDeleted ()
{
  _ShortAndBit._BitFields.Deleted = 1;
}

//
//==================================================
// SetActive: le noeud est marqué actif
//==================================================
//
inline void CATMSHNode::SetActive ()
{
  _ShortAndBit._BitFields.Deleted = 0;
}

//
//==================================================
// IsInTransaction: le noeud est-il dans la transaction?
//==================================================
//
inline int CATMSHNode::IsInTransaction () const
{
  return _ShortAndBit._BitFields.InCurrentTransaction;
}

//
//==================================================
// SetInTransaction: le noeud est dans la transaction courante
//==================================================
//
inline void CATMSHNode::SetInTransaction ()
{
  _ShortAndBit._BitFields.InCurrentTransaction = 1;
}

//
//==================================================
// ResetFromTransaction: le noeud n'est plus dans la transaction
//==================================================
//
inline void CATMSHNode::ResetFromTransaction ()
{
  _ShortAndBit._BitFields.InCurrentTransaction = 0;
}

//
//==================================================
// HasAssociativity: le noeud a-t-il une associativité?
//==================================================
//
inline int CATMSHNode::HasAssociativity () const
{
  return _ShortAndBit._BitFields.HasAssociativity;
}

//
//==================================================
// HasConnector: le noeud a-t-il un connecteur?
//==================================================
//
inline int CATMSHNode::HasConnector () const
{
  return _ShortAndBit._BitFields.HasConnector;
}

//
//==================================================
// SetHasAssociativity: marque le noeud comme ayant une associativité
//==================================================
//
inline void CATMSHNode::SetHasAssociativity ()
{
  _ShortAndBit._BitFields.HasAssociativity = 1;
}

//
//==================================================
// IsInAssociativity: le noeud a-t-il déjà été pris
// en compte pour la lecture de l'associativité?
//==================================================
//
inline int CATMSHNode::IsInAssociativity () const
{
  return _ShortAndBit._BitFields.InCurrentAssociativity;
}

//
//==================================================
// SetInAssociativity: le noeud a été pris en
// compte pour la lecture de l'associativité.
//==================================================
//
inline void CATMSHNode::SetInAssociativity ()
{
  _ShortAndBit._BitFields.InCurrentAssociativity = 1;
}

//
//==================================================
// ResetFromAssociativity: le noeud n'est plus pris
// en compte pour la lecture de l'associativité.
//==================================================
//
inline void CATMSHNode::ResetFromAssociativity ()
{
  _ShortAndBit._BitFields.InCurrentAssociativity = 0;
}

//
//==================================================
// IsFlagged1: le noeud est-il flaggé1?
//==================================================
//
inline short CATMSHNode::IsFlagged1 () const
{
  return _ShortAndBit._BitFields.Flagged1;
}

//
//==================================================
// SetFlag1: pose du flag1 du noeud
//==================================================
//
inline void CATMSHNode::SetFlagged1 ( short Flagged )
{
  if ( Flagged ) _ShortAndBit._BitFields.Flagged1 = 1;
  else _ShortAndBit._BitFields.Flagged1 = 0;
}

//
//==================================================
// IsFlagged2: le noeud est-il flaggé2?
//==================================================
//
inline short CATMSHNode::IsFlagged2 () const
{
  return _ShortAndBit._BitFields.Flagged2;
}

//
//==================================================
// SetFlag2: pose du flag2 du noeud
//==================================================
//
inline void CATMSHNode::SetFlagged2 ( short Flagged )
{
  if ( Flagged ) _ShortAndBit._BitFields.Flagged2 = 1;
  else _ShortAndBit._BitFields.Flagged2 = 0;
}

//
//==================================================
// IsCondensed: le noeud est-il condensé?
//==================================================
//
inline int CATMSHNode::IsCondensed () const
{
  return _ShortAndBit._BitFields.IsCondensed;
}

//
//==================================================
// GetVisuGroup: lecture du visugroup
//==================================================
//
inline CATMSHNodeVisuGroup * CATMSHNode::GetVisuGroup () const
{
  return _VisuGroup;
}

//
//==================================================
// SetNext: chainage au suivant
//==================================================
//
inline void CATMSHNode::SetNext ( CATMSHNode * Next )
{
  _Next = Next;
}

//
//==================================================
// SetPrevious: chainage au précédent
//==================================================
//
inline void CATMSHNode::SetPrevious ( CATMSHNode * Previous )
{
  _Previous = Previous;
}

//
//==================================================
// SetNumberOfLinkedElements: nombre d'éléments liés
//==================================================
//
inline void CATMSHNode::SetNumberOfLinkedElements ( int NbLinkedElements )
{
  _NbOfLinkedElements = NbLinkedElements;
}

//
//==================================================
// SetCoordinates: écriture des coordonnées
//==================================================
//
inline void CATMSHNode::SetCoordinates ( const double XYZ [] )
{
  _Coord[0] = XYZ[0];
  _Coord[1] = XYZ[1];
  _Coord[2] = XYZ[2];
}

//
//==================================================
// SetCondensed: le noeud est marqué condensé
//==================================================
//
inline void CATMSHNode::SetCondensed ()
{
  _ShortAndBit._BitFields.IsCondensed = 1;
}

//
//==================================================
// SetHasConnector: le noeud est marqué comme supportant une connecteur
//==================================================
//
inline void CATMSHNode::SetHasConnector ()
{
  _ShortAndBit._BitFields.HasConnector = 1;
}

//
//==================================================
// SetVisuGroup: écriture du groupe 
//==================================================
//
inline void CATMSHNode::SetVisuGroup ( CATMSHNodeVisuGroup * Group )
{
  _VisuGroup = Group;
}

#endif
