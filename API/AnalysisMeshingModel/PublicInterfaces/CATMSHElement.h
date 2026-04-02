#ifndef CATMSHElement_h
#define CATMSHElement_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "CATDataType.h"
#include <stddef.h>

class CATMSHMeshDomain;
class CATMSHElementVisuGroup;
class CATMSHElementVisuAttribute;
class CATIMSHConnectivity;
class CATMSHMesh;
class CATMSHMeshPart;
class CATMSHMeshDomain;
class CATIMSHMesh;
class CATMSHMeshExtStream;
class CATMSHNode;
class CATMSHSelectedElement;

/**
 * Object representing a finite element.
 * @see CATIMSHMesh, CATMSHNode.
 */
class ExportedByMSHModel CATMSHElement 
{
  friend class CATMSHElementPrivate;
  friend class CATMSHElementServices;

// Méthodes et données membres publiques

public:
  /**
   * Returns the number of linked nodes. 
   */
  inline int GetNumberOfLinkedNodes () const;
  /**
   * Returns the integer tag associated to the element.
   */
  inline unsigned int GetTag () const;
  /**
   * Returns the element number.
   * Elements are numbered between 0 and the total number of elements minus one.
   * Take care of the fact that this number is not stable upon modifications, 
   * for example in case of element deletion.
   */
  int GetNumber ();
  /**
   * Check if the finite element is deleted.
   * Returns 1 the element is deleted, 0 otherwise.
   */
  inline int IsDeleted () const;
  /**
   * Returns the <b>Mesh</b> which contains the element.
   * @return CATBaseUnknown#Release
   */
  CATIMSHMesh * GetMesh () const;
  /**
   * Returns the next element in the <b>Mesh</b>. This method should be used with
   * the @href CATIMSHMesh#GetFirstElement method to scan all elements.
   */
  inline CATMSHElement * Next () const;
  /**
   * Returns the previous element in the <b>Mesh</b>.
   */
  inline CATMSHElement * Previous () const;
  /**
   * Retreives all nodes coordinates. 
   * @param ioCoordinates
   *   Array containing the nodes coordinates in the following order: X1, Y1, Z1, X2, Y2, Z2, ...
	 * @return
   *   The number of element's nodes.
   */
  int GetNodesCoordinates ( double * ioCoordinates ) const;
  /**
   * @nodoc 
   * Lecture des coordonnées des noeuds liés (floats pour la visu)
   */
  int GetNodesCoordinates ( float * Coordinates , float Shrink = 1.f ) const;
  /**
   * Returns the element's connectivity.
   * <br><b>Lifecycle rules deviation</b>: No AddRef is done on returned value.
   */
  inline CATIMSHConnectivity * GetConnectivity () const;
  /**
   * Returns a pointer on the list of element's nodes.
   */
  virtual inline CATMSHNode * const * GetLinkedNodes () const = 0;
  /**
   * Returns graphic attribute for the finite element.
   */
  const CATMSHElementVisuAttribute * GetVisuAttribute () const;
  /**
   * Returns the <b>Mesh Domain</b> which contains the element.
   */
  inline CATMSHMeshDomain * GetMeshDomain () const;
  /**
   * Returns the element activity. An element in considered as active if it belong to
   * an active <b>Mesh Part</b>. Otherwise the element is inactive. See @href CATIMSHMeshPart.
   */
  short IsActive ();


// Méthodes et données membres privées 
protected:

  // Constructeur
  CATMSHElement ( CATMSHElement * PrevElement , CATIMSHConnectivity * Connectivity , 
                  int NbOfLinkedNodes , CATMSHNode * const * LinkedNodes, unsigned int Tag );
  
  // Destructeur
  virtual ~CATMSHElement ();

private:

  CATMSHElement ( const CATMSHElement& From );
  CATMSHElement& operator= ( const CATMSHElement& From );
  CATMSHElement ();



  inline void SetDomain ( CATMSHMeshDomain * Group );
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
  inline void SetHasAssociativity ();
  inline void SetInPath ();
  inline int IsInPath () const;
  CATMSHMesh * GetMeshImpl ();
  inline CATMSHElementVisuGroup * GetVisuGroup () const;
  inline void SetVisuGroup ( CATMSHElementVisuGroup * Group );
  inline void SetNext ( CATMSHElement * Next );
  inline void SetPrevious ( CATMSHElement * Previous );
  inline int IsToBeRemoved () const;
  inline int GetVisibility () const;
  void SetVisibility ( int Visible );
  inline short GetQuality () const;
  inline short GetOldQuality () const;
  void SetQuality ( short Quality );
  inline short GetInterference () const;
  void SetInterference ( short Interference );
  inline short IsVisible () const;
  inline short IsFlagged () const;
  short IsMeshPartFlagged ();
  inline void SetFlagged ( short Flagged );
  inline void * GetAttributes () const;
  inline void SetAttributes ( void * Attributes );
  inline unsigned short GetShared () const;
  inline void SetShared ( unsigned short Shared );
 
