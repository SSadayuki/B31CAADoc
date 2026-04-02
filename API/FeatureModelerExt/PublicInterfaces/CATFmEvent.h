
#ifndef __CATFmEvent_h__
#define __CATFmEvent_h__


// COPYRIGHT DASSAULT SYSTEMES 2011

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.

class CATFmAttributeName;
class CATFmAttributeValue;

#include "CATUnicodeString.h"
#include "FeatureModelerExt.h" 


/**
 * Class representing an Event.
 * <b>Role</b>: This class provides methods for Events handling.
 * <br>It is an iterator class, i.e. that has the ability to iterate through the elements of its range.
 */
class ExportedByFeatureModelerExt CATFmEvent
{
public :

  /**
   * Returns the type of an Event.
   * @return
   *   An Attribute Name containing the type of the event.
   */
  CATFmAttributeName GetType() const;

  /**
   * Iterates to the next object on which the event is emitted.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The next object has been found.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>The iteration is over.</dd>
   *  </dl>
   *
   */
  HRESULT Next();

  /**
   * Retrieves the object on which the event is emitted.
   * @param oObject [out]
   *   A (caller provided) Attribute Value in which the object will be stored.
   *   <br>If the method fails then <tt>oObject</tt> is not modified, otherwise it is overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The object has been successfuly retrieved.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>The object cannot be retrieved.</dd>
   *  </dl>
   */
  HRESULT GetObject(CATFmAttributeValue & oObject);

  /**
   * Retrieves the object's attribute affected by the event. 
   * @param oAttribute [out]
   *   A (caller provided) Attribute Name in which the attribute will be stored.
   *   <br>If the method fails then <tt>oAttribute</tt> is not modified, otherwise it is overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The attribute has been successfuly retrieved.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>There is no attribute corresponding to the event.</dd>
   *  </dl>
   */
  HRESULT GetAttribute(CATFmAttributeName & oAttribute) const; 

private :

  CATFmEvent();                   
  ~CATFmEvent();           
  CATFmEvent(const CATFmEvent & iEvent);       
  CATFmEvent & operator=(CATFmEvent & iEvent); 

};

#endif
