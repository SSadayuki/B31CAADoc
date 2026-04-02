//===================================================================
// COPYRIGHT Dassault Systemes 2012
//===================================================================

#ifndef CATIMfgGeomContours_H
#define CATIMfgGeomContours_H

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

extern ExportedByMfgItfEnv  IID IID_CATIMfgGeomContours ;

/**
* Interface to assign geometry to a contour.
**/
class ExportedByMfgItfEnv CATIMfgGeomContours : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Adds an element in the aggregate.
	* @param iMember
	*     The element to add.
	* @param iNotify  
	*       The flag to indicate whether an event is sent. 
	*  <br><b>Legal values</b>:
	*  <ul>
	*  <li> = 1 : an event is sent to notify the change</li>
	*  <li> other value : no event sent</li>
	*  </ul>
	*/
	virtual void AddElement (const CATBaseUnknown_var& iMember, int iNotify=1) = 0;

};

CATDeclareHandler(CATIMfgGeomContours, CATBaseUnknown);

//-----------------------------------------------------------------------

#endif