  // Données membres

  CATMSHElement *          _Next;
  CATMSHElement *          _Previous;
  CATMSHElementVisuGroup * _VisuGroup;
  void *                   _Attributes;
  CATIMSHConnectivity *    _Connectivity;
  CATMSHMeshDomain *       _Domain;

  union
  {
    void *                 AsPtr;
    CATINTPTR              AsInt;
  }                        _Work;

  int                      _NbOfLinkedNodes;
  unsigned int             _Tag;

  unsigned short           _SharedFacesEdges;

  union
  {
    short                  _ShortFields;
    struct
    {
      unsigned short       Deleted              : 1;
      unsigned short       InCurrentTransaction : 1;
      unsigned short       Quality              : 2;
      unsigned short       QualityOld           : 2;
      unsigned short       Interference         : 2;
      unsigned short       ToBeRemoved          : 1;
      unsigned short       HasAssociativity     : 1;
      unsigned short       IsInPath             : 1;
      unsigned short       Visibility           : 1;
      unsigned short       Flagged              : 1;
    }                      _BitFields;
  }                        _ShortAndBit;
};

//
//  Implémentations inline
//

//
//==================================================
// GetNumberOfLinkedNodes: nombre de noeuds de l'élément
//==================================================
//
inline int CATMSHElement::GetNumberOfLinkedNodes () const
{
  return _NbOfLinkedNodes;
}
//
//==================================================
// GetTag: lecture du tag
//==================================================
//
inline unsigned int CATMSHElement::GetTag () const
{
  return _Tag;
}

//
//==================================================
// IsDeleted: l'élément est-il détruit?
//==================================================
//
inline int CATMSHElement::IsDeleted () const
{
  return _ShortAndBit._BitFields.Deleted;
}

//
//==================================================
// L'élément va-t-il etre physiquement détruit ?
//==================================================
//
inline int CATMSHElement::IsToBeRemoved () const
{
  return _ShortAndBit._BitFields.ToBeRemoved;
}

//
//==================================================
// L'élément va etre physiquement détruit...
//==================================================
//
inline void CATMSHElement::WillBeRemoved ()
{
  _ShortAndBit._BitFields.ToBeRemoved = 1;
}

//
//==================================================
// Next: élément suivant
//==================================================
//
inline CATMSHElement * CATMSHElement::Next () const
{
  return _Next;
}

//
//==================================================
// Previous: noeud précédent
//==================================================
//
inline CATMSHElement * CATMSHElement::Previous () const
{
  return _Previous;
}

//
//==================================================
// GetConnectivity: connectivité de l'élément
//==================================================
//
inline CATIMSHConnectivity * CATMSHElement::GetConnectivity () const
{
  return _Connectivity;
}

//
//==================================================
// IsVisible: L'élément est-il visible
//==================================================
//
inline short CATMSHElement::IsVisible () const
{
  return (~_SharedFacesEdges) & 63;
}

//
//==================================================
// GetShared: Entités partagées de l'élément
//==================================================
//
inline unsigned short CATMSHElement::GetShared () const
{
  return _SharedFacesEdges;
}

//
//==================================================
// SetShared: Entités partagées de l'élément
//==================================================
//
inline void CATMSHElement::SetShared ( unsigned short Shared )
{
  _SharedFacesEdges = Shared;
}

//
//==================================================
// GetQuality: Lecture de la qualité de l'élément
//==================================================
//
inline short CATMSHElement::GetQuality () const
{
  return _ShortAndBit._BitFields.Quality;
}

//
//==================================================
// GetOldQuality: Lecture de la qualité de l'élément
//==================================================
//
inline short CATMSHElement::GetOldQuality () const
{
  return _ShortAndBit._BitFields.QualityOld;
}

//
//==================================================
// GetInterference: Lecture de l'interférence
//==================================================
//
inline short CATMSHElement::GetInterference () const
{
  return _ShortAndBit._BitFields.Interference;
}
//
//==================================================
// GetAttributes: lecture des attributs
//==================================================
//
inline void * CATMSHElement::GetAttributes () const
{
  return _Attributes;
}

//
//==================================================
// SetAttributes: écriture des attributs
//==================================================
//
inline void CATMSHElement::SetAttributes ( void * Attributes )
{
  _Attributes = Attributes;
}

