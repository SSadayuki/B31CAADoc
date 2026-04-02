#ifndef CATMSHMeshDomain_h
#define CATMSHMeshDomain_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "CATDataType.h"

class CATIMSHMesh;
class CATMSHMesh;
class CATMSHMeshPart;
class CATIMSHMeshPart;
class CATMSHWorkAccess;
class CATMSHElement;
class CATMSHVisuGrouper;
class CATMSHAssociativity;


/**
 * Object representing a <b>Mesh Domain</b>.
 * <b>Role</b>: This interface should be used to access all data associated to a <b>Mesh Domain</b>. 
 * A <b>Mesh Domain</b> is a group of finite elements, each finite elements is belonging to a single <b>Mesh Domain</b>
 * which is assigned at creation.
 * Use @href CATIMSHMesh#SetCurrentMeshDomain method to change the current domain to which are assigned to new finite elements.
 */
class ExportedByMSHModel CATMSHMeshDomain
{
  friend class CATMSHMeshDomainPrivate;

public:
  /**
   * Returns the <b>Mesh</b> containing the <b>Mesh Domain</b>.
   * @return CATBaseUnknown#Release
   */
  CATIMSHMesh * GetMesh () const;
  /**
   * Returns the number of finite elements contained in the <b>Mesh Domain</b>.
   */
  inline int GetNumberOfElements () const;
  /**
   * Retreive all finite elements contained in the <b>Mesh Domain</b>.
   * @param oElements
   *   An array containing all pointers to finite elements contained in the <b>Mesh Domain</b>.
   * @return
   *   The number of finite elements contained in the <b>Mesh Domain</b>.
   */
  int GetElements ( CATMSHElement **& Elements ) const;
  /**
   * Returns the integer tag associated to the <b>Mesh Domain</b>.
   */
  inline unsigned int GetTag () const;
  /**
   * Returns the next <b>Mesh Domain</b> in the <b>Mesh</b>. This method should be used with
   * the @href CATIMSHMesh#GetFirstMeshDomain method to scan all <b>Mesh Domains</b>.
   */
  inline CATMSHMeshDomain * Next () const;
  /**
   * Returns the previous <b>Mesh Domain</b> in the <b>Mesh</b>. This method should be used with
   * the @href CATIMSHMesh#GetFirstMeshDomain method to scan all <b>Mesh Domains</b>.
   */
  inline CATMSHMeshDomain * Previous () const;
  /**
   * Returns the <b>Mesh Part</b> containing the <b>Mesh Domain</b>.
   * @return CATBaseUnknown#Release
   */
  CATIMSHMeshPart * GetMeshPart () const;
	/**
	 * Increments the reference count. 
	 * @return The reference count value.
	 * <br>This information is meant to be used for diagnostic/testing purposes only, because, in certain situations, the value may be unstable.
	 */
  inline unsigned int AddRef ();
	/**
	 * Decrements the reference count. 
	 * @return The reference count value.
	 * <br>This information is meant to be used for diagnostic/testing purposes only, because, in certain situations, the value may be unstable.
	 */
  unsigned int Release ();

private:

  CATMSHMeshDomain ( CATMSHMesh * Mesh, CATMSHMeshDomain * Previous , unsigned int Tag , unsigned int Stamp , CATIMSHMeshPart * MeshPart );

  CATMSHMeshDomain ( const CATMSHMeshDomain& From );
  CATMSHMeshDomain& operator= ( const CATMSHMeshDomain& From );

  virtual ~CATMSHMeshDomain ();

  CATMSHVisuGrouper * GetVisuGrouper () const;
  inline void IncreaseNumberOfElements ();
  inline void DecreaseNumberOfElements ();
  inline void IncreaseStamp ();
  inline void DecreaseStamp ();
  int Remove ();

  inline CATINTPTR GetWorkAsInt () const;
  inline void SetWorkAsInt ( CATINTPTR Work );
  inline void * GetWorkAsPtr () const;
  inline void SetWorkAsPtr ( void * Work );

