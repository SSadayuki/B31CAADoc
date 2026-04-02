// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U1
 */

#ifndef CATMSHStListOfObjects_h
#define CATMSHStListOfObjects_h
//=============================================================================
//
// CATMSHStListOfObjects :
//
// Objet Liste d'objets
//
//=============================================================================
#include "MSHStudio.h"
#include "CATErrorDef.h"

class CATMSHStudioObject;
class CATMSHStStack;

/**
 * Object representing a list of studio objects like nodes, edges or elements.<dd>
 * <b>Role</b>: A list is the easiest way to manage a set of nodes, edges or elements.<dd>
 * <b>Example:</b>
 * _ define a local list: <tt>CATMSHStListOfObjects list;</tt><dd>
 * _ add nodes to the list: <tt>for ( int ino=0 ;ino < nbNodes ; ino++ ) list.Add( nodes[ino] );</tt><dd>
 * _ the list is automatically allocated at the right size, no array deletion is needed.<dd>
 * _ you can re_use the list by removing the objects in it ( but it keeps 
 * the allocation of the list ): <tt>list.Reset();</tt><dd>;
 * Don't use the same list with different object type ( nodes and edges for example ),
 * use rather different lists.
 */

class ExportedByMSHStudio CATMSHStListOfObjects
{

public:

/**
 * Constructs a list. 
 */
  CATMSHStListOfObjects(int Increment=10); 
/**
 * Add an object to the list.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Object has been added.
 *   <dt>E_FAIL</dt><dd>Object has not been added.
 *   </dl>
 * @param Object
 *   Object to add.
 */
  HRESULT Add( const CATMSHStudioObject * const Object );
/**
 * Set the number of objects in the list to zero.
 */
  void Reset() {_NumberOf = 0;};
/**
 * Invert the order of the objects in a list.
 */
  void Invert();
/**
 * Look if an object is in the list and add it if it isn't.
 * @return
 *   An HRESULT.
 *   <br><b>Legal values</b>:
 *   <dl><dt>S_OK</dt><dd>Object has been added.
 *   <dt>E_FAIL</dt><dd>Object has not been added.
 *   </dl>
 * @param Object
 *   Object to add.
 */
  HRESULT FindOrAdd(const CATMSHStudioObject *const Object);
/**
 * Read the number of objects in the list.
 */
  inline int GetNumberOf () const;
/**
 * Returns the object at the specified index.
 * An index ranges from 0 to the number of object in the list.<dd> 
 * @param Index
 *   The index of the object to extract
 */
  inline CATMSHStudioObject *  & operator[] (int Index) const;
/**
 * @nodoc
 * Destructeur 
 */
  ~CATMSHStListOfObjects();
/**
 * @nodoc
 * Constructeur recopie
 */
  CATMSHStListOfObjects(const CATMSHStListOfObjects & Source );
/**
 * @nodoc
 * Ajout d'une la liste d'objet
 */
  int Add(const CATMSHStListOfObjects & Source);
  int Add(const CATMSHStListOfObjects & Source, int First, int NbObject);
  HRESULT Add(const CATMSHStStack & Stack);
/**
 * @nodoc
 * Allocation ou Extension d'une liste d'objet
 */
  int Extend( int MinSize );
/**
 * @nodoc
 * Renvoie 1 si l'objet est dans la pile, 0 sinon
 */
  int IsIn (const CATMSHStudioObject * const Object) const;
/**
 * @nodoc
 * Renvoie la position de l'objet dans la liste, -1 si il n'y est pas 
 */
  int Find (const CATMSHStudioObject * const Object) const;
/**
 * @nodoc
 * Acces a la liste des objets
 */
  inline  CATMSHStudioObject *const* GetTable (int &NumberOfObjects) const;
/**
 * @nodoc
 * Sort the list from the Values table. 
 */
HRESULT Sort( const int NbObjects, const double Values[]);
/**
 * @nodoc
 * Retrait d'un objet, renvoit S_OK si retirer S_FALSE si non trouver
 */
  HRESULT Remove (const CATMSHStudioObject * const Object);



protected:

  int   _Size;
  int   _NumberOf;
  int   _Increment;
  const CATMSHStudioObject ** _Objects;


private:

/**
 * Operateur d'affectation
 */
  CATMSHStListOfObjects& operator=(const CATMSHStListOfObjects & Source );
};
//
// Acces a la liste d'objets avec l'operateur []
///
inline CATMSHStudioObject *  & CATMSHStListOfObjects::operator[] (int Index) const
{ 
  return (CATMSHStudioObject *&) _Objects[Index];
}
//
// GetNbOfObjects
//
inline int CATMSHStListOfObjects::GetNumberOf () const
{
  return _NumberOf;
}
//
//==================================================
//Acces a la liste des objets
//==================================================
//
inline CATMSHStudioObject *const* CATMSHStListOfObjects::GetTable (int &NumberOfObjects) const
{
  NumberOfObjects=_NumberOf;
  return (CATMSHStudioObject *const* ) _Objects;
}
#endif