//
//==================================================
// GetWork: lecture du int Work
//==================================================
//
inline CATINTPTR CATMSHElement::GetWorkAsInt () const
{
  return _Work.AsInt;
}

//
//==================================================
// GetWork: lecture du void * Work
//==================================================
//
inline void * CATMSHElement::GetWorkAsPtr () const
{
  return _Work.AsPtr;
}

//
//==================================================
// SetWork: écriture du int Work
//==================================================
//
inline void CATMSHElement::SetWorkAsInt ( CATINTPTR Work )
{
  _Work.AsInt = Work;
}

//
//==================================================
// SetWork: écriture du void * Work
//==================================================
//
inline void CATMSHElement::SetWorkAsPtr ( void * Work )
{
  _Work.AsPtr = Work;
}

//
//==================================================
// Ecriture du domaine de l'élément.
//==================================================
//
inline void CATMSHElement::SetDomain ( CATMSHMeshDomain * Domain )
{
  _Domain = Domain;
}

//
//==================================================
// SetDeleted: l'élément est marqué détruit
//==================================================
//
inline void CATMSHElement::SetDeleted ()
{
  _ShortAndBit._BitFields.Deleted = 1;
}

//
//==================================================
// SetActive: l'élément est marqué actif
//==================================================
//
inline void CATMSHElement::SetActive ()
{
  _ShortAndBit._BitFields.Deleted = 0;
}

//
//==================================================
// IsInTransaction: l'élément est-il dans la transaction?
//==================================================
//
inline int CATMSHElement::IsInTransaction () const
{
  return _ShortAndBit._BitFields.InCurrentTransaction;
}

//
//==================================================
// SetInTransaction: l'élément est dans la transaction courante
//==================================================
//
inline void CATMSHElement::SetInTransaction ()
{
  _ShortAndBit._BitFields.InCurrentTransaction = 1;
}

//
//==================================================
// ResetFromTransaction: l'élément n'est plus dans la transaction
//==================================================
//
inline void CATMSHElement::ResetFromTransaction ()
{
  _ShortAndBit._BitFields.InCurrentTransaction = 0;
}

//
//==================================================
// HasAssociativity: l'élément a-t-il une
// associativité?
//==================================================
//
inline int CATMSHElement::HasAssociativity () const
{
  return _ShortAndBit._BitFields.HasAssociativity;
}

//
//==================================================
// SetHasAssociativity: marque l'élément comme ayant
// une associativité
//==================================================
//
inline void CATMSHElement::SetHasAssociativity ()
{
  _ShortAndBit._BitFields.HasAssociativity = 1;
}

//
//==================================================
// SetInPath: marque l'élément comme étant dans un path
//==================================================
//
inline void CATMSHElement::SetInPath ()
{
  _ShortAndBit._BitFields.IsInPath = 1;
}

//
//==================================================
// IsInPath: l'élément a-t-il une
//==================================================
//
inline int CATMSHElement::IsInPath () const
{
  return _ShortAndBit._BitFields.IsInPath;
}

//
//==================================================
// GetMeshDomain: lecture du domaine
//==================================================
//
inline CATMSHMeshDomain * CATMSHElement::GetMeshDomain () const
{
  return _Domain;
}

//
//==================================================
// GetVisibility: l'élément est-il visible?
//==================================================
//
inline int CATMSHElement::GetVisibility () const
{
  return _ShortAndBit._BitFields.Visibility;
}

//
//==================================================
// IsFlagged: l'élément est-il flaggé?
//==================================================
//
inline short CATMSHElement::IsFlagged () const
{
  return _ShortAndBit._BitFields.Flagged;
}

//
//==================================================
// SetFlag: l'élément est-il flaggé?
//==================================================
//
inline void CATMSHElement::SetFlagged ( short Flagged )
{
  if ( Flagged ) _ShortAndBit._BitFields.Flagged = 1;
  else _ShortAndBit._BitFields.Flagged = 0;
}

//
//==================================================
// GetVisuGroup: lecture du visugroup
//==================================================
//
inline CATMSHElementVisuGroup * CATMSHElement::GetVisuGroup () const
{
  return _VisuGroup;
}

//
//==================================================
// SetVisuGroup: écriture du groupe 
//==================================================
//
inline void CATMSHElement::SetVisuGroup ( CATMSHElementVisuGroup * Group )
{
  _VisuGroup = Group;
}

//
//==================================================
// SetNext: chainage au suivant
//==================================================
//
inline void CATMSHElement::SetNext ( CATMSHElement * Next )
{
  _Next = Next;
}

//
//==================================================
// SetPrevious: chainage au précédent
//==================================================
//
inline void CATMSHElement::SetPrevious ( CATMSHElement * Previous )
{
  _Previous = Previous;
}
#endif
