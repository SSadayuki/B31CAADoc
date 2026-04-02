/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef CATINavigateFilter_h
#define CATINavigateFilter_h

#include "CATBaseUnknown.h"
#include "CATOmnMain.h"
#include "booleanDef.h"

extern ExportedByCATOmnMain IID IID_CATINavigateFilter;

class CATINavigateObject;

/**
* Interface to hide or show an element in the graph.
* <br><b>Role:</b>Interface to declare to an unknown father in the graph
* if its child wants to be seen.It must be implemented by a 
* node which cannot know its father.
* @see CATIGraphNode, CATINavigModify, CATINavigElement, CATINavigateObject
*/
class ExportedByCATOmnMain CATINavigateFilter: public CATBaseUnknown
{
	CATDeclareInterface;
public:
	
    /**
    * Hides or Shows an element.
    * @param iFather
    * The father of the element.
    */
	virtual CATBoolean IsShown( CATINavigateObject* iFather) = 0;

};

CATDeclareHandler ( CATINavigateFilter, CATBaseUnknown );


#endif
