#ifndef CATISchNavigateObject_H
#define CATISchNavigateObject_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchNavigateObject ;

class CATIUnknownList;

/**
 * Interface to manage the "look" of a graphic representation of 
 * schematic basic set of objects in the graph viewer. 
 * <b>Role</b>: Should be called in the schematic base object's implementation 
 * of CATINavigateObject.
 */
class CATISchNavigateObject : public IUnknown
{
  public:   
  
	/**
	* Returns list of associated objects on the schematic extension of the 
	* current schematic based object in the tree.
	*/
	virtual HRESULT GetChildren (CATIUnknownList **oLChildren)=0;
};
#endif
