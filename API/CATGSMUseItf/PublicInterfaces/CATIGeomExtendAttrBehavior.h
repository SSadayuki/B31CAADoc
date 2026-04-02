#ifndef CATIGeomExtendAttrBehavior_H
#define CATIGeomExtendAttrBehavior_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "CATBaseUnknown.h"
#include "CATListBehaviorSpecs.h"

class CATUnicodeString;

extern ExportedByCATGSMUseItf  IID IID_CATIGeomExtendAttrBehavior;

/**
* Interface to describe expected behavior on object valuating an attribute.
* <b>Role</b>:
* This interface must be implemented by CAA features, inherit by GSMGeom, to specify the behavior
* of feature's attributes during replace mechanism (used in replace command, but
* also in many mechanical commands like delete, insert).
* Feature must specify which type of valuating object can replace the current
* attribute valuation.
* @see CATIReplace
*/

class ExportedByCATGSMUseItf CATIGeomExtendAttrBehavior : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Returns for a given attribute name the expected behavior of its valuating objects.
	* @param iAttrName
	*        name of the associated attribute.
	* @param oBehaviorList
	*        list of list of IIDs.
	*        <br> this list is a combination of interfaces implemented by the object valuating the attribute.
	* @return
	*    <br /><strong>Legal values</strong>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The component is successfully created
	*          and the interface pointer is successfully returned
	*      <dt>E_FAIL
	*      <dd>The component was successfully created,
	*          but the interface query failed
	*    </dl>
	*
	* <b> Usage: </b>
	* <br>Elements must be created as follows :
	*
	* <br>CATListPtrIID* myFirstList = new CATListPtrIID;
	* <br>myFirstList->Append(&IID_CATIHello);
	* <br>myFirstList->Append(&IID_CATIBonjour);
	* <br>oBehaviorList.AppendListIID(&myFirstList);
	*
	* <br>CATListPtrIID* mySecondList = new CATListPtrIID;
	* <br>mySecondList->Append(&IID_CATIAufwiedersehen);
	* <br>mySecondList->Append(&IID_CATIArrivederci);
	* <br>oBehaviorList.AppendListIID(&mySecondList);
	* <br>(...)
	*
	* <br>To sum up : oBehaviorList = [  [ CATIHello , CATIBonjour ] ,
	* <br>                         [ CATIAufwiedersehen , CATIArrivederci ] ]
	*
	*/
	virtual HRESULT GetRequestedBehavior(const CATUnicodeString* iAttrName, CATListBehaviorSpecs& oBehaviorList) = 0;

};

CATDeclareHandler(CATIGeomExtendAttrBehavior, CATBaseUnknown);

#endif
