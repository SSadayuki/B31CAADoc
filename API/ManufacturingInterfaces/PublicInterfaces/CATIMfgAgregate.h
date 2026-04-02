/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1997
//=============================================================================

#ifndef CATIMfgAgregate_H
#define CATIMfgAgregate_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgAgregate;
#else
extern "C" const IID IID_CATIMfgAgregate;
#endif

/**
* Interface to manage manufacturing aggregate.<br>
* The aggregate contains many elements that can be sorted according to their types.<br>
* The type of the elements is the name of an interface that all these elements implement.<br>
*/

class ExportedByMfgItfEnv CATIMfgAgregate : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:

  /**
  * Returns the count of elements of a given type in the aggregate.
  * @param intfName
  *      The name of an interface describing the type of the elements 
  * @return
  *      The number of elements of the given type
  */
  virtual long                GetNumberOfElements  (CATClassId intfName=0) = 0;

  /**
  * Returns list of the elements of a given type in the aggregate.
  * @param intfName
  *      The name of an interface describing the type of the elements 
  * @return
  *      The list of the elements of the given type
  */
  virtual CATListValCATBaseUnknown_var* GetAllElements (CATClassId intfName=0) = 0;

  /**
  * Returns the element of a given type and for a given position in the aggregate.
  * @param iPosition 
  *        The position of the element in the agregate
  * @param intfName 
  *        The name of an interface describing the type of the elements 
  * @return
  *      The element of the given type and the given position in the aggregate
  */
  virtual CATBaseUnknown_var  GetElement           (long iPosition, CATClassId intfName=0) = 0;

  /**
  * Adds an element in the aggregate.
  * @param iMember
  *     The element to add
  * @param iNotify  
  *       The flag to indicate whether an event is sent. 
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 1 : an event is sent to notify the change</li>
  *  <li> other value : no event sent</li>
  *  </ul>
  */
  virtual void                AddElement           (const CATBaseUnknown_var& iMember, int iNotify=1) = 0;

  /**
  * Removes an element in the aggregate.
  * @param iMember
  *     The element to remove
  * @param iNotify  
  *       The flag to indicate whether an event is sent.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 1 : an event is sent to notify the change</li>
  *  <li> other value : no event sent</li>
  *  </ul>
  */
  virtual void                RemoveElement        (const CATBaseUnknown_var& iMember, int iNotify=1) = 0;

  /**
  * Removes all elements in the aggregate.
  * @param iNotify
  *       The flag to indicate whether an event is sent. 
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 1 : an event is sent to notify the change</li>
  *  <li> other value : no event sent</li>
  *  </ul>
  */
  virtual void                RemoveAll            (int iNotify=1) = 0;

  /**
  * Moves an element in the aggregate. 
  * @param iMember 
  *     The element to move in the aggregate
  * @param iNewPosition 
  *     The new position of the element in the aggregate
  * @param iNotify  
  *       The flag to indicate whether an event is sent.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 1 : an event is sent to notify the change</li>
  *  <li> other value : no event sent</li>
  *  </ul>
  */
  virtual void                ChangePosition       (const CATBaseUnknown_var& iMember, int iNewPosition, int iNotify=1) = 0;

  /**
  * Sets the first element in the aggregate as current element.
  */
  virtual void                Beginning            () = 0;

  /**
  * Sets the last element in the aggregate as current element.
  */
  virtual void                End                  () = 0;

  /**
  * Sets the next element of a given type in the aggregate as current element.
  * @param intfName 
  *        The name of an interface describing the type of the elements  
  * @return
  *         The position of the element in the aggregate.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 0 : no next element in the aggregate
  *  <li> other value : position of the next element in the aggregate</li>
  *  </ul>
  */
  virtual int                 Next                 (CATClassId intfName=0) = 0;

  /**
  * Sets the previous element of a given type in the aggregate as current element.
  * @param intfName 
  *        The name of an interface describing the type of the elements  
  * @return
  *        The position of the element in the aggregate.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 0 : no previous element in the aggregate
  *  <li> other value : position of the previous element in the aggregate</li>
  *  </ul>
  */
  virtual int                 Previous             (CATClassId intfName=0) = 0;

  /**
  * Returns the current element in the aggregate.
  */
  virtual CATBaseUnknown_var  GetCurrent           () = 0;

  /**
  * Set an element as the current element in the aggregate.
  * @param iMember 
  *          The element to set as current element
  * @return
  *          The position of the element in the aggregate.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 0 : element not found in the aggregate
  *  <li> other value : position of the element in the aggregate</li>
  *  </ul>
  */
  virtual int		          SetCurrent           (const CATBaseUnknown_var& iMember) = 0;

  /**
  * Inserts an element before the current element in the aggregate. 
  * @param iMember 
  *       The element to insert 
  * @param iNotify  
  *       The flag to indicate whether an event is sent.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 1 : an event is sent to notify the change</li>
  *  <li> other value : no event sent</li>
  *  </ul>
  * @return
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 0 : insertion has failed
  *  <li> other value : position of the inserted element in the aggregate</li>
  *  </ul>
  */
  virtual int		      InsertBefore         (const CATBaseUnknown_var& iMember, int iNotify=1) = 0;

  /**
  * Inserts an element after the current element in the aggregate. 
  * @param iMember 
  *       The element to insert 
  * @param iNotify  
  *       The flag to indicate whether an event is sent.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 1 : an event is sent to notify the change</li>
  *  <li> other value : no event sent</li>
  *  </ul>
  * @return
  *  The position of the element in the aggregate.
  *  <br><b>Legal values</b>:
  *  <ul>
  *  <li> = 0 : insertion has failed
  *  <li> other value : position of the inserted element in the aggregate</li>
  *  </ul>
  */
  virtual int		      InsertAfter          (const CATBaseUnknown_var& iMember, int iNotify=1) = 0;

  /**
  * @nodoc
  */
  virtual CATUnicodeString GetName() = 0;

};

CATDeclareHandler( CATIMfgAgregate, CATBaseUnknown) ;

#endif

