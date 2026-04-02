#ifndef CATMSHListOfMeshPart_h
#define CATMSHListOfMeshPart_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

#include "MSHModel.h"
#include "CATBoolean.h"
#include "CATErrorDef.h"
#include <stddef.h>


class CATIMSHMeshPart;

/**
 * Object managing a list of pointer on <b>Mesh Parts</b>.
 * @see CATIMSHMeshPart.
 */
class ExportedByMSHModel CATMSHListOfMeshPart
{

  // Méthodes et données membres publiques

public:
  /**
   * Constructs an empty list of <b>Mesh Parts</b>.
   * @param iInitialSize
   *   Array integer to specify an initial memory allocation size for the list.
   */
  CATMSHListOfMeshPart ( int iInitialSize = 0 );

  // Destructeur

  virtual ~CATMSHListOfMeshPart (); 
  
  /**
   * Adds a new <b>Mesh Part</b> at the end of the list. 
   * @param iSearchIfDuplicate
   *   If TRUE, iMeshPart is added to the list only if it does not already exist.
   * @return
   *   An HRESULT.
   *   <br><b>Legal values</b>:
   *   <dl><dt>S_OK</dt><dd>The <b>Mesh Part</b> iMeshPart added in the list.
   *   <dt>S_FALSE</dt><dd>The <b>Mesh Part</b> iMeshPart already exist in the list.
   *   <dt>E_FAIL</dt><dd>The <b>Mesh Part</b> iMeshPart is NULL.
   *   <dt>E_OUTOFMEMORY</dt><dd>Memory allocation problem.
   *   </dl>
   */
  HRESULT Append ( CATIMSHMeshPart * iMeshPart , CATBoolean iSearchIfDuplicate = FALSE );
 
  /**
   * Returns the number of <b>Mesh Parts</b> in list.
   */
  inline int Size () const;

  /**
   * Access a <b>Mesh Part</b> in the list.
   * @param iIndex
   *   Index in the list of the <b>Mesh Part</b> to be returned. This value should be
   *   between 1 and the size of the list, otherwise a NULL value is returned.
   * @return
   *   A pointer on the <b>Mesh Part</b>.
   *   <br><b>Lifecycle rules deviation</b>: the method does not AddRef the returned value..
   */
   inline CATIMSHMeshPart * operator [] ( int iIndex ) const;

  /**
   * Locates a <b>Mesh Part</b> in the list.
   * @param iMeshPart
   *   <b>Mesh Part</b> to be located in the list.
   * @return
   *   The index in the list corresponding iMeshPart <b>Mesh Part</b>, otherwise 0.
   */
   int Locate ( CATIMSHMeshPart * iMeshPart ) const;

  /**
   * Removes an item in the list.
   * @param iIndex
   *   Index in the list to be removed. This value should be
   *   between 1 and the size of the list, otherwise nothing is done.
   */
   void RemovePosition ( int iIndex  );

  /**
   * Empty the list.
   */
   void RemoveAll ();

  /**
   * Equality operator.
   * @param iList
   *   List of <b>Mesh Parts</b> to compare with
   * @return 
   *   boolean
   *   <br><b>Legal values</b>: <tt>0: False</tt> 
   *   the condition is not fullfilled, or <tt>Other: True</tt> 
   *   if the condition is fullfilled.
   */
   int operator == ( const CATMSHListOfMeshPart & iList );

/** @nodoc */
   inline CATIMSHMeshPart ** GetList () const;


// Méthodes et données membres privées

private:

  CATMSHListOfMeshPart ( const CATMSHListOfMeshPart& From );
  CATMSHListOfMeshPart& operator= ( const CATMSHListOfMeshPart& From );

  // Données membres

  CATIMSHMeshPart **    _List;
  int                   _Size;
  int                   _Alloc;
};

//
//  Implémentations inline
//

//
//==================================================
// Size: taille de la liste
//==================================================
//
inline int CATMSHListOfMeshPart::Size () const
{
  return _Size;
}

//
//==================================================
// []: accès à un élément de la liste
//==================================================
//
inline CATIMSHMeshPart * CATMSHListOfMeshPart::operator [] ( int iIndex ) const
{
  if ( iIndex <= 0 || iIndex > _Size ) return NULL; 
  else return _List[iIndex-1];
}

//
//==================================================
// GetList: lecture de la liste
//==================================================
//
inline CATIMSHMeshPart ** CATMSHListOfMeshPart::GetList () const
{
  return _List;
}
#endif
