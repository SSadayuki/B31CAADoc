#ifndef CATSpecPointing_H_
#define CATSpecPointing_H_
// COPYRIGHT DASSAULT SYSTEMES  2004
//=============================================================================
// Class CATSpecPointing
//
// Class used to handle a pointing object
// specifying the key used to point a target.
//
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include "AC0SPBAS.h"
#include "CATISpecAttrAccess.h"
#include "CATISpecAttrKey.h"

/**
 * Class to represent that a feature points another one.
 * <b>Role:</b> 
 * When you look for objects pointing to another one through 
 * @href CATISpecObject#ListPointing you retrieve a list of objects of this
 * class. The retrieved object allows you to know which 
 * @href CATISpecAttrAccess object points another one through which
 * @href CATISpecAttrKey
 */
class ExportedByAC0SPBAS CATSpecPointing
{
public:
    /** @nodoc */
  CATSpecPointing(const CATISpecAttrAccess_var& iAccess, const CATISpecAttrKey_var& iKey);

  ~CATSpecPointing();

  /**
   * Returns the pointing object.
   */
  CATISpecAttrAccess_var GetAccess();
  /**
   * Returns the pointing key.
   */
  CATISpecAttrKey_var GetKey();

private:
  CATSpecPointing();
  CATSpecPointing operator=(const CATSpecPointing&);
  CATSpecPointing (const CATSpecPointing&);

  CATISpecAttrAccess_var _Access;
  CATISpecAttrKey_var _Key;

};

#include "CATListPtrCATSpecPointing.h"

#endif


