#ifndef CATISchObsoleteModel_H
#define CATISchObsoleteModel_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

class CATIUnknownList;

extern "C" const IID IID_CATISchObsoleteModel;

/**
 * Interface to manage the schematic application obsolete model.
 * <b>Role</b>: To validate that application model does not contain obsolete classes.
 */
class CATISchObsoleteModel: public IUnknown
{
  public:   
  
  /**
  * Find obsolete base classes. This method will internally call 
  * CATISchAppObsoleteClass to ask the application for the names of the
  * obsolete classes.
  * @param oListObsoleteObj
  *   A list of objects with obsoleted base class types.
  */
  virtual HRESULT FindObsoleteClasses (CATIUnknownList **oListObsoleteObj) = 0;

  /**
  * Is there any obsolete class in the application model.
  * @param oBYes
  *   If yes, then there is.
  */
  virtual HRESULT HasObsoleteClass (CATBoolean *oBYes) = 0;

};

#endif

