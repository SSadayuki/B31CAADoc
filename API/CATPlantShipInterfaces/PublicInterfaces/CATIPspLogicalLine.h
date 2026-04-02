#ifndef CATIPspLogicalLine_H
#define CATIPspLogicalLine_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"

class CATIUnknownList;

extern "C" const IID IID_CATIPspLogicalLine ;

/**
 * Interface to mangage logical line object. 
 * <b>Role</b>: To query the logical line object's from/to members.
 */

class CATIPspLogicalLine : public IUnknown
{
  public:  
  
  /**
  * Find the major and minor From/To objects from this object.
  * @param oLFromMajors  [out, IUnknown#Release]
  *   A list of from major objects
  * @param oLFromMinors  [out, IUnknown#Release]
  *   A list of from minor objects
  * @param oLToMajors  [out, IUnknown#Release]
  *   A list of to major objects
  * @param oLToMinors   [out, IUnknown#Release]
  *   A list of to minor objects
  * @param oLFromConnections  [out, IUnknown#Release]
  *   A list of connections from the major objects.
  * @param oLToConnections   [out, IUnknown#Release]
  *   A list of connections from the minor objects.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetFromTo ( CATIUnknownList **oLFromMajors,
                              CATIUnknownList **oLFromMinors, 
                              CATIUnknownList **oLToMajors, 
                              CATIUnknownList **oLToMinors,
                              CATIUnknownList **oLFromConnections,
                              CATIUnknownList **oLToConnections ) = 0;

};
#endif