  inline int IsFreezed ();
  void SetFreezed ( int State );
  CATMSHMesh * GetMeshImpl () const;
  inline CATMSHMeshPart * GetMeshPartImpl () const;
  inline unsigned int GetStamp () const;
  inline const unsigned int * GetPStamp () const;
  int IsOpened ();

  CATMSHMeshDomain * _Next;
  CATMSHMeshDomain * _Previous;
  CATMSHMeshPart *   _MeshPart;

  union
  {
    void *           AsPtr;
    CATINTPTR         AsInt;
  }                  _Work;

  unsigned int       _Tag;
  unsigned int       _Stamp;
  unsigned int       _Ref;

  int                _NumberOfElements;

  short              _Freezed;
};

//
//==================================================
// Methodes inline.
//==================================================
//

//
//==================================================
// Lecture du domaine suivant.
//==================================================
//
inline CATMSHMeshDomain * CATMSHMeshDomain::Next () const
{
  return _Next;
}

//
//==================================================
// Lecture du domaine précédent.
//==================================================
//
inline CATMSHMeshDomain * CATMSHMeshDomain::Previous () const
{
  return _Previous;
}

//
//==================================================
// Lecture du tag.
//==================================================
//
inline unsigned int CATMSHMeshDomain::GetTag () const
{
  return _Tag;
}

//
//==================================================
// AddRef
//==================================================
//
inline unsigned int CATMSHMeshDomain::AddRef ()
{
  return ++_Ref;
}

//
//==================================================
// Lecture du nombre d'éléments dans le domaine.
//==================================================
//
inline int CATMSHMeshDomain::GetNumberOfElements () const
{
  return _NumberOfElements;
}

//
//==================================================
// Incrémentation du nombre d'éléments.
//==================================================
//
inline void CATMSHMeshDomain::IncreaseNumberOfElements ()
{
  _NumberOfElements++;
}

//
//==================================================
// Décrémentation du nombre d'éléments.
//==================================================
//
  inline void CATMSHMeshDomain::DecreaseNumberOfElements ()
{
  _NumberOfElements--;
}

//
//==================================================
// GetWork: lecture du int Work
//==================================================
//
inline CATINTPTR CATMSHMeshDomain::GetWorkAsInt () const
{
  return _Work.AsInt;
}

//
//==================================================
// GetWork: lecture du void * Work
//==================================================
//
inline void * CATMSHMeshDomain::GetWorkAsPtr () const
{
  return _Work.AsPtr;
}

//
//==================================================
// SetWork: écriture du int Work
//==================================================
//
inline void CATMSHMeshDomain::SetWorkAsInt ( CATINTPTR Work )
{
  _Work.AsInt = Work;
}

//
//==================================================
// SetWork: écriture du void * Work
//==================================================
//
inline void CATMSHMeshDomain::SetWorkAsPtr ( void * Work )
{
  _Work.AsPtr = Work;
}

//
//==================================================
// GetMeshPart: lecture de la MeshPart associée
//==================================================
//
inline CATMSHMeshPart * CATMSHMeshDomain::GetMeshPartImpl () const
{
  return _MeshPart;
}

//
//==================================================
// IsFreezed: le domaine est-il vérouillé?
//==================================================
//
inline int CATMSHMeshDomain::IsFreezed ()
{
  return ( _Freezed == 1 );
}

//
//==================================================
// GetStamp: lecture du stamp
//==================================================
//
inline unsigned int CATMSHMeshDomain::GetStamp () const
{
  return _Stamp;
}
inline const unsigned int * CATMSHMeshDomain::GetPStamp () const
{
  return &_Stamp;
}
//
//==================================================
// Incrémentation du stamp
//==================================================
//
inline void CATMSHMeshDomain::IncreaseStamp ()
{
  _Stamp++;
}

//
//==================================================
// Décrémentation du stamp
//==================================================
//
inline void CATMSHMeshDomain::DecreaseStamp ()
{
  _Stamp--;
}
#endif


